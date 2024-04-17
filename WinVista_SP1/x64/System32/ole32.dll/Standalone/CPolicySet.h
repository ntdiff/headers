struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

struct tagSPSChain
{
  /* 0x0000 */ struct tagSPSChain* pNext;
  /* 0x0008 */ struct tagSPSChain* pPrev;
}; /* size: 0x0010 */

struct tagSPSCache
{
  /* 0x0000 */ struct tagSPSChain clientPSChain;
  /* 0x0010 */ struct tagSPSChain serverPSChain;
}; /* size: 0x0020 */

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

class CPolicySet
{
  /* 0x0008 */ struct SHashChain _chain;
  /* 0x0018 */ unsigned long _dwFlags;
  /* 0x001c */ unsigned long _cRefs;
  /* 0x0020 */ unsigned long _cPolicies;
  /* 0x0024 */ unsigned long _dwAptID;
  /* 0x0028 */ class CObjectContext* _pClientCtx;
  /* 0x0030 */ class CObjectContext* _pServerCtx;
  /* 0x0038 */ struct tagPolicyEntry* _pFirstEntry;
  /* 0x0040 */ struct tagPolicyEntry* _pLastEntry;
  /* 0x0048 */ struct tagSPSCache _PSCache;
  union
  {
    /* 0x0000 */ class CPageAllocator s_PSallocator;
    /* 0x0000 */ class CPageAllocator s_PEallocator;
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ unsigned long s_cObjects;
  }; /* size: 0x0080 */
}; /* size: 0x0068 */

