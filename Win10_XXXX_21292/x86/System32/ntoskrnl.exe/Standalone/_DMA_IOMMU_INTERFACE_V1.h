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

