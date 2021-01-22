typedef struct _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1
{
  /* 0x0000 */ void* AllocateLogicalAddress /* function */;
  /* 0x0008 */ void* FreeLogicalAddress /* function */;
  /* 0x0010 */ void* ReserveLogicalAddress /* function */;
  /* 0x0018 */ void* QueryCapabilities /* function */;
  /* 0x0020 */ void* CleanUp /* function */;
} IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1, *PIOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1; /* size: 0x0028 */

