struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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

class CIDObject
{
  /* 0x0004 */ struct SHashChain _pidChain;
  /* 0x000c */ struct SHashChain _oidChain;
  /* 0x0014 */ unsigned long _dwState;
  /* 0x0018 */ unsigned long _cRefs;
  /* 0x001c */ struct IUnknown* _pServer;
  /* 0x0020 */ class CObjectContext* _pServerCtx;
  /* 0x0024 */ struct _GUID _oid;
  /* 0x0034 */ unsigned long _aptID;
  /* 0x0038 */ class CStdWrapper* _pStdWrapper;
  /* 0x003c */ class CStdIdentity* _pStdID;
  /* 0x0040 */ unsigned long _cCalls;
  /* 0x0044 */ unsigned long _cLocks;
  /* 0x0048 */ struct SHashChain _oidUnpinReqChain;
  /* 0x0050 */ unsigned long _dwOidUnpinReqState;
  /* 0x0054 */ void* _pvObjectTrackCookie;
  union
  {
    /* 0x0000 */ class CPageAllocator s_allocator;
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ unsigned long s_cIDs;
  }; /* size: 0x0040 */
}; /* size: 0x0058 */

