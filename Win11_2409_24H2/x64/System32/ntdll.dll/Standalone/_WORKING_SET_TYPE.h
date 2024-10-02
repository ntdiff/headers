typedef enum _WORKING_SET_TYPE
{
  WorkingSetTypeUser = 0,
  WorkingSetTypeSystemCache = 1,
  WorkingSetTypeSystemTypes = 1,
  WorkingSetTypePagedPool = 2,
  WorkingSetTypeSystemViews = 3,
  WorkingSetTypeSystemDataViews = 4,
  WorkingSetTypePagableMaximum = 4,
  WorkingSetTypeSystemPtes = 5,
  WorkingSetTypeKernelStacks = 6,
  WorkingSetTypeNonPagedPool = 7,
  WorkingSetTypeSystemSoftWsles = 8,
  WorkingSetTypeLinearAddressProtected = 9,
  WorkingSetTypeMaximum = 10,
} WORKING_SET_TYPE, *PWORKING_SET_TYPE;

