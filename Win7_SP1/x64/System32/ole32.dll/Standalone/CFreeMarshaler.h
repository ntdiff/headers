typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class COleStaticMutexSem
{
  /* 0x0000 */ class COleStaticMutexSem* pNextMutex;
  /* 0x0008 */ unsigned char _fInitialized;
  /* 0x0009 */ unsigned char _fAutoDestruct;
  /* 0x000a */ unsigned char _fUseSpincount;
  /* 0x000c */ unsigned long _cLocks;
  /* 0x0010 */ unsigned long _dwLine;
  /* 0x0018 */ const char* _pszFile;
  /* 0x0020 */ const char* _pszLockName;
  /* 0x0028 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0050 */

class CFreeMarshaler
{
  /* 0x0008 */ struct IUnknown* _punkCtrl;
  union
  {
    /* 0x0000 */ unsigned char _SecretBlock[16];
    /* 0x0000 */ int _fSecretInit;
    /* 0x0000 */ class COleStaticMutexSem _SecretLock;
  }; /* size: 0x0050 */
}; /* size: 0x0010 */

