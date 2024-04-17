typedef enum _CM_HIVE_CACHE_OPLOCK_EVENT_TYPE
{
  OplockEventOnPrimary = 0,
  OplockEventOnLog1 = 1,
  OplockEventOnLog2 = 2,
  OplockBreakThreadKillEvent = 3,
  OplockBreakThreadEndEvent = 4,
  OplockBreakThreadSyncEvent = 5,
  OplockBreakThreadWaitEventsMax = 4,
  OplockRelatedEventsMax = 6,
} CM_HIVE_CACHE_OPLOCK_EVENT_TYPE, *PCM_HIVE_CACHE_OPLOCK_EVENT_TYPE;

