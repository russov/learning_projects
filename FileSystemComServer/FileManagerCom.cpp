// FileManagerCom.cpp : Implementation of CFileManagerCom

#include "stdafx.h"

#include <vector>

#include "FileManagerCom.h"

bool CFileManagerCom::hasSubFolder(const CString &path)
{
	CFileFind FindFile; 
	BOOL FlagFile = FindFile.FindFile(path + CString("\\*.*")); 

	while (FlagFile) 
	{ 
		FlagFile = FindFile.FindNextFile();
		if (FindFile.IsDirectory () && ! FindFile.IsDots () ) 
			return true;
	} 
	return false;
}

bool CFileManagerCom::isFolder(const CString &path)
{
	if(FILE_ATTRIBUTE_DIRECTORY & GetFileAttributes(path))
		return true;
	return false;
}

STDMETHODIMP CFileManagerCom::ProcessFile(UINT operation, BSTR newPath, BSTR oldPath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	std::string wszBuffer;
	
	TCHAR bufIn[_MAX_PATH + 1]; 
	_tcscpy(bufIn, CString(newPath));   
    bufIn[_tcslen(bufIn)+1]=0;    
 
	TCHAR bufOut[_MAX_PATH + 1]; 
	_tcscpy(bufOut, CString(oldPath));   
    bufOut[_tcslen(bufOut)+1]=0;  

	SHFILEOPSTRUCT lpFileOp;
	lpFileOp.hwnd=NULL;
	lpFileOp.wFunc=operation;
	lpFileOp.pFrom= bufOut;  
	lpFileOp.pTo=bufIn;
    lpFileOp.fFlags=FOF_NOCONFIRMATION;
    lpFileOp.hNameMappings=NULL;
    lpFileOp.lpszProgressTitle=NULL;
    
	SHFileOperation(&lpFileOp);
	
	return S_OK;
}

STDMETHODIMP CFileManagerCom::GetFolder(BSTR path, VARIANT * names)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CFileFind FileFind;
	std::vector <DataItem> vec;

	BOOL FlagFile = FileFind.FindFile(CString(path + CString("\\*.*")));
	while (FlagFile==1)
	{
		FlagFile = FileFind.FindNextFile();  
		if((!FileFind.IsDots()))
		{
			CString hFileName = FileFind.GetFileName();
			DataItem item;
			SHFILEINFO Info;

			item.name = hFileName.AllocSysString();
			item.isFolder = FileFind.IsDirectory();
			item.haveSubFolder = hasSubFolder(FileFind.GetFilePath());
			
			::SHGetFileInfo (FileFind.GetFilePath(), 0, &Info, sizeof (Info), SHGFI_ICON | SHGFI_SMALLICON); 
			item.id = Info.iIcon;
	
			::SHGetFileInfo (FileFind.GetFilePath(),0,&Info,sizeof (Info),SHGFI_ICON | SHGFI_OPENICON | SHGFI_SMALLICON); 
			item.idOpen = Info.iIcon;
			
			vec.push_back(item);
		} 
	}

	IRecordInfo *pRI;
	HRESULT hr;
	
	hr = GetRecordInfoFromGuids(LIBID_FileSystemComServerLib, 1, 0, 0x409, __uuidof(DataItem), &pRI);

	SAFEARRAY *psa;
	SAFEARRAYBOUND sab = {vec.size(), 0};
	DataItem *pDataItem;

	psa = SafeArrayCreateEx(VT_RECORD, 1, &sab, pRI);

	pRI->Release();
	pRI = NULL;
	
	hr = SafeArrayAccessData(psa, (void**)&pDataItem);
	
	for (size_t i = 0; i < vec.size(); ++i)
		pDataItem[i] = vec[i];
	hr = SafeArrayUnaccessData(psa);

	names->vt = VT_ARRAY | VT_BYREF;
	names->parray = psa;

	return S_OK;
}

STDMETHODIMP CFileManagerCom::GetRoot(VARIANT * names)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	
	DWORD dwSize = GetLogicalDriveStrings(0, NULL);
	
	CString disk;
	
	char* buff = new char[dwSize];

	std::vector <DataItem> vec;

	::GetLogicalDriveStringsA(dwSize, buff);
	for (char* p = buff; p != dwSize + buff; ++p)
	{
		if (*p != '\0')
		{
			disk.AppendChar(*p);
		}
		else
		{
			if (!disk.IsEmpty())
			{
				DataItem item;
				item.name = disk.AllocSysString();
				item.isFolder = true;
				item.haveSubFolder = true;

				SHFILEINFO Info;

				::SHGetFileInfo (disk, 0, &Info, sizeof (Info), SHGFI_ICON | SHGFI_SMALLICON); 
				item.id = Info.iIcon;
	
				::SHGetFileInfo (disk, 0, &Info, sizeof (Info),SHGFI_ICON | SHGFI_OPENICON | SHGFI_SMALLICON); 
				item.idOpen = Info.iIcon;

				vec.push_back(item);
			}
			disk = "";
		}
	}
	delete [] buff;
	
	IRecordInfo *pRI;
	HRESULT hr;
	
	hr = GetRecordInfoFromGuids(LIBID_FileSystemComServerLib, 1, 0, 0x409, __uuidof(DataItem), &pRI);

	SAFEARRAY *psa;
	SAFEARRAYBOUND sab = {vec.size(), 0};
	DataItem *pDataItem;

	psa = SafeArrayCreateEx(VT_RECORD, 1, &sab, pRI);

	pRI->Release();
	pRI = NULL;
	
	hr = SafeArrayAccessData(psa, (void**)&pDataItem);
	
	for (size_t i = 0; i < vec.size(); ++i)
		pDataItem[i] = vec[i];
	hr = SafeArrayUnaccessData(psa);

	names->vt = VT_ARRAY | VT_BYREF;
	names->parray = psa;
	
	return S_OK;
}

STDMETHODIMP CFileManagerCom::GetListIcon(VARIANT * icons)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	
	SHFILEINFO info; 

	HIMAGELIST hlmg = (HIMAGELIST)::SHGetFileInfo(_T("c:\\"),0, &info, sizeof (info), SHGFI_SYSICONINDEX | SHGFI_SMALLICON); 
	
	icons->vt = VT_VOID | VT_BYREF;
	icons->byref = hlmg;

	return S_OK;
}

STDMETHODIMP CFileManagerCom::OpenItem(BSTR path, BOOL * isFolder)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*isFolder = CFileManagerCom::isFolder(path);

	if (*isFolder)
		return S_OK;

	::ShellExecute(NULL, _T("open"), CString(path), 0, 0, SW_SHOW);

	return S_OK;
}


STDMETHODIMP CFileManagerCom::DeleteItem(BSTR path)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	return ProcessFile(FO_DELETE, path);
}


STDMETHODIMP CFileManagerCom::CopyItem(BSTR newPath, BSTR oldPath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	return ProcessFile(FO_COPY, newPath, oldPath);
}

STDMETHODIMP CFileManagerCom::MoveItem(BSTR newPath, BSTR oldPath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	return ProcessFile(FO_MOVE, newPath, oldPath);
}

STDMETHODIMP CFileManagerCom::RenameItem(BSTR newPath, BSTR oldPath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	return ProcessFile(FO_RENAME, newPath, oldPath);
}

STDMETHODIMP CFileManagerCom::ShowProperties(BSTR path)
{
	SHELLEXECUTEINFO sei = {0};
	sei.cbSize = sizeof(sei);
	//sei.hwnd = 
	sei.lpVerb = L"properties";
	sei.lpFile = T2W(path);
	sei.nShow = SW_SHOW;
	sei.fMask = SEE_MASK_INVOKEIDLIST;

	ShellExecuteEx(&sei);

	return S_OK;
}