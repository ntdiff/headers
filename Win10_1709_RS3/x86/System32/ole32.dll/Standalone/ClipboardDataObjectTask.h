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

class Microsoft::WRL::ComPtr<IOSTaskCompletion>
{
  /* 0x0000 */ struct IOSTaskCompletion* ptr_;
}; /* size: 0x0004 */

class ClipboardDataObjectTask
{
  /* 0x0020 */ class Microsoft::WRL::Wrappers::CriticalSection m_CallCS;
  /* 0x0038 */ class CancellableCall* m_pOutstandingCalls;
  /* 0x003c */ struct _TP_TIMER* m_pCancellationTimer;
  /* 0x0040 */ volatile BOOL m_fTaskActive;
  /* 0x0044 */ volatile unsigned long m_dwCancellationThreadId;
  /* 0x0048 */ BOOL m_fReleaseOnTimeout;
  /* 0x004c */ class Microsoft::WRL::ComPtr<IOSTaskCompletion> m_spTaskCompletion;
}; /* size: 0x0050 */

