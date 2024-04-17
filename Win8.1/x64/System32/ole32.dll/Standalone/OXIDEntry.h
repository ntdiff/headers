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

class OXIDEntry
{
  union
  {
    struct
    {
      /* 0x0000 */ class OXIDEntry* _pNext;
      /* 0x0008 */ class OXIDEntry* _pPrev;
      /* 0x0010 */ unsigned long _dwPid;
      /* 0x0014 */ unsigned long _dwTid;
      /* 0x0018 */ struct _GUID _moxid;
      /* 0x0028 */ unsigned __int64 _mid;
      /* 0x0030 */ struct _GUID _ipidRundown;
      /* 0x0040 */ unsigned long _dwFlags;
      /* 0x0048 */ struct HWND__* _hServerSTA;
      /* 0x0050 */ class CComApartment* _pParentApt;
      /* 0x0058 */ class CChannelHandle* volatile _pSharedDefaultHandle;
      /* 0x0060 */ void* _pAuthId;
      /* 0x0068 */ struct tagDUALSTRINGARRAY* _pBinding;
      /* 0x0070 */ unsigned long _dwAuthnHint;
      /* 0x0074 */ unsigned long _dwAuthnSvc;
      /* 0x0078 */ class MIDEntry* _pMIDEntry;
      /* 0x0080 */ struct IRemUnknown* _pRUSTA;
      /* 0x0088 */ long _cRefs;
      /* 0x0090 */ void* _hComplete;
      /* 0x0098 */ long _cCalls;
      /* 0x009c */ long _cResolverRef;
      /* 0x00a0 */ unsigned long _dwExpiredTime;
      /* 0x00a4 */ struct tagCOMVERSION _version;
      /* 0x00a8 */ void* _pAppContainerServerSecurityDescriptor;
      /* 0x00b0 */ unsigned long _ulMarshaledTargetInfoLength;
      /* 0x00b8 */ unsigned char* _pMarshaledTargetInfo;
      /* 0x00c0 */ wchar_t* _pszServerPackageFullName;
    }; /* size: 0x00bc */
    /* 0x0000 */ class CPageAllocator _palloc;
  }; /* size: 0x00bc */
  /* 0x00c8 */ struct _GUID _guidProcessIdentifier;
}; /* size: 0x00d8 */

