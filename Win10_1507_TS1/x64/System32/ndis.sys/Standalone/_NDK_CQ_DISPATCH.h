typedef struct _NDK_CQ_DISPATCH
{
  /* 0x0000 */ void* NdkCloseCq /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkResizeCq /* function */;
  /* 0x0018 */ void* NdkArmCq /* function */;
  /* 0x0020 */ void* NdkGetCqResults /* function */;
  /* 0x0028 */ void* NdkControlCqInterruptModeration /* function */;
  /* 0x0030 */ void* NdkGetCqResultsEx /* function */;
} NDK_CQ_DISPATCH, *PNDK_CQ_DISPATCH; /* size: 0x0038 */

