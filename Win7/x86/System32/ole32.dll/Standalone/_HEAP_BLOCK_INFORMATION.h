typedef struct _HEAP_BLOCK_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long DataSize;
  /* 0x000c */ unsigned long OverheadSize;
  /* 0x0010 */ unsigned long NextBlockInformationOffset;
} HEAP_BLOCK_INFORMATION, *PHEAP_BLOCK_INFORMATION; /* size: 0x0014 */

