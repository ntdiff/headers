typedef struct _PROC_PERF_CHECK_CYCLE_SNAP
{
  /* 0x0000 */ unsigned __int64 CyclesActive;
  /* 0x0008 */ unsigned __int64 CyclesAffinitized;
  /* 0x0010 */ unsigned __int64 TaggedThreadCycles[4];
  /* 0x0030 */ unsigned long WorkloadClasses;
  /* 0x0038 */ unsigned __int64 ThreadTypeCycles[1];
} PROC_PERF_CHECK_CYCLE_SNAP, *PPROC_PERF_CHECK_CYCLE_SNAP; /* size: 0x0040 */

