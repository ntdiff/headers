typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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
  /* 0x0000 */ class COleStaticMutexSem* pNextMutex;
  /* 0x0004 */ unsigned char _fInitialized;
  /* 0x0005 */ unsigned char _fAutoDestruct;
  /* 0x0006 */ unsigned char _fUseSpincount;
  /* 0x0008 */ unsigned long _cLocks;
  /* 0x000c */ unsigned long _dwLine;
  /* 0x0010 */ const char* _pszFile;
  /* 0x0014 */ const char* _pszLockName;
  /* 0x0018 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0030 */

class CProcessSecret
{
  union
  {
    /* 0x0000 */ struct _GUID s_guidOle32Secret;
    /* 0x0000 */ int s_fSecretInit;
    /* 0x0000 */ class COleStaticMutexSem s_SecretLock;
  }; /* size: 0x0030 */
}; /* size: 0x0001 */

