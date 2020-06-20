typedef struct _NDK_ADAPTER_DISPATCH
{
  /* 0x0000 */ void* NdkQueryExtension /* function */;
  /* 0x0008 */ void* NdkQueryAdapterInfo /* function */;
  /* 0x0010 */ void* NdkCreateCq /* function */;
  /* 0x0018 */ void* NdkCreatePd /* function */;
  /* 0x0020 */ void* NdkCreateSharedEndpoint /* function */;
  /* 0x0028 */ void* NdkCreateConnector /* function */;
  /* 0x0030 */ void* NdkCreateListener /* function */;
  /* 0x0038 */ void* NdkBuildLAM /* function */;
  /* 0x0040 */ void* NdkReleaseLAM /* function */;
} NDK_ADAPTER_DISPATCH, *PNDK_ADAPTER_DISPATCH; /* size: 0x0048 */

