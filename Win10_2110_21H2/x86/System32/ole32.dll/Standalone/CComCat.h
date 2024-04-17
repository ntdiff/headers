typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class Microsoft::WRL::ComPtr<IComCatalogSCM>
{
  /* 0x0000 */ struct IComCatalogSCM* ptr_;
}; /* size: 0x0004 */

class CComCat
{
  /* 0x0008 */ class CComCat::CInnerUnk* m_punkInner;
  /* 0x000c */ struct IUnknown* m_punkOuter;
  /* 0x0010 */ struct ICatInformation* m_pcsICatInfo;
  /* 0x0014 */ struct _RTL_CRITICAL_SECTION m_csCatInfoInit;
  /* 0x002c */ unsigned long m_dwRefCount;
  /* 0x0030 */ int m_fCsFlag;
  /* 0x0034 */ int m_bLockValid;
  /* 0x0038 */ class Microsoft::WRL::ComPtr<IComCatalogSCM> _comCatalog;
}; /* size: 0x003c */

