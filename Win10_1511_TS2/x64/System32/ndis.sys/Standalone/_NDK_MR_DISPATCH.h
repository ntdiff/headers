typedef struct _NDK_MR_DISPATCH
{
  /* 0x0000 */ void* NdkCloseMr /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkRegisterMr /* function */;
  /* 0x0018 */ void* NdkDeregisterMr /* function */;
  /* 0x0020 */ void* NdkInitializeFastRegisterMr /* function */;
  /* 0x0028 */ void* NdkGetRemoteTokenFromMr /* function */;
  /* 0x0030 */ void* NdkGetLocalTokenFromMr /* function */;
} NDK_MR_DISPATCH, *PNDK_MR_DISPATCH; /* size: 0x0038 */

