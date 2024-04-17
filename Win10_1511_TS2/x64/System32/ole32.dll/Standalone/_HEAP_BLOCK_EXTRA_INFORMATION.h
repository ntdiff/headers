typedef struct _HEAP_BLOCK_EXTRA_INFORMATION
{
  /* 0x0000 */ unsigned char Next;
  /* 0x0004 */ unsigned long Type;
  /* 0x0008 */ unsigned __int64 Size;
} HEAP_BLOCK_EXTRA_INFORMATION, *PHEAP_BLOCK_EXTRA_INFORMATION; /* size: 0x0010 */

