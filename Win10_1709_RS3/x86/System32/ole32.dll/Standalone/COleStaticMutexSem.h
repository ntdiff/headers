typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class COleStaticMutexSem
{
  /* 0x0000 */ unsigned char _fInitialized;
  /* 0x0001 */ unsigned char _fUseSpincount;
  /* 0x0004 */ unsigned long _cLocks;
  /* 0x0008 */ unsigned long _dwLine;
  /* 0x000c */ const char* _pszFile;
  /* 0x0010 */ const char* _pszLockName;
  /* 0x0014 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x002c */

