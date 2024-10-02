typedef struct _DMA_IOMMU_INTERFACE_V2
{
  /* 0x0000 */ void* CreateDomainEx /* function */;
  /* 0x0008 */ void* DeleteDomain /* function */;
  /* 0x0010 */ void* AttachDeviceEx /* function */;
  /* 0x0018 */ void* DetachDeviceEx /* function */;
  /* 0x0020 */ void* FlushDomain /* function */;
  /* 0x0028 */ void* FlushDomainByVaList /* function */;
  /* 0x0030 */ void* QueryInputMappings /* function */;
  /* 0x0038 */ void* MapLogicalRangeEx /* function */;
  /* 0x0040 */ void* UnmapLogicalRange /* function */;
  /* 0x0048 */ void* MapIdentityRangeEx /* function */;
  /* 0x0050 */ void* UnmapIdentityRangeEx /* function */;
  /* 0x0058 */ void* SetDeviceFaultReportingEx /* function */;
  /* 0x0060 */ void* ConfigureDomain /* function */;
  /* 0x0068 */ void* QueryAvailableDomainTypes /* function */;
  /* 0x0070 */ void* RegisterInterfaceStateChangeCallback /* function */;
  /* 0x0078 */ void* UnregisterInterfaceStateChangeCallback /* function */;
  /* 0x0080 */ void* ReserveLogicalAddressRange /* function */;
  /* 0x0088 */ void* FreeReservedLogicalAddressRange /* function */;
  /* 0x0090 */ void* MapReservedLogicalRange /* function */;
  /* 0x0098 */ void* UnmapReservedLogicalRange /* function */;
  /* 0x00a0 */ void* CreateDevice /* function */;
  /* 0x00a8 */ void* DeleteDevice /* function */;
} DMA_IOMMU_INTERFACE_V2, *PDMA_IOMMU_INTERFACE_V2; /* size: 0x00b0 */

