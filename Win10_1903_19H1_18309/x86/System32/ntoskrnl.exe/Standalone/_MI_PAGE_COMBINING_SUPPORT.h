typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _MI_COMBINE_WORKITEM
{
  /* 0x0000 */ void* NextEntry;
  /* 0x0004 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_COMBINE_WORKITEM, *PMI_COMBINE_WORKITEM; /* size: 0x0014 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _MI_COMBINE_PAGE_LISTHEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE Table;
  /* 0x0004 */ volatile long Lock;
} MI_COMBINE_PAGE_LISTHEAD, *PMI_COMBINE_PAGE_LISTHEAD; /* size: 0x0008 */

typedef struct _MI_PAGE_COMBINE_STATISTICS
{
  /* 0x0000 */ unsigned __int64 PagesScannedActive;
  /* 0x0008 */ unsigned __int64 PagesScannedStandby;
  /* 0x0010 */ unsigned __int64 PagesCombined;
  /* 0x0018 */ unsigned long CombineScanCount;
  /* 0x001c */ long CombinedBlocksInUse;
  /* 0x0020 */ long SumCombinedBlocksReferenceCount;
  /* 0x0024 */ long __PADDING__[1];
} MI_PAGE_COMBINE_STATISTICS, *PMI_PAGE_COMBINE_STATISTICS; /* size: 0x0028 */

typedef struct _MI_PAGE_COMBINING_SUPPORT
{
  /* 0x0000 */ struct _MI_PARTITION* Partition;
  /* 0x0004 */ struct _LIST_ENTRY ArbitraryPfnMapList;
  /* 0x000c */ struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;
  /* 0x0020 */ unsigned long CombiningThreadCount;
  /* 0x0024 */ struct _LIST_ENTRY CombinePageFreeList;
  /* 0x002c */ unsigned long CombineFreeListLock;
  /* 0x0030 */ struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];
  /* 0x00b0 */ unsigned __int64 CommonPageCombineDomain;
  /* 0x00b8 */ struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;
} MI_PAGE_COMBINING_SUPPORT, *PMI_PAGE_COMBINING_SUPPORT; /* size: 0x00e0 */

