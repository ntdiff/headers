typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ unsigned long ReleasedCommitDebt;
  /* 0x0008 */ unsigned long ResetPagesRepurposedCount;
  /* 0x000c */ void* WsSwapSupport;
  /* 0x0010 */ void* CommitReleaseContext;
  /* 0x0014 */ void* AccessLog;
  /* 0x0018 */ unsigned long ChargedWslePages;
  /* 0x001c */ unsigned long ActualWslePages;
  /* 0x0020 */ unsigned long WorkingSetSizeOverhead;
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0024 */

