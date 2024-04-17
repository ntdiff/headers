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
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long cStrongRefs;
  /* 0x000c */ unsigned long cWeakRefs;
  /* 0x0010 */ unsigned long cPrivateRefs;
  /* 0x0014 */ void* pv;
  /* 0x0018 */ struct IUnknown* pStub;
  /* 0x001c */ class OXIDEntry* pOXIDEntry;
  /* 0x0020 */ struct _GUID ipid;
  /* 0x0030 */ struct _GUID iid;
  /* 0x0040 */ class CCtxComChnl* pChnl;
  /* 0x0044 */ struct IRCEntry* pIRCEntry;
  /* 0x0048 */ struct tagIPIDEntry* pOIDFLink;
  /* 0x004c */ struct tagIPIDEntry* pOIDBLink;
}; /* size: 0x0050 */

class CIPIDTable
{
  union
  {
    /* 0x0000 */ class CPageAllocator _palloc;
    /* 0x0000 */ struct tagIPIDEntry _oidListHead;
    /* 0x0000 */ struct _GUID* _prundownIPIDs;
    /* 0x0000 */ const unsigned long _ulrundownIPIDsMax;
    /* 0x0000 */ unsigned long _ulrundownIPIDsIndex;
  }; /* size: 0x0050 */
}; /* size: 0x0001 */

