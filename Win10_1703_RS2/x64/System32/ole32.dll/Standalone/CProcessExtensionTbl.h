class CExtHashTable
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
  /* 0x0000 */ unsigned __int64 _cPages;
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

class CProcessExtensionTbl
{
  /* 0x0010 */ class CExtHashTable _HashTbl;
  /* 0x0038 */ class CPageAllocator _palloc;
}; /* size: 0x00a0 */

