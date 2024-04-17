typedef struct _RTL_SRWLOCK
{
  /* 0x0000 */ void* Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

class CCache
{
  /* 0x0000 */ struct _RTL_SRWLOCK m_srwLock;
  /* 0x0008 */ struct tagElement** m_paBuckets;
  /* 0x0010 */ unsigned long m_cBuckets;
  /* 0x0014 */ unsigned long m_cElements;
  /* 0x0018 */ __int64 m_i64LocalCacheCount;
}; /* size: 0x0020 */

