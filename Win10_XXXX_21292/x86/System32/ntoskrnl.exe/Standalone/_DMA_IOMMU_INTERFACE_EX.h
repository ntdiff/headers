typedef struct _DMA_IOMMU_INTERFACE_V1
{
  /* 0x0000 */ void* CreateDomain /* function */;
  /* 0x0004 */ void* DeleteDomain /* function */;
  /* 0x0008 */ void* AttachDevice /* function */;
  /* 0x000c */ void* DetachDevice /* function */;
  /* 0x0010 */ void* FlushDomain /* function */;
  /* 0x0014 */ void* FlushDomainByVaList /* function */;
  /* 0x0018 */ void* QueryInputMappings /* function */;
  /* 0x001c */ void* MapLogicalRange /* function */;
  /* 0x0020 */ void* UnmapLogicalRange /* function */;
  /* 0x0024 */ void* MapIdentityRange /* function */;
  /* 0x0028 */ void* UnmapIdentityRange /* function */;
  /* 0x002c */ void* SetDeviceFaultReporting /* function */;
  /* 0x0030 */ void* ConfigureDomain /* function */;
} DMA_IOMMU_INTERFACE_V1, *PDMA_IOMMU_INTERFACE_V1; /* size: 0x0034 */

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

typedef struct _DMA_IOMMU_INTERFACE_EX
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  union
  {
    /* 0x0008 */ struct _DMA_IOMMU_INTERFACE_V1 V1;
    /* 0x0008 */ struct _DMA_IOMMU_INTERFACE_V2 V2;
  }; /* size: 0x0058 */
} DMA_IOMMU_INTERFACE_EX, *PDMA_IOMMU_INTERFACE_EX; /* size: 0x0060 */

