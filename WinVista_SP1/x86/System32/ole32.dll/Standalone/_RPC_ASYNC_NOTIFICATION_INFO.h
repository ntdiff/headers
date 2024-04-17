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

