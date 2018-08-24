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
} DMA_OPERATIONS, *PDMA_OPERATIONS; /* size: 0x0040 */

