typedef struct _IOMMU_DMA_DEVICE_INFORMATION
{
  /* 0x0000 */ unsigned char DefaultPasidEnabled;
  /* 0x0001 */ unsigned char PasidTaggedDmaEnabled;
  /* 0x0002 */ unsigned char PasidFaultsSuppressed;
} IOMMU_DMA_DEVICE_INFORMATION, *PIOMMU_DMA_DEVICE_INFORMATION; /* size: 0x0003 */

