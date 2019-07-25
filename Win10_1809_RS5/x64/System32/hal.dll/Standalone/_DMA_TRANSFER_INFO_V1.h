typedef struct _DMA_TRANSFER_INFO_V1
{
  /* 0x0000 */ unsigned long MapRegisterCount;
  /* 0x0004 */ unsigned long ScatterGatherElementCount;
  /* 0x0008 */ unsigned long ScatterGatherListSize;
} DMA_TRANSFER_INFO_V1, *PDMA_TRANSFER_INFO_V1; /* size: 0x000c */

