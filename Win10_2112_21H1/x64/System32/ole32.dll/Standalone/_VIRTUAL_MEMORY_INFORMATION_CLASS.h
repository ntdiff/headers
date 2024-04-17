typedef enum _VIRTUAL_MEMORY_INFORMATION_CLASS
{
  VmPrefetchInformation = 0,
  VmPagePriorityInformation = 1,
  VmCfgCallTargetInformation = 2,
  VmPageDirtyStateInformation = 3,
  VmImageHotPatchInformation = 4,
  VmPhysicalContiguityInformation = 5,
  VmVirtualMachinePrepopulateInformation = 6,
} VIRTUAL_MEMORY_INFORMATION_CLASS, *PVIRTUAL_MEMORY_INFORMATION_CLASS;

