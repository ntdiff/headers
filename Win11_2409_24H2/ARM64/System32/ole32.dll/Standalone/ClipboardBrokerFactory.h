typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class Microsoft::WRL::Wrappers::CriticalSection
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION cs_;
}; /* size: 0x0028 */

class ClipboardBrokerFactory
{
  union
  {
    /* 0x0000 */ class CBrokerInstanceHolder* s_pServerBroker;
    /* 0x0000 */ void* s_hServerThreadEvent;
    /* 0x0000 */ void* s_hWorkerThread;
    /* 0x0000 */ void* s_hServerThreadStopEvent;
    /* 0x0000 */ class Microsoft::WRL::Wrappers::CriticalSection s_initCS;
  }; /* size: 0x0028 */
}; /* size: 0x0001 */

