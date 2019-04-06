typedef struct _DMA_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeController /* function */;
  /* 0x0008 */ void* ValidateRequestLineBinding /* function */;
  /* 0x0010 */ void* QueryMaxFragments /* function */;
  /* 0x0018 */ void* ProgramChannel /* function */;
  /* 0x0020 */ void* ConfigureChannel /* function */;
  /* 0x0028 */ void* FlushChannel /* function */;
  /* 0x0030 */ void* HandleInterrupt /* function */;
  /* 0x0038 */ void* ReadDmaCounter /* function */;
  /* 0x0040 */ void* ReportCommonBuffer /* function */;
  /* 0x0048 */ void* CancelTransfer /* function */;
} DMA_FUNCTION_TABLE, *PDMA_FUNCTION_TABLE; /* size: 0x0050 */

