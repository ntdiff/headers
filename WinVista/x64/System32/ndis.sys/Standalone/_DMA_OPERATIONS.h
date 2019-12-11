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
} DMA_OPERATIONS, *PDMA_OPERATIONS; /* size: 0x0080 */

