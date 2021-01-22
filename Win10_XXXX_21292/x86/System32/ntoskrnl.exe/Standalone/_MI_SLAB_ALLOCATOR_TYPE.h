typedef enum _MI_SLAB_ALLOCATOR_TYPE
{
  MiSlabAllocatorTypeSlatProtectedStart = 0,
  MiSlabAllocatorTypeExecuteProtected = 0,
  MiSlabAllocatorTypeReadOnlyProtected = 1,
  MiSlabAllocatorTypeNoAccessProtected = 2,
  MiSlabAllocatorTypeKernelShadowStackProtected = 3,
  MiSlabAllocatorTypeSlatProtectedLast = 3,
  MiSlabAllocatorTypeSlatUnprotectedStart = 4,
  MiSlabAllocatorTypeExecuteUnprotected = 4,
  MiSlabAllocatorTypeReadOnlyUnprotected = 5,
  MiSlabAllocatorTypeReadWriteUnprotected = 6,
  MiSlabAllocatorTypeSlatUnprotectedLast = 6,
  MiSlabAllocatorTypeMax = 7,
} MI_SLAB_ALLOCATOR_TYPE, *PMI_SLAB_ALLOCATOR_TYPE;

