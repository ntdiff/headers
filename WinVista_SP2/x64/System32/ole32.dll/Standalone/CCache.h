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

class CCache
{
  /* 0x0000 */ struct _RTL_SRWLOCK m_srwLock;
  /* 0x0008 */ struct tagElement** m_paBuckets;
  /* 0x0010 */ unsigned long m_cBuckets;
  /* 0x0014 */ unsigned long m_cElements;
  /* 0x0018 */ __int64 m_i64LocalCacheCount;
}; /* size: 0x0020 */

