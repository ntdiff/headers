typedef struct _NDK_PD_DISPATCH
{
  /* 0x0000 */ void* NdkClosePd /* function */;
  /* 0x0004 */ void* NdkQueryExtension /* function */;
  /* 0x0008 */ void* NdkCreateMr /* function */;
  /* 0x000c */ void* NdkCreateMw /* function */;
  /* 0x0010 */ void* NdkCreateSrq /* function */;
  /* 0x0014 */ void* NdkCreateQp /* function */;
  /* 0x0018 */ void* NdkCreateQpWithSrq /* function */;
  /* 0x001c */ void* NdkGetPrivilegedMemoryRegionToken /* function */;
} NDK_PD_DISPATCH, *PNDK_PD_DISPATCH; /* size: 0x0020 */

