typedef enum _MI_SLAB_ALLOCATOR_PROTECTION
{
  MiSlabAllocatorProtectionReadExecute = 0,
  MiSlabAllocatorProtectionReadOnly = 1,
  MiSlabAllocatorProtectionNoAccess = 2,
  MiSlabAllocatorProtectionKernelShadowStack = 3,
  MiSlabAllocatorProtectionReadWrite = 4,
  MiSlabAllocatorProtectionMax = 5,
} MI_SLAB_ALLOCATOR_PROTECTION, *PMI_SLAB_ALLOCATOR_PROTECTION;

