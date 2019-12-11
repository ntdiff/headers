typedef struct _NDK_CONNECTOR_DISPATCH
{
  /* 0x0000 */ void* NdkCloseConnector /* function */;
  /* 0x0004 */ void* NdkQueryExtension /* function */;
  /* 0x0008 */ void* NdkConnect /* function */;
  /* 0x000c */ void* NdkConnectWithSharedEndpoint /* function */;
  /* 0x0010 */ void* NdkCompleteConnect /* function */;
  /* 0x0014 */ void* NdkAccept /* function */;
  /* 0x0018 */ void* NdkReject /* function */;
  /* 0x001c */ void* NdkGetConnectionData /* function */;
  /* 0x0020 */ void* NdkGetLocalAddress /* function */;
  /* 0x0024 */ void* NdkGetPeerAddress /* function */;
  /* 0x0028 */ void* NdkDisconnect /* function */;
} NDK_CONNECTOR_DISPATCH, *PNDK_CONNECTOR_DISPATCH; /* size: 0x002c */

