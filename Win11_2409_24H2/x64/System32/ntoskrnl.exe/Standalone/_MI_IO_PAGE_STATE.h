typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _MI_IO_PAGE_STATE_CELL
{
  /* 0x0000 */ struct _RTL_AVL_TREE PfnRoot;
  /* 0x0008 */ volatile unsigned __int64 UnmappedNodeCount;
  /* 0x0010 */ volatile unsigned __int64 UnmappedHugeIoSpaceNodeCount;
  /* 0x0018 */ volatile unsigned __int64 TotalNodeCount;
  /* 0x0020 */ unsigned __int64 ResumePageForDeleteScans;
  /* 0x0028 */ long __PADDING__[6];
} MI_IO_PAGE_STATE_CELL, *PMI_IO_PAGE_STATE_CELL; /* size: 0x0040 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned long UnmappedCacheFlush;
  /* 0x0004 */ unsigned long UnmappedCacheConflict;
  /* 0x0008 */ unsigned long PermanentIoAttributeConflict;
  /* 0x000c */ unsigned long PermanentIoNodeConflict;
  /* 0x0010 */ unsigned long ExclusionReferenceConflict;
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0014 */

typedef struct _MI_IO_PAGE_STATE
{
  /* 0x0000 */ struct _MI_IO_PAGE_STATE_CELL TypeCell[2];
  /* 0x0080 */ struct _RTL_AVL_TREE InvariantIoSpace;
  /* 0x0088 */ struct _RTL_AVL_TREE ExclusionSpace;
  /* 0x0090 */ volatile long IoPfnPruneLock;
  /* 0x0098 */ struct _WORK_QUEUE_ITEM UnmappedNodeWorkItem;
  /* 0x00b8 */ struct _MI_IO_CACHE_STATS IoCacheStats;
  /* 0x00cc */ long __PADDING__[13];
} MI_IO_PAGE_STATE, *PMI_IO_PAGE_STATE; /* size: 0x0100 */

