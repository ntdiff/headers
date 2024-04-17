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
    /* 0x0070 */ int fUnused1 : 1; /* bit position: 2 */
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
    /* 0x0070 */ int fUnused2 : 3; /* bit position: 13 */
    /* 0x0070 */ int fUnused3 : 16; /* bit position: 16 */
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

