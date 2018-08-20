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
  CmpFailureInjectionPointCount = 11,
} CMP_FAILURE_INJECTION_POINT, *PCMP_FAILURE_INJECTION_POINT;

