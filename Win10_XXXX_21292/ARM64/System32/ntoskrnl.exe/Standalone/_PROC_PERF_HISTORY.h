typedef struct _PROC_PERF_HISTORY_ENTRY
{
  /* 0x0000 */ unsigned short Utility;
  /* 0x0002 */ unsigned short AffinitizedUtility;
  /* 0x0004 */ unsigned short Frequency;
  /* 0x0006 */ unsigned char ImportantPercent;
  /* 0x0007 */ unsigned char TaggedPercent[4];
  /* 0x000b */ char __PADDING__[1];
} PROC_PERF_HISTORY_ENTRY, *PPROC_PERF_HISTORY_ENTRY; /* size: 0x000c */

typedef struct _PROC_PERF_HISTORY
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long Slot;
  /* 0x0008 */ unsigned long UtilityTotal;
  /* 0x000c */ unsigned long AffinitizedUtilityTotal;
  /* 0x0010 */ unsigned long FrequencyTotal;
  /* 0x0014 */ unsigned long ImportantPercentTotal;
  /* 0x0018 */ unsigned long TaggedPercentTotal[4];
  /* 0x0028 */ struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];
} PROC_PERF_HISTORY, *PPROC_PERF_HISTORY; /* size: 0x0034 */

