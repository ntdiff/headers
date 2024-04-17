typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class CFillLockBytes
{
  /* 0x000c */ struct ILockBytes* _pilb;
  /* 0x0010 */ long _cRefs;
  /* 0x0014 */ unsigned long _ulHighWater;
  /* 0x0018 */ unsigned long _dwTerminate;
  /* 0x001c */ unsigned long _ulFailurePoint;
  /* 0x0020 */ class CPerContext* _ppc;
  /* 0x0024 */ int _fCSInitialized;
  /* 0x0028 */ struct _RTL_CRITICAL_SECTION _csThreadProtect;
}; /* size: 0x0040 */

