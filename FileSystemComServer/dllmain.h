// dllmain.h : Declaration of module class.

class CFileSystemComServerModule : public ATL::CAtlDllModuleT< CFileSystemComServerModule >
{
public :
	DECLARE_LIBID(LIBID_FileSystemComServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FILESYSTEMCOMSERVER, "{DC9CE416-362F-4611-8BDD-4CD764EE357A}")
};

extern class CFileSystemComServerModule _AtlModule;
