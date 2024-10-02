typedef struct _PROC_PERF_CHECK_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Active;
  /* 0x0010 */ unsigned __int64 Stall;
  /* 0x0018 */ unsigned __int64 FrequencyScaledActive;
  /* 0x0020 */ unsigned __int64 PerformanceScaledActive;
  /* 0x0028 */ unsigned __int64 PerformanceScaledKernelActive;
  /* 0x0030 */ unsigned long ResponsivenessEvents;
  /* 0x0034 */ long __PADDING__[1];
} PROC_PERF_CHECK_SNAP, *PPROC_PERF_CHECK_SNAP; /* size: 0x0038 */

