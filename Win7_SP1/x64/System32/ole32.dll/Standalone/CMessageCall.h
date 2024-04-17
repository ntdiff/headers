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

struct SChannelHookCallInfo
{
  /* 0x0000 */ struct _GUID iid;
  /* 0x0010 */ unsigned long cbSize;
  /* 0x0014 */ struct _GUID uCausality;
  /* 0x0024 */ unsigned long dwServerPid;
  /* 0x0028 */ unsigned long iMethod;
  /* 0x0030 */ void* pObject;
}; /* size: 0x0038 */

class CMessageCall
{
  /* 0x0018 */ enum tagCALLCATEGORY _callcat;
  /* 0x001c */ unsigned long _iFlags;
  /* 0x0020 */ long _hResult;
  /* 0x0028 */ void* _hEvent;
  /* 0x0030 */ struct HWND__* _hWndCaller;
  /* 0x0038 */ struct _GUID _ipid;
  /* 0x0048 */ void* _hSxsActCtx;
  /* 0x0050 */ unsigned long _server_fault;
  /* 0x0058 */ class CDestObject _destObj;
  /* 0x0068 */ void* _pHeader;
  /* 0x0070 */ class CChannelHandle* _pHandle;
  /* 0x0078 */ void* _hRpc;
  /* 0x0080 */ struct IUnknown* _pContext;
  /* 0x0088 */ unsigned long _dwCOMHeaderSize;
  /* 0x0090 */ struct tagRPCOLEMESSAGE message;
  /* 0x00e0 */ struct SChannelHookCallInfo hook;
  /* 0x0118 */ unsigned long _dwErrorBufSize;
  /* 0x011c */ unsigned long m_ulCancelTimeout;
  /* 0x0120 */ unsigned long m_dwStartCount;
  /* 0x0128 */ class CCtxCall* m_pClientCtxCall;
  /* 0x0130 */ class CCtxCall* m_pServerCtxCall;
}; /* size: 0x0138 */

