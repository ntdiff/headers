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
  /* 0x0050 */ unsigned long ResponsivenessEvents;
  /* 0x0054 */ long __PADDING__[1];
} PROC_PERF_CHECK_SNAP, *PPROC_PERF_CHECK_SNAP; /* size: 0x0058 */

typedef struct _PROC_PERF_CHECK
{
  /* 0x0000 */ unsigned __int64 LastActive;
  /* 0x0008 */ unsigned __int64 LastTime;
  /* 0x0010 */ unsigned __int64 LastStall;
  /* 0x0018 */ unsigned long LastResponsivenessEvents;
  /* 0x0020 */ struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;
  /* 0x0078 */ struct _PROC_PERF_CHECK_SNAP CurrentSnap;
  /* 0x00d0 */ struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;
  /* 0x0128 */ unsigned long LastDeliveredPerformance;
  /* 0x012c */ unsigned long LastDeliveredFrequency;
  /* 0x0130 */ unsigned char TaggedThreadPercent[2];
  /* 0x0132 */ unsigned char Class0FloorPerfSelection;
  /* 0x0133 */ unsigned char Class1MinimumPerfSelection;
  /* 0x0134 */ unsigned long CurrentResponsivenessEvents;
} PROC_PERF_CHECK, *PPROC_PERF_CHECK; /* size: 0x0138 */

