typedef struct _Flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short ValidCallPending : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short ErrorPending : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned short BadStubData : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned short RuntimeCleanedUp : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short ClientHandleCreated : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned short HandlelessObjCall : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned short HasBigByValueArg : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned short ClientDcomPipeCall : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned short Unused : 8; /* bit position: 8 */
  }; /* bitfield */
} Flags, *PFlags; /* size: 0x0002 */

typedef struct _RPC_MESSAGE
{
  /* 0x0000 */ void* Handle;
  /* 0x0008 */ unsigned long DataRepresentation;
  /* 0x0010 */ void* Buffer;
  /* 0x0018 */ unsigned int BufferLength;
  /* 0x001c */ unsigned int ProcNum;
  /* 0x0020 */ struct _RPC_SYNTAX_IDENTIFIER* TransferSyntax;
  /* 0x0028 */ void* RpcInterfaceInformation;
  /* 0x0030 */ void* ReservedForRuntime;
  /* 0x0038 */ void* ManagerEpv;
  /* 0x0040 */ void* ImportContext;
  /* 0x0048 */ unsigned long RpcFlags;
  /* 0x004c */ long __PADDING__[1];
} RPC_MESSAGE, *PRPC_MESSAGE; /* size: 0x0050 */

typedef struct _MIDL_STUB_MESSAGE
{
  /* 0x0000 */ struct _RPC_MESSAGE* RpcMsg;
  /* 0x0008 */ unsigned char* Buffer;
  /* 0x0010 */ unsigned char* BufferStart;
  /* 0x0018 */ unsigned char* BufferEnd;
  /* 0x0020 */ unsigned char* BufferMark;
  /* 0x0028 */ unsigned long BufferLength;
  /* 0x002c */ unsigned long MemorySize;
  /* 0x0030 */ unsigned char* Memory;
  /* 0x0038 */ unsigned char IsClient;
  /* 0x0039 */ unsigned char Pad;
  /* 0x003a */ unsigned short uFlags2;
  /* 0x003c */ int ReuseBuffer;
  /* 0x0040 */ struct NDR_ALLOC_ALL_NODES_CONTEXT* pAllocAllNodesContext;
  /* 0x0048 */ struct NDR_POINTER_QUEUE_STATE* pPointerQueueState;
  /* 0x0050 */ int IgnoreEmbeddedPointers;
  /* 0x0058 */ unsigned char* PointerBufferMark;
  /* 0x0060 */ unsigned char CorrDespIncrement;
  /* 0x0061 */ unsigned char uFlags;
  /* 0x0062 */ unsigned short UniquePtrCount;
  /* 0x0068 */ unsigned __int64 MaxCount;
  /* 0x0070 */ unsigned long Offset;
  /* 0x0074 */ unsigned long ActualCount;
  /* 0x0078 */ void* pfnAllocate /* function */;
  /* 0x0080 */ void* pfnFree /* function */;
  /* 0x0088 */ unsigned char* StackTop;
  /* 0x0090 */ unsigned char* pPresentedType;
  /* 0x0098 */ unsigned char* pTransmitType;
  /* 0x00a0 */ void* SavedHandle;
  /* 0x00a8 */ const struct _MIDL_STUB_DESC* StubDesc;
  /* 0x00b0 */ struct _FULL_PTR_XLAT_TABLES* FullPtrXlatTables;
  /* 0x00b8 */ unsigned long FullPtrRefId;
  /* 0x00bc */ unsigned long PointerLength;
  struct /* bitfield */
  {
    /* 0x00c0 */ int fInDontFree : 1; /* bit position: 0 */
    /* 0x00c0 */ int fDontCallFreeInst : 1; /* bit position: 1 */
    /* 0x00c0 */ int fInOnlyParam : 1; /* bit position: 2 */
    /* 0x00c0 */ int fHasReturn : 1; /* bit position: 3 */
    /* 0x00c0 */ int fHasExtensions : 1; /* bit position: 4 */
    /* 0x00c0 */ int fHasNewCorrDesc : 1; /* bit position: 5 */
    /* 0x00c0 */ int fIsIn : 1; /* bit position: 6 */
    /* 0x00c0 */ int fIsOut : 1; /* bit position: 7 */
    /* 0x00c0 */ int fIsOicf : 1; /* bit position: 8 */
    /* 0x00c0 */ int fBufferValid : 1; /* bit position: 9 */
    /* 0x00c0 */ int fHasMemoryValidateCallback : 1; /* bit position: 10 */
    /* 0x00c0 */ int fInFree : 1; /* bit position: 11 */
    /* 0x00c0 */ int fNeedMCCP : 1; /* bit position: 12 */
    /* 0x00c0 */ int fUnused : 3; /* bit position: 13 */
    /* 0x00c0 */ int fUnused2 : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x00c4 */ unsigned long dwDestContext;
  /* 0x00c8 */ void* pvDestContext;
  /* 0x00d0 */ struct
  {
    /* 0x00d0 */ void* pad[2];
    /* 0x00e0 */ void* userContext;
  } /* size: 0x0018 */** SavedContextHandles;
  /* 0x00d8 */ long ParamNumber;
  /* 0x00e0 */ struct IRpcChannelBuffer* pRpcChannelBuffer;
  /* 0x00e8 */ struct ARRAY_INFO* pArrayInfo;
  /* 0x00f0 */ unsigned long* SizePtrCountArray;
  /* 0x00f8 */ unsigned long* SizePtrOffsetArray;
  /* 0x0100 */ unsigned long* SizePtrLengthArray;
  /* 0x0108 */ void* pArgQueue;
  /* 0x0110 */ unsigned long dwStubPhase;
  /* 0x0118 */ void* LowStackMark;
  /* 0x0120 */ struct _NDR_ASYNC_MESSAGE* pAsyncMsg;
  /* 0x0128 */ struct _NDR_CORRELATION_INFO* pCorrInfo;
  /* 0x0130 */ unsigned char* pCorrMemory;
  /* 0x0138 */ void* pMemoryList;
  /* 0x0140 */ __int64 pCSInfo;
  /* 0x0148 */ unsigned char* ConformanceMark;
  /* 0x0150 */ unsigned char* VarianceMark;
  /* 0x0158 */ __int64 Unused;
  /* 0x0160 */ struct _NDR_PROC_CONTEXT* pContext;
  /* 0x0168 */ void* ContextHandleHash;
  /* 0x0170 */ void* pUserMarshalList;
  /* 0x0178 */ __int64 Reserved51_3;
  /* 0x0180 */ __int64 Reserved51_4;
  /* 0x0188 */ __int64 Reserved51_5;
} MIDL_STUB_MESSAGE, *PMIDL_STUB_MESSAGE; /* size: 0x0190 */

enum SYNTAX_TYPE
{
  XFER_SYNTAX_DCE = -1970774780,
  XFER_SYNTAX_NDR64 = 0x71710533,
  XFER_SYNTAX_TEST_NDR64 = -1269596759,
};

struct INTERPRETER_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char FullPtrUsed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char RpcSsAllocUsed : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char ObjectProc : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char HasRpcFlags : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char IgnoreObjectException : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char HasCommOrFault : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char UseNewInitRoutines : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char Unused : 1; /* bit position: 7 */
  }; /* bitfield */
}; /* size: 0x0001 */

typedef struct _NDR_PROC_INFO
{
  /* 0x0000 */ struct INTERPRETER_FLAGS InterpreterFlags;
  /* 0x0008 */ struct _NDR_PROC_DESC* pProcDesc;
} NDR_PROC_INFO, *PNDR_PROC_INFO; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDR_ALLOCA_CONTEXT
{
  /* 0x0000 */ unsigned char* pBlockPointer;
  /* 0x0008 */ struct _LIST_ENTRY MemoryList;
  /* 0x0018 */ unsigned __int64 BytesRemaining;
  /* 0x0020 */ unsigned char PreAllocatedBlock[512];
} NDR_ALLOCA_CONTEXT, *PNDR_ALLOCA_CONTEXT; /* size: 0x0220 */

typedef struct _NDR_PROC_CONTEXT
{
  /* 0x0000 */ enum SYNTAX_TYPE CurrentSyntaxType;
  union
  {
    /* 0x0008 */ struct _NDR_PROC_INFO NdrInfo;
    /* 0x0008 */ struct _NDR64_PROC_FORMAT* Ndr64Header;
  }; /* size: 0x0010 */
  /* 0x0018 */ const unsigned char* pProcFormat;
  /* 0x0020 */ unsigned long NumberParams;
  /* 0x0028 */ void* Params;
  /* 0x0030 */ unsigned char* StartofStack;
  /* 0x0038 */ unsigned char HandleType;
  /* 0x0039 */ unsigned char CorrIncrement;
  /* 0x0040 */ void* SavedGenericHandle;
  /* 0x0048 */ const unsigned char* pHandleFormatSave;
  /* 0x0050 */ const unsigned char* DceTypeFormatString;
  struct /* bitfield */
  {
    /* 0x0058 */ unsigned long IsAsync : 1; /* bit position: 0 */
    /* 0x0058 */ unsigned long IsObject : 1; /* bit position: 1 */
    /* 0x0058 */ unsigned long HasPipe : 1; /* bit position: 2 */
    /* 0x0058 */ unsigned long HasComplexReturn : 1; /* bit position: 3 */
    /* 0x0058 */ unsigned long NeedsResend : 1; /* bit position: 4 */
    /* 0x0058 */ unsigned long UseLocator : 1; /* bit position: 5 */
    /* 0x0058 */ unsigned long Reserved7 : 1; /* bit position: 6 */
    /* 0x0058 */ unsigned long Reserved8 : 1; /* bit position: 7 */
    /* 0x0058 */ unsigned long Reservedleft : 8; /* bit position: 8 */
  }; /* bitfield */
  /* 0x005c */ unsigned long FloatDoubleMask;
  /* 0x0060 */ unsigned long ResendCount;
  /* 0x0064 */ unsigned long RpcFlags;
  /* 0x0068 */ unsigned long ExceptionFlag;
  /* 0x006c */ unsigned long StackSize;
  /* 0x0070 */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
  /* 0x0078 */ void* pfnValidate /* function */;
  /* 0x0080 */ void* ValidateCookie;
  /* 0x0088 */ void* pfnInit /* function */;
  /* 0x0090 */ void* pfnSizing /* function */;
  /* 0x0098 */ void* pfnMarshal /* function */;
  /* 0x00a0 */ void* pfnUnMarshal /* function */;
  /* 0x00a8 */ void* pfnExceptionHandling /* function */;
  /* 0x00b0 */ void* pfnClientFinally /* function */;
  /* 0x00b8 */ void* pfnGetBuffer /* function */;
  /* 0x00c0 */ void* pfnSendReceive /* function */;
  /* 0x00c8 */ struct _NDR_PIPE_DESC* pPipeDesc;
  /* 0x00d0 */ class NDR_POINTER_QUEUE_ELEMENT* pQueueFreeList;
  /* 0x00d8 */ class NDR_MINICOMPUTE_QUEUE* pMiniComputeQueue;
  /* 0x00e0 */ class NDR_MINICOMPUTE_QUEUE_ELEMENT* pConfQueueFreeList;
  /* 0x00e8 */ const unsigned char* pFormatSupplement;
  /* 0x00f0 */ struct _GUID CurrentActivityID;
  /* 0x0100 */ struct _NDR_ALLOCA_CONTEXT AllocateContext;
} NDR_PROC_CONTEXT, *PNDR_PROC_CONTEXT; /* size: 0x0320 */

typedef struct _NDR_ASYNC_MESSAGE
{
  /* 0x0000 */ long Version;
  /* 0x0004 */ long Signature;
  /* 0x0008 */ struct _RPC_ASYNC_STATE* AsyncHandle;
  /* 0x0010 */ struct _Flags Flags;
  /* 0x0012 */ unsigned short StubPhase;
  /* 0x0014 */ unsigned long RefCount;
  /* 0x0018 */ unsigned long ErrorCode;
  /* 0x0020 */ struct _RPC_MESSAGE RpcMsg;
  /* 0x0070 */ struct _MIDL_STUB_MESSAGE StubMsg;
  /* 0x0200 */ unsigned long* pdwStubPhase;
  /* 0x0208 */ struct _NDR_PROC_CONTEXT ProcContext;
  /* 0x0528 */ unsigned char AsyncGuard[16];
} NDR_ASYNC_MESSAGE, *PNDR_ASYNC_MESSAGE; /* size: 0x0538 */

