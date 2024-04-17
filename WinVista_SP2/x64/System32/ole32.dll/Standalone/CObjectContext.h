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
      /* 0x0020 */ struct tagContextProperty* _pProps;
      /* 0x0028 */ int* _pSlots;
      /* 0x0030 */ struct tagContextProperty* _pCompareBuffer;
      /* 0x0038 */ struct _tagSCtxListIndex* _pIndex;
    }; /* size: 0x003c */
    /* 0x0000 */ class CPageAllocator s_NodeAllocator;
  }; /* size: 0x0080 */
}; /* size: 0x0040 */

class CObjectContext
{
  /* 0x0038 */ unsigned long _cRefs;
  /* 0x003c */ long _cUserRefs;
  /* 0x0040 */ long _cInternalRefs;
  /* 0x0044 */ unsigned long _dwFlags;
  /* 0x0048 */ struct SHashChain _propChain;
  /* 0x0058 */ struct SHashChain _uuidChain;
  /* 0x0068 */ struct tagInterfaceData* _pifData;
  /* 0x0070 */ unsigned long _MarshalSizeMax;
  /* 0x0078 */ class CComApartment* _pApartment;
  /* 0x0080 */ unsigned long _dwHashOfId;
  /* 0x0084 */ struct _GUID _contextId;
  /* 0x0098 */ unsigned __int64 _urtCtxId;
  /* 0x00a0 */ struct tagSPSCache _PSCache;
  /* 0x00c0 */ struct IMarshal* _pMarshalProp;
  /* 0x00c8 */ long _cReleaseThreads;
  /* 0x00d0 */ class CContextPropList _properties;
  /* 0x0110 */ struct IUnknown* _pMtsContext;
  /* 0x0118 */ class CContextLife* volatile _pContextLife;
  /* 0x0120 */ class CCtxConnectionManager* _pConnectionMgr;
  union
  {
    /* 0x0000 */ class CPageAllocator s_CXAllocator;
    /* 0x0000 */ int s_fInitialized;
    /* 0x0000 */ unsigned long s_cInstances;
  }; /* size: 0x0080 */
}; /* size: 0x0128 */

