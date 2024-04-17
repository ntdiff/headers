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

class Microsoft::WRL::ComPtr<IOSTaskCompletion>
{
  /* 0x0000 */ struct IOSTaskCompletion* ptr_;
}; /* size: 0x0008 */

class ClipboardDataObjectTask
{
  /* 0x0030 */ class Microsoft::WRL::Wrappers::CriticalSection m_CallCS;
  /* 0x0058 */ class CancellableCall* m_pOutstandingCalls;
  /* 0x0060 */ struct _TP_TIMER* m_pCancellationTimer;
  /* 0x0068 */ volatile BOOL m_fTaskActive;
  /* 0x0070 */ class Microsoft::WRL::ComPtr<IOSTaskCompletion> m_spTaskCompletion;
}; /* size: 0x0078 */

