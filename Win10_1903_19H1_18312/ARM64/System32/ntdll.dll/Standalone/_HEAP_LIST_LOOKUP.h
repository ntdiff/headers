typedef struct _HEAP_LIST_LOOKUP
{
  /* 0x0000 */ struct _HEAP_LIST_LOOKUP* ExtendedLookup;
  /* 0x0008 */ unsigned long ArraySize;
  /* 0x000c */ unsigned long ExtraItem;
  /* 0x0010 */ unsigned long ItemCount;
  /* 0x0014 */ unsigned long OutOfRangeItems;
  /* 0x0018 */ unsigned long BaseIndex;
  /* 0x0020 */ struct _LIST_ENTRY* ListHead;
  /* 0x0028 */ unsigned long* ListsInUseUlong;
  /* 0x0030 */ struct _LIST_ENTRY** ListHints;
} HEAP_LIST_LOOKUP, *PHEAP_LIST_LOOKUP; /* size: 0x0038 */

