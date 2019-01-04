typedef struct _HAL_IOMMU_DISPATCH
{
  /* 0x0000 */ void* HalIommuSupportEnabled /* function */;
  /* 0x0008 */ void* HalIommuGetConfiguration /* function */;
  /* 0x0010 */ void* HalIommuGetLibraryContext /* function */;
  /* 0x0018 */ void* HalIommuMapDevice /* function */;
  /* 0x0020 */ void* HalIommuEnableDevicePasid /* function */;
  /* 0x0028 */ void* HalIommuSetAddressSpace /* function */;
  /* 0x0030 */ void* HalIommuDisableDevicePasid /* function */;
  /* 0x0038 */ void* HalIommuUnmapDevice /* function */;
  /* 0x0040 */ void* HalIommuFreeLibraryContext /* function */;
  /* 0x0048 */ void* HalIommuFlushTb /* function */;
  /* 0x0050 */ void* HalIommuFlushAllPasid /* function */;
  /* 0x0058 */ void* HalIommuProcessPageRequestQueue /* function */;
  /* 0x0060 */ void* HalIommuFaultRoutine /* function */;
  /* 0x0068 */ void* HalIommuReferenceAsid /* function */;
  /* 0x0070 */ void* HalIommuDereferenceAsid /* function */;
  /* 0x0078 */ void* HalIommuServicePageFault /* function */;
  /* 0x0080 */ void* HalIommuDevicePowerChange /* function */;
  /* 0x0088 */ void* HalIommuBeginDeviceReset /* function */;
  /* 0x0090 */ void* HalIommuFinalizeDeviceReset /* function */;
} HAL_IOMMU_DISPATCH, *PHAL_IOMMU_DISPATCH; /* size: 0x0098 */

