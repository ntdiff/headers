typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

struct CEffPermsCacheLUID::tagCACHE_ENTRY
{
  /* 0x0000 */ struct _LUID lClient;
  /* 0x0008 */ unsigned long dwEffectivePermissions;
}; /* size: 0x000c */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class CEffPermsCacheLUID
{
  /* 0x0000 */ struct CEffPermsCacheLUID::tagCACHE_ENTRY m_cache[23];
  /* 0x0118 */ struct _RTL_CRITICAL_SECTION m_CacheLock;
  /* 0x0140 */ int m_bLockValid;
}; /* size: 0x0148 */

