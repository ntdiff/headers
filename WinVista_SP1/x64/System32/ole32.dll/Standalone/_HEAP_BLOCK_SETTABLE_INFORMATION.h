typedef struct _HEAP_BLOCK_SETTABLE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Settable;
  /* 0x0008 */ unsigned short TagIndex;
  /* 0x000a */ unsigned short AllocatorBackTraceIndex;
  /* 0x000c */ long __PADDING__[1];
} HEAP_BLOCK_SETTABLE_INFORMATION, *PHEAP_BLOCK_SETTABLE_INFORMATION; /* size: 0x0010 */

