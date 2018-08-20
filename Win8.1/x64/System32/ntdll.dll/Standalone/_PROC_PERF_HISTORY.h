typedef struct _PROC_PERF_HISTORY_ENTRY
{
  /* 0x0000 */ unsigned short Utility;
  /* 0x0002 */ unsigned short AffinitizedUtility;
  /* 0x0004 */ unsigned char Frequency;
  /* 0x0005 */ unsigned char Reserved;
} PROC_PERF_HISTORY_ENTRY, *PPROC_PERF_HISTORY_ENTRY; /* size: 0x0006 */

typedef struct _PROC_PERF_HISTORY
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long Slot;
  /* 0x0008 */ struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];
  /* 0x000e */ char __PADDING__[2];
} PROC_PERF_HISTORY, *PPROC_PERF_HISTORY; /* size: 0x0010 */

