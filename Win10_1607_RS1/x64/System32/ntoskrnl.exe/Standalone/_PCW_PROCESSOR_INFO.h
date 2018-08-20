typedef struct _PCW_PROCESSOR_INFO
{
  /* 0x0000 */ unsigned __int64 IdleTime;
  /* 0x0008 */ unsigned __int64 AvailableTime;
  /* 0x0010 */ unsigned __int64 UserTime;
  /* 0x0018 */ unsigned __int64 KernelTime;
  /* 0x0020 */ unsigned long Interrupts;
  /* 0x0028 */ unsigned __int64 DpcTime;
  /* 0x0030 */ unsigned __int64 InterruptTime;
  /* 0x0038 */ unsigned long ClockInterrupts;
  /* 0x003c */ unsigned long DpcCount;
  /* 0x0040 */ unsigned long DpcRate;
  /* 0x0048 */ unsigned __int64 C1Time;
  /* 0x0050 */ unsigned __int64 C2Time;
  /* 0x0058 */ unsigned __int64 C3Time;
  /* 0x0060 */ unsigned __int64 C1Transitions;
  /* 0x0068 */ unsigned __int64 C2Transitions;
  /* 0x0070 */ unsigned __int64 C3Transitions;
  /* 0x0078 */ unsigned __int64 StallTime;
  /* 0x0080 */ unsigned long ParkingStatus;
  /* 0x0084 */ unsigned long CurrentFrequency;
  /* 0x0088 */ unsigned long PercentMaxFrequency;
  /* 0x008c */ unsigned long StateFlags;
  /* 0x0090 */ unsigned long NominalThroughput;
  /* 0x0094 */ unsigned long ActiveThroughput;
  /* 0x0098 */ unsigned __int64 ScaledThroughput;
  /* 0x00a0 */ unsigned __int64 ScaledKernelThroughput;
  /* 0x00a8 */ unsigned __int64 AverageIdleTime;
  /* 0x00b0 */ unsigned __int64 IdleBreakEvents;
  /* 0x00b8 */ unsigned long PerformanceLimit;
  /* 0x00bc */ unsigned long PerformanceLimitFlags;
} PCW_PROCESSOR_INFO, *PPCW_PROCESSOR_INFO; /* size: 0x00c0 */

