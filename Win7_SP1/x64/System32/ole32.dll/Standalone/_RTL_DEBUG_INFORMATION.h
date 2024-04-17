typedef struct _RTL_DEBUG_INFORMATION
{
  /* 0x0000 */ void* SectionHandleClient;
  /* 0x0008 */ void* ViewBaseClient;
  /* 0x0010 */ void* ViewBaseTarget;
  /* 0x0018 */ unsigned __int64 ViewBaseDelta;
  /* 0x0020 */ void* EventPairClient;
  /* 0x0028 */ void* EventPairTarget;
  /* 0x0030 */ void* TargetProcessId;
  /* 0x0038 */ void* TargetThreadHandle;
  /* 0x0040 */ unsigned long Flags;
  /* 0x0048 */ unsigned __int64 OffsetFree;
  /* 0x0050 */ unsigned __int64 CommitSize;
  /* 0x0058 */ unsigned __int64 ViewSize;
  union
  {
    /* 0x0060 */ struct _RTL_PROCESS_MODULES* Modules;
    /* 0x0060 */ struct _RTL_PROCESS_MODULE_INFORMATION_EX* ModulesEx;
  }; /* size: 0x0008 */
  /* 0x0068 */ struct _RTL_PROCESS_BACKTRACES* BackTraces;
  /* 0x0070 */ struct _RTL_PROCESS_HEAPS* Heaps;
  /* 0x0078 */ struct _RTL_PROCESS_LOCKS* Locks;
  /* 0x0080 */ void* SpecificHeap;
  /* 0x0088 */ void* TargetProcessHandle;
  /* 0x0090 */ struct _RTL_PROCESS_VERIFIER_OPTIONS* VerifierOptions;
  /* 0x0098 */ void* ProcessHeap;
  /* 0x00a0 */ void* CriticalSectionHandle;
  /* 0x00a8 */ void* CriticalSectionOwnerThread;
  /* 0x00b0 */ void* Reserved[4];
} RTL_DEBUG_INFORMATION, *PRTL_DEBUG_INFORMATION; /* size: 0x00d0 */

