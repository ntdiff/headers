typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

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

class OXIDEntry
{
  union
  {
    struct
    {
      /* 0x0000 */ class OXIDEntry* _pNext;
      /* 0x0004 */ class OXIDEntry* _pPrev;
      /* 0x0008 */ unsigned long _dwPid;
      /* 0x000c */ unsigned long _dwTid;
      /* 0x0010 */ struct _GUID _moxid;
      /* 0x0020 */ unsigned __int64 _mid;
      /* 0x0028 */ struct _GUID _ipidRundown;
      /* 0x0038 */ unsigned long _dwFlags;
      /* 0x003c */ struct HWND__* _hServerSTA;
      /* 0x0040 */ class CComApartment* _pParentApt;
      /* 0x0044 */ class CChannelHandle* volatile _pSharedDefaultHandle;
      /* 0x0048 */ void* _pAuthId;
      /* 0x004c */ struct tagDUALSTRINGARRAY* _pBinding;
      /* 0x0050 */ unsigned long _dwAuthnHint;
      /* 0x0054 */ unsigned long _dwAuthnSvc;
      /* 0x0058 */ class MIDEntry* _pMIDEntry;
      /* 0x005c */ struct IRemUnknown* _pRUSTA;
      /* 0x0060 */ long _cRefs;
      /* 0x0064 */ void* _hComplete;
      /* 0x0068 */ long _cCalls;
      /* 0x006c */ long _cResolverRef;
      /* 0x0070 */ unsigned long _dwExpiredTime;
      /* 0x0074 */ struct tagCOMVERSION _version;
      /* 0x0078 */ void* _pAppContainerServerSecurityDescriptor;
      /* 0x007c */ unsigned long _ulMarshaledTargetInfoLength;
      /* 0x0080 */ unsigned char* _pMarshaledTargetInfo;
      /* 0x0084 */ wchar_t* _pszServerPackageFullName;
    }; /* size: 0x0088 */
    /* 0x0000 */ class CPageAllocator _palloc;
  }; /* size: 0x0088 */
  /* 0x0088 */ struct _GUID _guidProcessIdentifier;
}; /* size: 0x0098 */

