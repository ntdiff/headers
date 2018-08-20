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
  /* 0x0040 */ unsigned __int64 TaggedThreadCycles[2];
} PROC_PERF_CHECK_SNAP, *PPROC_PERF_CHECK_SNAP; /* size: 0x0050 */

typedef struct _PROC_PERF_CHECK
{
  /* 0x0000 */ unsigned __int64 LastActive;
  /* 0x0008 */ unsigned __int64 LastTime;
  /* 0x0010 */ unsigned __int64 LastStall;
  /* 0x0018 */ struct _PROC_PERF_CHECK_SNAP Snap;
  /* 0x0068 */ struct _PROC_PERF_CHECK_SNAP TempSnap;
  /* 0x00b8 */ unsigned char TaggedThreadPercent[2];
  /* 0x00ba */ char __PADDING__[6];
} PROC_PERF_CHECK, *PPROC_PERF_CHECK; /* size: 0x00c0 */

