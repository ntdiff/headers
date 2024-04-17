typedef struct _HEAP_REGION_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long ReserveSize;
  /* 0x0008 */ unsigned long CommitSize;
  /* 0x000c */ unsigned long FirstRangeInformationOffset;
  /* 0x0010 */ unsigned long NextRegionInformationOffset;
} HEAP_REGION_INFORMATION, *PHEAP_REGION_INFORMATION; /* size: 0x0014 */

