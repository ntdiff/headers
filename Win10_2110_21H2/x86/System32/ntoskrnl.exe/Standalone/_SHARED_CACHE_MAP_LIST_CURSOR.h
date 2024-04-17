typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SHARED_CACHE_MAP_LIST_CURSOR
{
  /* 0x0000 */ struct _LIST_ENTRY SharedCacheMapLinks;
  /* 0x0008 */ unsigned long Flags;
} SHARED_CACHE_MAP_LIST_CURSOR, *PSHARED_CACHE_MAP_LIST_CURSOR; /* size: 0x000c */

