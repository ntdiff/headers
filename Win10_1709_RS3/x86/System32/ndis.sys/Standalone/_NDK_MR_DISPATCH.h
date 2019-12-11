typedef struct _NDK_MR_DISPATCH
{
  /* 0x0000 */ void* NdkCloseMr /* function */;
  /* 0x0004 */ void* NdkQueryExtension /* function */;
  /* 0x0008 */ void* NdkRegisterMr /* function */;
  /* 0x000c */ void* NdkDeregisterMr /* function */;
  /* 0x0010 */ void* NdkInitializeFastRegisterMr /* function */;
  /* 0x0014 */ void* NdkGetRemoteTokenFromMr /* function */;
  /* 0x0018 */ void* NdkGetLocalTokenFromMr /* function */;
} NDK_MR_DISPATCH, *PNDK_MR_DISPATCH; /* size: 0x001c */

