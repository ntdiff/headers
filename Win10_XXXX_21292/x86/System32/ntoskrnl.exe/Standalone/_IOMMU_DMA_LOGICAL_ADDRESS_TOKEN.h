typedef struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN
{
  /* 0x0000 */ unsigned __int64 LogicalAddressBase;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ long __PADDING__[1];
} IOMMU_DMA_LOGICAL_ADDRESS_TOKEN, *PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN; /* size: 0x0010 */

