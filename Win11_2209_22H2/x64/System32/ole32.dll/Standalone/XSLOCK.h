typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class XLOCK
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION critSec;
  /* 0x0028 */ int m_fCsInitialized;
}; /* size: 0x0030 */

class OPAQUE_HANDLE<1>
{
  /* 0x0000 */ unsigned __int64 m_h;
}; /* size: 0x0008 */

struct XSLOCK::OWNERENTRY
{
  /* 0x0000 */ class OPAQUE_HANDLE<1> dwThreadId;
  union
  {
    /* 0x0008 */ long ownerCount;
    /* 0x0008 */ unsigned long tableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
}; /* size: 0x0010 */

class EVENT
{
  /* 0x0000 */ void* m_hEvent;
}; /* size: 0x0008 */

class SEMAPHORE
{
  /* 0x0000 */ void* m_hSem;
}; /* size: 0x0008 */

class XSLOCK
{
  /* 0x0000 */ class XLOCK m_lock;
  /* 0x0030 */ unsigned long m_cOwner;
  /* 0x0038 */ struct XSLOCK::OWNERENTRY m_ownerThreads[2];
  /* 0x0058 */ struct XSLOCK::OWNERENTRY* m_ownerTable;
  /* 0x0060 */ class EVENT m_eventExclusiveWaiters;
  /* 0x0068 */ class SEMAPHORE m_semaphoreSharedWaiters;
  /* 0x0070 */ unsigned long m_cExclusiveWaiters;
  /* 0x0074 */ unsigned long m_cSharedWaiters;
  /* 0x0078 */ int m_isOwnedExclusive;
}; /* size: 0x0080 */

