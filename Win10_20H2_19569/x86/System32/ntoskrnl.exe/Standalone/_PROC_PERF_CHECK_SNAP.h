typedef struct _PROC_PERF_CHECK_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Active;
  /* 0x0010 */ unsigned __int64 Stall;
  /* 0x0018 */ unsigned __int64 FrequencyScaledActive;
  /* 0x0020 */ unsigned __int64 PerformanceScaledActive;
  /* 0x0028 */ unsigned __int64 PerformanceScaledKernelActive;
  /* 0x0030 */ unsigned __int64 CyclesActive;
  /* 0x0038 */ unsigned __int64 CyclesAffinitized;
  /* 0x0040 */ unsigned __int64 ThreadTypeCycles[2][5];
  /* 0x0090 */ unsigned __int64 TaggedThreadCycles[3];
  /* 0x00a8 */ unsigned long ResponsivenessEvents;
  /* 0x00ac */ long __PADDING__[1];
} PROC_PERF_CHECK_SNAP, *PPROC_PERF_CHECK_SNAP; /* size: 0x00b0 */

