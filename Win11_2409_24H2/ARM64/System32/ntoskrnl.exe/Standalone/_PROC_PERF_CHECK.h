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

typedef struct _PROC_PERF_CHECK
{
  /* 0x0000 */ unsigned __int64 LastActive;
  /* 0x0008 */ unsigned __int64 LastTime;
  /* 0x0010 */ unsigned __int64 LastStall;
  /* 0x0018 */ unsigned long LastResponsivenessEvents;
  /* 0x0020 */ struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;
  /* 0x0058 */ struct _PROC_PERF_CHECK_CYCLE_SNAP* LastPerfCheckCycleSnap;
  /* 0x0060 */ struct _PROC_PERF_CHECK_SNAP CurrentSnap;
  /* 0x0098 */ struct _PROC_PERF_CHECK_CYCLE_SNAP* CurrentCycleSnap;
  /* 0x00a0 */ struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;
  /* 0x00d8 */ struct _PROC_PERF_CHECK_CYCLE_SNAP* LastDeliveredCycleSnap;
  /* 0x00e0 */ unsigned long LastDeliveredPerformance;
  /* 0x00e4 */ unsigned long LastDeliveredFrequency;
  /* 0x00e8 */ unsigned char TaggedThreadPercent[4];
  /* 0x00ec */ unsigned char ImportantPercent;
  /* 0x00ed */ unsigned char IdealPercent;
  /* 0x00ee */ unsigned char Class0FloorPerfSelection;
  /* 0x00ef */ unsigned char Class1MinimumPerfSelection;
  /* 0x00f0 */ unsigned long CurrentResponsivenessEvents;
  /* 0x00f8 */ unsigned __int64 CyclesByFreqBand[48][3];
} PROC_PERF_CHECK, *PPROC_PERF_CHECK; /* size: 0x0578 */

