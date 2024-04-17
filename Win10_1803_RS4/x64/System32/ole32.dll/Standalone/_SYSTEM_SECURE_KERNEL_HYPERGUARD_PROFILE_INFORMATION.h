typedef struct _SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION
{
  /* 0x0000 */ unsigned long ExtentCount;
  /* 0x0004 */ unsigned long ValidStructureSize;
  /* 0x0008 */ unsigned long NextExtentIndex;
  /* 0x000c */ unsigned long ExtentRestart;
  /* 0x0010 */ unsigned long CycleCount;
  /* 0x0014 */ unsigned long TimeoutCount;
  /* 0x0018 */ unsigned __int64 CycleTime;
  /* 0x0020 */ unsigned __int64 CycleTimeMax;
  /* 0x0028 */ unsigned __int64 ExtentTime;
  /* 0x0030 */ unsigned long ExtentTimeIndex;
  /* 0x0034 */ unsigned long ExtentTimeMaxIndex;
  /* 0x0038 */ unsigned __int64 ExtentTimeMax;
  /* 0x0040 */ unsigned __int64 HyperFlushTimeMax;
  /* 0x0048 */ unsigned __int64 TranslateVaTimeMax;
  /* 0x0050 */ unsigned __int64 DebugExemptionCount;
  /* 0x0058 */ unsigned __int64 TbHitCount;
  /* 0x0060 */ unsigned __int64 TbMissCount;
  /* 0x0068 */ unsigned __int64 VinaPendingYield;
  /* 0x0070 */ unsigned __int64 HashCycles;
  /* 0x0078 */ unsigned long HistogramOffset;
  /* 0x007c */ unsigned long HistogramBuckets;
  /* 0x0080 */ unsigned long HistogramShift;
  /* 0x0084 */ unsigned long Reserved1;
  /* 0x0088 */ unsigned __int64 PageNotPresentCount;
} SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION, *PSYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION; /* size: 0x0090 */

