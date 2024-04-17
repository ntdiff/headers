typedef struct _HEAP_BLOCK_SETTABLE_INFORMATION
{
  /* 0x0000 */ unsigned long Settable;
  /* 0x0004 */ unsigned short TagIndex;
  /* 0x0006 */ unsigned short AllocatorBackTraceIndex;
} HEAP_BLOCK_SETTABLE_INFORMATION, *PHEAP_BLOCK_SETTABLE_INFORMATION; /* size: 0x0008 */

