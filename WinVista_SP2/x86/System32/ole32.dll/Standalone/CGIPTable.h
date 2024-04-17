typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct MarshalParams
{
  /* 0x0000 */ struct _GUID iid;
  /* 0x0010 */ unsigned long mshlflags;
}; /* size: 0x0014 */

struct tagGIPEntry
{
  /* 0x0000 */ struct tagGIPEntry* pPrev;
  /* 0x0004 */ struct tagGIPEntry* pNext;
  /* 0x0008 */ unsigned long dwType;
  /* 0x000c */ unsigned long dwSeqNo;
  /* 0x0010 */ volatile long cUsage;
  /* 0x0014 */ unsigned long dwAptId;
  /* 0x0018 */ struct HWND__* hWndApt;
  /* 0x001c */ class CObjectContext* pContext;
  /* 0x0020 */ struct IUnknown* pUnk;
  /* 0x0024 */ void* pVtable;
  /* 0x0028 */ struct IUnknown* pUnkProxy;
  /* 0x002c */ struct MarshalParams mp;
  union
  {
    union
    {
      /* 0x0040 */ struct tagInterfaceData* pIFD;
      /* 0x0040 */ struct tagOBJREF* pobjref;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
}; /* size: 0x0044 */

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

class CGIPTable
{
  union
  {
    /* 0x0000 */ unsigned long _dwCurrSeqNo;
    /* 0x0000 */ int _fInRevokeAll;
    /* 0x0000 */ int _fInNAUninit;
    /* 0x0000 */ struct tagGIPEntry _InUseHead;
    /* 0x0000 */ class CPageAllocator _palloc;
    /* 0x0000 */ class COleStaticMutexSem _mxs;
  }; /* size: 0x0044 */
}; /* size: 0x0004 */

