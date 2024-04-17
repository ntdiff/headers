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

struct SChannelHookCallInfo
{
  /* 0x0000 */ struct _GUID iid;
  /* 0x0010 */ unsigned long cbSize;
  /* 0x0014 */ struct _GUID uCausality;
  /* 0x0024 */ unsigned long dwServerPid;
  /* 0x0028 */ unsigned long iMethod;
  /* 0x002c */ void* pObject;
}; /* size: 0x0030 */

class CMessageCall
{
  /* 0x000c */ enum tagCALLCATEGORY _callcat;
  /* 0x0010 */ unsigned long _iFlags;
  /* 0x0014 */ long _hResult;
  /* 0x0018 */ void* _hEvent;
  /* 0x001c */ struct HWND__* _hWndCaller;
  /* 0x0020 */ struct _GUID _ipid;
  /* 0x0030 */ void* _hSxsActCtx;
  /* 0x0034 */ unsigned long _server_fault;
  /* 0x0038 */ class CDestObject _destObj;
  /* 0x0044 */ void* _pHeader;
  /* 0x0048 */ class CChannelHandle* _pHandle;
  /* 0x004c */ void* _hRpc;
  /* 0x0050 */ struct IUnknown* _pContext;
  /* 0x0054 */ unsigned long _dwCOMHeaderSize;
  /* 0x0058 */ struct tagRPCOLEMESSAGE message;
  /* 0x0084 */ struct SChannelHookCallInfo hook;
  /* 0x00b4 */ unsigned long _dwErrorBufSize;
  /* 0x00b8 */ unsigned long m_ulCancelTimeout;
  /* 0x00bc */ unsigned long m_dwStartCount;
  /* 0x00c0 */ class CCtxCall* m_pClientCtxCall;
  /* 0x00c4 */ class CCtxCall* m_pServerCtxCall;
}; /* size: 0x00c8 */

