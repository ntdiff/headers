typedef struct _NDK_LISTENER_DISPATCH
{
  /* 0x0000 */ void* NdkCloseListener /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkListen /* function */;
  /* 0x0018 */ void* NdkGetLocalAddress /* function */;
  /* 0x0020 */ void* NdkControlConnectEvents /* function */;
} NDK_LISTENER_DISPATCH, *PNDK_LISTENER_DISPATCH; /* size: 0x0028 */

