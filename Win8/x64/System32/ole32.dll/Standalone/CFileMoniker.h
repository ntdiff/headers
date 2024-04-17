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
  /* 0x0008 */ unsigned char* m_pchMonikerExtents;
}; /* size: 0x0010 */

enum CFileMoniker::olever
{
  undetermined = 0,
  ole1 = 1,
  ole2 = 2,
};

class CTrackingFileMoniker
{
  /* 0x0008 */ class CFileMoniker* _pCFM;
}; /* size: 0x0010 */

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

class CFileMoniker
{
  /* 0x0028 */ struct _GUID m_clsid;
  /* 0x0038 */ class CExtentList m_ExtentList;
  /* 0x0048 */ wchar_t* m_szPath;
  /* 0x0050 */ char* m_pszAnsiPath;
  /* 0x0058 */ unsigned short m_ccPath;
  /* 0x005a */ unsigned short m_cbAnsiPath;
  /* 0x005c */ unsigned long m_dwHashValue;
  struct /* bitfield */
  {
    /* 0x0060 */ unsigned long m_fUnicodeExtent : 1; /* bit position: 0 */
    /* 0x0060 */ unsigned long m_fClassVerified : 1; /* bit position: 1 */
    /* 0x0060 */ unsigned long m_fHashValueValid : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0064 */ unsigned char m_fShellLinkInitialized;
  struct /* bitfield */
  {
    /* 0x0068 */ unsigned long m_fTrackingEnabled : 1; /* bit position: 0 */
    /* 0x0068 */ unsigned long m_fSaveShellLink : 1; /* bit position: 1 */
    /* 0x0068 */ unsigned long m_fDirty : 1; /* bit position: 2 */
    /* 0x0068 */ unsigned long m_fReduceEnabled : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x006c */ unsigned short m_cAnti;
  /* 0x006e */ unsigned short m_endServer;
  /* 0x0070 */ enum CFileMoniker::olever m_ole1;
  /* 0x0078 */ struct IShellLinkW* m_pShellLink;
  /* 0x0080 */ class CTrackingFileMoniker _tfm;
  /* 0x0090 */ class CMutexSem2 m_mxs;
}; /* size: 0x00c0 */

