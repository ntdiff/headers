typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

struct CStdMarshal::DiscSinkNode
{
  /* 0x0000 */ struct CStdMarshal::DiscSinkNode* pNext;
  /* 0x0008 */ struct CStdMarshal::DiscSinkNode* pPrev;
  /* 0x0010 */ struct IDisconnectSink* pSink;
  /* 0x0018 */ void* pvCookie;
}; /* size: 0x0020 */

class CStdMarshal
{
  /* 0x0008 */ unsigned long _dwFlags;
  /* 0x000c */ long _cIPIDs;
  /* 0x0010 */ struct tagIPIDEntry* _pFirstIPID;
  /* 0x0018 */ class CStdIdentity* _pStdId;
  /* 0x0020 */ class CCtxComChnl* _pChnl;
  /* 0x0028 */ struct _GUID _clsidHandler;
  /* 0x0038 */ long _cNestedCalls;
  /* 0x003c */ long _cTableRefs;
  /* 0x0040 */ unsigned long _dwMarshalTime;
  /* 0x0048 */ struct IRemUnknown* _pSecureRemUnk;
  /* 0x0050 */ struct IUnknown* _pAsyncRelease;
  /* 0x0058 */ class CtxEntry* _pCtxEntryHead;
  /* 0x0060 */ class CtxEntry* _pCtxFreeList;
  /* 0x0068 */ struct _RTL_CRITICAL_SECTION _csCtxEntry;
  /* 0x0090 */ int _fCsInitialized;
  /* 0x0098 */ class CPolicySet* _pPS;
  /* 0x00a0 */ class CIDObject* _pID;
  /* 0x00a8 */ class CRefCache* _pRefCache;
  /* 0x00b0 */ struct CStdMarshal::DiscSinkNode _discHead;
  /* 0x00d0 */ unsigned long _dwLastCallTime;
}; /* size: 0x00d8 */

