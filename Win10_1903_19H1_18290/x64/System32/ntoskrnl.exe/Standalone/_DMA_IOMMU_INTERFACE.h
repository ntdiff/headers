typedef struct _DMA_IOMMU_INTERFACE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* CreateDomain /* function */;
  /* 0x0010 */ void* DeleteDomain /* function */;
  /* 0x0018 */ void* AttachDevice /* function */;
  /* 0x0020 */ void* DetachDevice /* function */;
  /* 0x0028 */ void* FlushDomain /* function */;
  /* 0x0030 */ void* FlushDomainByVaList /* function */;
  /* 0x0038 */ void* QueryInputMappings /* function */;
  /* 0x0040 */ void* MapLogicalRange /* function */;
  /* 0x0048 */ void* UnmapLogicalRange /* function */;
  /* 0x0050 */ void* MapIdentityRange /* function */;
  /* 0x0058 */ void* UnmapIdentityRange /* function */;
  /* 0x0060 */ void* SetDeviceFaultReporting /* function */;
  /* 0x0068 */ void* ConfigureDomain /* function */;
} DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE; /* size: 0x0070 */

