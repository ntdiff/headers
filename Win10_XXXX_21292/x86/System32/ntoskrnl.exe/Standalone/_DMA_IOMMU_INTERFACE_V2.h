typedef struct _DMA_IOMMU_INTERFACE_V2
{
  /* 0x0000 */ void* CreateDomainEx /* function */;
  /* 0x0004 */ void* DeleteDomain /* function */;
  /* 0x0008 */ void* AttachDeviceEx /* function */;
  /* 0x000c */ void* DetachDeviceEx /* function */;
  /* 0x0010 */ void* FlushDomain /* function */;
  /* 0x0014 */ void* FlushDomainByVaList /* function */;
  /* 0x0018 */ void* QueryInputMappings /* function */;
  /* 0x001c */ void* MapLogicalRangeEx /* function */;
  /* 0x0020 */ void* UnmapLogicalRange /* function */;
  /* 0x0024 */ void* MapIdentityRangeEx /* function */;
  /* 0x0028 */ void* UnmapIdentityRangeEx /* function */;
  /* 0x002c */ void* SetDeviceFaultReportingEx /* function */;
  /* 0x0030 */ void* ConfigureDomain /* function */;
  /* 0x0034 */ void* QueryAvailableDomainTypes /* function */;
  /* 0x0038 */ void* RegisterInterfaceStateChangeCallback /* function */;
  /* 0x003c */ void* UnregisterInterfaceStateChangeCallback /* function */;
  /* 0x0040 */ void* ReserveLogicalAddressRange /* function */;
  /* 0x0044 */ void* FreeReservedLogicalAddressRange /* function */;
  /* 0x0048 */ void* MapReservedLogicalRange /* function */;
  /* 0x004c */ void* UnmapReservedLogicalRange /* function */;
  /* 0x0050 */ void* CreateDevice /* function */;
  /* 0x0054 */ void* DeleteDevice /* function */;
} DMA_IOMMU_INTERFACE_V2, *PDMA_IOMMU_INTERFACE_V2; /* size: 0x0058 */

