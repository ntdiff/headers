typedef struct _PROC_FEEDBACK
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0008 */ unsigned __int64 CyclesLast;
  /* 0x0010 */ unsigned __int64 CyclesActive;
  /* 0x0018 */ struct _PROC_FEEDBACK_COUNTER* Counters[2];
  /* 0x0020 */ unsigned __int64 LastUpdateTime;
  /* 0x0028 */ unsigned __int64 UnscaledTime;
  /* 0x0030 */ volatile __int64 UnaccountedTime;
  /* 0x0038 */ unsigned __int64 ScaledTime[2];
  /* 0x0048 */ unsigned __int64 UnaccountedKernelTime;
  /* 0x0050 */ unsigned __int64 PerformanceScaledKernelTime;
  /* 0x0058 */ unsigned long UserTimeLast;
  /* 0x005c */ unsigned long KernelTimeLast;
  /* 0x0060 */ unsigned __int64 IdleGenerationNumberLast;
  /* 0x0068 */ unsigned __int64 HvActiveTimeLast;
  /* 0x0070 */ unsigned __int64 StallCyclesLast;
  /* 0x0078 */ unsigned __int64 StallTime;
  /* 0x0080 */ unsigned char KernelTimesIndex;
  /* 0x0081 */ unsigned char CounterDiscardsIdleTime;
  /* 0x0082 */ char __PADDING__[6];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0088 */

