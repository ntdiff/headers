typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class CMutexSem2
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION m_cs;
  /* 0x0018 */ int m_fCsInitialized;
}; /* size: 0x001c */

class CItemMoniker
{
  /* 0x0014 */ wchar_t* m_lpszItem;
  /* 0x0018 */ char* m_pszAnsiItem;
  /* 0x001c */ unsigned short m_ccItem;
  /* 0x001e */ unsigned short m_cbAnsiItem;
  /* 0x0020 */ wchar_t* m_lpszDelimiter;
  /* 0x0024 */ char* m_pszAnsiDelimiter;
  /* 0x0028 */ unsigned short m_ccDelimiter;
  /* 0x002a */ unsigned short m_cbAnsiDelimiter;
  /* 0x002c */ unsigned long m_fHashValueValid : 1; /* bit position: 0 */
  /* 0x0030 */ unsigned long m_dwHashValue;
  /* 0x0034 */ class CMutexSem2 m_mxs;
}; /* size: 0x0050 */

