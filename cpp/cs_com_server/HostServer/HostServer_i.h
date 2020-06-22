

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for HostServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __HostServer_i_h__
#define __HostServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICSharpServiceWrapper_FWD_DEFINED__
#define __ICSharpServiceWrapper_FWD_DEFINED__
typedef interface ICSharpServiceWrapper ICSharpServiceWrapper;

#endif 	/* __ICSharpServiceWrapper_FWD_DEFINED__ */


#ifndef __CSharpServiceWrapper_FWD_DEFINED__
#define __CSharpServiceWrapper_FWD_DEFINED__

#ifdef __cplusplus
typedef class CSharpServiceWrapper CSharpServiceWrapper;
#else
typedef struct CSharpServiceWrapper CSharpServiceWrapper;
#endif /* __cplusplus */

#endif 	/* __CSharpServiceWrapper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __HostServerLib_LIBRARY_DEFINED__
#define __HostServerLib_LIBRARY_DEFINED__

/* library HostServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_HostServerLib;

#ifndef __ICSharpServiceWrapper_INTERFACE_DEFINED__
#define __ICSharpServiceWrapper_INTERFACE_DEFINED__

/* interface ICSharpServiceWrapper */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICSharpServiceWrapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f69676eb-6ffd-4638-beab-16025a42b1af")
    ICSharpServiceWrapper : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Ping( 
            /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICSharpServiceWrapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICSharpServiceWrapper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICSharpServiceWrapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICSharpServiceWrapper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICSharpServiceWrapper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICSharpServiceWrapper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICSharpServiceWrapper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICSharpServiceWrapper * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Ping )( 
            ICSharpServiceWrapper * This,
            /* [retval][out] */ VARIANT_BOOL *result);
        
        END_INTERFACE
    } ICSharpServiceWrapperVtbl;

    interface ICSharpServiceWrapper
    {
        CONST_VTBL struct ICSharpServiceWrapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSharpServiceWrapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSharpServiceWrapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSharpServiceWrapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSharpServiceWrapper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICSharpServiceWrapper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICSharpServiceWrapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICSharpServiceWrapper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICSharpServiceWrapper_Ping(This,result)	\
    ( (This)->lpVtbl -> Ping(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSharpServiceWrapper_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CSharpServiceWrapper;

#ifdef __cplusplus

class DECLSPEC_UUID("24068c57-111c-4592-954b-1db1fcbeef2d")
CSharpServiceWrapper;
#endif
#endif /* __HostServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

