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

