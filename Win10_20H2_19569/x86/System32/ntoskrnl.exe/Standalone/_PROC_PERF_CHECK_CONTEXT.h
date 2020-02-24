typedef struct _PROC_PERF_CHECK_CONTEXT
{
  /* 0x0000 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0004 */ struct _PROC_PERF_CONSTRAINT* Constraint;
  /* 0x0008 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x000c */ struct _PROC_PERF_LOAD* Load;
  /* 0x0010 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0014 */ unsigned long Utility;
  /* 0x0018 */ unsigned long AffinitizedUtility;
  /* 0x001c */ unsigned long MediaUtility;
  /* 0x0020 */ unsigned long ImportantUtility;
  /* 0x0024 */ unsigned short LatestAffinitizedPercent;
  /* 0x0026 */ unsigned short AveragePerformancePercent;
  /* 0x0028 */ unsigned long RelativePerformance;
} PROC_PERF_CHECK_CONTEXT, *PPROC_PERF_CHECK_CONTEXT; /* size: 0x002c */

