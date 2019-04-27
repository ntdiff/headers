typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned __int64 UnusedBlocks;
  /* 0x0008 */ unsigned long ActiveCacheMatch;
  /* 0x000c */ unsigned long ActiveCacheOverride;
  /* 0x0010 */ unsigned long UnmappedCacheFlush;
  /* 0x0014 */ unsigned long UnmappedCacheMatch;
  /* 0x0018 */ unsigned long UnmappedCacheConflict;
  /* 0x001c */ unsigned long PermanentIoAttributeConflict;
  /* 0x0020 */ unsigned long PermanentIoNodeConflict;
  /* 0x0024 */ long __PADDING__[1];
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0028 */

typedef struct _MI_IO_PAGE_STATE
{
  /* 0x0000 */ volatile long IoPfnLock;
  /* 0x0008 */ struct _RTL_AVL_TREE IoPfnRoot[3];
  /* 0x0020 */ struct _LIST_ENTRY UnusedCachedMaps;
  /* 0x0030 */ unsigned long OldestCacheFlushTimeStamp;
  /* 0x0038 */ struct _MI_IO_CACHE_STATS IoCacheStats;
  /* 0x0060 */ struct _RTL_AVL_TREE InvariantIoSpace;
} MI_IO_PAGE_STATE, *PMI_IO_PAGE_STATE; /* size: 0x0068 */

