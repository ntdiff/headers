typedef struct _NDK_CONNECTOR_DISPATCH
{
  /* 0x0000 */ void* NdkCloseConnector /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkConnect /* function */;
  /* 0x0018 */ void* NdkConnectWithSharedEndpoint /* function */;
  /* 0x0020 */ void* NdkCompleteConnect /* function */;
  /* 0x0028 */ void* NdkAccept /* function */;
  /* 0x0030 */ void* NdkReject /* function */;
  /* 0x0038 */ void* NdkGetConnectionData /* function */;
  /* 0x0040 */ void* NdkGetLocalAddress /* function */;
  /* 0x0048 */ void* NdkGetPeerAddress /* function */;
  /* 0x0050 */ void* NdkDisconnect /* function */;
} NDK_CONNECTOR_DISPATCH, *PNDK_CONNECTOR_DISPATCH; /* size: 0x0058 */

