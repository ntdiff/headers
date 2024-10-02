typedef enum _MI_WORKING_SET_TYPE
{
  MiWorkingSetTypeSystemCache = 0,
  MiWorkingSetTypePartitionMaximum = 1,
  MiWorkingSetTypeSystemViews = 1,
  MiWorkingSetTypeSystemDataViews = 2,
  MiWorkingSetTypePagedPool = 3,
  MiWorkingSetTypePagableMaximumInclusive = 3,
  MiWorkingSetTypeSystemPtes = 4,
  MiWorkingSetTypeKernelStacks = 5,
  MiWorkingSetTypeNonPagedPool = 6,
  MiWorkingSetTypeSystemSoftWsles = 7,
  MiWorkingSetTypeLinearProtected = 8,
  MiWorkingSetTypeMaximum = 9,
} MI_WORKING_SET_TYPE, *PMI_WORKING_SET_TYPE;

