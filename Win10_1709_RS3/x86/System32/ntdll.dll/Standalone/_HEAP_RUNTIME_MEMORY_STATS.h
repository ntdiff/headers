typedef struct _HEAP_RUNTIME_MEMORY_STATS
{
  /* 0x0000 */ volatile unsigned long TotalReservedPages;
  /* 0x0004 */ volatile unsigned long TotalCommittedPages;
  /* 0x0008 */ unsigned long FreeCommittedPages;
  /* 0x000c */ unsigned long LfhFreeCommittedPages;
} HEAP_RUNTIME_MEMORY_STATS, *PHEAP_RUNTIME_MEMORY_STATS; /* size: 0x0010 */

