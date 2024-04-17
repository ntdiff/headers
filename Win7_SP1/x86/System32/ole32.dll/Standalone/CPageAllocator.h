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
}; /* size: 0x0028 */

class CPageAllocator
{
  /* 0x0000 */ class CInternalPageAllocator _pgalloc;
  /* 0x0028 */ void* _hHeap;
  /* 0x002c */ unsigned long _cbPerEntry;
  /* 0x0030 */ long _lNumEntries;
}; /* size: 0x0034 */

