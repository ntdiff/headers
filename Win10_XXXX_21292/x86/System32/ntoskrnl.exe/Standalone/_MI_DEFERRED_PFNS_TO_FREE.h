typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_DEFERRED_PFNS_TO_FREE
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long NumberOfPages;
  /* 0x000c */ unsigned long TbFlushStamp;
} MI_DEFERRED_PFNS_TO_FREE, *PMI_DEFERRED_PFNS_TO_FREE; /* size: 0x0010 */

