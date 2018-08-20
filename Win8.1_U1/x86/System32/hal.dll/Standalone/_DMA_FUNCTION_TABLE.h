typedef struct _DMA_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeController /* function */;
  /* 0x0004 */ void* ValidateRequestLineBinding /* function */;
  /* 0x0008 */ void* QueryMaxFragments /* function */;
  /* 0x000c */ void* ProgramChannel /* function */;
  /* 0x0010 */ void* ConfigureChannel /* function */;
  /* 0x0014 */ void* FlushChannel /* function */;
  /* 0x0018 */ void* HandleInterrupt /* function */;
  /* 0x001c */ void* ReadDmaCounter /* function */;
  /* 0x0020 */ void* ReportCommonBuffer /* function */;
  /* 0x0024 */ void* CancelTransfer /* function */;
} DMA_FUNCTION_TABLE, *PDMA_FUNCTION_TABLE; /* size: 0x0028 */

