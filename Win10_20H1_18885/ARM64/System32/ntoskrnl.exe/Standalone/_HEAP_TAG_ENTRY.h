typedef struct _HEAP_TAG_ENTRY
{
  /* 0x0000 */ unsigned long Allocs;
  /* 0x0004 */ unsigned long Frees;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ unsigned short TagIndex;
  /* 0x0012 */ unsigned short CreatorBackTraceIndex;
  /* 0x0014 */ wchar_t TagName[24];
  /* 0x0044 */ long __PADDING__[1];
} HEAP_TAG_ENTRY, *PHEAP_TAG_ENTRY; /* size: 0x0048 */

