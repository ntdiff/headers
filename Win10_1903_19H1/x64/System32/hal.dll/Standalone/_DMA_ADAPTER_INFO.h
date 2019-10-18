typedef struct _DMA_ADAPTER_INFO_V1
{
  /* 0x0000 */ unsigned long ReadDmaCounterAvailable;
  /* 0x0004 */ unsigned long ScatterGatherLimit;
  /* 0x0008 */ unsigned long DmaAddressWidth;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long MinimumTransferUnit;
} DMA_ADAPTER_INFO_V1, *PDMA_ADAPTER_INFO_V1; /* size: 0x0014 */

typedef struct _DMA_ADAPTER_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _DMA_ADAPTER_INFO_V1 V1;
} DMA_ADAPTER_INFO, *PDMA_ADAPTER_INFO; /* size: 0x0018 */

