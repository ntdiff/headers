typedef struct _DMA_IOMMU_INTERFACE_V1
{
  /* 0x0000 */ void* CreateDomain /* function */;
  /* 0x0008 */ void* DeleteDomain /* function */;
  /* 0x0010 */ void* AttachDevice /* function */;
  /* 0x0018 */ void* DetachDevice /* function */;
  /* 0x0020 */ void* FlushDomain /* function */;
  /* 0x0028 */ void* FlushDomainByVaList /* function */;
  /* 0x0030 */ void* QueryInputMappings /* function */;
  /* 0x0038 */ void* MapLogicalRange /* function */;
  /* 0x0040 */ void* UnmapLogicalRange /* function */;
  /* 0x0048 */ void* MapIdentityRange /* function */;
  /* 0x0050 */ void* UnmapIdentityRange /* function */;
  /* 0x0058 */ void* SetDeviceFaultReporting /* function */;
  /* 0x0060 */ void* ConfigureDomain /* function */;
} DMA_IOMMU_INTERFACE_V1, *PDMA_IOMMU_INTERFACE_V1; /* size: 0x0068 */

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

typedef struct _DMA_IOMMU_INTERFACE_EX
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ unsigned long Version;
  union
  {
    /* 0x0010 */ struct _DMA_IOMMU_INTERFACE_V1 V1;
    /* 0x0010 */ struct _DMA_IOMMU_INTERFACE_V2 V2;
  }; /* size: 0x00b0 */
} DMA_IOMMU_INTERFACE_EX, *PDMA_IOMMU_INTERFACE_EX; /* size: 0x00c0 */

