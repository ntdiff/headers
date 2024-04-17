typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _MIDL_STUB_DESC
{
  /* 0x0000 */ void* RpcInterfaceInformation;
  /* 0x0008 */ void* pfnAllocate /* function */;
  /* 0x0010 */ void* pfnFree /* function */;
  union
  {
    union
    {
      /* 0x0018 */ void** pAutoHandle;
      /* 0x0018 */ void** pPrimitiveHandle;
      /* 0x0018 */ struct __GENERIC_BINDING_INFO* pGenericBindingInfo;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ IMPLICIT_HANDLE_INFO;
  /* 0x0020 */ void* const* apfnNdrRundownRoutines /* function */;
  /* 0x0028 */ const struct _GENERIC_BINDING_ROUTINE_PAIR* aGenericBindingRoutinePairs;
  /* 0x0030 */ void* const* apfnExprEval /* function */;
  /* 0x0038 */ const struct _XMIT_ROUTINE_QUINTUPLE* aXmitQuintuple;
  /* 0x0040 */ const unsigned char* pFormatTypes;
  /* 0x0048 */ int fCheckBounds;
  /* 0x004c */ unsigned long Version;
  /* 0x0050 */ struct _MALLOC_FREE_STRUCT* pMallocFreeStruct;
  /* 0x0058 */ long MIDLVersion;
  /* 0x0060 */ const struct _COMM_FAULT_OFFSETS* CommFaultOffsets;
  /* 0x0068 */ const struct _USER_MARSHAL_ROUTINE_QUADRUPLE* aUserMarshalQuadruple;
  /* 0x0070 */ void* const* NotifyRoutineTable /* function */;
  /* 0x0078 */ unsigned __int64 mFlags;
  /* 0x0080 */ const struct _NDR_CS_ROUTINES* CsRoutineTables;
  /* 0x0088 */ void* ProxyServerInfo;
  /* 0x0090 */ const struct _NDR_EXPR_DESC* pExprInfo;
} MIDL_STUB_DESC, *PMIDL_STUB_DESC; /* size: 0x0098 */

typedef struct _MIDL_SERVER_INFO_
{
  /* 0x0000 */ const struct _MIDL_STUB_DESC* pStubDesc;
  /* 0x0008 */ void* const* DispatchTable /* function */;
  /* 0x0010 */ const unsigned char* ProcString;
  /* 0x0018 */ const unsigned short* FmtStringOffset;
  /* 0x0020 */ void* const* ThunkTable /* function */;
  /* 0x0028 */ struct _RPC_SYNTAX_IDENTIFIER* pTransferSyntax;
  /* 0x0030 */ unsigned __int64 nCount;
  /* 0x0038 */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
} MIDL_SERVER_INFO_, *PMIDL_SERVER_INFO_; /* size: 0x0040 */

struct tagCInterfaceStubHeader
{
  /* 0x0000 */ const struct _GUID* piid;
  /* 0x0008 */ const struct _MIDL_SERVER_INFO_* pServerInfo;
  /* 0x0010 */ unsigned long DispatchTableCount;
  /* 0x0018 */ void* const* pDispatchTable /* function */;
}; /* size: 0x0020 */

struct IRpcStubBufferVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* Connect /* function */;
  /* 0x0020 */ void* Disconnect /* function */;
  /* 0x0028 */ void* Invoke /* function */;
  /* 0x0030 */ void* IsIIDSupported /* function */;
  /* 0x0038 */ void* CountRefs /* function */;
  /* 0x0040 */ void* DebugServerQueryInterface /* function */;
  /* 0x0048 */ void* DebugServerRelease /* function */;
}; /* size: 0x0050 */

struct tagCInterfaceStubVtbl
{
  /* 0x0000 */ struct tagCInterfaceStubHeader header;
  /* 0x0020 */ struct IRpcStubBufferVtbl Vtbl;
}; /* size: 0x0070 */

typedef struct _MIDL_STUBLESS_PROXY_INFO
{
  /* 0x0000 */ const struct _MIDL_STUB_DESC* pStubDesc;
  /* 0x0008 */ const unsigned char* ProcFormatString;
  /* 0x0010 */ const unsigned short* FormatStringOffset;
  /* 0x0018 */ struct _RPC_SYNTAX_IDENTIFIER* pTransferSyntax;
  /* 0x0020 */ unsigned __int64 nCount;
  /* 0x0028 */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
} MIDL_STUBLESS_PROXY_INFO, *PMIDL_STUBLESS_PROXY_INFO; /* size: 0x0030 */

struct tagCInterfaceProxyHeader
{
  /* 0x0000 */ const void* pStublessProxyInfo;
  /* 0x0008 */ const struct _GUID* piid;
}; /* size: 0x0010 */

struct tagCInterfaceProxyVtbl
{
  /* 0x0000 */ struct tagCInterfaceProxyHeader header;
  /* 0x0010 */ void** Vtbl /* zero-length array */;
}; /* size: 0x0010 */

struct TypeInfoVtbl
{
  /* 0x0000 */ long cRefs;
  /* 0x0004 */ struct _GUID iid;
  /* 0x0014 */ int fIsDual;
  /* 0x0018 */ struct _MIDL_STUB_DESC stubDesc;
  /* 0x00b0 */ struct _MIDL_SERVER_INFO_ stubInfo;
  /* 0x00f0 */ struct tagCInterfaceStubVtbl stubVtbl;
  /* 0x0160 */ struct _MIDL_STUBLESS_PROXY_INFO proxyInfo;
  /* 0x0190 */ struct tagCInterfaceProxyVtbl proxyVtbl;
}; /* size: 0x01a0 */

