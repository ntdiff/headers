typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _LFH_BLOCK_ZONE
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* volatile FreePointer;
  /* 0x0018 */ void* Limit;
} LFH_BLOCK_ZONE, *PLFH_BLOCK_ZONE; /* size: 0x0020 */

