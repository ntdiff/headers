enum BaseCallKind
{
  CAsyncCall = 0,
  CClientCall = 1,
  CCtxCall = 2,
};

enum tagAPTKIND
{
  APTKIND_NEUTRALTHREADED = 1,
  APTKIND_MULTITHREADED = 2,
  APTKIND_APARTMENTTHREADED = 4,
  APTKIND_APPLICATION_STA = 8,
};

typedef enum _RPC_ASYNC_EVENT
{
  RpcCallComplete = 0,
  RpcSendComplete = 1,
  RpcReceiveComplete = 2,
  RpcClientDisconnect = 3,
  RpcClientCancel = 4,
} RPC_ASYNC_EVENT, *PRPC_ASYNC_EVENT;

typedef enum _RPC_NOTIFICATION_TYPES
{
  RpcNotificationTypeNone = 0,
  RpcNotificationTypeEvent = 1,
  RpcNotificationTypeApc = 2,
  RpcNotificationTypeIoc = 3,
  RpcNotificationTypeHwnd = 4,
  RpcNotificationTypeCallback = 5,
} RPC_NOTIFICATION_TYPES, *PRPC_NOTIFICATION_TYPES;

typedef union _RPC_ASYNC_NOTIFICATION_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ void* NotificationRoutine /* function */;
      /* 0x0004 */ void* hThread;
    } /* size: 0x0008 */ APC;
    struct
    {
      /* 0x0000 */ void* hIOPort;
      /* 0x0004 */ unsigned long dwNumberOfBytesTransferred;
      /* 0x0008 */ unsigned long dwCompletionKey;
      /* 0x000c */ struct _OVERLAPPED* lpOverlapped;
    } /* size: 0x0010 */ IOC;
    struct
    {
      /* 0x0000 */ struct HWND__* hWnd;
      /* 0x0004 */ unsigned int Msg;
    } /* size: 0x0008 */ HWND;
    /* 0x0000 */ void* hEvent;
    /* 0x0000 */ void* NotificationRoutine /* function */;
  }; /* size: 0x0010 */
} RPC_ASYNC_NOTIFICATION_INFO, *PRPC_ASYNC_NOTIFICATION_INFO; /* size: 0x0010 */

typedef struct _RPC_ASYNC_STATE
{
  /* 0x0000 */ unsigned int Size;
  /* 0x0004 */ unsigned long Signature;
  /* 0x0008 */ long Lock;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ void* StubInfo;
  /* 0x0014 */ void* UserInfo;
  /* 0x0018 */ void* RuntimeInfo;
  /* 0x001c */ enum _RPC_ASYNC_EVENT Event;
  /* 0x0020 */ enum _RPC_NOTIFICATION_TYPES NotificationType;
  /* 0x0024 */ union _RPC_ASYNC_NOTIFICATION_INFO u;
  /* 0x0034 */ long Reserved[4];
} RPC_ASYNC_STATE, *PRPC_ASYNC_STATE; /* size: 0x0044 */

enum ESignalState
{
  none_ss = 0,
  pending_ss = 1,
  signaled_ss = 2,
  failed_ss = 3,
};

class CAsyncCall
{
  union
  {
    struct
    {
      /* 0x0000 */ enum BaseCallKind CallKind;
      /* 0x0100 */ unsigned long _iRefCount;
      /* 0x0104 */ class CChannelObject* _pChnlObj;
      /* 0x0108 */ void* _pRequestBuffer;
      /* 0x010c */ unsigned long _lApt;
      /* 0x0110 */ enum tagAPTKIND _clientAptKind;
      /* 0x0114 */ struct _RPC_ASYNC_STATE _AsyncState;
      /* 0x0158 */ struct HWND__* _hwndSTA;
      /* 0x015c */ class CAsyncCall* _pNext;
      /* 0x0160 */ unsigned long _lFlags;
      /* 0x0164 */ enum ESignalState _eSignalState;
    }; /* size: 0x006c */
    /* 0x0000 */ class CAsyncCall* _aList[8];
    /* 0x0000 */ unsigned long _iNext;
  }; /* size: 0x006c */
}; /* size: 0x0168 */

