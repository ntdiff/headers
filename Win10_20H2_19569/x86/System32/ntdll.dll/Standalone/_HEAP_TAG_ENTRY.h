typedef struct _HEAP_TAG_ENTRY
{
  /* 0x0000 */ unsigned long Allocs;
  /* 0x0004 */ unsigned long Frees;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned short TagIndex;
  /* 0x000e */ unsigned short CreatorBackTraceIndex;
  /* 0x0010 */ wchar_t TagName[24];
} HEAP_TAG_ENTRY, *PHEAP_TAG_ENTRY; /* size: 0x0040 */

