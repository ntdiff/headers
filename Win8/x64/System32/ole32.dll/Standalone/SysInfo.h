typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

struct SysInfo
{
  /* 0x0000 */ struct HDC__* m_hdc;
  /* 0x0008 */ struct HBITMAP__* m_hbmpStock;
  /* 0x0010 */ struct HBITMAP__* m_hbmpColor;
  /* 0x0018 */ struct HPALETTE__* m_hpalDefault;
  /* 0x0020 */ struct HPALETTE__* m_hpalRainbow;
  /* 0x0028 */ int m_cxIcon;
  /* 0x002c */ int m_cyIcon;
  /* 0x0030 */ int m_nScrLogPixelsX;
  /* 0x0034 */ int m_nScrLogPixelsY;
  /* 0x0038 */ int m_nScrBitCount;
  /* 0x003c */ int m_nScrColorCount;
  /* 0x0040 */ int m_nIconColorCount;
  /* 0x0044 */ int m_nScrPaletteSize;
  /* 0x0048 */ struct IStorage* m_pstg;
  /* 0x0050 */ unsigned long m_stmixNext;
  /* 0x0058 */ struct _RTL_CRITICAL_SECTION m_critDCBusy;
  /* 0x0080 */ struct _RTL_CRITICAL_SECTION m_critMemberBusy;
}; /* size: 0x00a8 */

