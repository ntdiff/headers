typedef struct _PROC_PERF_CONSTRAINT
{
  /* 0x0000 */ struct _KPRCB* Prcb;
  /* 0x0004 */ unsigned long PerfContext;
  /* 0x0008 */ unsigned long PercentageCap;
  /* 0x000c */ unsigned long ThermalCap;
  /* 0x0010 */ unsigned long TargetFrequency;
  /* 0x0014 */ unsigned long AcumulatedFullFrequency;
  /* 0x0018 */ unsigned long AcumulatedZeroFrequency;
  /* 0x001c */ unsigned long FrequencyHistoryTotal;
  /* 0x0020 */ unsigned long AverageFrequency;
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x0024 */

