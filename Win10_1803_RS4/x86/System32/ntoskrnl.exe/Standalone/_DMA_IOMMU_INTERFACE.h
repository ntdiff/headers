typedef struct _DMA_IOMMU_INTERFACE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ void* CreateDomain /* function */;
  /* 0x0008 */ void* DeleteDomain /* function */;
  /* 0x000c */ void* AttachDevice /* function */;
  /* 0x0010 */ void* DetachDevice /* function */;
  /* 0x0014 */ void* ConfigureDomain /* function */;
  /* 0x0018 */ void* FlushDomain /* function */;
  /* 0x001c */ void* FlushDomainByVaList /* function */;
  /* 0x0020 */ void* QueryInputMappings /* function */;
  /* 0x0024 */ void* MapLogicalRange /* function */;
  /* 0x0028 */ void* UnmapLogicalRange /* function */;
  /* 0x002c */ void* MapIdentityRange /* function */;
  /* 0x0030 */ void* UnmapIdentityRange /* function */;
} DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE; /* size: 0x0034 */

