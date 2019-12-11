typedef struct _DMA_OPERATIONS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ void* PutDmaAdapter /* function */;
  /* 0x0010 */ void* AllocateCommonBuffer /* function */;
  /* 0x0018 */ void* FreeCommonBuffer /* function */;
  /* 0x0020 */ void* AllocateAdapterChannel /* function */;
  /* 0x0028 */ void* FlushAdapterBuffers /* function */;
  /* 0x0030 */ void* FreeAdapterChannel /* function */;
  /* 0x0038 */ void* FreeMapRegisters /* function */;
  /* 0x0040 */ void* MapTransfer /* function */;
  /* 0x0048 */ void* GetDmaAlignment /* function */;
  /* 0x0050 */ void* ReadDmaCounter /* function */;
  /* 0x0058 */ void* GetScatterGatherList /* function */;
  /* 0x0060 */ void* PutScatterGatherList /* function */;
  /* 0x0068 */ void* CalculateScatterGatherList /* function */;
  /* 0x0070 */ void* BuildScatterGatherList /* function */;
  /* 0x0078 */ void* BuildMdlFromScatterGatherList /* function */;
  /* 0x0080 */ void* GetDmaAdapterInfo /* function */;
  /* 0x0088 */ void* GetDmaTransferInfo /* function */;
  /* 0x0090 */ void* InitializeDmaTransferContext /* function */;
  /* 0x0098 */ void* AllocateCommonBufferEx /* function */;
  /* 0x00a0 */ void* AllocateAdapterChannelEx /* function */;
  /* 0x00a8 */ void* ConfigureAdapterChannel /* function */;
  /* 0x00b0 */ void* CancelAdapterChannel /* function */;
  /* 0x00b8 */ void* MapTransferEx /* function */;
  /* 0x00c0 */ void* GetScatterGatherListEx /* function */;
  /* 0x00c8 */ void* BuildScatterGatherListEx /* function */;
  /* 0x00d0 */ void* FlushAdapterBuffersEx /* function */;
  /* 0x00d8 */ void* FreeAdapterObject /* function */;
  /* 0x00e0 */ void* CancelMappedTransfer /* function */;
} DMA_OPERATIONS, *PDMA_OPERATIONS; /* size: 0x00e8 */

