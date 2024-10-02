typedef enum _CM_HIVE_CACHE_EVENT_TYPE
{
  OplockEventOnPrimary = 0,
  OplockEventOnLog1 = 1,
  OplockEventOnLog2 = 2,
  OplockBreakThreadKillEvent = 3,
  HiveCachePopulateFinished = 4,
  HiveCachePopulateExit = 5,
  OplockBreakThreadWaitEventsMax = 4,
  HiveCacheRelatedEventsMax = 6,
} CM_HIVE_CACHE_EVENT_TYPE, *PCM_HIVE_CACHE_EVENT_TYPE;

