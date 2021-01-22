typedef struct _IOMMU_DMA_RESERVED_REGION
{
  /* 0x0000 */ struct _IOMMU_DMA_RESERVED_REGION* RegionNext;
  /* 0x0008 */ unsigned __int64 Base;
  /* 0x0010 */ unsigned long NumberOfPages;
  /* 0x0014 */ unsigned char ShouldMap;
  /* 0x0015 */ char __PADDING__[3];
} IOMMU_DMA_RESERVED_REGION, *PIOMMU_DMA_RESERVED_REGION; /* size: 0x0018 */

