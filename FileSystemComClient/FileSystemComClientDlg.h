
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
	
// Implementation
protected:
	HICON m_hIcon;
	CTreeCtrl m_TreeControl;
	CListCtrl m_ListControl;
	
	CImageList m_pImgList;
	CString m_PathToCopyingFile;

	bool m_IsCutButton;


public:
	// Generated message map functions
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
	afx_msg void OnTvnItemChangedTreeFileSystem(NMHDR *pNMHDR, LRESULT *pResult);
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
};
