typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

typedef struct _RTL_RESOURCE
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION CriticalSection;
  /* 0x0028 */ void* SharedSemaphore;
  /* 0x0030 */ volatile unsigned long NumberOfWaitingShared;
  /* 0x0038 */ void* ExclusiveSemaphore;
  /* 0x0040 */ volatile unsigned long NumberOfWaitingExclusive;
  /* 0x0044 */ volatile long NumberOfActive;
  /* 0x0048 */ void* ExclusiveOwnerThread;
  /* 0x0050 */ unsigned long Flags;
  /* 0x0058 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
} RTL_RESOURCE, *PRTL_RESOURCE; /* size: 0x0060 */

