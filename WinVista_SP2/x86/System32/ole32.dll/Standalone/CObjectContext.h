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
  }; /* size: 0x0040 */
}; /* size: 0x002c */

class CObjectContext
{
  /* 0x001c */ unsigned long _cRefs;
  /* 0x0020 */ long _cUserRefs;
  /* 0x0024 */ long _cInternalRefs;
  /* 0x0028 */ unsigned long _dwFlags;
  /* 0x002c */ struct SHashChain _propChain;
  /* 0x0034 */ struct SHashChain _uuidChain;
  /* 0x003c */ struct tagInterfaceData* _pifData;
  /* 0x0040 */ unsigned long _MarshalSizeMax;
  /* 0x0044 */ class CComApartment* _pApartment;
  /* 0x0048 */ unsigned long _dwHashOfId;
  /* 0x004c */ struct _GUID _contextId;
  /* 0x0060 */ unsigned __int64 _urtCtxId;
  /* 0x0068 */ struct tagSPSCache _PSCache;
  /* 0x0078 */ struct IMarshal* _pMarshalProp;
  /* 0x007c */ long _cReleaseThreads;
  /* 0x0080 */ class CContextPropList _properties;
  /* 0x00ac */ struct IUnknown* _pMtsContext;
  /* 0x00b0 */ class CContextLife* volatile _pContextLife;
  /* 0x00b4 */ class CCtxConnectionManager* _pConnectionMgr;
  union
  {
    /* 0x0000 */ class CPageAllocator s_CXAllocator;
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ unsigned long s_cInstances;
  }; /* size: 0x0040 */
}; /* size: 0x00b8 */

