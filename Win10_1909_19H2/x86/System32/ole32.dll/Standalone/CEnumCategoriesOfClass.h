typedef struct _RTL_SRWLOCK
{
  /* 0x0000 */ void* Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0004 */

class CEnumCategoriesOfClass
{
  /* 0x0004 */ unsigned long m_dwRefCount;
  /* 0x0008 */ int m_bMapOldKeys;
  /* 0x000c */ struct HKEY__* m_hKey;
  /* 0x0010 */ unsigned long m_dwIndex;
  /* 0x0014 */ struct HKEY__* m_hKeyCats;
  /* 0x0018 */ unsigned long m_dwOldKeyIndex;
  /* 0x001c */ struct IUnknown* m_pCloned;
  /* 0x0020 */ class Microsoft::WRL::Wrappers::SRWLock _enumeratorLock;
}; /* size: 0x0024 */

