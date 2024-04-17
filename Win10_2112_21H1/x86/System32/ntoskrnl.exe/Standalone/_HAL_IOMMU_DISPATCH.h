typedef struct _HAL_IOMMU_DISPATCH
{
  /* 0x0000 */ void* HalIommuSupportEnabled /* function */;
  /* 0x0004 */ void* HalIommuGetConfiguration /* function */;
  /* 0x0008 */ void* HalIommuGetLibraryContext /* function */;
  /* 0x000c */ void* HalIommuMapDevice /* function */;
  /* 0x0010 */ void* HalIommuEnableDevicePasid /* function */;
  /* 0x0014 */ void* HalIommuSetAddressSpace /* function */;
  /* 0x0018 */ void* HalIommuDisableDevicePasid /* function */;
  /* 0x001c */ void* HalIommuUnmapDevice /* function */;
  /* 0x0020 */ void* HalIommuFreeLibraryContext /* function */;
  /* 0x0024 */ void* HalIommuFlushTb /* function */;
  /* 0x0028 */ void* HalIommuFlushAllPasid /* function */;
  /* 0x002c */ void* HalIommuProcessPageRequestQueue /* function */;
  /* 0x0030 */ void* HalIommuFaultRoutine /* function */;
  /* 0x0034 */ void* HalIommuReferenceAsid /* function */;
  /* 0x0038 */ void* HalIommuDereferenceAsid /* function */;
  /* 0x003c */ void* HalIommuServicePageFault /* function */;
  /* 0x0040 */ void* HalIommuDevicePowerChange /* function */;
  /* 0x0044 */ void* HalIommuBeginDeviceReset /* function */;
  /* 0x0048 */ void* HalIommuFinalizeDeviceReset /* function */;
} HAL_IOMMU_DISPATCH, *PHAL_IOMMU_DISPATCH; /* size: 0x004c */

