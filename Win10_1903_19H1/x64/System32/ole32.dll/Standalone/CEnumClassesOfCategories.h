class Microsoft::WRL::ComPtr<IComClassIterator>
{
  /* 0x0000 */ struct IComClassIterator* ptr_;
}; /* size: 0x0008 */

typedef struct _RTL_SRWLOCK
{
  /* 0x0000 */ void* Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0008 */

class CEnumClassesOfCategories
{
  /* 0x0008 */ unsigned long m_dwRefCount;
  /* 0x0010 */ class Microsoft::WRL::ComPtr<IComClassIterator> _classIterator;
  /* 0x0018 */ unsigned long m_cImplemented;
  /* 0x0020 */ struct _GUID* m_rgcatidImpl;
  /* 0x0028 */ unsigned long m_cRequired;
  /* 0x0030 */ struct _GUID* m_rgcatidReq;
  /* 0x0038 */ struct IEnumGUID* m_pcsIEnumClsid;
  /* 0x0040 */ int m_fromcs;
  /* 0x0048 */ class Microsoft::WRL::Wrappers::SRWLock _enumeratorLock;
}; /* size: 0x0050 */

