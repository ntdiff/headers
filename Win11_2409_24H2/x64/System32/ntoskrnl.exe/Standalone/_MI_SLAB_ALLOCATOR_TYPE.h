typedef enum _MI_SLAB_ALLOCATOR_TYPE
{
  MiSlabAllocatorTypeSlatProtectedStart = 0,
  MiSlabAllocatorTypeExecuteProtected = 0,
  MiSlabAllocatorTypeReadOnlyProtected = 1,
  MiSlabAllocatorTypeNoAccessProtected = 2,
  MiSlabAllocatorTypeKernelShadowStackProtected = 3,
  MiSlabAllocatorTypePagingProtected = 4,
  MiSlabAllocatorTypeSlatProtectedLast = 4,
  MiSlabAllocatorTypeSlatUnprotectedStart = 5,
  MiSlabAllocatorTypeImageUnprotected = 5,
  MiSlabAllocatorTypeGenericUnprotected = 6,
  MiSlabAllocatorTypeNonPagedUnprotected = 7,
  MiSlabAllocatorTypeIdentityUnprotected = 8,
  MiSlabAllocatorTypeSlatUnprotectedLast = 8,
  MiSlabAllocatorTypeMax = 9,
} MI_SLAB_ALLOCATOR_TYPE, *PMI_SLAB_ALLOCATOR_TYPE;

