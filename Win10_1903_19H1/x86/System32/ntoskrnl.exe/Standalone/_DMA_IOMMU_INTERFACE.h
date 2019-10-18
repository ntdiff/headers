typedef struct _DMA_IOMMU_INTERFACE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ void* CreateDomain /* function */;
  /* 0x0008 */ void* DeleteDomain /* function */;
  /* 0x000c */ void* AttachDevice /* function */;
  /* 0x0010 */ void* DetachDevice /* function */;
  /* 0x0014 */ void* FlushDomain /* function */;
  /* 0x0018 */ void* FlushDomainByVaList /* function */;
  /* 0x001c */ void* QueryInputMappings /* function */;
  /* 0x0020 */ void* MapLogicalRange /* function */;
  /* 0x0024 */ void* UnmapLogicalRange /* function */;
  /* 0x0028 */ void* MapIdentityRange /* function */;
  /* 0x002c */ void* UnmapIdentityRange /* function */;
  /* 0x0030 */ void* SetDeviceFaultReporting /* function */;
  /* 0x0034 */ void* ConfigureDomain /* function */;
} DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE; /* size: 0x0038 */

