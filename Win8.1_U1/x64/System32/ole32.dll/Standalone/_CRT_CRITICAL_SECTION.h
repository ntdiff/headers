typedef struct _CRT_CRITICAL_SECTION
{
  /* 0x0000 */ struct _CRT_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned long Reserved;
  /* 0x0024 */ long __PADDING__[1];
} CRT_CRITICAL_SECTION, *PCRT_CRITICAL_SECTION; /* size: 0x0028 */

