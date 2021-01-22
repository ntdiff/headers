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
  /* 0x0090 */ unsigned __int64 TaggedThreadCycles[4];
  /* 0x00b0 */ unsigned long ResponsivenessEvents;
  /* 0x00b4 */ long __PADDING__[1];
} PROC_PERF_CHECK_SNAP, *PPROC_PERF_CHECK_SNAP; /* size: 0x00b8 */

typedef struct _PROC_PERF_CHECK
{
  /* 0x0000 */ unsigned __int64 LastActive;
  /* 0x0008 */ unsigned __int64 LastTime;
  /* 0x0010 */ unsigned __int64 LastStall;
  /* 0x0018 */ unsigned long LastResponsivenessEvents;
  /* 0x0020 */ struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;
  /* 0x00d8 */ struct _PROC_PERF_CHECK_SNAP CurrentSnap;
  /* 0x0190 */ struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;
  /* 0x0248 */ unsigned long LastDeliveredPerformance;
  /* 0x024c */ unsigned long LastDeliveredFrequency;
  /* 0x0250 */ unsigned char TaggedThreadPercent[4];
  /* 0x0254 */ unsigned char ImportantPercent;
  /* 0x0255 */ unsigned char Class0FloorPerfSelection;
  /* 0x0256 */ unsigned char Class1MinimumPerfSelection;
  /* 0x0258 */ unsigned long CurrentResponsivenessEvents;
  /* 0x0260 */ unsigned __int64 CyclesByFreqBand[48][3];
} PROC_PERF_CHECK, *PPROC_PERF_CHECK; /* size: 0x06e0 */

