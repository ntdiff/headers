typedef struct _NDK_MW_DISPATCH
{
  /* 0x0000 */ void* NdkCloseMw /* function */;
  /* 0x0004 */ void* NdkQueryExtension /* function */;
  /* 0x0008 */ void* NdkGetRemoteTokenFromMw /* function */;
} NDK_MW_DISPATCH, *PNDK_MW_DISPATCH; /* size: 0x000c */

