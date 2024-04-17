typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class Microsoft::WRL::ComPtr<IComCatalogSCM>
{
  /* 0x0000 */ struct IComCatalogSCM* ptr_;
}; /* size: 0x0008 */

class CComCat
{
  /* 0x0010 */ class CComCat::CInnerUnk* m_punkInner;
  /* 0x0018 */ struct IUnknown* m_punkOuter;
  /* 0x0020 */ struct ICatInformation* m_pcsICatInfo;
  /* 0x0028 */ struct _RTL_CRITICAL_SECTION m_csCatInfoInit;
  /* 0x0050 */ unsigned long m_dwRefCount;
  /* 0x0054 */ int m_fCsFlag;
  /* 0x0058 */ int m_bLockValid;
  /* 0x005c */ const BOOL m_disablePackagedComForTesting;
  /* 0x0060 */ class Microsoft::WRL::ComPtr<IComCatalogSCM> _comCatalog;
}; /* size: 0x0068 */

