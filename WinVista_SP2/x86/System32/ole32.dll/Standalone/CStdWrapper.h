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

class CStdWrapper
{
  /* 0x0004 */ unsigned long _dwState;
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x000c */ unsigned long _cCalls;
  /* 0x0010 */ unsigned long _cIFaces;
  /* 0x0014 */ class IFaceEntry* _pIFaceHead;
  /* 0x0018 */ class CtxEntry* _pCtxEntryHead;
  /* 0x001c */ class CtxEntry* _pCtxFreeList;
  /* 0x0020 */ struct IUnknown* _pServer;
  /* 0x0024 */ class CIDObject* _pID;
  /* 0x0028 */ void* _pVtableAddress;
  union
  {
    /* 0x0000 */ class CPageAllocator s_allocator;
    /* 0x0000 */ unsigned long s_cObjects;
    /* 0x0000 */ int s_fInitialized;
  }; /* size: 0x0040 */
}; /* size: 0x002c */

