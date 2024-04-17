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
  /* 0x0008 */ void* pvObject;
}; /* size: 0x0010 */

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
  /* 0x0008 */ class CSmAllocator* pSmAllocator;
  /* 0x0010 */ unsigned long dwApartmentID;
  /* 0x0014 */ unsigned long dwFlags;
  /* 0x0018 */ long TlsMapIndex;
  /* 0x0020 */ void** ppTlsSlot;
  /* 0x0028 */ unsigned long cComInits;
  /* 0x002c */ unsigned long cOleInits;
  /* 0x0030 */ unsigned long cCalls;
  /* 0x0038 */ class CMessageCall* pCallInfo;
  /* 0x0040 */ class CAsyncCall* pFreeAsyncCall;
  /* 0x0048 */ class CClientCall* pFreeClientCall;
  /* 0x0050 */ class CObjServer* pObjServer;
  /* 0x0058 */ unsigned long dwTIDCaller;
  /* 0x0060 */ class CObjectContext* pCurrentCtx;
  /* 0x0068 */ class CObjectContext* pEmptyCtx;
  /* 0x0070 */ class CObjectContext* pNativeCtx;
  /* 0x0078 */ unsigned __int64 ContextId;
  /* 0x0080 */ class CComApartment* pNativeApt;
  /* 0x0088 */ struct IUnknown* pCallContext;
  /* 0x0090 */ class CCtxCall* pCtxCall;
  /* 0x0098 */ class CPolicySet* pPS;
  /* 0x00a0 */ void* pvPendingCallsFront;
  /* 0x00a8 */ void* pvPendingCallsBack;
  /* 0x00b0 */ class CAptCallCtrl* pCallCtrl;
  /* 0x00b8 */ class CSrvCallState* pTopSCS;
  /* 0x00c0 */ struct IMessageFilter* pMsgFilter;
  /* 0x00c8 */ struct HWND__* hwndSTA;
  /* 0x00d0 */ long cORPCNestingLevel;
  /* 0x00d4 */ unsigned long cDebugData;
  /* 0x00d8 */ struct _GUID LogicalThreadId;
  /* 0x00e8 */ void* hThread;
  /* 0x00f0 */ void* hRevert;
  /* 0x00f8 */ struct IUnknown* pAsyncRelease;
  /* 0x0100 */ struct HWND__* hwndDdeServer;
  /* 0x0108 */ struct HWND__* hwndDdeClient;
  /* 0x0110 */ unsigned long cServeDdeObjects;
  /* 0x0118 */ void* pSTALSvrsFront;
  /* 0x0120 */ struct HWND__* hwndClip;
  /* 0x0128 */ struct IDataObject* pDataObjClip;
  /* 0x0130 */ unsigned long dwClipSeqNum;
  /* 0x0134 */ unsigned long fIsClipWrapper;
  /* 0x0138 */ struct IUnknown* punkState;
  /* 0x0140 */ unsigned long cCallCancellation;
  /* 0x0144 */ unsigned long cAsyncSends;
  /* 0x0148 */ class CAsyncCall* pAsyncCallList;
  /* 0x0150 */ class CSurrogatedObjectList* pSurrogateList;
  /* 0x0158 */ void* pRWLockTlsEntry;
  /* 0x0160 */ struct tagCallEntry CallEntry;
  /* 0x0170 */ struct tagContextStackNode* pContextStack;
  /* 0x0178 */ struct tagInitializeSpyNode* pFirstSpyReg;
  /* 0x0180 */ struct tagInitializeSpyNode* pFirstFreeSpyReg;
  /* 0x0188 */ class CVerifierTlsData* pVerifierData;
  /* 0x0190 */ unsigned long dwMaxSpy;
  /* 0x0194 */ unsigned char cCustomMarshallerRecursion;
  /* 0x0198 */ void* pDragCursors;
  /* 0x01a0 */ struct IUnknown* punkError;
  /* 0x01a8 */ unsigned long cbErrorData;
  /* 0x01ac */ struct tagOutgoingCallData outgoingCallData;
  /* 0x01b4 */ struct tagIncomingCallData incomingCallData;
  /* 0x01b8 */ struct tagOutgoingActivationData outgoingActivationData;
  /* 0x01c8 */ unsigned long cReentrancyFromUserAPC;
  /* 0x01cc */ long __PADDING__[1];
}; /* size: 0x01d0 */

