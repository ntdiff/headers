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
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

struct CStdMarshal::DiscSinkNode
{
  /* 0x0000 */ struct CStdMarshal::DiscSinkNode* pNext;
  /* 0x0004 */ struct CStdMarshal::DiscSinkNode* pPrev;
  /* 0x0008 */ struct IDisconnectSink* pSink;
  /* 0x000c */ void* pvCookie;
}; /* size: 0x0010 */

class CStdMarshal
{
  /* 0x0004 */ unsigned long _dwFlags;
  /* 0x0008 */ long _cIPIDs;
  /* 0x000c */ struct tagIPIDEntry* _pFirstIPID;
  /* 0x0010 */ class CStdIdentity* _pStdId;
  /* 0x0014 */ class CCtxComChnl* _pChnl;
  /* 0x0018 */ struct _GUID _clsidHandler;
  /* 0x0028 */ long _cNestedCalls;
  /* 0x002c */ long _cTableRefs;
  /* 0x0030 */ unsigned long _dwMarshalTime;
  /* 0x0034 */ struct IRemUnknown* _pSecureRemUnk;
  /* 0x0038 */ struct IUnknown* _pAsyncRelease;
  /* 0x003c */ class CtxEntry* _pCtxEntryHead;
  /* 0x0040 */ class CtxEntry* _pCtxFreeList;
  /* 0x0044 */ struct _RTL_CRITICAL_SECTION _csCtxEntry;
  /* 0x005c */ int _fCsInitialized;
  /* 0x0060 */ class CPolicySet* _pPS;
  /* 0x0064 */ class CIDObject* _pID;
  /* 0x0068 */ class CRefCache* _pRefCache;
  /* 0x006c */ struct CStdMarshal::DiscSinkNode _discHead;
  /* 0x007c */ unsigned long _dwLastCallTime;
}; /* size: 0x0080 */

