typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCallEntry
{
  /* 0x0000 */ void* pNext;
  /* 0x0004 */ void* pvObject;
}; /* size: 0x0008 */

struct tagOutgoingCallData
{
  /* 0x0000 */ unsigned long dwServerPID;
  /* 0x0004 */ unsigned long dwServerTID;
}; /* size: 0x0008 */

struct tagIncomingCallData
{
  /* 0x0000 */ unsigned long dwClientPID;
}; /* size: 0x0004 */

struct tagOutgoingActivationData
{
  /* 0x0000 */ struct _GUID guidServer;
}; /* size: 0x0010 */

struct tagSOleTlsData
{
  /* 0x0000 */ void* pvThreadBase;
  /* 0x0004 */ class CSmAllocator* pSmAllocator;
  /* 0x0008 */ unsigned long dwApartmentID;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ long TlsMapIndex;
  /* 0x0014 */ void** ppTlsSlot;
  /* 0x0018 */ unsigned long cComInits;
  /* 0x001c */ unsigned long cOleInits;
  /* 0x0020 */ unsigned long cCalls;
  /* 0x0024 */ class CMessageCall* pCallInfo;
  /* 0x0028 */ class CAsyncCall* pFreeAsyncCall;
  /* 0x002c */ class CClientCall* pFreeClientCall;
  /* 0x0030 */ class CObjServer* pObjServer;
  /* 0x0034 */ unsigned long dwTIDCaller;
  /* 0x0038 */ class CObjectContext* pCurrentCtx;
  /* 0x003c */ class CObjectContext* pEmptyCtx;
  /* 0x0040 */ class CObjectContext* pNativeCtx;
  /* 0x0048 */ unsigned __int64 ContextId;
  /* 0x0050 */ class CComApartment* pNativeApt;
  /* 0x0054 */ struct IUnknown* pCallContext;
  /* 0x0058 */ class CCtxCall* pCtxCall;
  /* 0x005c */ class CPolicySet* pPS;
  /* 0x0060 */ void* pvPendingCallsFront;
  /* 0x0064 */ void* pvPendingCallsBack;
  /* 0x0068 */ class CAptCallCtrl* pCallCtrl;
  /* 0x006c */ class CSrvCallState* pTopSCS;
  /* 0x0070 */ struct IMessageFilter* pMsgFilter;
  /* 0x0074 */ struct HWND__* hwndSTA;
  /* 0x0078 */ long cORPCNestingLevel;
  /* 0x007c */ unsigned long cDebugData;
  /* 0x0080 */ struct _GUID LogicalThreadId;
  /* 0x0090 */ void* hThread;
  /* 0x0094 */ void* hRevert;
  /* 0x0098 */ struct IUnknown* pAsyncRelease;
  /* 0x009c */ struct HWND__* hwndDdeServer;
  /* 0x00a0 */ struct HWND__* hwndDdeClient;
  /* 0x00a4 */ unsigned long cServeDdeObjects;
  /* 0x00a8 */ void* pSTALSvrsFront;
  /* 0x00ac */ struct HWND__* hwndClip;
  /* 0x00b0 */ struct IDataObject* pDataObjClip;
  /* 0x00b4 */ unsigned long dwClipSeqNum;
  /* 0x00b8 */ unsigned long fIsClipWrapper;
  /* 0x00bc */ struct IUnknown* punkState;
  /* 0x00c0 */ unsigned long cCallCancellation;
  /* 0x00c4 */ unsigned long cAsyncSends;
  /* 0x00c8 */ class CAsyncCall* pAsyncCallList;
  /* 0x00cc */ class CSurrogatedObjectList* pSurrogateList;
  /* 0x00d0 */ void* pRWLockTlsEntry;
  /* 0x00d4 */ struct tagCallEntry CallEntry;
  /* 0x00dc */ struct tagContextStackNode* pContextStack;
  /* 0x00e0 */ struct tagInitializeSpyNode* pFirstSpyReg;
  /* 0x00e4 */ struct tagInitializeSpyNode* pFirstFreeSpyReg;
  /* 0x00e8 */ class CVerifierTlsData* pVerifierData;
  /* 0x00ec */ unsigned long dwMaxSpy;
  /* 0x00f0 */ unsigned char cCustomMarshallerRecursion;
  /* 0x00f4 */ void* pDragCursors;
  /* 0x00f8 */ struct IUnknown* punkError;
  /* 0x00fc */ unsigned long cbErrorData;
  /* 0x0100 */ struct tagOutgoingCallData outgoingCallData;
  /* 0x0108 */ struct tagIncomingCallData incomingCallData;
  /* 0x010c */ struct tagOutgoingActivationData outgoingActivationData;
  /* 0x011c */ long __PADDING__[1];
}; /* size: 0x0120 */

