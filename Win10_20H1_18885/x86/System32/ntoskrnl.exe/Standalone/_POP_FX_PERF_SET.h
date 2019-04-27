typedef struct _POP_FX_PERF_SET
{
  /* 0x0000 */ struct _PO_FX_COMPONENT_PERF_SET* PerfSet;
  /* 0x0008 */ unsigned __int64 CurrentPerf;
  /* 0x0010 */ unsigned __int64 CurrentPerfStamp;
  /* 0x0018 */ unsigned char CurrentPerfNominal;
  /* 0x0019 */ char __PADDING__[7];
} POP_FX_PERF_SET, *PPOP_FX_PERF_SET; /* size: 0x0020 */

