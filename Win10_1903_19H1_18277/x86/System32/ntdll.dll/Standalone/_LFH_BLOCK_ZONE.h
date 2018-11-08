typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _LFH_BLOCK_ZONE
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ volatile long NextIndex;
} LFH_BLOCK_ZONE, *PLFH_BLOCK_ZONE; /* size: 0x000c */

