typedef enum _MI_WORKING_SET_TYPE
{
  MiWorkingSetTypeSystemCache = 0,
  MiWorkingSetTypePagedPool = 1,
  MiWorkingSetTypeSystemPtes = 2,
  MiWorkingSetTypeMaximum = 3,
} MI_WORKING_SET_TYPE, *PMI_WORKING_SET_TYPE;

