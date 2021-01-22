typedef enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE
{
  IommuDmaLogicalAllocatorNone = 0,
  IommuDmaLogicalAllocatorBuddy = 1,
  IommuDmaLogicalAllocatorMax = 2,
} IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE, *PIOMMU_DMA_LOGICAL_ALLOCATOR_TYPE;

typedef struct _IOMMU_DMA_LOGICAL_ALLOCATOR
{
  /* 0x0000 */ struct _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1* Operations;
  /* 0x0008 */ unsigned long Version;
  /* 0x000c */ unsigned long Size;
  /* 0x0010 */ enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE AllocatorType;
  /* 0x0014 */ long __PADDING__[1];
} IOMMU_DMA_LOGICAL_ALLOCATOR, *PIOMMU_DMA_LOGICAL_ALLOCATOR; /* size: 0x0018 */

