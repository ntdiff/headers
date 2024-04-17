typedef struct _RTL_SRWLOCK
{
  /* 0x0000 */ void* Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
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

struct SysInfo
{
  /* 0x0000 */ struct HDC__* m_hdc;
  /* 0x0004 */ struct HBITMAP__* m_hbmpStock;
  /* 0x0008 */ struct HBITMAP__* m_hbmpColor;
  /* 0x000c */ struct HPALETTE__* m_hpalDefault;
  /* 0x0010 */ struct HPALETTE__* m_hpalRainbow;
  /* 0x0014 */ int m_cxIcon;
  /* 0x0018 */ int m_cyIcon;
  /* 0x001c */ int m_nScrLogPixelsX;
  /* 0x0020 */ int m_nScrLogPixelsY;
  /* 0x0024 */ int m_nScrBitCount;
  /* 0x0028 */ int m_nScrColorCount;
  /* 0x002c */ int m_nIconColorCount;
  /* 0x0030 */ int m_nScrPaletteSize;
  /* 0x0034 */ class Microsoft::WRL::Wrappers::SRWLock m_lockStreams;
  /* 0x0038 */ struct IStorage* m_pstg;
  /* 0x003c */ unsigned long m_cStreams;
  /* 0x0040 */ unsigned long m_stmixNext;
  /* 0x0044 */ struct _RTL_CRITICAL_SECTION m_critDCBusy;
  /* 0x005c */ struct _RTL_CRITICAL_SECTION m_critMemberBusy;
}; /* size: 0x0074 */

