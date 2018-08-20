typedef struct _PROC_PERF_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 LastTime;
  /* 0x0010 */ unsigned __int64 Active;
  /* 0x0018 */ unsigned __int64 LastActive;
  /* 0x0020 */ unsigned __int64 FrequencyScaledActive;
  /* 0x0028 */ unsigned __int64 PerformanceScaledActive;
  /* 0x0030 */ unsigned __int64 CyclesActive;
  /* 0x0038 */ unsigned __int64 CyclesAffinitized;
} PROC_PERF_SNAP, *PPROC_PERF_SNAP; /* size: 0x0040 */

