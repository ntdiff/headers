struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

struct tagSPSChain
{
  /* 0x0000 */ struct tagSPSChain* pNext;
  /* 0x0004 */ struct tagSPSChain* pPrev;
}; /* size: 0x0008 */

struct tagSPSCache
{
  /* 0x0000 */ struct tagSPSChain clientPSChain;
  /* 0x0008 */ struct tagSPSChain serverPSChain;
}; /* size: 0x0010 */

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

class CPolicySet
{
  /* 0x0004 */ struct SHashChain _chain;
  /* 0x000c */ unsigned long _dwFlags;
  /* 0x0010 */ unsigned long _cRefs;
  /* 0x0014 */ unsigned long _cPolicies;
  /* 0x0018 */ unsigned long _dwAptID;
  /* 0x001c */ class CObjectContext* _pClientCtx;
  /* 0x0020 */ class CObjectContext* _pServerCtx;
  /* 0x0024 */ struct tagPolicyEntry* _pFirstEntry;
  /* 0x0028 */ struct tagPolicyEntry* _pLastEntry;
  /* 0x002c */ struct tagSPSCache _PSCache;
  union
  {
    /* 0x0000 */ class CPageAllocator s_PSallocator;
    /* 0x0000 */ class CPageAllocator s_PEallocator;
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ unsigned long s_cObjects;
  }; /* size: 0x0040 */
}; /* size: 0x003c */

