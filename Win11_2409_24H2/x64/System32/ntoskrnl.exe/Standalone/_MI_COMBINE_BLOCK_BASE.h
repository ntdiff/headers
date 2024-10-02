typedef struct _MI_COMBINE_BLOCK_BASE
{
  /* 0x0000 */ void* Next;
  /* 0x0008 */ unsigned long NumberOfActiveBlocks;
  /* 0x0010 */ struct _MI_PAGE_COMBINING_SUPPORT* Pcs;
} MI_COMBINE_BLOCK_BASE, *PMI_COMBINE_BLOCK_BASE; /* size: 0x0018 */

