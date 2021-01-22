typedef enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE
{
  IommuDmaLogicalAllocatorNone = 0,
  IommuDmaLogicalAllocatorBuddy = 1,
  IommuDmaLogicalAllocatorMax = 2,
} IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE, *PIOMMU_DMA_LOGICAL_ALLOCATOR_TYPE;

typedef struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG
{
  /* 0x0000 */ enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE LogicalAllocatorType;
  struct
  {
    /* 0x0004 */ unsigned long AddressWidth;
  } /* size: 0x0004 */ BuddyAllocatorConfig;
} IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG, *PIOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG; /* size: 0x0008 */

