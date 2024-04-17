typedef struct _HEAP_RANGE_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Type;
  /* 0x000c */ unsigned long Protection;
  /* 0x0010 */ unsigned long FirstBlockInformationOffset;
  /* 0x0014 */ unsigned long NextRangeInformationOffset;
} HEAP_RANGE_INFORMATION, *PHEAP_RANGE_INFORMATION; /* size: 0x0018 */

