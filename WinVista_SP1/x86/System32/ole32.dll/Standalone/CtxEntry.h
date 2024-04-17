struct tagPageEntry
{
  /* 0x0000 */ struct tagPageEntry* pNext;
  /* 0x0004 */ unsigned long dwFlag;
}; /* size: 0x0008 */

class CInternalPageAllocator
{
  /* 0x0000 */ long _cPages;
  /* 0x0004 */ struct tagPageEntry** _pPageListStart;
  /* 0x0008 */ struct tagPageEntry** _pPageListEnd;
  /* 0x000c */ unsigned long _dwFlags;
  /* 0x0010 */ struct tagPageEntry _ListHead;
  /* 0x0018 */ long _cEntries;
  /* 0x001c */ unsigned long _cbPerEntry;
  /* 0x0020 */ unsigned short _cEntriesPerPage;
  /* 0x0024 */ class COleStaticMutexSem* _pLock;
  /* 0x0028 */ void* _pfnMyAlloc /* function */;
  /* 0x002c */ void* _pfnMyFree /* function */;
}; /* size: 0x0030 */

class CPageAllocator
{
  /* 0x0000 */ class CInternalPageAllocator _pgalloc;
  /* 0x0030 */ void* _hHeap;
  /* 0x0034 */ unsigned long _cbPerEntry;
  /* 0x0038 */ long _lNumEntries;
  /* 0x003c */ class COleStaticMutexSem* _pLock;
}; /* size: 0x0040 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class COleStaticMutexSem
{
  /* 0x0000 */ class COleStaticMutexSem* pNextMutex;
  /* 0x0004 */ unsigned char _fInitialized;
  /* 0x0005 */ unsigned char _fAutoDestruct;
  /* 0x0006 */ unsigned char _fUseSpincount;
  /* 0x0008 */ unsigned long _cLocks;
  /* 0x000c */ unsigned long _dwLine;
  /* 0x0010 */ const char* _pszFile;
  /* 0x0014 */ const char* _pszLockName;
  /* 0x0018 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0030 */

class CtxEntry
{
  union
  {
    struct
    {
      /* 0x0000 */ class CtxEntry* _pNext;
      /* 0x0004 */ class CtxEntry* _pFree;
      /* 0x0008 */ unsigned long _cRefs;
      /* 0x000c */ class CContextLife* _pLife;
      /* 0x0010 */ class CPolicySet* _pPS;
      /* 0x0014 */ class CObjectContext* _pServerCtx;
    }; /* size: 0x0018 */
    /* 0x0000 */ class CPageAllocator s_allocator;
    /* 0x0000 */ class COleStaticMutexSem s_allocLock;
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ unsigned long s_cEntries;
  }; /* size: 0x0040 */
}; /* size: 0x0018 */

