typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ unsigned long ReadySummary;
  /* 0x0008 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0108 */ char RunningSummary[32];
  /* 0x0128 */ unsigned char Span;
  /* 0x0129 */ unsigned char LowProcIndex;
  /* 0x012a */ unsigned char QueueIndex;
  /* 0x012b */ unsigned char NormalPriorityQueueIndex;
  /* 0x012c */ unsigned char ProcCount;
  /* 0x012d */ unsigned char ScanOwner;
  /* 0x012e */ unsigned char Spare[2];
  /* 0x0130 */ unsigned long Affinity;
  /* 0x0134 */ unsigned long ReadyThreadCount;
  /* 0x0138 */ unsigned __int64 ReadyQueueExpectedRunTime;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0140 */

