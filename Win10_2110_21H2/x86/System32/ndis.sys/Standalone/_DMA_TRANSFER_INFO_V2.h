typedef struct _DMA_TRANSFER_INFO_V2
{
  /* 0x0000 */ unsigned long MapRegisterCount;
  /* 0x0004 */ unsigned long ScatterGatherElementCount;
  /* 0x0008 */ unsigned long ScatterGatherListSize;
  /* 0x000c */ unsigned long LogicalPageCount;
} DMA_TRANSFER_INFO_V2, *PDMA_TRANSFER_INFO_V2; /* size: 0x0010 */

