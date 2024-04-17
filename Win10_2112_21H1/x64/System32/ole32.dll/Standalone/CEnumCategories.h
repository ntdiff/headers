typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0008 */

class CEnumCategories
{
  /* 0x0008 */ struct HKEY__* m_hKey;
  /* 0x0010 */ unsigned long m_dwIndex;
  /* 0x0014 */ unsigned long m_lcid;
  /* 0x0018 */ struct IEnumCATEGORYINFO* m_pcsIEnumCat;
  /* 0x0020 */ int m_fromcs;
  /* 0x0024 */ unsigned long m_dwRefCount;
  /* 0x0028 */ class Microsoft::WRL::Wrappers::SRWLock _enumeratorLock;
}; /* size: 0x0030 */

