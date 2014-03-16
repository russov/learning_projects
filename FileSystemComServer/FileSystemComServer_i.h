

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Mar 14 13:07:22 2014
 */
/* Compiler settings for FileSystemComServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

#ifndef __IWorkFileSystem_FWD_DEFINED__
#define __IWorkFileSystem_FWD_DEFINED__
typedef interface IWorkFileSystem IWorkFileSystem;

#endif 	/* __IWorkFileSystem_FWD_DEFINED__ */


#ifndef __WorkFileSystem_FWD_DEFINED__
#define __WorkFileSystem_FWD_DEFINED__

#ifdef __cplusplus
typedef class WorkFileSystem WorkFileSystem;
#else
typedef struct WorkFileSystem WorkFileSystem;
#endif /* __cplusplus */

#endif 	/* __WorkFileSystem_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#include <string>
#include <vector>

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWorkFileSystem_INTERFACE_DEFINED__
#define __IWorkFileSystem_INTERFACE_DEFINED__

/* interface IWorkFileSystem */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWorkFileSystem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E6ABDA4-9839-4AA4-A928-3120980115B5")
    IWorkFileSystem : public IDispatch
    {
    public:
		virtual HRESULT getNames(const std::string &path, std::vector<std::string>* names) = 0;
    };
    
    
#else 	/* C style interface */

    typedef struct IWorkFileSystemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWorkFileSystem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWorkFileSystem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWorkFileSystem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWorkFileSystem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWorkFileSystem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWorkFileSystem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWorkFileSystem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IWorkFileSystemVtbl;

    interface IWorkFileSystem
    {
        CONST_VTBL struct IWorkFileSystemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWorkFileSystem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorkFileSystem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWorkFileSystem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWorkFileSystem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWorkFileSystem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWorkFileSystem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWorkFileSystem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWorkFileSystem_INTERFACE_DEFINED__ */



#ifndef __FileSystemComServerLib_LIBRARY_DEFINED__
#define __FileSystemComServerLib_LIBRARY_DEFINED__

/* library FileSystemComServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_FileSystemComServerLib;

EXTERN_C const CLSID CLSID_WorkFileSystem;

#ifdef __cplusplus

class DECLSPEC_UUID("EA48EB7E-7C33-49B8-86E8-CCDECAB12086")
WorkFileSystem;
#endif
#endif /* __FileSystemComServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


