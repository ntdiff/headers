typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0004 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x000c */ char Balance;
  /* 0x000d */ unsigned char Reserved[3];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0010 */

typedef struct _RTL_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS BalancedRoot;
  /* 0x0010 */ void* OrderedPointer;
  /* 0x0014 */ unsigned long WhichOrderedElement;
  /* 0x0018 */ unsigned long NumberGenericTableElements;
  /* 0x001c */ unsigned long DepthOfTree;
  /* 0x0020 */ struct _RTL_BALANCED_LINKS* RestartKey;
  /* 0x0024 */ unsigned long DeleteCount;
  /* 0x0028 */ void* CompareRoutine /* function */;
  /* 0x002c */ void* AllocateRoutine /* function */;
  /* 0x0030 */ void* FreeRoutine /* function */;
  /* 0x0034 */ void* TableContext;
} RTL_AVL_TABLE, *PRTL_AVL_TABLE; /* size: 0x0038 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DPH_HEAP_ROOT
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long HeapFlags;
  /* 0x0008 */ struct _RTL_CRITICAL_SECTION* HeapCritSect;
  /* 0x000c */ unsigned long nRemoteLockAcquired;
  /* 0x0010 */ struct _DPH_HEAP_BLOCK* pVirtualStorageListHead;
  /* 0x0014 */ struct _DPH_HEAP_BLOCK* pVirtualStorageListTail;
  /* 0x0018 */ unsigned long nVirtualStorageRanges;
  /* 0x001c */ unsigned long nVirtualStorageBytes;
  /* 0x0020 */ struct _RTL_AVL_TABLE BusyNodesTable;
  /* 0x0058 */ struct _DPH_HEAP_BLOCK* NodeToAllocate;
  /* 0x005c */ unsigned long nBusyAllocations;
  /* 0x0060 */ unsigned long nBusyAllocationBytesCommitted;
  /* 0x0064 */ struct _DPH_HEAP_BLOCK* pFreeAllocationListHead;
  /* 0x0068 */ struct _DPH_HEAP_BLOCK* pFreeAllocationListTail;
  /* 0x006c */ unsigned long nFreeAllocations;
  /* 0x0070 */ unsigned long nFreeAllocationBytesCommitted;
  /* 0x0074 */ struct _LIST_ENTRY AvailableAllocationHead;
  /* 0x007c */ unsigned long nAvailableAllocations;
  /* 0x0080 */ unsigned long nAvailableAllocationBytesCommitted;
  /* 0x0084 */ struct _DPH_HEAP_BLOCK* pUnusedNodeListHead;
  /* 0x0088 */ struct _DPH_HEAP_BLOCK* pUnusedNodeListTail;
  /* 0x008c */ unsigned long nUnusedNodes;
  /* 0x0090 */ unsigned long nBusyAllocationBytesAccessible;
  /* 0x0094 */ struct _DPH_HEAP_BLOCK* pNodePoolListHead;
  /* 0x0098 */ struct _DPH_HEAP_BLOCK* pNodePoolListTail;
  /* 0x009c */ unsigned long nNodePools;
  /* 0x00a0 */ unsigned long nNodePoolBytes;
  /* 0x00a4 */ struct _LIST_ENTRY NextHeap;
  /* 0x00ac */ unsigned long ExtraFlags;
  /* 0x00b0 */ unsigned long Seed;
  /* 0x00b4 */ void* NormalHeap;
  /* 0x00b8 */ struct _RTL_TRACE_BLOCK* CreateStackTrace;
  /* 0x00bc */ void* FirstThread;
} DPH_HEAP_ROOT, *PDPH_HEAP_ROOT; /* size: 0x00c0 */

