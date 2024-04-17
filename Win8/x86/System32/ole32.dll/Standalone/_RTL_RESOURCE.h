typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

typedef struct _RTL_RESOURCE
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION CriticalSection;
  /* 0x0018 */ void* SharedSemaphore;
  /* 0x001c */ volatile unsigned long NumberOfWaitingShared;
  /* 0x0020 */ void* ExclusiveSemaphore;
  /* 0x0024 */ volatile unsigned long NumberOfWaitingExclusive;
  /* 0x0028 */ volatile long NumberOfActive;
  /* 0x002c */ void* ExclusiveOwnerThread;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
} RTL_RESOURCE, *PRTL_RESOURCE; /* size: 0x0038 */

