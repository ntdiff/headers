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
  /* 0x0004 */ unsigned long DataRepresentation;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned int BufferLength;
  /* 0x0010 */ unsigned int ProcNum;
  /* 0x0014 */ struct _RPC_SYNTAX_IDENTIFIER* TransferSyntax;
  /* 0x0018 */ void* RpcInterfaceInformation;
  /* 0x001c */ void* ReservedForRuntime;
  /* 0x0020 */ void* ManagerEpv;
  /* 0x0024 */ void* ImportContext;
  /* 0x0028 */ unsigned long RpcFlags;
} RPC_MESSAGE, *PRPC_MESSAGE; /* size: 0x002c */

typedef struct _MIDL_STUB_MESSAGE
{
  /* 0x0000 */ struct _RPC_MESSAGE* RpcMsg;
  /* 0x0004 */ unsigned char* Buffer;
  /* 0x0008 */ unsigned char* BufferStart;
  /* 0x000c */ unsigned char* BufferEnd;
  /* 0x0010 */ unsigned char* BufferMark;
  /* 0x0014 */ unsigned long BufferLength;
  /* 0x0018 */ unsigned long MemorySize;
  /* 0x001c */ unsigned char* Memory;
  /* 0x0020 */ unsigned char IsClient;
  /* 0x0021 */ unsigned char Pad;
  /* 0x0022 */ unsigned short uFlags2;
  /* 0x0024 */ int ReuseBuffer;
  /* 0x0028 */ struct NDR_ALLOC_ALL_NODES_CONTEXT* pAllocAllNodesContext;
  /* 0x002c */ struct NDR_POINTER_QUEUE_STATE* pPointerQueueState;
  /* 0x0030 */ int IgnoreEmbeddedPointers;
  /* 0x0034 */ unsigned char* PointerBufferMark;
  /* 0x0038 */ unsigned char CorrDespIncrement;
  /* 0x0039 */ unsigned char uFlags;
  /* 0x003a */ unsigned short UniquePtrCount;
  /* 0x003c */ unsigned long MaxCount;
  /* 0x0040 */ unsigned long Offset;
  /* 0x0044 */ unsigned long ActualCount;
  /* 0x0048 */ void* pfnAllocate /* function */;
  /* 0x004c */ void* pfnFree /* function */;
  /* 0x0050 */ unsigned char* StackTop;
  /* 0x0054 */ unsigned char* pPresentedType;
  /* 0x0058 */ unsigned char* pTransmitType;
  /* 0x005c */ void* SavedHandle;
  /* 0x0060 */ const struct _MIDL_STUB_DESC* StubDesc;
  /* 0x0064 */ struct _FULL_PTR_XLAT_TABLES* FullPtrXlatTables;
  /* 0x0068 */ unsigned long FullPtrRefId;
  /* 0x006c */ unsigned long PointerLength;
  struct /* bitfield */
  {
    /* 0x0070 */ int fInDontFree : 1; /* bit position: 0 */
    /* 0x0070 */ int fDontCallFreeInst : 1; /* bit position: 1 */
    /* 0x0070 */ int fInOnlyParam : 1; /* bit position: 2 */
    /* 0x0070 */ int fHasReturn : 1; /* bit position: 3 */
    /* 0x0070 */ int fHasExtensions : 1; /* bit position: 4 */
    /* 0x0070 */ int fHasNewCorrDesc : 1; /* bit position: 5 */
    /* 0x0070 */ int fIsIn : 1; /* bit position: 6 */
    /* 0x0070 */ int fIsOut : 1; /* bit position: 7 */
    /* 0x0070 */ int fIsOicf : 1; /* bit position: 8 */
    /* 0x0070 */ int fBufferValid : 1; /* bit position: 9 */
    /* 0x0070 */ int fHasMemoryValidateCallback : 1; /* bit position: 10 */
    /* 0x0070 */ int fInFree : 1; /* bit position: 11 */
    /* 0x0070 */ int fNeedMCCP : 1; /* bit position: 12 */
    /* 0x0070 */ int fUnused : 3; /* bit position: 13 */
    /* 0x0070 */ int fUnused2 : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0074 */ unsigned long dwDestContext;
  /* 0x0078 */ void* pvDestContext;
  /* 0x007c */ struct
  {
    /* 0x007c */ void* pad[2];
    /* 0x0084 */ void* userContext;
  } /* size: 0x000c */** SavedContextHandles;
  /* 0x0080 */ long ParamNumber;
  /* 0x0084 */ struct IRpcChannelBuffer* pRpcChannelBuffer;
  /* 0x0088 */ struct ARRAY_INFO* pArrayInfo;
  /* 0x008c */ unsigned long* SizePtrCountArray;
  /* 0x0090 */ unsigned long* SizePtrOffsetArray;
  /* 0x0094 */ unsigned long* SizePtrLengthArray;
  /* 0x0098 */ void* pArgQueue;
  /* 0x009c */ unsigned long dwStubPhase;
  /* 0x00a0 */ void* LowStackMark;
  /* 0x00a4 */ struct _NDR_ASYNC_MESSAGE* pAsyncMsg;
  /* 0x00a8 */ struct _NDR_CORRELATION_INFO* pCorrInfo;
  /* 0x00ac */ unsigned char* pCorrMemory;
  /* 0x00b0 */ void* pMemoryList;
  /* 0x00b4 */ int pCSInfo;
  /* 0x00b8 */ unsigned char* ConformanceMark;
  /* 0x00bc */ unsigned char* VarianceMark;
  /* 0x00c0 */ int Unused;
  /* 0x00c4 */ struct _NDR_PROC_CONTEXT* pContext;
  /* 0x00c8 */ void* ContextHandleHash;
  /* 0x00cc */ void* pUserMarshalList;
  /* 0x00d0 */ int Reserved51_3;
  /* 0x00d4 */ int Reserved51_4;
  /* 0x00d8 */ int Reserved51_5;
} MIDL_STUB_MESSAGE, *PMIDL_STUB_MESSAGE; /* size: 0x00dc */

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
  /* 0x0004 */ struct _NDR_PROC_DESC* pProcDesc;
} NDR_PROC_INFO, *PNDR_PROC_INFO; /* size: 0x0008 */

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
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDR_ALLOCA_CONTEXT
{
  /* 0x0000 */ unsigned char* pBlockPointer;
  /* 0x0004 */ struct _LIST_ENTRY MemoryList;
  /* 0x000c */ unsigned long BytesRemaining;
  /* 0x0010 */ unsigned char PreAllocatedBlock[512];
} NDR_ALLOCA_CONTEXT, *PNDR_ALLOCA_CONTEXT; /* size: 0x0210 */

typedef struct _NDR_PROC_CONTEXT
{
  /* 0x0000 */ enum SYNTAX_TYPE CurrentSyntaxType;
  union
  {
    /* 0x0004 */ struct _NDR_PROC_INFO NdrInfo;
    /* 0x0004 */ struct _NDR64_PROC_FORMAT* Ndr64Header;
  }; /* size: 0x0008 */
  /* 0x000c */ const unsigned char* pProcFormat;
  /* 0x0010 */ unsigned long NumberParams;
  /* 0x0014 */ void* Params;
  /* 0x0018 */ unsigned char* StartofStack;
  /* 0x001c */ unsigned char HandleType;
  /* 0x001d */ unsigned char CorrIncrement;
  /* 0x0020 */ void* SavedGenericHandle;
  /* 0x0024 */ const unsigned char* pHandleFormatSave;
  /* 0x0028 */ const unsigned char* DceTypeFormatString;
  struct /* bitfield */
  {
    /* 0x002c */ unsigned long IsAsync : 1; /* bit position: 0 */
    /* 0x002c */ unsigned long IsObject : 1; /* bit position: 1 */
    /* 0x002c */ unsigned long HasPipe : 1; /* bit position: 2 */
    /* 0x002c */ unsigned long HasComplexReturn : 1; /* bit position: 3 */
    /* 0x002c */ unsigned long NeedsResend : 1; /* bit position: 4 */
    /* 0x002c */ unsigned long UseLocator : 1; /* bit position: 5 */
    /* 0x002c */ unsigned long Reserved7 : 1; /* bit position: 6 */
    /* 0x002c */ unsigned long Reserved8 : 1; /* bit position: 7 */
    /* 0x002c */ unsigned long Reservedleft : 8; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0030 */ unsigned long FloatDoubleMask;
  /* 0x0034 */ unsigned long ResendCount;
  /* 0x0038 */ unsigned long RpcFlags;
  /* 0x003c */ unsigned long ExceptionFlag;
  /* 0x0040 */ unsigned long StackSize;
  /* 0x0044 */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
  /* 0x0048 */ void* pfnValidate /* function */;
  /* 0x004c */ void* ValidateCookie;
  /* 0x0050 */ void* pfnInit /* function */;
  /* 0x0054 */ void* pfnSizing /* function */;
  /* 0x0058 */ void* pfnMarshal /* function */;
  /* 0x005c */ void* pfnUnMarshal /* function */;
  /* 0x0060 */ void* pfnExceptionHandling /* function */;
  /* 0x0064 */ void* pfnClientFinally /* function */;
  /* 0x0068 */ void* pfnGetBuffer /* function */;
  /* 0x006c */ void* pfnSendReceive /* function */;
  /* 0x0070 */ struct _NDR_PIPE_DESC* pPipeDesc;
  /* 0x0074 */ class NDR_POINTER_QUEUE_ELEMENT* pQueueFreeList;
  /* 0x0078 */ class NDR_MINICOMPUTE_QUEUE* pMiniComputeQueue;
  /* 0x007c */ class NDR_MINICOMPUTE_QUEUE_ELEMENT* pConfQueueFreeList;
  /* 0x0080 */ const unsigned char* pFormatSupplement;
  /* 0x0084 */ struct _GUID CurrentActivityID;
  /* 0x0094 */ struct _NDR_ALLOCA_CONTEXT AllocateContext;
} NDR_PROC_CONTEXT, *PNDR_PROC_CONTEXT; /* size: 0x02a4 */

typedef struct _NDR_ASYNC_MESSAGE
{
  /* 0x0000 */ long Version;
  /* 0x0004 */ long Signature;
  /* 0x0008 */ struct _RPC_ASYNC_STATE* AsyncHandle;
  /* 0x000c */ struct _Flags Flags;
  /* 0x000e */ unsigned short StubPhase;
  /* 0x0010 */ unsigned long RefCount;
  /* 0x0014 */ unsigned long ErrorCode;
  /* 0x0018 */ struct _RPC_MESSAGE RpcMsg;
  /* 0x0044 */ struct _MIDL_STUB_MESSAGE StubMsg;
  /* 0x0120 */ unsigned long* pdwStubPhase;
  /* 0x0124 */ struct _NDR_PROC_CONTEXT ProcContext;
  /* 0x03c8 */ unsigned char AsyncGuard[16];
} NDR_ASYNC_MESSAGE, *PNDR_ASYNC_MESSAGE; /* size: 0x03d8 */

