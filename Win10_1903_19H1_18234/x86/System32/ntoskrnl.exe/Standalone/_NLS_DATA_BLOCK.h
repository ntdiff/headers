typedef struct _NLS_DATA_BLOCK
{
  /* 0x0000 */ void* AnsiCodePageData;
  /* 0x0004 */ void* OemCodePageData;
  /* 0x0008 */ void* UnicodeCaseTableData;
} NLS_DATA_BLOCK, *PNLS_DATA_BLOCK; /* size: 0x000c */

