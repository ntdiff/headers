typedef struct _HEAP_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long Mode;
  /* 0x0008 */ unsigned long ReserveSize;
  /* 0x000c */ unsigned long CommitSize;
  /* 0x0010 */ unsigned long FirstRegionInformationOffset;
  /* 0x0014 */ unsigned long NextHeapInformationOffset;
} HEAP_INFORMATION, *PHEAP_INFORMATION; /* size: 0x0018 */

