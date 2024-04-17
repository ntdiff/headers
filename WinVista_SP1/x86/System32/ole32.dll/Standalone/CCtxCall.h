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

class CCtxCall
{
  /* 0x0004 */ unsigned long _dwFlags;
  /* 0x0008 */ unsigned long _dwStage;
  /* 0x000c */ unsigned long _cMarshalItfs;
  /* 0x0010 */ unsigned long _cUnmarshalItfs;
  /* 0x0014 */ unsigned long _cFree;
  /* 0x0018 */ unsigned long _cError;
  /* 0x001c */ int _fError;
  /* 0x0020 */ unsigned long _dwDestCtx;
  /* 0x0024 */ unsigned long _cItfs;
  /* 0x0028 */ unsigned long _idx;
  /* 0x002c */ void** _ppItfs;
  /* 0x0030 */ unsigned long _cPolicies;
  /* 0x0034 */ unsigned long _cbExtent;
  /* 0x0038 */ void* _pvExtent;
  /* 0x003c */ HRESULT _hr;
  /* 0x0040 */ class CPolicySet* _pPS;
  /* 0x0044 */ class CObjectContext* _pContext;
  /* 0x0048 */ unsigned long _dataRep;
  /* 0x004c */ HRESULT _hrServer;
  union
  {
    /* 0x0000 */ void* s_pAllocList[20];
    /* 0x0000 */ int s_iAvailable;
    /* 0x0000 */ class COleStaticMutexSem _mxsCtxCallLock;
  }; /* size: 0x0050 */
}; /* size: 0x0050 */

