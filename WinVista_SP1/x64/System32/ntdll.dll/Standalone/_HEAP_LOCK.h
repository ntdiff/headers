typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

typedef struct _HEAP_LOCK
{
  union
  {
    /* 0x0000 */ struct _RTL_CRITICAL_SECTION CriticalSection;
  } /* size: 0x0028 */ Lock;
} HEAP_LOCK, *PHEAP_LOCK; /* size: 0x0028 */

