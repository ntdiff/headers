typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class CNFFTreeMutex
{
  /* 0x0008 */ long _cRefs;
  /* 0x000c */ int _fInitialized;
  /* 0x0010 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0038 */

