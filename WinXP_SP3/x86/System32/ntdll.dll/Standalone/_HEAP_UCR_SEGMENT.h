typedef struct _HEAP_UCR_SEGMENT
{
  /* 0x0000 */ struct _HEAP_UCR_SEGMENT* Next;
  /* 0x0004 */ unsigned long ReservedSize;
  /* 0x0008 */ unsigned long CommittedSize;
  /* 0x000c */ unsigned long filler;
} HEAP_UCR_SEGMENT, *PHEAP_UCR_SEGMENT; /* size: 0x0010 */

