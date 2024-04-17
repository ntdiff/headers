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
  /* 0x0004 */ struct tagCOMVERSION _comversion;
  /* 0x0008 */ unsigned long _dwDestCtx;
}; /* size: 0x000c */

struct tagRPCOLEMESSAGE
{
  /* 0x0000 */ void* reserved1;
  /* 0x0004 */ unsigned long dataRepresentation;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned long cbBuffer;
  /* 0x0010 */ unsigned long iMethod;
  /* 0x0014 */ void* reserved2[5];
  /* 0x0028 */ unsigned long rpcFlags;
}; /* size: 0x002c */

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
  /* 0x0010 */ enum tagCALLCATEGORY _callcat;
  /* 0x0014 */ unsigned long _iFlags;
  /* 0x0018 */ long _hResult;
  /* 0x001c */ void* _hEvent;
  /* 0x0020 */ struct HWND__* _hWndCaller;
  /* 0x0024 */ struct _GUID _ipid;
  /* 0x0034 */ void* _hSxsActCtx;
  /* 0x0038 */ unsigned long _server_fault;
  /* 0x003c */ class CDestObject _destObj;
  /* 0x0048 */ void* _pHeader;
  /* 0x004c */ union WireLocalThis* _pLocalThis;
  /* 0x0050 */ struct __MIDL_XmitDefs_0003* _pLocalThat;
  /* 0x0054 */ class CChannelHandle* _pHandle;
  /* 0x0058 */ void* _hRpc;
  /* 0x005c */ struct IUnknown* _pContext;
  /* 0x0060 */ unsigned long _dwCOMHeaderSize;
  /* 0x0064 */ struct tagRPCOLEMESSAGE message;
  /* 0x0090 */ struct _GUID _iidWire;
  /* 0x00a0 */ struct _GUID _guidCausality;
  /* 0x00b0 */ unsigned long _dwServerPid;
  /* 0x00b4 */ unsigned long _dwServerTid;
  /* 0x00b8 */ unsigned long _iMethodWire;
  /* 0x00bc */ unsigned long _dwErrorBufSize;
  /* 0x00c0 */ struct ASTAIncomingCallData* _pASTAIncomingCallData;
  /* 0x00c4 */ unsigned long m_ulCancelTimeout;
  /* 0x00c8 */ unsigned __int64 m_dwStartCount;
  /* 0x00d0 */ class CCtxCall* m_pClientCtxCall;
  /* 0x00d4 */ class CCtxCall* m_pServerCtxCall;
  struct /* bitfield */
  {
    /* 0x00d8 */ BOOL _bCheckedClientIsAppContainer : 1; /* bit position: 0 */
    /* 0x00d8 */ BOOL _bClientIsAppContainer : 1; /* bit position: 1 */
    /* 0x00d8 */ BOOL _bServerIsAppContainer : 1; /* bit position: 2 */
    /* 0x00d8 */ BOOL _bCheckedClientIsRpcss : 1; /* bit position: 3 */
    /* 0x00d8 */ BOOL _bClientIsRpcss : 1; /* bit position: 4 */
    /* 0x00d8 */ BOOL _bCheckedClientIsStrongNamedProcess : 1; /* bit position: 5 */
    /* 0x00d8 */ BOOL _bClientIsStrongNamedProcess : 1; /* bit position: 6 */
    /* 0x00d8 */ BOOL _bClientCalledGetBuffer : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x00d9 */ BOOL _bClientCalledSendOrSendReceive : 1; /* bit position: 0 */
    /* 0x00d9 */ BOOL _bClientCalledReceiveOrSendReceive : 1; /* bit position: 1 */
    /* 0x00d9 */ BOOL _bClientReceiveOrSendReceiveCompletedSuccessfully : 1; /* bit position: 2 */
    /* 0x00d9 */ BOOL _bSuppressClientStopTracing : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x00dc */ unsigned int _uCallTraceId;
  /* 0x00e0 */ HRESULT _hrClient;
  /* 0x00e4 */ enum SourceOfClientHResult _sourceOfHResult;
  /* 0x00e8 */ class PreventRundownBiasContainer* _pInBiasContainer;
  /* 0x00ec */ class PreventRundownBiasContainer* _pOutBiasContainer;
  /* 0x00f0 */ class PushTlsPreventRundownMitigation _pushTlsMitigation;
  struct /* bitfield */
  {
    /* 0x00f8 */ BOOL _bEnabledInprocOutParameterMitigation : 1; /* bit position: 0 */
    /* 0x00f8 */ BOOL _bCheckedConditionsForOutofprocOutParameterMitigation : 1; /* bit position: 1 */
    /* 0x00f8 */ BOOL _bShouldEnableOutofprocOutParameterMitigation : 1; /* bit position: 2 */
    /* 0x00f8 */ BOOL _bScheduledAcknowlegmentOfOutParameterMarshalingSet : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x00fc */ class OXIDEntry* _pServerOXIDEntry;
}; /* size: 0x0100 */

