typedef struct _NDK_SHARED_ENDPOINT_DISPATCH
{
  /* 0x0000 */ void* NdkCloseSharedEndpoint /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkGetLocalAddress /* function */;
} NDK_SHARED_ENDPOINT_DISPATCH, *PNDK_SHARED_ENDPOINT_DISPATCH; /* size: 0x0018 */

