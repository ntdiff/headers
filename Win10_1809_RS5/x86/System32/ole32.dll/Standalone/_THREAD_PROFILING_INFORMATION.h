typedef struct _THREAD_PROFILING_INFORMATION
{
  /* 0x0000 */ unsigned __int64 HardwareCounters;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Enable;
  /* 0x0010 */ struct _THREAD_PERFORMANCE_DATA* PerformanceData;
  /* 0x0014 */ long __PADDING__[1];
} THREAD_PROFILING_INFORMATION, *PTHREAD_PROFILING_INFORMATION; /* size: 0x0018 */

