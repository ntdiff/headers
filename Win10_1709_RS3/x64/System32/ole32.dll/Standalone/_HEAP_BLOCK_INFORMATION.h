typedef struct _HEAP_BLOCK_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned long Flags;
  /* 0x0010 */ unsigned __int64 DataSize;
  /* 0x0018 */ unsigned __int64 OverheadSize;
  /* 0x0020 */ unsigned __int64 NextBlockInformationOffset;
} HEAP_BLOCK_INFORMATION, *PHEAP_BLOCK_INFORMATION; /* size: 0x0028 */

