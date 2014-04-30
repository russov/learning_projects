// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "FileSystemComServer_i.h"
#include "dllmain.h"

CFileSystemComServerModule _AtlModule;

class CFileSystemComServerApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CFileSystemComServerApp, CWinApp)
END_MESSAGE_MAP()

CFileSystemComServerApp theApp;

BOOL CFileSystemComServerApp::InitInstance()
{
	return CWinApp::InitInstance();
}

int CFileSystemComServerApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
