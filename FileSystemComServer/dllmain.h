// dllmain.h : Declaration of module class.

class CFileSystemComServerModule : public ATL::CAtlDllModuleT< CFileSystemComServerModule >
{
public :
	DECLARE_LIBID(LIBID_FileSystemComServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FILESYSTEMCOMSERVER, "{A5E7C41D-A4C5-45CB-A74F-473AEDF58B71}")
};

extern class CFileSystemComServerModule _AtlModule;
