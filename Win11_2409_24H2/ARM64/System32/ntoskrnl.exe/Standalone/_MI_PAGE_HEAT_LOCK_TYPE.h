typedef enum _MI_PAGE_HEAT_LOCK_TYPE
{
  MiPageHeatLockTypeNone = 0,
  MiPageHeatLockTypeShared = 1,
  MiPageHeatLockTypeTryShared = 2,
  MiPageHeatLockTypeMax = 3,
} MI_PAGE_HEAT_LOCK_TYPE, *PMI_PAGE_HEAT_LOCK_TYPE;

