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

