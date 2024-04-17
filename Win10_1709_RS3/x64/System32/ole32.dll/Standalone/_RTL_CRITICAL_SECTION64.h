typedef struct _RTL_CRITICAL_SECTION64
{
  /* 0x0000 */ unsigned __int64 DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ unsigned __int64 OwningThread;
  /* 0x0018 */ unsigned __int64 LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION64, *PRTL_CRITICAL_SECTION64; /* size: 0x0028 */

