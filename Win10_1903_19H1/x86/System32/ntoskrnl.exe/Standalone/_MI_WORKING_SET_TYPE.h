typedef enum _MI_WORKING_SET_TYPE
{
  MiWorkingSetTypeSystemCache = 0,
  MiWorkingSetTypeSystemViews = 1,
  MiWorkingSetTypePartitionMaximum = 1,
  MiWorkingSetTypePagedPool = 2,
  MiWorkingSetTypePagableMaximum = 2,
  MiWorkingSetTypeSystemPtes = 3,
  MiWorkingSetTypeKernelStacks = 4,
  MiWorkingSetTypeNonPagedPool = 5,
  MiWorkingSetTypeMaximum = 6,
} MI_WORKING_SET_TYPE, *PMI_WORKING_SET_TYPE;

