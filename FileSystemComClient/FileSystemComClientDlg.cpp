﻿
// FileSystemComClientDlg.cpp : implementation file
//

#include "stdafx.h"
#include <vector>

#include <ShellAPI.h>

#include "FileSystemComClient.h"
#include "FileSystemComClientDlg.h"
#include "afxdialogex.h"

#include "../FileSystemComServer/FileSystemComServer_i.h"
#include "../FileSystemComServer/FileSystemComServer_i.c"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CFileSystemComClientDlg dialog



CFileSystemComClientDlg::CFileSystemComClientDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFileSystemComClientDlg::IDD, pParent), m_PathToCopyingFile(""), m_IsCutButton(false)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CFileSystemComClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE_FILE_SYSTEM, m_TreeControl);
	DDX_Control(pDX, IDC_LIST, m_ListControl);
}

BEGIN_MESSAGE_MAP(CFileSystemComClientDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(NM_RCLICK, IDC_TREE_FILE_SYSTEM, &CFileSystemComClientDlg::OnNMRClickTreeFileSystem)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE_FILE_SYSTEM, &CFileSystemComClientDlg::OnTvnSelchangedTreeFileSystem)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST, &CFileSystemComClientDlg::OnNMDblclkList)
	ON_NOTIFY(TVN_ITEMEXPANDED, IDC_TREE_FILE_SYSTEM, &CFileSystemComClientDlg::OnTvnItemexpandedTreeFileSystem)
	ON_NOTIFY(NM_RCLICK, IDC_LIST, &CFileSystemComClientDlg::OnNMRClickList)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST, &CFileSystemComClientDlg::OnLvnItemchangedList)

	ON_COMMAND(ID_COPY, &CFileSystemComClientDlg::OnCopy)
	ON_COMMAND(ID_CUT, &CFileSystemComClientDlg::OnCut)
	ON_COMMAND(ID_PASTE, &CFileSystemComClientDlg::OnPaste)
	ON_COMMAND(ID_DELETE, &CFileSystemComClientDlg::OnDelete)
	ON_COMMAND(ID_RENAME, &CFileSystemComClientDlg::OnRename)
	ON_COMMAND(ID_PROPERTIES, &CFileSystemComClientDlg::OnProperties)
END_MESSAGE_MAP()


// CFileSystemComClientDlg message handlers

BOOL CFileSystemComClientDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	::CoInitialize(NULL);
	IFileManagerCom *fmc = NULL;
	
	HRESULT hResult = ::CoCreateInstance(CLSID_FileManagerCom, NULL, CLSCTX_INPROC_SERVER, IID_IFileManagerCom, (LPVOID*)&fmc);

	if (FAILED(hResult))
	{
		MessageBox(L"Failed in creating COM Component", L"Error", MB_ICONERROR);
		return 0;
	}
	
	DWORD result = 0;

	HRESULT hr;
	
	VARIANT icons;

	hr = fmc->GetListIcon(&icons);

	HIMAGELIST hImg = (HIMAGELIST)icons.byref;

	if (hImg && m_pImgList.Attach(hImg))
	{
		m_TreeControl.SetImageList(&m_pImgList, TVSIL_NORMAL);
		m_ListControl.SetImageList(&m_pImgList, TVSIL_NORMAL);
	}
	VARIANT names;
	
	hr = fmc->GetRoot(&names);
	
	SAFEARRAY *psa = V_ARRAY(&names);

	//USES_CONVERSION;
	LONG iLBound, iUBound;
	hr = SafeArrayGetLBound(psa, 1, &iLBound);
	if(FAILED(hr))
		return hr;
	hr = SafeArrayGetUBound(psa, 1, &iUBound);
	if(FAILED(hr))
		return hr;

	DataItem * pDataItem = NULL;
	hr = SafeArrayAccessData(psa, (void**)&pDataItem);
	if(FAILED(hr))
		return hr;

	for(int i = 0; i <= iUBound - iLBound; i++)
	{
		if (pDataItem[i].isFolder)
		{
			HTREEITEM hPartition = m_TreeControl.InsertItem(OLE2T(pDataItem[i].name), pDataItem[i].id, pDataItem[i].idOpen);
			if (pDataItem[i].haveSubFolder)
				m_TreeControl.InsertItem(_T(""), hPartition, 0);
		}
	}

	hr = SafeArrayUnaccessData(psa);
	hr = SafeArrayDestroy(psa);

	m_pTxtCtrlToModify = NULL;

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CFileSystemComClientDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

void CFileSystemComClientDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CFileSystemComClientDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CFileSystemComClientDlg::OnNMRClickTreeFileSystem(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: Add your control notification handler code here
	*pResult = 0;
}

void CFileSystemComClientDlg::ClearAllChildOnBranch(const HTREEITEM item)
{
	HTREEITEM hChildItem;
	CString hPath = m_TreeControl.GetItemText(item);
	hChildItem = m_TreeControl.GetNextItem(item,TVGN_CHILD);

	while (hChildItem != NULL)
	{
		HTREEITEM tempItem = hChildItem;
		ClearAllChildOnBranch(hChildItem);
		hChildItem = m_TreeControl.GetNextItem(hChildItem,TVGN_NEXT);
		m_TreeControl.DeleteItem(tempItem);
	}
}

void CFileSystemComClientDlg::ClearAllItemsListControl()
{
	m_ListControl.DeleteAllItems();
}

CString CFileSystemComClientDlg::GetPathToItemTree(const HTREEITEM hSelectedItem) const
{
	HTREEITEM item;
	CString path = m_TreeControl.GetItemText(hSelectedItem);
	item = m_TreeControl.GetNextItem(hSelectedItem,TVGN_PARENT);

	while (item != NULL)
	{
		path.Insert(0, (m_TreeControl.GetItemText(item) + CString("\\")));
		item = m_TreeControl.GetNextItem(item,TVGN_PARENT);
	}
	return path;
}

CString CFileSystemComClientDlg::GetPathToSelectedItemList() const
{
	int hSelectedItemList = m_ListControl.GetSelectionMark();
	HTREEITEM hSelectedItemTree = m_TreeControl.GetSelectedItem();

	if (hSelectedItemList == -1 || hSelectedItemTree == NULL)
		return CString("");

	return GetPathToItemTree(hSelectedItemTree) + "\\" + m_ListControl.GetItemText(hSelectedItemList, 0);
}

void CFileSystemComClientDlg::OnTvnSelchangedTreeFileSystem(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO: Add your control notification handler code here
	
	HTREEITEM hSelectedItem = m_TreeControl.GetSelectedItem();

	if (hSelectedItem == NULL)
		return;

	IFileManagerCom *fmc = NULL;
	
	HRESULT hResult = ::CoCreateInstance(CLSID_FileManagerCom, NULL, CLSCTX_INPROC_SERVER, IID_IFileManagerCom, (LPVOID*)&fmc);

	if (FAILED(hResult))
	{
		MessageBox(L"Failed in creating COM Component", L"Error", MB_ICONERROR);
		return;
	}

	CString path = GetPathToItemTree(hSelectedItem);

	HRESULT hr;
	VARIANT names;

	fmc->GetFolder(path.AllocSysString(), &names);
	
	HTREEITEM hTempItem = m_TreeControl.GetNextItem(hSelectedItem,TVGN_CHILD);
	
	SAFEARRAY *psa = V_ARRAY(&names);

	//USES_CONVERSION;
	LONG iLBound, iUBound;
	hr = SafeArrayGetLBound(psa, 1, &iLBound);
	if(FAILED(hr))
		return;
	hr = SafeArrayGetUBound(psa, 1, &iUBound);
	if(FAILED(hr))
		return;

	DataItem * pDataItem = NULL;
	hr = SafeArrayAccessData(psa, (void**)&pDataItem);
	if(FAILED(hr))
		return;

	ClearAllChildOnBranch(hSelectedItem);
	ClearAllItemsListControl();

	for(int i = 0; i <= iUBound - iLBound; i++)
	{
		if (pDataItem[i].isFolder)
		{
			HTREEITEM hPartition = m_TreeControl.InsertItem(OLE2T(pDataItem[i].name), pDataItem[i].id, pDataItem[i].idOpen, hSelectedItem);
			if (pDataItem[i].haveSubFolder)
				m_TreeControl.InsertItem(_T(""), hPartition, 0);
		}

		m_ListControl.InsertItem(0, OLE2T(pDataItem[i].name), pDataItem[i].id);
	}

	hr = SafeArrayUnaccessData(psa);
	hr = SafeArrayDestroy(psa);
	
	*pResult = 0;
}



void CFileSystemComClientDlg::OnNMDblclkList(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);

	int hSelectedItemList = m_ListControl.GetSelectionMark();
	HTREEITEM hSelectedItemTree = m_TreeControl.GetSelectedItem();

	if (hSelectedItemList == -1 || hSelectedItemTree == NULL)
		return;

	m_TreeControl.Expand(hSelectedItemTree, TVE_EXPAND);

	CString path = GetPathToSelectedItemList();

	BOOL isFolder = false;

	::CoInitialize(NULL);
	IFileManagerCom *fmc = NULL;
	
	HRESULT hResult = ::CoCreateInstance(CLSID_FileManagerCom, NULL, CLSCTX_INPROC_SERVER, IID_IFileManagerCom, (LPVOID*)&fmc);

	if (FAILED(hResult))
	{
		MessageBox(L"Failed in creating COM Component", L"Error", MB_ICONERROR);
		*pResult = 0;
	}
	
	HRESULT hr = fmc->OpenItem(path.AllocSysString(), &isFolder);
	
	if (isFolder)
	{
		HTREEITEM hChildItem = m_TreeControl.GetNextItem(hSelectedItemTree, TVGN_CHILD);
		while(m_TreeControl.GetItemText(hChildItem) != m_ListControl.GetItemText(hSelectedItemList, 0) )
			hChildItem = m_TreeControl.GetNextItem(hChildItem, TVGN_NEXT);

		m_TreeControl.Select(hChildItem, TVGN_CARET);
	}

	*pResult = 1;
}

void CFileSystemComClientDlg::OnTvnItemexpandedTreeFileSystem(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	m_TreeControl.SelectItem(pNMTreeView->itemNew.hItem);

	*pResult = 0;
}


void CFileSystemComClientDlg::OnNMRClickList(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);

	CMenu mPopurMenu;
	
	mPopurMenu.LoadMenu(IDR_MENUPOPUPLIST);
	POINT current_point;
	GetCursorPos(&current_point);

	mPopurMenu.GetSubMenu(0)->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON,current_point.x,current_point.y,this);
	mPopurMenu.DestroyMenu();

	*pResult = 0;
}


void CFileSystemComClientDlg::OnCopy()
{
	m_PathToCopyingFile = GetPathToSelectedItemList();
	m_IsCutButton = false;
}


void CFileSystemComClientDlg::OnCut()
{
	m_PathToCopyingFile = GetPathToSelectedItemList();
	m_IsCutButton = true;
	// TODO: Add your command handler code here
}


void CFileSystemComClientDlg::OnPaste()
{
	if (m_PathToCopyingFile.IsEmpty())
		return;

	::CoInitialize(NULL);
	IFileManagerCom *fmc = NULL;
	
	HRESULT hResult = ::CoCreateInstance(CLSID_FileManagerCom, NULL, CLSCTX_INPROC_SERVER, IID_IFileManagerCom, (LPVOID*)&fmc);

	if (FAILED(hResult))
	{
		MessageBox(L"Failed in creating COM Component", L"Error", MB_ICONERROR);
		return;
	}

	if (m_IsCutButton)
	{
		HRESULT hr = fmc->MoveItem((GetPathToItemTree(m_TreeControl.GetSelectedItem())).AllocSysString(), m_PathToCopyingFile.AllocSysString());
		m_PathToCopyingFile = CString("");
		m_IsCutButton = false;	
	} else
	{
		HRESULT hr = fmc->CopyItem((GetPathToItemTree(m_TreeControl.GetSelectedItem())).AllocSysString(), m_PathToCopyingFile.AllocSysString());
	}
		
	HTREEITEM hItem = m_TreeControl.GetSelectedItem();
	m_TreeControl.Select(NULL, TVGN_CARET);
	m_TreeControl.Select(hItem, TVGN_CARET);

}


void CFileSystemComClientDlg::OnDelete() 
{
	::CoInitialize(NULL);
	IFileManagerCom *fmc = NULL;
	
	HRESULT hResult = ::CoCreateInstance(CLSID_FileManagerCom, NULL, CLSCTX_INPROC_SERVER, IID_IFileManagerCom, (LPVOID*)&fmc);

	if (FAILED(hResult))
	{
		MessageBox(L"Failed in creating COM Component", L"Error", MB_ICONERROR);
		return;
	}

	HRESULT hr = fmc->DeleteItem(GetPathToSelectedItemList().AllocSysString());

	HTREEITEM hItem = m_TreeControl.GetSelectedItem();
	m_TreeControl.Select(NULL, TVGN_CARET);
	m_TreeControl.Select(hItem, TVGN_CARET);
}


void CFileSystemComClientDlg::OnRename()
{
    if(m_ListControl.GetFirstSelectedItemPosition())   
    {
		int index = m_ListControl.GetSelectionMark();
		CRect rect;

        if(m_pTxtCtrlToModify != NULL)
            delete m_pTxtCtrlToModify;
        m_pTxtCtrlToModify = new CEdit();

		m_ListControl.GetItemRect(index, rect, LVIR_LABEL);
		
		m_pTxtCtrlToModify->Create(ES_CENTER | WS_VISIBLE | ES_AUTOHSCROLL, rect, &m_ListControl, ID_TXTCTRL_TOMODIFY);
        m_pTxtCtrlToModify->SetFocus();
        m_pTxtCtrlToModify->SetWindowTextW(m_ListControl.GetItemText(index, 0)); 
    }
}


void CFileSystemComClientDlg::OnProperties()
{
/*	SHELLEXECUTEINFOW sei;
	memset(&sei, 0, sizeof(sei));

	sei.cbSize = sizeof(sei);
	sei.hwnd = this->m_hWnd;
	sei.lpVerb = L"properties";
	sei.lpFile = T2W(GetPathToSelectedItemList().AllocSysString());
	sei.nShow = SW_SHOW;
	sei.fMask = SEE_MASK_INVOKEIDLIST;
	
	ShellExecuteExW(&sei);
	*/
	
		::CoInitialize(NULL);
	IFileManagerCom *fmc = NULL;
	
	HRESULT hResult = ::CoCreateInstance(CLSID_FileManagerCom, NULL, CLSCTX_INPROC_SERVER, IID_IFileManagerCom, (LPVOID*)&fmc);

	if (FAILED(hResult))
	{
		MessageBox(L"Failed in creating COM Component", L"Error", MB_ICONERROR);
		return;
	}

	HRESULT hr = fmc->ShowProperties(GetPathToSelectedItemList().AllocSysString());
}

void CFileSystemComClientDlg::OnLvnItemchangedList(NMHDR *pNMHDR, LRESULT *pResult)
{
    LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
    *pResult = 0;

    if(m_pTxtCtrlToModify != NULL)
    {
        delete m_pTxtCtrlToModify;
        m_pTxtCtrlToModify = NULL;
    }
}

BOOL CFileSystemComClientDlg::PreTranslateMessage(MSG* pMsg)
{
    if (pMsg->message == WM_KEYDOWN)
    {
        if (pMsg->wParam == VK_RETURN &&
			GetFocus() == m_pTxtCtrlToModify)
        {
			::CoInitialize(NULL);
			IFileManagerCom *fmc = NULL;
	
			HRESULT hResult = ::CoCreateInstance(CLSID_FileManagerCom, NULL, CLSCTX_INPROC_SERVER, IID_IFileManagerCom, (LPVOID*)&fmc);

			if (FAILED(hResult))
			{
				MessageBox(L"Failed in creating COM Component", L"Error", MB_ICONERROR);
				return CDialog::PreTranslateMessage(pMsg) && false;
			}

			CString newName;
			m_pTxtCtrlToModify->GetWindowTextW(newName);
					
 			HRESULT hr = fmc->RenameItem((GetPathToItemTree(m_TreeControl.GetSelectedItem()) + "\\" + newName).AllocSysString(), GetPathToSelectedItemList().AllocSysString());
					
			HTREEITEM hItem = m_TreeControl.GetSelectedItem();
			m_TreeControl.Select(NULL, TVGN_CARET);
			m_TreeControl.Select(hItem, TVGN_CARET);

			if(m_pTxtCtrlToModify != NULL)
			{
				delete m_pTxtCtrlToModify;
				m_pTxtCtrlToModify = NULL;
			}
        }
    }
    return CDialog::PreTranslateMessage(pMsg);
}
