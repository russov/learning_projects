
// FileSystemComClientDlg.h : header file
//

#pragma once
#include "afxcmn.h"

// CFileSystemComClientDlg dialog
class CFileSystemComClientDlg : public CDialogEx
{
// Construction
public:
	CFileSystemComClientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FILESYSTEMCOMCLIENT_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	void ClearAllChildOnBranch(const HTREEITEM item);
	void ClearAllItemsListControl();
	
	CString GetPathToItemTree(const HTREEITEM hTreeItem) const;
	CString GetPathToSelectedItemList() const;

	BOOL PreTranslateMessage(MSG* pMsg);
	
// Implementation
protected:
	const static int ID_TXTCTRL_TOMODIFY = 1001;
	
	HICON m_hIcon;
	CTreeCtrl m_TreeControl;
	CListCtrl m_ListControl;
	
	CEdit *m_pTxtCtrlToModify;

	CImageList m_pImgList;
	CString m_PathToCopyingFile;

	bool m_IsCutButton;

public:
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);

private:
	
public:
	afx_msg void OnNMRClickTreeFileSystem(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTvnSelchangedTreeFileSystem(NMHDR *pNMHDR, LRESULT *pResult);

	afx_msg void OnNMDblclkList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTvnItemexpandedTreeFileSystem(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMRClickList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnCopy();
	afx_msg void OnCut();
	afx_msg void OnPaste();
	afx_msg void OnDelete();
	afx_msg void OnRename();
	afx_msg void OnProperties();

	afx_msg void OnLvnItemchangedList(NMHDR *pNMHDR, LRESULT *pResult);
};
