typedef struct _TRIAGE_9F_DIRECTED_TRANSITION
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0008 */ struct _LIST_ENTRY* IrpList;
  /* 0x0010 */ struct _LIST_ENTRY* ThreadList;
  /* 0x0018 */ struct _TRIAGE_EX_WORK_QUEUE* DelayedWorkQueue;
  /* 0x0020 */ struct _TRIAGE_EX_WORK_QUEUE* DelayedIoWorkQueue;
  /* 0x0028 */ unsigned long WatchdogTimeout;
  /* 0x0030 */ unsigned __int64 WatchdogStartTimestamp;
  /* 0x0038 */ struct _KTHREAD* WatchdogStartThread;
  /* 0x0040 */ unsigned long DirectedTransitionStatus;
  /* 0x0044 */ unsigned long DirectedTransitionCallCount;
} TRIAGE_9F_DIRECTED_TRANSITION, *PTRIAGE_9F_DIRECTED_TRANSITION; /* size: 0x0048 */

