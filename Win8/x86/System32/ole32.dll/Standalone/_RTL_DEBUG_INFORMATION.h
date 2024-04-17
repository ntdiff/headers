typedef struct _RTL_DEBUG_INFORMATION
{
  /* 0x0000 */ void* SectionHandleClient;
  /* 0x0004 */ void* ViewBaseClient;
  /* 0x0008 */ void* ViewBaseTarget;
  /* 0x000c */ unsigned long ViewBaseDelta;
  /* 0x0010 */ void* EventPairClient;
  /* 0x0014 */ void* EventPairTarget;
  /* 0x0018 */ void* TargetProcessId;
  /* 0x001c */ void* TargetThreadHandle;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned long OffsetFree;
  /* 0x0028 */ unsigned long CommitSize;
  /* 0x002c */ unsigned long ViewSize;
  union
  {
    /* 0x0030 */ struct _RTL_PROCESS_MODULES* Modules;
    /* 0x0030 */ struct _RTL_PROCESS_MODULE_INFORMATION_EX* ModulesEx;
  }; /* size: 0x0004 */
  /* 0x0034 */ struct _RTL_PROCESS_BACKTRACES* BackTraces;
  /* 0x0038 */ struct _RTL_PROCESS_HEAPS* Heaps;
  /* 0x003c */ struct _RTL_PROCESS_LOCKS* Locks;
  /* 0x0040 */ void* SpecificHeap;
  /* 0x0044 */ void* TargetProcessHandle;
  /* 0x0048 */ struct _RTL_PROCESS_VERIFIER_OPTIONS* VerifierOptions;
  /* 0x004c */ void* ProcessHeap;
  /* 0x0050 */ void* CriticalSectionHandle;
  /* 0x0054 */ void* CriticalSectionOwnerThread;
  /* 0x0058 */ void* Reserved[4];
} RTL_DEBUG_INFORMATION, *PRTL_DEBUG_INFORMATION; /* size: 0x0068 */

