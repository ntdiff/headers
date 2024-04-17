typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class CFillLockBytes
{
  /* 0x0018 */ struct ILockBytes* _pilb;
  /* 0x0020 */ long _cRefs;
  /* 0x0024 */ unsigned long _ulHighWater;
  /* 0x0028 */ unsigned long _dwTerminate;
  /* 0x002c */ unsigned long _ulFailurePoint;
  /* 0x0030 */ class CPerContext* _ppc;
  /* 0x0038 */ int _fCSInitialized;
  /* 0x0040 */ struct _RTL_CRITICAL_SECTION _csThreadProtect;
}; /* size: 0x0068 */

