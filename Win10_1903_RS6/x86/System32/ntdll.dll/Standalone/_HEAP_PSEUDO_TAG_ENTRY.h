typedef struct _HEAP_PSEUDO_TAG_ENTRY
{
  /* 0x0000 */ unsigned long Allocs;
  /* 0x0004 */ unsigned long Frees;
  /* 0x0008 */ unsigned long Size;
} HEAP_PSEUDO_TAG_ENTRY, *PHEAP_PSEUDO_TAG_ENTRY; /* size: 0x000c */

