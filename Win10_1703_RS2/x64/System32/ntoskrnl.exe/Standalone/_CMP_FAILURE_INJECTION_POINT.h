typedef enum _CMP_FAILURE_INJECTION_POINT
{
  CmpFailurePointPoolAllocation = 0,
  CmpFailurePointViewMapping = 1,
  CmpFailurePointViewPinning = 2,
  CmpFailurePointResourceCharging = 3,
  CmpFailurePointFileWrite = 4,
  CmpFailurePointFileRead = 5,
  CmpFailurePointCacheFlush = 6,
  CmpFailurePointFlush = 7,
  CmpFailurePointFlushAndPurge = 8,
  CmpFailurePointForceLargeBin = 9,
  CmpFailurePointDontFixAlignment = 10,
  CmpFailurePointAllocateCell = 11,
  CmpFailurePointMarkDirty = 12,
  CmpFailurePointAllocateKcb = 13,
  CmpFailurePointCreateKeyBody = 14,
  CmpFailurePointForcePoolAllocateKcb = 15,
  CmpFailurePointForceFreeKcb = 16,
  CmpFailureInjectionPointCount = 17,
} CMP_FAILURE_INJECTION_POINT, *PCMP_FAILURE_INJECTION_POINT;

