typedef enum _MI_KSTACK_TYPE
{
  MiRegularKstack = 0,
  MiShortLivedKstack = 1,
  MiXStateKstack = 2,
  MiKernelShadowStackTypeUserThread = 3,
  MiKernelShadowStackTypeKernelThread = 4,
  MiKernelShadowStackTypeRstorssp = 5,
  MiMaximumCachedKernelStackType = 5,
  MiKernelShadowStackTypeSetssbsy = 6,
  MiKernelShadowStackTypeSetssbsyForSystemStartup = 7,
  MiMaximumKstack = 8,
} MI_KSTACK_TYPE, *PMI_KSTACK_TYPE;

