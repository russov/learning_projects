// FileManagerCom.h : Declaration of the CFileManagerCom

#pragma once
#include "resource.h"       // main symbols



#include "FileSystemComServer_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CFileManagerCom

class ATL_NO_VTABLE CFileManagerCom :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFileManagerCom, &CLSID_FileManagerCom>,
	public IDispatchImpl<IFileManagerCom, &IID_IFileManagerCom, &LIBID_FileSystemComServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CFileManagerCom()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FILEMANAGERCOM)


BEGIN_COM_MAP(CFileManagerCom)
	COM_INTERFACE_ENTRY(IFileManagerCom)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

protected:
	bool hasSubFolder(const CString &path);
	bool isFolder(const CString &path);
	
public:
	STDMETHOD(GetFolder)(BSTR path, VARIANT * names);
	STDMETHOD(GetRoot)(VARIANT * names);
	STDMETHOD(GetListIcon)(VARIANT * icons);
	STDMETHOD(OpenItem)(BSTR path, BOOL * isFolder);
	STDMETHOD(DeleteItem)(BSTR path);
	STDMETHOD(CopyItem)(const BSTR newPath, const BSTR oldPath);
	STDMETHOD(MoveItem)(const BSTR newPath, const BSTR oldPath);
	STDMETHOD(RenameItem)(const BSTR newPath, const BSTR oldPath);
};

OBJECT_ENTRY_AUTO(__uuidof(FileManagerCom), CFileManagerCom)
