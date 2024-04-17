class CUUIDHashTable
{
}; /* size: 0x0028 */

struct tagPageEntry
{
  /* 0x0000 */ struct tagPageEntry* pNext;
  /* 0x0008 */ unsigned long dwFlag;
  /* 0x000c */ long __PADDING__[1];
}; /* size: 0x0010 */

class CInternalPageAllocator
{
  /* 0x0000 */ long _cPages;
  /* 0x0008 */ struct tagPageEntry** _pPageListStart;
  /* 0x0010 */ struct tagPageEntry** _pPageListEnd;
  /* 0x0018 */ unsigned long _dwFlags;
  /* 0x0020 */ struct tagPageEntry _ListHead;
  /* 0x0030 */ long _cEntries;
  /* 0x0038 */ unsigned __int64 _cbPerEntry;
  /* 0x0040 */ unsigned short _cEntriesPerPage;
  /* 0x0048 */ class COleStaticMutexSem* _pLock;
}; /* size: 0x0050 */

class CPageAllocator
{
  /* 0x0000 */ class CInternalPageAllocator _pgalloc;
  /* 0x0050 */ void* _hHeap;
  /* 0x0058 */ unsigned __int64 _cbPerEntry;
  /* 0x0060 */ long _lNumEntries;
}; /* size: 0x0068 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class COleStaticMutexSem
{
  /* 0x0000 */ unsigned char _fInitialized;
  /* 0x0001 */ unsigned char _fUseSpincount;
  /* 0x0004 */ unsigned long _cLocks;
  /* 0x0008 */ unsigned long _dwLine;
  /* 0x0010 */ const char* _pszFile;
  /* 0x0018 */ const char* _pszLockName;
  /* 0x0020 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0048 */

class CRIFTable
{
  union
  {
    /* 0x0000 */ int _fPreFilled;
    /* 0x0000 */ class CUUIDHashTable _HashTbl;
    /* 0x0000 */ class CPageAllocator _palloc;
    /* 0x0000 */ class COleStaticMutexSem _mxs;
  }; /* size: 0x0068 */
}; /* size: 0x0001 */

