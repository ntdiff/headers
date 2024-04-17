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
}; /* size: 0x0028 */

class CPageAllocator
{
  /* 0x0000 */ class CInternalPageAllocator _pgalloc;
  /* 0x0028 */ void* _hHeap;
  /* 0x002c */ unsigned long _cbPerEntry;
  /* 0x0030 */ long _lNumEntries;
}; /* size: 0x0034 */

class IFaceEntry
{
  union
  {
    struct
    {
      /* 0x0000 */ class IFaceEntry* _pNext;
      /* 0x0004 */ void* _pProxy;
      /* 0x0008 */ struct IRpcProxyBuffer* _pRpcProxy;
      /* 0x000c */ struct IRpcStubBuffer* _pRpcStub;
      /* 0x0010 */ void* _pServer;
      /* 0x0014 */ struct _GUID _iid;
      /* 0x0024 */ class CCtxChnl* _pCtxChnl;
      /* 0x0028 */ class CtxEntry* _pHead;
      /* 0x002c */ class CtxEntry* _pFreeList;
      /* 0x0030 */ struct ICallInterceptor* _pInterceptor;
      /* 0x0034 */ struct IUnknown* _pUnkInner;
    }; /* size: 0x0038 */
    /* 0x0000 */ class CPageAllocator s_allocator;
  }; /* size: 0x0038 */
}; /* size: 0x0038 */

