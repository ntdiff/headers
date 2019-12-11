typedef struct _DMA_OPERATIONS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ void* PutDmaAdapter /* function */;
  /* 0x0008 */ void* AllocateCommonBuffer /* function */;
  /* 0x000c */ void* FreeCommonBuffer /* function */;
  /* 0x0010 */ void* AllocateAdapterChannel /* function */;
  /* 0x0014 */ void* FlushAdapterBuffers /* function */;
  /* 0x0018 */ void* FreeAdapterChannel /* function */;
  /* 0x001c */ void* FreeMapRegisters /* function */;
  /* 0x0020 */ void* MapTransfer /* function */;
  /* 0x0024 */ void* GetDmaAlignment /* function */;
  /* 0x0028 */ void* ReadDmaCounter /* function */;
  /* 0x002c */ void* GetScatterGatherList /* function */;
  /* 0x0030 */ void* PutScatterGatherList /* function */;
  /* 0x0034 */ void* CalculateScatterGatherList /* function */;
  /* 0x0038 */ void* BuildScatterGatherList /* function */;
  /* 0x003c */ void* BuildMdlFromScatterGatherList /* function */;
  /* 0x0040 */ void* GetDmaAdapterInfo /* function */;
  /* 0x0044 */ void* GetDmaTransferInfo /* function */;
  /* 0x0048 */ void* InitializeDmaTransferContext /* function */;
  /* 0x004c */ void* AllocateCommonBufferEx /* function */;
  /* 0x0050 */ void* AllocateAdapterChannelEx /* function */;
  /* 0x0054 */ void* ConfigureAdapterChannel /* function */;
  /* 0x0058 */ void* CancelAdapterChannel /* function */;
  /* 0x005c */ void* MapTransferEx /* function */;
  /* 0x0060 */ void* GetScatterGatherListEx /* function */;
  /* 0x0064 */ void* BuildScatterGatherListEx /* function */;
  /* 0x0068 */ void* FlushAdapterBuffersEx /* function */;
  /* 0x006c */ void* FreeAdapterObject /* function */;
  /* 0x0070 */ void* CancelMappedTransfer /* function */;
  /* 0x0074 */ void* AllocateDomainCommonBuffer /* function */;
  /* 0x0078 */ void* FlushDmaBuffer /* function */;
  /* 0x007c */ void* JoinDmaDomain /* function */;
  /* 0x0080 */ void* LeaveDmaDomain /* function */;
  /* 0x0084 */ void* GetDmaDomain /* function */;
} DMA_OPERATIONS, *PDMA_OPERATIONS; /* size: 0x0088 */

