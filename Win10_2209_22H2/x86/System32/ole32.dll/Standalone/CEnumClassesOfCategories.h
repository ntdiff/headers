class Microsoft::WRL::ComPtr<IComClassIterator>
{
  /* 0x0000 */ struct IComClassIterator* ptr_;
}; /* size: 0x0004 */

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0004 */

class CEnumClassesOfCategories
{
  /* 0x0004 */ unsigned long m_dwRefCount;
  /* 0x0008 */ class Microsoft::WRL::ComPtr<IComClassIterator> _classIterator;
  /* 0x000c */ unsigned long m_cImplemented;
  /* 0x0010 */ struct _GUID* m_rgcatidImpl;
  /* 0x0014 */ unsigned long m_cRequired;
  /* 0x0018 */ struct _GUID* m_rgcatidReq;
  /* 0x001c */ struct IEnumGUID* m_pcsIEnumClsid;
  /* 0x0020 */ int m_fromcs;
  /* 0x0024 */ class Microsoft::WRL::Wrappers::SRWLock _enumeratorLock;
}; /* size: 0x0028 */

