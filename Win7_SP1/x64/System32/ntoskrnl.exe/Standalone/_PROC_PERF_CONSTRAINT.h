typedef struct _PROC_PERF_CONSTRAINT
{
  /* 0x0000 */ struct _KPRCB* Prcb;
  /* 0x0008 */ unsigned __int64 PerfContext;
  /* 0x0010 */ unsigned long PercentageCap;
  /* 0x0014 */ unsigned long ThermalCap;
  /* 0x0018 */ unsigned long TargetFrequency;
  /* 0x001c */ unsigned long AcumulatedFullFrequency;
  /* 0x0020 */ unsigned long AcumulatedZeroFrequency;
  /* 0x0024 */ unsigned long FrequencyHistoryTotal;
  /* 0x0028 */ unsigned long AverageFrequency;
  /* 0x002c */ long __PADDING__[1];
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x0030 */

