typedef enum _MI_WORKING_SET_TYPE
{
  MiWorkingSetTypeSystemCache = 0,
  MiWorkingSetTypeSystemPtes = 1,
  MiWorkingSetTypePartitionMaximum = 1,
  MiWorkingSetTypePagedPool = 2,
  MiWorkingSetTypeMaximum = 3,
} MI_WORKING_SET_TYPE, *PMI_WORKING_SET_TYPE;

