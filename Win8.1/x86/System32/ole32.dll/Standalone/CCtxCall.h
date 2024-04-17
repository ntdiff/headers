enum BaseCallKind
{
  CAsyncCall = 0,
  CClientCall = 1,
  CCtxCall = 2,
};

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

enum OLETLS_PREVENT_RUNDOWN_MITIGATION
{
  NoMitigationInEffect = 0,
  MarshalingWithInParameterMitigation = 1,
  MarshalingWithInprocOutParameterMitigation = 2,
  MarshalingWithOutofprocOutParameterMitigation = 3,
  MarshalingWithMshlflagsTablestrong = 4,
  UnmarshalingWithInParameterMitigation = 5,
  UnmarshalingWithInprocOutParameterMitigation = 6,
  UnmarshalingWithOutofprocOutParameterMitigation = 7,
};

class PushTlsPreventRundownMitigation
{
  /* 0x0000 */ enum OLETLS_PREVENT_RUNDOWN_MITIGATION _currentMitigation;
  /* 0x0004 */ enum OLETLS_PREVENT_RUNDOWN_MITIGATION _savedMitigation;
}; /* size: 0x0008 */

class CCtxCall
{
  union
  {
    struct
    {
      /* 0x0000 */ enum BaseCallKind CallKind;
      /* 0x0008 */ unsigned long _dwFlags;
      /* 0x000c */ unsigned long _dwStage;
      /* 0x0010 */ unsigned long _cMarshalItfs;
      /* 0x0014 */ unsigned long _cUnmarshalItfs;
      /* 0x0018 */ unsigned long _cFree;
      /* 0x001c */ unsigned long _cError;
      /* 0x0020 */ int _fError;
      /* 0x0024 */ unsigned long _dwDestCtx;
      /* 0x0028 */ unsigned long _cItfs;
      /* 0x002c */ unsigned long _idx;
      /* 0x0030 */ void** _ppItfs;
      /* 0x0034 */ unsigned long _cPolicies;
      /* 0x0038 */ unsigned long _cbExtent;
      /* 0x003c */ void* _pvExtent;
      /* 0x0040 */ HRESULT _hr;
      /* 0x0044 */ class CPolicySet* _pPS;
      /* 0x0048 */ class CObjectContext* _pContext;
      /* 0x004c */ unsigned long _dataRep;
      /* 0x0050 */ HRESULT _hrServer;
      /* 0x0054 */ unsigned int _uCallTraceId;
    }; /* size: 0x0054 */
    /* 0x0000 */ void* s_pAllocList[20];
    /* 0x0000 */ int s_iAvailable;
    /* 0x0000 */ class COleStaticMutexSem _mxsCtxCallLock;
  }; /* size: 0x0054 */
  /* 0x0058 */ struct IErrorInfo* _pErrorInfo;
  /* 0x005c */ class PreventRundownBiasContainer* _pInBiasContainer;
  /* 0x0060 */ class PreventRundownBiasContainer* _pOutBiasContainer;
  /* 0x0064 */ class PushTlsPreventRundownMitigation _pushTlsMitigation;
  struct /* bitfield */
  {
    /* 0x006c */ BOOL _bEnabledInParameterMitigation : 1; /* bit position: 0 */
    /* 0x006c */ BOOL _bEnabledInprocOutParameterMitigation : 1; /* bit position: 1 */
  }; /* bitfield */
}; /* size: 0x0070 */

