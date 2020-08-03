typedef struct _NDK_SRQ_DISPATCH
{
  /* 0x0000 */ void* NdkCloseSrq /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkModifySrq /* function */;
  /* 0x0018 */ void* NdkSrqReceive /* function */;
} NDK_SRQ_DISPATCH, *PNDK_SRQ_DISPATCH; /* size: 0x0020 */

