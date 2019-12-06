typedef struct _PROC_PERF_HISTORY_ENTRY
{
  /* 0x0000 */ unsigned short Utility;
  /* 0x0002 */ unsigned short AffinitizedUtility;
  /* 0x0004 */ unsigned short Frequency;
  /* 0x0006 */ unsigned char TaggedPercent[3];
  /* 0x0009 */ char __PADDING__[1];
} PROC_PERF_HISTORY_ENTRY, *PPROC_PERF_HISTORY_ENTRY; /* size: 0x000a */

typedef struct _PROC_PERF_HISTORY
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long Slot;
  /* 0x0008 */ unsigned long UtilityTotal;
  /* 0x000c */ unsigned long AffinitizedUtilityTotal;
  /* 0x0010 */ unsigned long FrequencyTotal;
  /* 0x0014 */ unsigned long TaggedPercentTotal[3];
  /* 0x0020 */ struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];
  /* 0x002a */ char __PADDING__[2];
} PROC_PERF_HISTORY, *PPROC_PERF_HISTORY; /* size: 0x002c */

