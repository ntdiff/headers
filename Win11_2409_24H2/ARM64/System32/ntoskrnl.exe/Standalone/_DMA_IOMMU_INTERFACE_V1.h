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

