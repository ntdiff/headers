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
      /* 0x0008 */ void* hThread;
    } /* size: 0x0010 */ APC;
    struct
    {
      /* 0x0000 */ void* hIOPort;
      /* 0x0008 */ unsigned long dwNumberOfBytesTransferred;
      /* 0x0010 */ unsigned __int64 dwCompletionKey;
      /* 0x0018 */ struct _OVERLAPPED* lpOverlapped;
    } /* size: 0x0020 */ IOC;
    struct
    {
      /* 0x0000 */ struct HWND__* hWnd;
      /* 0x0008 */ unsigned int Msg;
      /* 0x000c */ long __PADDING__[1];
    } /* size: 0x0010 */ HWND;
    /* 0x0000 */ void* hEvent;
    /* 0x0000 */ void* NotificationRoutine /* function */;
  }; /* size: 0x0020 */
} RPC_ASYNC_NOTIFICATION_INFO, *PRPC_ASYNC_NOTIFICATION_INFO; /* size: 0x0020 */

typedef struct _RPC_ASYNC_STATE
{
  /* 0x0000 */ unsigned int Size;
  /* 0x0004 */ unsigned long Signature;
  /* 0x0008 */ long Lock;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ void* StubInfo;
  /* 0x0018 */ void* UserInfo;
  /* 0x0020 */ void* RuntimeInfo;
  /* 0x0028 */ enum _RPC_ASYNC_EVENT Event;
  /* 0x002c */ enum _RPC_NOTIFICATION_TYPES NotificationType;
  /* 0x0030 */ union _RPC_ASYNC_NOTIFICATION_INFO u;
  /* 0x0050 */ __int64 Reserved[4];
} RPC_ASYNC_STATE, *PRPC_ASYNC_STATE; /* size: 0x0070 */

enum ESignalState
{
  none_ss = 0,
  pending_ss = 1,
  signaled_ss = 2,
  failed_ss = 3,
};

class CAsyncCall
{
  /* 0x0138 */ unsigned long _iRefCount;
  /* 0x013c */ unsigned long _lFlags;
  /* 0x0140 */ class CChannelObject* _pChnlObj;
  /* 0x0148 */ void* _pRequestBuffer;
  /* 0x0150 */ unsigned long _lApt;
  /* 0x0158 */ struct _RPC_ASYNC_STATE _AsyncState;
  /* 0x01c8 */ struct HWND__* _hwndSTA;
  /* 0x01d0 */ class CAsyncCall* _pNext;
  /* 0x01d8 */ enum ESignalState _eSignalState;
  union
  {
    /* 0x0000 */ class CAsyncCall* _aList[8];
    /* 0x0000 */ unsigned long _iNext;
  }; /* size: 0x0040 */
}; /* size: 0x01e0 */

