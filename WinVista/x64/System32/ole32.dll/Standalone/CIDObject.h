struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

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
  /* 0x0050 */ void* _pfnMyAlloc /* function */;
  /* 0x0058 */ void* _pfnMyFree /* function */;
}; /* size: 0x0060 */

class CPageAllocator
{
  /* 0x0000 */ class CInternalPageAllocator _pgalloc;
  /* 0x0060 */ void* _hHeap;
  /* 0x0068 */ unsigned __int64 _cbPerEntry;
  /* 0x0070 */ long _lNumEntries;
  /* 0x0078 */ class COleStaticMutexSem* _pLock;
}; /* size: 0x0080 */

class CIDObject
{
  /* 0x0008 */ struct SHashChain _pidChain;
  /* 0x0018 */ struct SHashChain _oidChain;
  /* 0x0028 */ unsigned long _dwState;
  /* 0x002c */ unsigned long _cRefs;
  /* 0x0030 */ struct IUnknown* _pServer;
  /* 0x0038 */ class CObjectContext* _pServerCtx;
  /* 0x0040 */ struct _GUID _oid;
  /* 0x0050 */ unsigned long _aptID;
  /* 0x0058 */ class CStdWrapper* _pStdWrapper;
  /* 0x0060 */ class CStdIdentity* _pStdID;
  /* 0x0068 */ unsigned long _cCalls;
  /* 0x006c */ unsigned long _cLocks;
  /* 0x0070 */ struct SHashChain _oidUnpinReqChain;
  /* 0x0080 */ unsigned long _dwOidUnpinReqState;
  /* 0x0088 */ void* _pvObjectTrackCookie;
  union
  {
    /* 0x0000 */ class CPageAllocator s_allocator;
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ unsigned long s_cIDs;
  }; /* size: 0x0080 */
}; /* size: 0x0090 */

