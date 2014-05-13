

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri May 09 09:44:22 2014
 */
/* Compiler settings for FileSystemComServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __FileSystemComServer_i_h__
#define __FileSystemComServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFileManagerCom_FWD_DEFINED__
#define __IFileManagerCom_FWD_DEFINED__
typedef interface IFileManagerCom IFileManagerCom;
#endif 	/* __IFileManagerCom_FWD_DEFINED__ */


#ifndef __FileManagerCom_FWD_DEFINED__
#define __FileManagerCom_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileManagerCom FileManagerCom;
#else
typedef struct FileManagerCom FileManagerCom;
#endif /* __cplusplus */

#endif 	/* __FileManagerCom_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFileManagerCom_INTERFACE_DEFINED__
#define __IFileManagerCom_INTERFACE_DEFINED__

/* interface IFileManagerCom */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFileManagerCom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9DCCC9E-5B5A-4E23-B726-259F223816AE")
    IFileManagerCom : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFolder( 
            BSTR path,
            VARIANT *names) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRoot( 
            VARIANT *names) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetListIcon( 
            /* [out] */ VARIANT *icons) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenItem( 
            /* [in] */ BSTR path,
            /* [out] */ BOOL *isFolder) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteItem( 
            /* [in] */ BSTR path) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CopyItem( 
            /* [in] */ const BSTR newPath,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MoveItem( 
            /* [in] */ const BSTR newPath,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenameItem( 
            /* [in] */ const BSTR newPath,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowProperties( 
            /* [in] */ BSTR path) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileManagerComVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileManagerCom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileManagerCom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileManagerCom * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFileManagerCom * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFileManagerCom * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFileManagerCom * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFileManagerCom * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IFileManagerCom * This,
            BSTR path,
            VARIANT *names);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRoot )( 
            IFileManagerCom * This,
            VARIANT *names);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetListIcon )( 
            IFileManagerCom * This,
            /* [out] */ VARIANT *icons);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenItem )( 
            IFileManagerCom * This,
            /* [in] */ BSTR path,
            /* [out] */ BOOL *isFolder);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteItem )( 
            IFileManagerCom * This,
            /* [in] */ BSTR path);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CopyItem )( 
            IFileManagerCom * This,
            /* [in] */ const BSTR newPath,
            /* [in] */ const BSTR oldPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MoveItem )( 
            IFileManagerCom * This,
            /* [in] */ const BSTR newPath,
            /* [in] */ const BSTR oldPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenameItem )( 
            IFileManagerCom * This,
            /* [in] */ const BSTR newPath,
            /* [in] */ const BSTR oldPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IFileManagerCom * This,
            /* [in] */ BSTR path);
        
        END_INTERFACE
    } IFileManagerComVtbl;

    interface IFileManagerCom
    {
        CONST_VTBL struct IFileManagerComVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileManagerCom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileManagerCom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileManagerCom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileManagerCom_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFileManagerCom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFileManagerCom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFileManagerCom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFileManagerCom_GetFolder(This,path,names)	\
    ( (This)->lpVtbl -> GetFolder(This,path,names) ) 

#define IFileManagerCom_GetRoot(This,names)	\
    ( (This)->lpVtbl -> GetRoot(This,names) ) 

#define IFileManagerCom_GetListIcon(This,icons)	\
    ( (This)->lpVtbl -> GetListIcon(This,icons) ) 

#define IFileManagerCom_OpenItem(This,path,isFolder)	\
    ( (This)->lpVtbl -> OpenItem(This,path,isFolder) ) 

#define IFileManagerCom_DeleteItem(This,path)	\
    ( (This)->lpVtbl -> DeleteItem(This,path) ) 

#define IFileManagerCom_CopyItem(This,newPath,oldPath)	\
    ( (This)->lpVtbl -> CopyItem(This,newPath,oldPath) ) 

#define IFileManagerCom_MoveItem(This,newPath,oldPath)	\
    ( (This)->lpVtbl -> MoveItem(This,newPath,oldPath) ) 

#define IFileManagerCom_RenameItem(This,newPath,oldPath)	\
    ( (This)->lpVtbl -> RenameItem(This,newPath,oldPath) ) 

#define IFileManagerCom_ShowProperties(This,path)	\
    ( (This)->lpVtbl -> ShowProperties(This,path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileManagerCom_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_FileSystemComServer_0000_0001 */
/* [local] */ 

/* [uuid] */ struct  DECLSPEC_UUID("052A1B68-7229-4196-8612-441AEF1683F0") DataItem
    {
    BSTR name;
    BOOL isFolder;
    UINT id;
    UINT idOpen;
    BOOL haveSubFolder;
    } ;


extern RPC_IF_HANDLE __MIDL_itf_FileSystemComServer_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FileSystemComServer_0000_0001_v0_0_s_ifspec;


#ifndef __FileSystemComServerLib_LIBRARY_DEFINED__
#define __FileSystemComServerLib_LIBRARY_DEFINED__

/* library FileSystemComServerLib */
/* [version][uuid] */ 



EXTERN_C const IID LIBID_FileSystemComServerLib;

EXTERN_C const CLSID CLSID_FileManagerCom;

#ifdef __cplusplus

class DECLSPEC_UUID("0FC9B050-6CD8-410E-A012-47EAAF58ADF7")
FileManagerCom;
#endif
#endif /* __FileSystemComServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


