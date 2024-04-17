typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class CMutexSem2
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION m_cs;
  /* 0x0028 */ int m_fCsInitialized;
}; /* size: 0x0030 */

class CItemMoniker
{
  /* 0x0028 */ wchar_t* m_lpszItem;
  /* 0x0030 */ char* m_pszAnsiItem;
  /* 0x0038 */ unsigned short m_ccItem;
  /* 0x003a */ unsigned short m_cbAnsiItem;
  /* 0x0040 */ wchar_t* m_lpszDelimiter;
  /* 0x0048 */ char* m_pszAnsiDelimiter;
  /* 0x0050 */ unsigned short m_ccDelimiter;
  /* 0x0052 */ unsigned short m_cbAnsiDelimiter;
  /* 0x0054 */ unsigned long m_fHashValueValid : 1; /* bit position: 0 */
  /* 0x0058 */ unsigned long m_dwHashValue;
  /* 0x0060 */ class CMutexSem2 m_mxs;
}; /* size: 0x0090 */

