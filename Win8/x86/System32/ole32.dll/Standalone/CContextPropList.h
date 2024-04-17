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

class CContextPropList
{
  union
  {
    struct
    {
      /* 0x0000 */ int _Max;
      /* 0x0004 */ int _iFirst;
      /* 0x0008 */ int _iLast;
      /* 0x000c */ int _Count;
      /* 0x0010 */ int _cCompareProps;
      /* 0x0014 */ unsigned long _Hash;
      /* 0x0018 */ int _slotIdx;
      /* 0x001c */ struct tagContextProperty* _pProps;
      /* 0x0020 */ int* _pSlots;
      /* 0x0024 */ struct tagContextProperty* _pCompareBuffer;
      /* 0x0028 */ struct _tagSCtxListIndex* _pIndex;
    }; /* size: 0x002c */
    /* 0x0000 */ class CPageAllocator s_NodeAllocator;
  }; /* size: 0x0034 */
}; /* size: 0x002c */

