typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _GLOBAL_SHARED_CRITICAL_SECTION
{
  /* 0x0000 */ long LockCount;
  /* 0x0004 */ long RecursionCount;
  /* 0x0008 */ unsigned long OwningThread;
} GLOBAL_SHARED_CRITICAL_SECTION, *PGLOBAL_SHARED_CRITICAL_SECTION; /* size: 0x000c */

class CGlobalContext
{
  /* 0x0008 */ int _fTakeLock;
  /* 0x000c */ unsigned long _dfOpenLock;
  /* 0x0010 */ struct IMalloc* const _pMalloc;
  /* 0x0018 */ union _LARGE_INTEGER _luidMutexName;
  /* 0x0020 */ struct _GLOBAL_SHARED_CRITICAL_SECTION _GlobalPortion;
}; /* size: 0x0030 */

