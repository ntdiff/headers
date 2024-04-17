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
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IWeakReference>
{
  /* 0x0000 */ struct IWeakReference* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<ApartmentShutdownNode>
{
  /* 0x0000 */ struct ApartmentShutdownNode* ptr_;
}; /* size: 0x0008 */

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
  /* 0x0000 */ unsigned char _fInitialized;
  /* 0x0001 */ unsigned char _fUseSpincount;
  /* 0x0004 */ unsigned long _cLocks;
  /* 0x0008 */ unsigned long _dwLine;
  /* 0x0010 */ const char* _pszFile;
  /* 0x0018 */ const char* _pszLockName;
  /* 0x0020 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0048 */

class CComApartment
{
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x000c */ unsigned long _dwState;
  /* 0x0010 */ enum tagAPTKIND _AptKind;
  /* 0x0014 */ const unsigned long _AptId;
  /* 0x0018 */ class OXIDEntry* _pOXIDEntry;
  /* 0x0020 */ class CRemoteUnknown* _pRemUnk;
  /* 0x0028 */ long _cWaiters;
  /* 0x0030 */ void* _hEventOID;
  /* 0x0038 */ unsigned long _cPreRegOidsAvail;
  /* 0x0040 */ unsigned __int64 _arPreRegOids[20];
  /* 0x00e0 */ unsigned long _cOidsReturn;
  /* 0x00e8 */ unsigned __int64 _arOidsReturn[20];
  /* 0x0188 */ struct IRuntimeBroker* _pRuntimeBroker;
  /* 0x0190 */ struct _RTL_SRWLOCK _lockRuntimeBroker;
  union
  {
    /* 0x0198 */ struct ClassicSTAState* _pClassicSTAState;
    struct
    {
      /* 0x0198 */ struct ASTAState* _pASTAState;
      /* 0x01a0 */ void* _hEventASTAWake;
      /* 0x01a8 */ void* _hTimerFreeUnusedDlls;
      /* 0x01b0 */ long _cPendingGitRegistrations;
      /* 0x01b8 */ void* _hEventPendingGitRegistrations;
      /* 0x01c0 */ class Microsoft::WRL::ComPtr<IWeakReference> _spMessageDispatcher;
      /* 0x01c8 */ struct tagSOleTlsData* _pTlsSTA;
      /* 0x01d0 */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> _spFirstShutdownCallback;
      /* 0x01d8 */ class Microsoft::WRL::ComPtr<ApartmentShutdownNode> _spSentinelForNotify;
      /* 0x01e0 */ unsigned __int64 _ui64ApartmentIdentifier;
    }; /* size: 0x004c */
  }; /* size: 0x004c */
  union
  {
    /* 0x0000 */ volatile unsigned long s_ulApartmentIdentifierCounter;
    /* 0x0000 */ class COleStaticMutexSem s_ShutdownRegLock;
  }; /* size: 0x0048 */
}; /* size: 0x01e8 */

