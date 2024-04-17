typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class XLOCK
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION critSec;
  /* 0x0018 */ int m_fCsInitialized;
}; /* size: 0x001c */

class OPAQUE_HANDLE<1>
{
  /* 0x0000 */ unsigned long m_h;
}; /* size: 0x0004 */

struct XSLOCK::OWNERENTRY
{
  /* 0x0000 */ class OPAQUE_HANDLE<1> dwThreadId;
  union
  {
    /* 0x0004 */ long ownerCount;
    /* 0x0004 */ unsigned long tableSize;
  }; /* size: 0x0004 */
}; /* size: 0x0008 */

class EVENT
{
  /* 0x0000 */ void* m_hEvent;
}; /* size: 0x0004 */

class SEMAPHORE
{
  /* 0x0000 */ void* m_hSem;
}; /* size: 0x0004 */

class XSLOCK
{
  /* 0x0000 */ class XLOCK m_lock;
  /* 0x001c */ unsigned long m_cOwner;
  /* 0x0020 */ struct XSLOCK::OWNERENTRY m_ownerThreads[2];
  /* 0x0030 */ struct XSLOCK::OWNERENTRY* m_ownerTable;
  /* 0x0034 */ class EVENT m_eventExclusiveWaiters;
  /* 0x0038 */ class SEMAPHORE m_semaphoreSharedWaiters;
  /* 0x003c */ unsigned long m_cExclusiveWaiters;
  /* 0x0040 */ unsigned long m_cSharedWaiters;
  /* 0x0044 */ int m_isOwnedExclusive;
}; /* size: 0x0048 */

