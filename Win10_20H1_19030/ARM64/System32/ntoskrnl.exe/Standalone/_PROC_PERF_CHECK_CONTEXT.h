typedef struct _PROC_PERF_CHECK_CONTEXT
{
  /* 0x0000 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0008 */ struct _PROC_PERF_CONSTRAINT* Constraint;
  /* 0x0010 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0018 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0020 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0028 */ unsigned long Utility;
  /* 0x002c */ unsigned long AffinitizedUtility;
  /* 0x0030 */ unsigned long MediaUtility;
  /* 0x0034 */ unsigned short LatestAffinitizedPercent;
  /* 0x0036 */ unsigned short AveragePerformancePercent;
  /* 0x0038 */ unsigned long RelativePerformance;
  /* 0x003c */ long __PADDING__[1];
} PROC_PERF_CHECK_CONTEXT, *PPROC_PERF_CHECK_CONTEXT; /* size: 0x0040 */

