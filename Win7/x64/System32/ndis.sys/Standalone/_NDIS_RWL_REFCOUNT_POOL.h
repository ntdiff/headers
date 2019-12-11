typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_RWL_REFCOUNT_POOL
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long* RefCounts;
  /* 0x0018 */ unsigned long FirstFreeIdx;
  /* 0x001c */ unsigned long NumUsedIdx;
} NDIS_RWL_REFCOUNT_POOL, *PNDIS_RWL_REFCOUNT_POOL; /* size: 0x0020 */

