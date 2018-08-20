typedef enum _WORKING_SET_TYPE
{
  WorkingSetTypeUser = 0,
  WorkingSetTypeSession = 1,
  WorkingSetTypeSystemTypes = 2,
  WorkingSetTypeSystemCache = 2,
  WorkingSetTypePagedPool = 3,
  WorkingSetTypeSystemViews = 4,
  WorkingSetTypePagableMaximum = 4,
  WorkingSetTypeSystemPtes = 5,
  WorkingSetTypeKernelStacks = 6,
  WorkingSetTypeNonPagedPool = 7,
  WorkingSetTypeMaximum = 8,
} WORKING_SET_TYPE, *PWORKING_SET_TYPE;

