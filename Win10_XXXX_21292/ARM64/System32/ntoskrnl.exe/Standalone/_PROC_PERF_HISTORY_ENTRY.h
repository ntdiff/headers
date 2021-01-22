typedef struct _PROC_PERF_HISTORY_ENTRY
{
  /* 0x0000 */ unsigned short Utility;
  /* 0x0002 */ unsigned short AffinitizedUtility;
  /* 0x0004 */ unsigned short Frequency;
  /* 0x0006 */ unsigned char ImportantPercent;
  /* 0x0007 */ unsigned char TaggedPercent[4];
  /* 0x000b */ char __PADDING__[1];
} PROC_PERF_HISTORY_ENTRY, *PPROC_PERF_HISTORY_ENTRY; /* size: 0x000c */

