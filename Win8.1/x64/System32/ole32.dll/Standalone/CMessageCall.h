enum MessageParamKind
{
  CMessageCall = 0,
  CChannelObject = 1,
  CDllHost = 2,
  CGIPMessageParam = 3,
  POSTRELRIFREF = 4,
};

enum tagCALLCATEGORY
{
  CALLCAT_NOCALL = 0,
  CALLCAT_SYNCHRONOUS = 1,
  CALLCAT_ASYNC = 2,
  CALLCAT_INPUTSYNC = 3,
  CALLCAT_INTERNALSYNC = 4,
  CALLCAT_INTERNALINPUTSYNC = 5,
  CALLCAT_SCMCALL = 6,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

class CDestObject
{
  /* 0x0008 */ struct tagCOMVERSION _comversion;
  /* 0x000c */ unsigned long _dwDestCtx;
}; /* size: 0x0010 */

struct tagRPCOLEMESSAGE
{
  /* 0x0000 */ void* reserved1;
  /* 0x0008 */ unsigned long dataRepresentation;
  /* 0x0010 */ void* Buffer;
  /* 0x0018 */ unsigned long cbBuffer;
  /* 0x001c */ unsigned long iMethod;
  /* 0x0020 */ void* reserved2[5];
  /* 0x0048 */ unsigned long rpcFlags;
  /* 0x004c */ long __PADDING__[1];
}; /* size: 0x0050 */

enum SourceOfClientHResult
{
  Unknown = 0,
  Server = 1,
  ClientSideChannelNegotiateSyntax = 2,
  ClientSideChannelGetBuffer = 3,
  ClientSideChannelSendReceive = 4,
  ClientSideChannelSend = 5,
  ClientSideChannelReceive = 6,
  ClientSideTransportNegotiateSyntax = 7,
  ClientSideTransportGetBuffer = 8,
  ClientSideTransportSendReceive = 9,
  ClientSideTransportSend = 10,
  ClientSideTransportReceive = 11,
  ClientSideSizing = 12,
  ClientSideMarshaling = 13,
  ClientSideUnmarshaling = 14,
  ClientCancel = 15,
  ServerFault = 16,
  ServerSideAccessCheck = 17,
  ServerSideChannelGeneric = 18,
  ServerSideChannelCallControl = 19,
};

enum OLETLS_PREVENT_RUNDOWN_MITIGATION
{
  NoMitigationInEffect = 0,
  MarshalingWithInParameterMitigation = 1,
  MarshalingWithInprocOutParameterMitigation = 2,
  MarshalingWithOutofprocOutParameterMitigation = 3,
  MarshalingWithMshlflagsTablestrong = 4,
  UnmarshalingWithInParameterMitigation = 5,
  UnmarshalingWithInprocOutParameterMitigation = 6,
  UnmarshalingWithOutofprocOutParameterMitigation = 7,
};

class PushTlsPreventRundownMitigation
{
  /* 0x0000 */ enum OLETLS_PREVENT_RUNDOWN_MITIGATION _currentMitigation;
  /* 0x0004 */ enum OLETLS_PREVENT_RUNDOWN_MITIGATION _savedMitigation;
}; /* size: 0x0008 */

class CMessageCall
{
  /* 0x0000 */ enum MessageParamKind Kind;
  /* 0x0020 */ enum tagCALLCATEGORY _callcat;
  /* 0x0024 */ unsigned long _iFlags;
  /* 0x0028 */ long _hResult;
  /* 0x0030 */ void* _hEvent;
  /* 0x0038 */ struct HWND__* _hWndCaller;
  /* 0x0040 */ struct _GUID _ipid;
  /* 0x0050 */ void* _hSxsActCtx;
  /* 0x0058 */ unsigned long _server_fault;
  /* 0x0060 */ class CDestObject _destObj;
  /* 0x0070 */ void* _pHeader;
  /* 0x0078 */ union WireLocalThis* _pLocalThis;
  /* 0x0080 */ struct __MIDL_XmitDefs_0003* _pLocalThat;
  /* 0x0088 */ class CChannelHandle* _pHandle;
  /* 0x0090 */ void* _hRpc;
  /* 0x0098 */ struct IUnknown* _pContext;
  /* 0x00a0 */ unsigned long _dwCOMHeaderSize;
  /* 0x00a8 */ struct tagRPCOLEMESSAGE message;
  /* 0x00f8 */ struct _GUID _iidWire;
  /* 0x0108 */ struct _GUID _guidCausality;
  /* 0x0118 */ unsigned long _dwServerPid;
  /* 0x011c */ unsigned long _dwServerTid;
  /* 0x0120 */ unsigned long _iMethodWire;
  /* 0x0124 */ unsigned long _dwErrorBufSize;
  /* 0x0128 */ struct ASTAIncomingCallData* _pASTAIncomingCallData;
  /* 0x0130 */ unsigned long m_ulCancelTimeout;
  /* 0x0138 */ unsigned __int64 m_dwStartCount;
  /* 0x0140 */ class CCtxCall* m_pClientCtxCall;
  /* 0x0148 */ class CCtxCall* m_pServerCtxCall;
  struct /* bitfield */
  {
    /* 0x0150 */ BOOL _bCheckedClientIsAppContainer : 1; /* bit position: 0 */
    /* 0x0150 */ BOOL _bClientIsAppContainer : 1; /* bit position: 1 */
    /* 0x0150 */ BOOL _bServerIsAppContainer : 1; /* bit position: 2 */
    /* 0x0150 */ BOOL _bCheckedClientIsRpcss : 1; /* bit position: 3 */
    /* 0x0150 */ BOOL _bClientIsRpcss : 1; /* bit position: 4 */
    /* 0x0150 */ BOOL _bCheckedClientIsStrongNamedProcess : 1; /* bit position: 5 */
    /* 0x0150 */ BOOL _bClientIsStrongNamedProcess : 1; /* bit position: 6 */
    /* 0x0150 */ BOOL _bClientCalledGetBuffer : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0151 */ BOOL _bClientCalledSendOrSendReceive : 1; /* bit position: 0 */
    /* 0x0151 */ BOOL _bClientCalledReceiveOrSendReceive : 1; /* bit position: 1 */
    /* 0x0151 */ BOOL _bClientReceiveOrSendReceiveCompletedSuccessfully : 1; /* bit position: 2 */
    /* 0x0151 */ BOOL _bSuppressClientStopTracing : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0154 */ unsigned int _uCallTraceId;
  /* 0x0158 */ HRESULT _hrClient;
  /* 0x015c */ enum SourceOfClientHResult _sourceOfHResult;
  /* 0x0160 */ class PreventRundownBiasContainer* _pInBiasContainer;
  /* 0x0168 */ class PreventRundownBiasContainer* _pOutBiasContainer;
  /* 0x0170 */ class PushTlsPreventRundownMitigation _pushTlsMitigation;
  struct /* bitfield */
  {
    /* 0x0178 */ BOOL _bEnabledInprocOutParameterMitigation : 1; /* bit position: 0 */
    /* 0x0178 */ BOOL _bCheckedConditionsForOutofprocOutParameterMitigation : 1; /* bit position: 1 */
    /* 0x0178 */ BOOL _bShouldEnableOutofprocOutParameterMitigation : 1; /* bit position: 2 */
    /* 0x0178 */ BOOL _bScheduledAcknowlegmentOfOutParameterMarshalingSet : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0180 */ class OXIDEntry* _pServerOXIDEntry;
}; /* size: 0x0188 */

