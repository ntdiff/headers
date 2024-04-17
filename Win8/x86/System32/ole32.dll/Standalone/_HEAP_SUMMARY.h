typedef struct _HEAP_SUMMARY
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ unsigned long cbAllocated;
  /* 0x0008 */ unsigned long cbCommitted;
  /* 0x000c */ unsigned long cbReserved;
  /* 0x0010 */ unsigned long cbMaxReserve;
} HEAP_SUMMARY, *PHEAP_SUMMARY; /* size: 0x0014 */

