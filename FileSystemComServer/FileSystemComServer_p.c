

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue May 06 22:59:38 2014
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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "FileSystemComServer_i.h"

#define TYPE_FORMAT_STRING_SIZE   1071                              
#define PROC_FORMAT_STRING_SIZE   319                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _FileSystemComServer_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } FileSystemComServer_MIDL_TYPE_FORMAT_STRING;

typedef struct _FileSystemComServer_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } FileSystemComServer_MIDL_PROC_FORMAT_STRING;

typedef struct _FileSystemComServer_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } FileSystemComServer_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const FileSystemComServer_MIDL_TYPE_FORMAT_STRING FileSystemComServer__MIDL_TypeFormatString;
extern const FileSystemComServer_MIDL_PROC_FORMAT_STRING FileSystemComServer__MIDL_ProcFormatString;
extern const FileSystemComServer_MIDL_EXPR_FORMAT_STRING FileSystemComServer__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFileManagerCom_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFileManagerCom_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const FileSystemComServer_MIDL_PROC_FORMAT_STRING FileSystemComServer__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetFolder */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter names */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRoot */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 58 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter names */

/* 66 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetListIcon */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x9 ),	/* 9 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 94 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter icons */

/* 102 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenItem */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x24 ),	/* 36 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 130 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 138 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter isFolder */

/* 144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteItem */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0xb ),	/* 11 */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 172 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 180 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyItem */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0xc ),	/* 12 */
/* 200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 208 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newPath */

/* 216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter oldPath */

/* 222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveItem */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0xd ),	/* 13 */
/* 242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 250 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newPath */

/* 258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 262 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter oldPath */

/* 264 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 268 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RenameItem */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0xe ),	/* 14 */
/* 284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 292 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newPath */

/* 300 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter oldPath */

/* 306 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 310 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const FileSystemComServer_MIDL_TYPE_FORMAT_STRING FileSystemComServer__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x0,	/* FC_RP */
/* 40 */	NdrFcShort( 0x3e6 ),	/* Offset= 998 (1038) */
/* 42 */	
			0x12, 0x0,	/* FC_UP */
/* 44 */	NdrFcShort( 0x3ce ),	/* Offset= 974 (1018) */
/* 46 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 48 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 50 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 52 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	NdrFcShort( 0x10 ),	/* 16 */
/* 58 */	NdrFcShort( 0x2f ),	/* 47 */
/* 60 */	NdrFcLong( 0x14 ),	/* 20 */
/* 64 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 66 */	NdrFcLong( 0x3 ),	/* 3 */
/* 70 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 72 */	NdrFcLong( 0x11 ),	/* 17 */
/* 76 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 78 */	NdrFcLong( 0x2 ),	/* 2 */
/* 82 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 84 */	NdrFcLong( 0x4 ),	/* 4 */
/* 88 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 90 */	NdrFcLong( 0x5 ),	/* 5 */
/* 94 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 96 */	NdrFcLong( 0xb ),	/* 11 */
/* 100 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 102 */	NdrFcLong( 0xa ),	/* 10 */
/* 106 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 108 */	NdrFcLong( 0x6 ),	/* 6 */
/* 112 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (344) */
/* 114 */	NdrFcLong( 0x7 ),	/* 7 */
/* 118 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 120 */	NdrFcLong( 0x8 ),	/* 8 */
/* 124 */	NdrFcShort( 0xff86 ),	/* Offset= -122 (2) */
/* 126 */	NdrFcLong( 0xd ),	/* 13 */
/* 130 */	NdrFcShort( 0xdc ),	/* Offset= 220 (350) */
/* 132 */	NdrFcLong( 0x9 ),	/* 9 */
/* 136 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (368) */
/* 138 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 142 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (386) */
/* 144 */	NdrFcLong( 0x24 ),	/* 36 */
/* 148 */	NdrFcShort( 0x31c ),	/* Offset= 796 (944) */
/* 150 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 154 */	NdrFcShort( 0x316 ),	/* Offset= 790 (944) */
/* 156 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 160 */	NdrFcShort( 0x314 ),	/* Offset= 788 (948) */
/* 162 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 166 */	NdrFcShort( 0x312 ),	/* Offset= 786 (952) */
/* 168 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 172 */	NdrFcShort( 0x310 ),	/* Offset= 784 (956) */
/* 174 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 178 */	NdrFcShort( 0x30e ),	/* Offset= 782 (960) */
/* 180 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 184 */	NdrFcShort( 0x30c ),	/* Offset= 780 (964) */
/* 186 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 190 */	NdrFcShort( 0x30a ),	/* Offset= 778 (968) */
/* 192 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 196 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (952) */
/* 198 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 202 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (956) */
/* 204 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 208 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (972) */
/* 210 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 214 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (968) */
/* 216 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 220 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (976) */
/* 222 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 226 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (980) */
/* 228 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 232 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (984) */
/* 234 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 238 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (988) */
/* 240 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 244 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (992) */
/* 246 */	NdrFcLong( 0x10 ),	/* 16 */
/* 250 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 252 */	NdrFcLong( 0x12 ),	/* 18 */
/* 256 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 258 */	NdrFcLong( 0x13 ),	/* 19 */
/* 262 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 264 */	NdrFcLong( 0x15 ),	/* 21 */
/* 268 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 270 */	NdrFcLong( 0x16 ),	/* 22 */
/* 274 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 276 */	NdrFcLong( 0x17 ),	/* 23 */
/* 280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 282 */	NdrFcLong( 0xe ),	/* 14 */
/* 286 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1000) */
/* 288 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 292 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1010) */
/* 294 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 298 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1014) */
/* 300 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 304 */	NdrFcShort( 0x288 ),	/* Offset= 648 (952) */
/* 306 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 310 */	NdrFcShort( 0x286 ),	/* Offset= 646 (956) */
/* 312 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 316 */	NdrFcShort( 0x284 ),	/* Offset= 644 (960) */
/* 318 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 322 */	NdrFcShort( 0x27a ),	/* Offset= 634 (956) */
/* 324 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 328 */	NdrFcShort( 0x274 ),	/* Offset= 628 (956) */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* Offset= 0 (334) */
/* 336 */	NdrFcLong( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (340) */
/* 342 */	NdrFcShort( 0xffff ),	/* Offset= -1 (341) */
/* 344 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 350 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 364 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 368 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 370 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 382 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 384 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 386 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 388 */	NdrFcShort( 0x2 ),	/* Offset= 2 (390) */
/* 390 */	
			0x12, 0x0,	/* FC_UP */
/* 392 */	NdrFcShort( 0x216 ),	/* Offset= 534 (926) */
/* 394 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 396 */	NdrFcShort( 0x18 ),	/* 24 */
/* 398 */	NdrFcShort( 0xa ),	/* 10 */
/* 400 */	NdrFcLong( 0x8 ),	/* 8 */
/* 404 */	NdrFcShort( 0x5a ),	/* Offset= 90 (494) */
/* 406 */	NdrFcLong( 0xd ),	/* 13 */
/* 410 */	NdrFcShort( 0x7e ),	/* Offset= 126 (536) */
/* 412 */	NdrFcLong( 0x9 ),	/* 9 */
/* 416 */	NdrFcShort( 0x9e ),	/* Offset= 158 (574) */
/* 418 */	NdrFcLong( 0xc ),	/* 12 */
/* 422 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (622) */
/* 424 */	NdrFcLong( 0x24 ),	/* 36 */
/* 428 */	NdrFcShort( 0x124 ),	/* Offset= 292 (720) */
/* 430 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 434 */	NdrFcShort( 0x140 ),	/* Offset= 320 (754) */
/* 436 */	NdrFcLong( 0x10 ),	/* 16 */
/* 440 */	NdrFcShort( 0x15a ),	/* Offset= 346 (786) */
/* 442 */	NdrFcLong( 0x2 ),	/* 2 */
/* 446 */	NdrFcShort( 0x174 ),	/* Offset= 372 (818) */
/* 448 */	NdrFcLong( 0x3 ),	/* 3 */
/* 452 */	NdrFcShort( 0x18e ),	/* Offset= 398 (850) */
/* 454 */	NdrFcLong( 0x14 ),	/* 20 */
/* 458 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (882) */
/* 460 */	NdrFcShort( 0xffff ),	/* Offset= -1 (459) */
/* 462 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 466 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 472 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 474 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 476 */	NdrFcShort( 0x4 ),	/* 4 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	0x12, 0x0,	/* FC_UP */
/* 488 */	NdrFcShort( 0xfe2a ),	/* Offset= -470 (18) */
/* 490 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 492 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 494 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 502 */	NdrFcShort( 0x4 ),	/* 4 */
/* 504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 506 */	0x11, 0x0,	/* FC_RP */
/* 508 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (462) */
/* 510 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 512 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 514 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 524 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 528 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 530 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 532 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (350) */
/* 534 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 536 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x6 ),	/* Offset= 6 (548) */
/* 544 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 546 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 548 */	
			0x11, 0x0,	/* FC_RP */
/* 550 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (514) */
/* 552 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 562 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 566 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 568 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (368) */
/* 572 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 574 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x6 ),	/* Offset= 6 (586) */
/* 582 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 584 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 586 */	
			0x11, 0x0,	/* FC_RP */
/* 588 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (552) */
/* 590 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 592 */	NdrFcShort( 0x4 ),	/* 4 */
/* 594 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 600 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 602 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 604 */	NdrFcShort( 0x4 ),	/* 4 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	0x12, 0x0,	/* FC_UP */
/* 616 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1018) */
/* 618 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 620 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 622 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x6 ),	/* Offset= 6 (634) */
/* 630 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 634 */	
			0x11, 0x0,	/* FC_RP */
/* 636 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (590) */
/* 638 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 640 */	NdrFcLong( 0x2f ),	/* 47 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 650 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 652 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 654 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 656 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 660 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 662 */	NdrFcShort( 0x4 ),	/* 4 */
/* 664 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 666 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 668 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x10 ),	/* 16 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0xa ),	/* Offset= 10 (684) */
/* 676 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 678 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (638) */
/* 682 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 684 */	
			0x12, 0x0,	/* FC_UP */
/* 686 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (656) */
/* 688 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 692 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 698 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 700 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 702 */	NdrFcShort( 0x4 ),	/* 4 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	0x12, 0x0,	/* FC_UP */
/* 714 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (668) */
/* 716 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 718 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x6 ),	/* Offset= 6 (732) */
/* 728 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 730 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 732 */	
			0x11, 0x0,	/* FC_RP */
/* 734 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (688) */
/* 736 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 742 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 744 */	NdrFcShort( 0x10 ),	/* 16 */
/* 746 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 748 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 750 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (736) */
			0x5b,		/* FC_END */
/* 754 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0x18 ),	/* 24 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0xa ),	/* Offset= 10 (770) */
/* 762 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 764 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 766 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (742) */
/* 768 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 770 */	
			0x11, 0x0,	/* FC_RP */
/* 772 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (514) */
/* 774 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 784 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 786 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 792 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 794 */	NdrFcShort( 0x4 ),	/* 4 */
/* 796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 798 */	0x12, 0x0,	/* FC_UP */
/* 800 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (774) */
/* 802 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 804 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 806 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 808 */	NdrFcShort( 0x2 ),	/* 2 */
/* 810 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 816 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 818 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 822 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 824 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 830 */	0x12, 0x0,	/* FC_UP */
/* 832 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (806) */
/* 834 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 836 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 838 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 840 */	NdrFcShort( 0x4 ),	/* 4 */
/* 842 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 848 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 850 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 856 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 862 */	0x12, 0x0,	/* FC_UP */
/* 864 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (838) */
/* 866 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 868 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 870 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 874 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 880 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 882 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 888 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 890 */	NdrFcShort( 0x4 ),	/* 4 */
/* 892 */	NdrFcShort( 0x4 ),	/* 4 */
/* 894 */	0x12, 0x0,	/* FC_UP */
/* 896 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (870) */
/* 898 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 900 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 902 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 906 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 908 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 910 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 916 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 918 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 920 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 922 */	NdrFcShort( 0xffec ),	/* Offset= -20 (902) */
/* 924 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 926 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 928 */	NdrFcShort( 0x28 ),	/* 40 */
/* 930 */	NdrFcShort( 0xffec ),	/* Offset= -20 (910) */
/* 932 */	NdrFcShort( 0x0 ),	/* Offset= 0 (932) */
/* 934 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 936 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 938 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 940 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (394) */
/* 942 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 944 */	
			0x12, 0x0,	/* FC_UP */
/* 946 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (668) */
/* 948 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 950 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 952 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 954 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 958 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 960 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 962 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 964 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 966 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 968 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 970 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 972 */	
			0x12, 0x0,	/* FC_UP */
/* 974 */	NdrFcShort( 0xfd8a ),	/* Offset= -630 (344) */
/* 976 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 978 */	NdrFcShort( 0xfc30 ),	/* Offset= -976 (2) */
/* 980 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 982 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (350) */
/* 984 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 986 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (368) */
/* 988 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 990 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (386) */
/* 992 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 994 */	NdrFcShort( 0x2 ),	/* Offset= 2 (996) */
/* 996 */	
			0x12, 0x0,	/* FC_UP */
/* 998 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1018) */
/* 1000 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1002 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1004 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1006 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1008 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1010 */	
			0x12, 0x0,	/* FC_UP */
/* 1012 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1000) */
/* 1014 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1016 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1018 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1020 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1024) */
/* 1026 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1028 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1030 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1032 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1034 */	NdrFcShort( 0xfc24 ),	/* Offset= -988 (46) */
/* 1036 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1038 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0xfc14 ),	/* Offset= -1004 (42) */
/* 1048 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1050 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1056) */
/* 1052 */	
			0x13, 0x0,	/* FC_OP */
/* 1054 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1018) */
/* 1056 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1060 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1052) */
/* 1066 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1068 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IFileManagerCom, ver. 0.0,
   GUID={0xA9DCCC9E,0x5B5A,0x4E23,{0xB7,0x26,0x25,0x9F,0x22,0x38,0x16,0xAE}} */

#pragma code_seg(".orpc")
static const unsigned short IFileManagerCom_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42,
    78,
    114,
    156,
    192,
    234,
    276
    };

static const MIDL_STUBLESS_PROXY_INFO IFileManagerCom_ProxyInfo =
    {
    &Object_StubDesc,
    FileSystemComServer__MIDL_ProcFormatString.Format,
    &IFileManagerCom_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFileManagerCom_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    FileSystemComServer__MIDL_ProcFormatString.Format,
    &IFileManagerCom_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IFileManagerComProxyVtbl = 
{
    &IFileManagerCom_ProxyInfo,
    &IID_IFileManagerCom,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::GetFolder */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::GetRoot */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::GetListIcon */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::OpenItem */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::DeleteItem */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::CopyItem */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::MoveItem */ ,
    (void *) (INT_PTR) -1 /* IFileManagerCom::RenameItem */
};


static const PRPC_STUB_FUNCTION IFileManagerCom_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFileManagerComStubVtbl =
{
    &IID_IFileManagerCom,
    &IFileManagerCom_ServerInfo,
    15,
    &IFileManagerCom_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_FileSystemComServer_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    FileSystemComServer__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _FileSystemComServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IFileManagerComProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _FileSystemComServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IFileManagerComStubVtbl,
    0
};

PCInterfaceName const _FileSystemComServer_InterfaceNamesList[] = 
{
    "IFileManagerCom",
    0
};

const IID *  const _FileSystemComServer_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _FileSystemComServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _FileSystemComServer, pIID, n)

int __stdcall _FileSystemComServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_FileSystemComServer_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo FileSystemComServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _FileSystemComServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _FileSystemComServer_StubVtblList,
    (const PCInterfaceName * ) & _FileSystemComServer_InterfaceNamesList,
    (const IID ** ) & _FileSystemComServer_BaseIIDList,
    & _FileSystemComServer_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

