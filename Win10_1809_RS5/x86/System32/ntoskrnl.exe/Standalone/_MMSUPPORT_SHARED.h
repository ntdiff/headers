typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ long GoodCitizenWaiting;
  /* 0x0008 */ unsigned long ReleasedCommitDebt;
  /* 0x000c */ unsigned long ResetPagesRepurposedCount;
  /* 0x0010 */ void* WsSwapSupport;
  /* 0x0014 */ void* CommitReleaseContext;
  /* 0x0018 */ volatile long WorkingSetCoreLock;
  /* 0x001c */ void* AccessLog;
  /* 0x0020 */ volatile unsigned long ChargedWslePages;
  /* 0x0024 */ unsigned long ActualWslePages;
  /* 0x0028 */ void* ShadowMapping;
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x002c */

