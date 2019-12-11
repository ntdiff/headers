typedef struct _NDK_PD_DISPATCH
{
  /* 0x0000 */ void* NdkClosePd /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkCreateMr /* function */;
  /* 0x0018 */ void* NdkCreateMw /* function */;
  /* 0x0020 */ void* NdkCreateSrq /* function */;
  /* 0x0028 */ void* NdkCreateQp /* function */;
  /* 0x0030 */ void* NdkCreateQpWithSrq /* function */;
  /* 0x0038 */ void* NdkGetPrivilegedMemoryRegionToken /* function */;
} NDK_PD_DISPATCH, *PNDK_PD_DISPATCH; /* size: 0x0040 */

