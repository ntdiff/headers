typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct CallEntryBuffer
{
  /* 0x0000 */ unsigned long Reserved[3];
}; /* size: 0x000c */

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

enum OLETLS_PREVENT_RUNDOWN_MITIGATION
{
  NoMitigationInEffect = 0,
  MarshalingWithInParameterMitigation = 1,
  MarshalingWithInprocOutParameterMitigation = 2,
  MarshalingWithOutofprocOutParameterMitigation = 3,
  MarshalingWithMshlflagsTablestrong = 4,
  UnmarshalingWithInParameterMitigation = 5,
  UnmarshalingWithInprocOutParameterMitigation = 6,
  UnmarshalingWithOutofprocOutParameterMitigation = 7,
};

enum ComTlsFlags
{
  None = 0,
  ChainRestrictedErrors = 1,
};

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
  /* 0x0024 */ class ServerCall* pServerCall;
  /* 0x0028 */ struct ThreadCallObjectCache* pCallObjectCache;
  /* 0x002c */ struct tagContextStackNode* pContextStack;
  /* 0x0030 */ class CObjServer* pObjServer;
  /* 0x0034 */ unsigned long dwTIDCaller;
  /* 0x0038 */ void* pCurrentCtxForNefariousReaders;
  /* 0x003c */ class CObjectContext* pCurrentContext;
  /* 0x0040 */ class CObjectContext* pEmptyCtx;
  /* 0x0048 */ unsigned __int64 ContextId;
  /* 0x0050 */ class CComApartment* pNativeApt;
  /* 0x0054 */ struct IUnknown* pCallContext;
  /* 0x0058 */ class CCtxCall* pCtxCall;
  /* 0x005c */ class CPolicySet* pPS;
  /* 0x0060 */ void* pvPendingCallsFront;
  /* 0x0064 */ void* pvPendingCallsBack;
  /* 0x0068 */ class CAptCallCtrl* pCallCtrl;
  /* 0x006c */ class CSrvCallState* pTopSCS;
  /* 0x0070 */ struct HWND__* hwndSTA;
  /* 0x0074 */ long cORPCNestingLevel;
  /* 0x0078 */ unsigned long cDebugData;
  /* 0x007c */ struct _GUID LogicalThreadId;
  /* 0x008c */ void* hThread;
  /* 0x0090 */ void* hRevert;
  /* 0x0094 */ struct IUnknown* pAsyncRelease;
  /* 0x0098 */ struct HWND__* hwndDdeServer;
  /* 0x009c */ struct HWND__* hwndDdeClient;
  /* 0x00a0 */ unsigned long cServeDdeObjects;
  /* 0x00a4 */ void* pSTALSvrsFront;
  /* 0x00a8 */ struct HWND__* hwndClip;
  /* 0x00ac */ struct IDataObject* pDataObjClip;
  /* 0x00b0 */ unsigned long dwClipSeqNum;
  /* 0x00b4 */ unsigned long fIsClipWrapper;
  /* 0x00b8 */ struct IUnknown* punkState;
  /* 0x00bc */ unsigned long cCallCancellation;
  /* 0x00c0 */ unsigned long cAsyncSends;
  /* 0x00c4 */ class CAsyncCall* pAsyncCallList;
  /* 0x00c8 */ class CSurrogatedObjectList* pSurrogateList;
  /* 0x00cc */ void* pRWLockTlsEntry;
  /* 0x00d0 */ struct CallEntryBuffer CallEntry;
  /* 0x00dc */ struct tagInitializeSpyNode* pFirstSpyReg;
  /* 0x00e0 */ struct tagInitializeSpyNode* pFirstFreeSpyReg;
  /* 0x00e4 */ class CVerifierTlsData* pVerifierData;
  /* 0x00e8 */ unsigned long dwMaxSpy;
  /* 0x00ec */ unsigned char cCustomMarshallerRecursion;
  /* 0x00f0 */ void* pDragCursors;
  /* 0x00f4 */ struct IUnknown* punkError;
  /* 0x00f8 */ unsigned long cbErrorData;
  /* 0x00fc */ struct tagOutgoingCallData outgoingCallData;
  /* 0x0104 */ struct tagIncomingCallData incomingCallData;
  /* 0x0108 */ struct tagOutgoingActivationData outgoingActivationData;
  /* 0x0118 */ unsigned long cReentrancyFromUserAPC;
  /* 0x011c */ class ModernSTAWaitContext* pModernSTAWaitContext;
  /* 0x0120 */ volatile unsigned long dwCrossThreadFlags;
  /* 0x0124 */ unsigned long dwNestedRemRelease;
  /* 0x0128 */ unsigned long cIncomingTouchedASTACalls;
  /* 0x012c */ class PushLogicalThreadId* pTopPushedLogicalThreadId;
  /* 0x0130 */ unsigned long iXslockOwnerTableHint;
  /* 0x0134 */ enum OLETLS_PREVENT_RUNDOWN_MITIGATION currentPreventRundownMitigation;
  /* 0x0138 */ int fOweForcedBulkUpdateForCurrentMitigation;
  /* 0x013c */ struct IUnknown* pClipboardBroker;
  /* 0x0140 */ unsigned long dwActivationType;
  /* 0x0144 */ unsigned long cTouchedAstasInActiveCall;
  /* 0x0148 */ unsigned __int64* pTouchedAstasInActiveCall;
  /* 0x014c */ class UnmarshalForQueryInterface* pTopmostUnmarshalForQueryInterface;
  /* 0x0150 */ class CoGetStandardMarshalInProgress* pTopmostCoGetStandardMarshalInProgress;
  /* 0x0154 */ const struct WireContainerThis* requestContainerPassthroughData;
  /* 0x0158 */ unsigned long requestContainerPassthroughDataSize;
  /* 0x015c */ int freeRequestContainerPassthroughData;
  /* 0x0160 */ struct WireContainerThat* responseContainerPassthroughData;
  /* 0x0164 */ unsigned long responseContainerPassthroughDataSize;
  /* 0x0168 */ enum ComTlsFlags comTlsFlags;
  /* 0x016c */ long __PADDING__[1];
}; /* size: 0x0170 */

