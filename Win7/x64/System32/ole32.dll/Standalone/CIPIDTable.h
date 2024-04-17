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
}; /* size: 0x0050 */

class CPageAllocator
{
  /* 0x0000 */ class CInternalPageAllocator _pgalloc;
  /* 0x0050 */ void* _hHeap;
  /* 0x0058 */ unsigned __int64 _cbPerEntry;
  /* 0x0060 */ long _lNumEntries;
}; /* size: 0x0068 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagIPIDEntry
{
  /* 0x0000 */ struct tagIPIDEntry* pNextIPID;
  /* 0x0008 */ unsigned long dwFlags;
  /* 0x000c */ unsigned long cStrongRefs;
  /* 0x0010 */ unsigned long cWeakRefs;
  /* 0x0014 */ unsigned long cPrivateRefs;
  /* 0x0018 */ void* pv;
  /* 0x0020 */ struct IUnknown* pStub;
  /* 0x0028 */ class OXIDEntry* pOXIDEntry;
  /* 0x0030 */ struct _GUID ipid;
  /* 0x0040 */ struct _GUID iid;
  /* 0x0050 */ class CCtxComChnl* pChnl;
  /* 0x0058 */ struct IRCEntry* pIRCEntry;
  /* 0x0060 */ struct tagIPIDEntry* pOIDFLink;
  /* 0x0068 */ struct tagIPIDEntry* pOIDBLink;
}; /* size: 0x0070 */

class CIPIDTable
{
  union
  {
    /* 0x0000 */ class CPageAllocator _palloc;
    /* 0x0000 */ struct tagIPIDEntry _oidListHead;
  }; /* size: 0x0070 */
}; /* size: 0x0001 */

