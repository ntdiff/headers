enum tagAPTKIND
{
  APTKIND_NEUTRALTHREADED = 1,
  APTKIND_MULTITHREADED = 2,
  APTKIND_APARTMENTTHREADED = 4,
  APTKIND_APPLICATION_STA = 8,
};

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

class Microsoft::WRL::ComPtr<IWeakReference>
{
  /* 0x0000 */ struct IWeakReference* ptr_;
}; /* size: 0x0004 */

class Microsoft::WRL::ComPtr<ApartmentShutdownNode>
{
  /* 0x0000 */ struct ApartmentShutdownNode* ptr_;
}; /* size: 0x0004 */

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

class CComApartment
{
  /* 0x0004 */ unsigned long _cRefs;
  /* 0x0008 */ unsigned long _dwState;
  /* 0x000c */ enum tagAPTKIND _AptKind;
  /* 0x0010 */ const unsigned long _AptId;
  /* 0x0014 */ class OXIDEntry* _pOXIDEntry;
  /* 0x0018 */ class CRemoteUnknown* _pRemUnk;
  /* 0x001c */ long _cWaiters;
  /* 0x0020 */ void* _hEventOID;
  /* 0x0024 */ unsigned long _cPreRegOidsAvail;
  /* 0x0028 */ unsigned __int64 _arPreRegOids[20];
  /* 0x00c8 */ unsigned long _cOidsReturn;
  /* 0x00d0 */ unsigned __int64 _arOidsReturn[20];
  /* 0x0170 */ struct IRuntimeBroker* _pRuntimeBroker;
  /* 0x0174 */ struct _RTL_SRWLOCK _lockRuntimeBroker;
  union
  {
    /* 0x0178 */ struct ClassicSTAState* _pClassicSTAState;
    struct
    {
      /* 0x0178 */ struct ASTAState* _pASTAState;
      /* 0x017c */ void* _hEventASTAWake;
      /* 0x0180 */ void* _hTimerFreeUnusedDlls;
      /* 0x0184 */ long _cPendingGitRegistrations;
      /* 0x0188 */ void* _hEventPendingGitRegistrations;
      /* 0x018c */ class Microsoft::WRL::ComPtr<IWeakReference> _spMessageDispatcher;
      /* 0x0190 */ struct tagSOleTlsData* _pTlsSTA;
      /* 0x0194 */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> _spFirstShutdownCallback;
      /* 0x0198 */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> _spSentinelForNotify;
      /* 0x01a0 */ unsigned __int64 _ui64ApartmentIdentifier;
    }; /* size: 0x002c */
  }; /* size: 0x002c */
  union
  {
    /* 0x0000 */ volatile unsigned long s_ulApartmentIdentifierCounter;
    /* 0x0000 */ class COleStaticMutexSem s_ShutdownRegLock;
  }; /* size: 0x002c */
}; /* size: 0x01a8 */

