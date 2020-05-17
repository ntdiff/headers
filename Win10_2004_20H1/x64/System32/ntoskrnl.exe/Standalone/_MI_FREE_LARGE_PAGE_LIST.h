typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_FREE_LARGE_PAGE_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ unsigned __int64 EntryCount;
} MI_FREE_LARGE_PAGE_LIST, *PMI_FREE_LARGE_PAGE_LIST; /* size: 0x0018 */

