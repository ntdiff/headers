typedef struct _HEAP_UNCOMMMTTED_RANGE
{
  /* 0x0000 */ struct _HEAP_UNCOMMMTTED_RANGE* Next;
  /* 0x0004 */ unsigned long Address;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long filler;
} HEAP_UNCOMMMTTED_RANGE, *PHEAP_UNCOMMMTTED_RANGE; /* size: 0x0010 */

