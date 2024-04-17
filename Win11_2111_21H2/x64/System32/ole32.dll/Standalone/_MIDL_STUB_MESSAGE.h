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
    /* 0x00c0 */ int fUnused1 : 1; /* bit position: 2 */
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
    /* 0x00c0 */ int fUnused2 : 3; /* bit position: 13 */
    /* 0x00c0 */ int fUnused3 : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x00c4 */ unsigned long dwDestContext;
  /* 0x00c8 */ void* pvDestContext;
  /* 0x00d0 */ struct _NDR_SCONTEXT** SavedContextHandles;
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

