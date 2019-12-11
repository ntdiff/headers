typedef struct _NDK_ADAPTER_DISPATCH
{
  /* 0x0000 */ void* NdkQueryExtension /* function */;
  /* 0x0004 */ void* NdkQueryAdapterInfo /* function */;
  /* 0x0008 */ void* NdkCreateCq /* function */;
  /* 0x000c */ void* NdkCreatePd /* function */;
  /* 0x0010 */ void* NdkCreateSharedEndpoint /* function */;
  /* 0x0014 */ void* NdkCreateConnector /* function */;
  /* 0x0018 */ void* NdkCreateListener /* function */;
  /* 0x001c */ void* NdkBuildLAM /* function */;
  /* 0x0020 */ void* NdkReleaseLAM /* function */;
} NDK_ADAPTER_DISPATCH, *PNDK_ADAPTER_DISPATCH; /* size: 0x0024 */

