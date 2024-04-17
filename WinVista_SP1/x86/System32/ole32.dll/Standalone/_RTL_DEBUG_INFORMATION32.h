typedef struct _RTL_DEBUG_INFORMATION32
{
  /* 0x0000 */ unsigned long SectionHandleClient;
  /* 0x0004 */ unsigned long ViewBaseClient;
  /* 0x0008 */ unsigned long ViewBaseTarget;
  /* 0x000c */ unsigned long ViewBaseDelta;
  /* 0x0010 */ unsigned long EventPairClient;
  /* 0x0014 */ unsigned long EventPairTarget;
  /* 0x0018 */ unsigned long TargetProcessId;
  /* 0x001c */ unsigned long TargetThreadHandle;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned long OffsetFree;
  /* 0x0028 */ unsigned long CommitSize;
  /* 0x002c */ unsigned long ViewSize;
  union
  {
    /* 0x0030 */ unsigned long Modules;
    /* 0x0030 */ unsigned long ModulesEx;
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long BackTraces;
  /* 0x0038 */ unsigned long Heaps;
  /* 0x003c */ unsigned long Locks;
  /* 0x0040 */ unsigned long SpecificHeap;
  /* 0x0044 */ unsigned long TargetProcessHandle;
  /* 0x0048 */ unsigned long VerifierOptions;
  /* 0x004c */ unsigned long ProcessHeap;
  /* 0x0050 */ unsigned long CriticalSectionHandle;
  /* 0x0054 */ unsigned long CriticalSectionOwnerThread;
  /* 0x0058 */ unsigned long Reserved[4];
} RTL_DEBUG_INFORMATION32, *PRTL_DEBUG_INFORMATION32; /* size: 0x0068 */

