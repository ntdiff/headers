typedef enum _WORKING_SET_TYPE
{
  WorkingSetTypeUser = 0,
  WorkingSetTypeSession = 1,
  WorkingSetTypeSystemTypes = 2,
  WorkingSetTypeSystemCache = 2,
  WorkingSetTypePagedPool = 3,
  WorkingSetTypeSystemPtes = 4,
  WorkingSetTypeMaximum = 5,
} WORKING_SET_TYPE, *PWORKING_SET_TYPE;

