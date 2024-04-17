typedef struct _CRT_CRITICAL_SECTION
{
  /* 0x0000 */ struct _CRT_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long Reserved;
} CRT_CRITICAL_SECTION, *PCRT_CRITICAL_SECTION; /* size: 0x0018 */

