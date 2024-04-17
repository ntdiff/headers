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
  /* 0x0004 */ void* pfnAllocate /* function */;
  /* 0x0008 */ void* pfnFree /* function */;
  union
  {
    union
    {
      /* 0x000c */ void** pAutoHandle;
      /* 0x000c */ void** pPrimitiveHandle;
      /* 0x000c */ struct __GENERIC_BINDING_INFO* pGenericBindingInfo;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ IMPLICIT_HANDLE_INFO;
  /* 0x0010 */ void* const* apfnNdrRundownRoutines /* function */;
  /* 0x0014 */ const struct _GENERIC_BINDING_ROUTINE_PAIR* aGenericBindingRoutinePairs;
  /* 0x0018 */ void* const* apfnExprEval /* function */;
  /* 0x001c */ const struct _XMIT_ROUTINE_QUINTUPLE* aXmitQuintuple;
  /* 0x0020 */ const unsigned char* pFormatTypes;
  /* 0x0024 */ int fCheckBounds;
  /* 0x0028 */ unsigned long Version;
  /* 0x002c */ struct _MALLOC_FREE_STRUCT* pMallocFreeStruct;
  /* 0x0030 */ long MIDLVersion;
  /* 0x0034 */ const struct _COMM_FAULT_OFFSETS* CommFaultOffsets;
  /* 0x0038 */ const struct _USER_MARSHAL_ROUTINE_QUADRUPLE* aUserMarshalQuadruple;
  /* 0x003c */ void* const* NotifyRoutineTable /* function */;
  /* 0x0040 */ unsigned long mFlags;
  /* 0x0044 */ const struct _NDR_CS_ROUTINES* CsRoutineTables;
  /* 0x0048 */ void* ProxyServerInfo;
  /* 0x004c */ const struct _NDR_EXPR_DESC* pExprInfo;
} MIDL_STUB_DESC, *PMIDL_STUB_DESC; /* size: 0x0050 */

typedef struct _MIDL_SERVER_INFO_
{
  /* 0x0000 */ const struct _MIDL_STUB_DESC* pStubDesc;
  /* 0x0004 */ void* const* DispatchTable /* function */;
  /* 0x0008 */ const unsigned char* ProcString;
  /* 0x000c */ const unsigned short* FmtStringOffset;
  /* 0x0010 */ void* const* ThunkTable /* function */;
  /* 0x0014 */ struct _RPC_SYNTAX_IDENTIFIER* pTransferSyntax;
  /* 0x0018 */ unsigned long nCount;
  /* 0x001c */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
} MIDL_SERVER_INFO_, *PMIDL_SERVER_INFO_; /* size: 0x0020 */

struct tagCInterfaceStubHeader
{
  /* 0x0000 */ const struct _GUID* piid;
  /* 0x0004 */ const struct _MIDL_SERVER_INFO_* pServerInfo;
  /* 0x0008 */ unsigned long DispatchTableCount;
  /* 0x000c */ void* const* pDispatchTable /* function */;
}; /* size: 0x0010 */

struct IRpcStubBufferVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* Connect /* function */;
  /* 0x0010 */ void* Disconnect /* function */;
  /* 0x0014 */ void* Invoke /* function */;
  /* 0x0018 */ void* IsIIDSupported /* function */;
  /* 0x001c */ void* CountRefs /* function */;
  /* 0x0020 */ void* DebugServerQueryInterface /* function */;
  /* 0x0024 */ void* DebugServerRelease /* function */;
}; /* size: 0x0028 */

struct tagCInterfaceStubVtbl
{
  /* 0x0000 */ struct tagCInterfaceStubHeader header;
  /* 0x0010 */ struct IRpcStubBufferVtbl Vtbl;
}; /* size: 0x0038 */

typedef struct _MIDL_STUBLESS_PROXY_INFO
{
  /* 0x0000 */ const struct _MIDL_STUB_DESC* pStubDesc;
  /* 0x0004 */ const unsigned char* ProcFormatString;
  /* 0x0008 */ const unsigned short* FormatStringOffset;
  /* 0x000c */ struct _RPC_SYNTAX_IDENTIFIER* pTransferSyntax;
  /* 0x0010 */ unsigned long nCount;
  /* 0x0014 */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
} MIDL_STUBLESS_PROXY_INFO, *PMIDL_STUBLESS_PROXY_INFO; /* size: 0x0018 */

struct tagCInterfaceProxyHeader
{
  /* 0x0000 */ const void* pStublessProxyInfo;
  /* 0x0004 */ const struct _GUID* piid;
}; /* size: 0x0008 */

struct tagCInterfaceProxyVtbl
{
  /* 0x0000 */ struct tagCInterfaceProxyHeader header;
  /* 0x0008 */ void** Vtbl /* zero-length array */;
}; /* size: 0x0008 */

struct TYPEINFOVTBL
{
  /* 0x0020 */ char* m_szInterfaceName;
  /* 0x0024 */ struct METHOD_DESCRIPTOR* m_rgMethodDescs;
  /* 0x0028 */ struct _GUID m_iidBase;
  /* 0x0038 */ struct _MIDL_STUB_DESC m_stubDesc;
  /* 0x0088 */ struct _MIDL_SERVER_INFO_ m_stubInfo;
  /* 0x00a8 */ struct tagCInterfaceStubVtbl m_stubVtbl;
  /* 0x00e0 */ struct _MIDL_STUBLESS_PROXY_INFO m_proxyInfo;
  /* 0x00f8 */ struct tagCInterfaceProxyVtbl m_proxyVtbl;
}; /* size: 0x0100 */

