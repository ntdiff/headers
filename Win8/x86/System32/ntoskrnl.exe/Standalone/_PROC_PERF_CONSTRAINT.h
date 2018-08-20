typedef struct _PROC_PERF_CONSTRAINT
{
  /* 0x0000 */ struct _KPRCB* Prcb;
  /* 0x0004 */ unsigned long PerfContext;
  /* 0x0008 */ unsigned long PlatformCap;
  /* 0x000c */ unsigned long ThermalCap;
  /* 0x0010 */ unsigned long LimitReasons;
  /* 0x0018 */ unsigned __int64 PlatformCapStartTime;
  /* 0x0020 */ unsigned long TargetPercent;
  /* 0x0024 */ unsigned long DesiredPercent;
  /* 0x0028 */ unsigned long SelectedPercent;
  /* 0x002c */ unsigned long SelectedFrequency;
  /* 0x0030 */ unsigned long PreviousFrequency;
  /* 0x0034 */ unsigned long PreviousPercent;
  /* 0x0038 */ unsigned long LatestFrequencyPercent;
  /* 0x0040 */ unsigned __int64 SelectedState;
  /* 0x0048 */ unsigned char Force;
  /* 0x0049 */ char __PADDING__[7];
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x0050 */

