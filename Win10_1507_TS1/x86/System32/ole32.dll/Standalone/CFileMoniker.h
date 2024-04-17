typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CExtentList
{
  /* 0x0000 */ unsigned long m_cbMonikerExtents;
  /* 0x0004 */ unsigned char* m_pchMonikerExtents;
}; /* size: 0x0008 */

enum CFileMoniker::olever
{
  undetermined = 0,
  ole1 = 1,
  ole2 = 2,
};

class CTrackingFileMoniker
{
  /* 0x0004 */ class CFileMoniker* _pCFM;
}; /* size: 0x0008 */

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

class CFileMoniker
{
  /* 0x0014 */ struct _GUID m_clsid;
  /* 0x0024 */ class CExtentList m_ExtentList;
  /* 0x002c */ wchar_t* m_szPath;
  /* 0x0030 */ char* m_pszAnsiPath;
  /* 0x0034 */ unsigned short m_ccPath;
  /* 0x0036 */ unsigned short m_cbAnsiPath;
  /* 0x0038 */ unsigned long m_dwHashValue;
  struct /* bitfield */
  {
    /* 0x003c */ unsigned long m_fUnicodeExtent : 1; /* bit position: 0 */
    /* 0x003c */ unsigned long m_fClassVerified : 1; /* bit position: 1 */
    /* 0x003c */ unsigned long m_fHashValueValid : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0040 */ unsigned char m_fShellLinkInitialized;
  struct /* bitfield */
  {
    /* 0x0044 */ unsigned long m_fTrackingEnabled : 1; /* bit position: 0 */
    /* 0x0044 */ unsigned long m_fSaveShellLink : 1; /* bit position: 1 */
    /* 0x0044 */ unsigned long m_fDirty : 1; /* bit position: 2 */
    /* 0x0044 */ unsigned long m_fReduceEnabled : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0048 */ unsigned short m_cAnti;
  /* 0x004a */ unsigned short m_endServer;
  /* 0x004c */ enum CFileMoniker::olever m_ole1;
  /* 0x0050 */ struct IShellLinkW* m_pShellLink;
  /* 0x0054 */ class CTrackingFileMoniker _tfm;
  /* 0x005c */ class CMutexSem2 m_mxs;
}; /* size: 0x0078 */

