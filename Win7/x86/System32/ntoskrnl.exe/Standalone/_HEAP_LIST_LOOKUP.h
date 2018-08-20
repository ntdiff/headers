typedef struct _HEAP_LIST_LOOKUP
{
  /* 0x0000 */ struct _HEAP_LIST_LOOKUP* ExtendedLookup;
  /* 0x0004 */ unsigned long ArraySize;
  /* 0x0008 */ unsigned long ExtraItem;
  /* 0x000c */ unsigned long ItemCount;
  /* 0x0010 */ unsigned long OutOfRangeItems;
  /* 0x0014 */ unsigned long BaseIndex;
  /* 0x0018 */ struct _LIST_ENTRY* ListHead;
  /* 0x001c */ unsigned long* ListsInUseUlong;
  /* 0x0020 */ struct _LIST_ENTRY** ListHints;
} HEAP_LIST_LOOKUP, *PHEAP_LIST_LOOKUP; /* size: 0x0024 */

