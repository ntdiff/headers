typedef struct _RTL_CRITICAL_SECTION32
{
  /* 0x0000 */ unsigned long DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ unsigned long OwningThread;
  /* 0x0010 */ unsigned long LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION32, *PRTL_CRITICAL_SECTION32; /* size: 0x0018 */

