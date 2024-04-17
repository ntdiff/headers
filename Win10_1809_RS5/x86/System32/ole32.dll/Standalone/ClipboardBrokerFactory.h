typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class Microsoft::WRL::Wrappers::CriticalSection
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION cs_;
}; /* size: 0x0018 */

class ClipboardBrokerFactory
{
  union
  {
    /* 0x0000 */ class CBrokerInstanceHolder* s_pServerBroker;
    /* 0x0000 */ void* s_hServerThreadEvent;
    /* 0x0000 */ void* s_hWorkerThread;
    /* 0x0000 */ void* s_hServerThreadStopEvent;
    /* 0x0000 */ class Microsoft::WRL::Wrappers::CriticalSection s_initCS;
  }; /* size: 0x0018 */
}; /* size: 0x0001 */

