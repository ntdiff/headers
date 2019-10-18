typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x0018 */ char Balance;
  /* 0x0019 */ unsigned char Reserved[3];
  /* 0x001c */ long __PADDING__[1];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0020 */

typedef struct _RTL_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS BalancedRoot;
  /* 0x0020 */ void* OrderedPointer;
  /* 0x0028 */ unsigned long WhichOrderedElement;
  /* 0x002c */ unsigned long NumberGenericTableElements;
  /* 0x0030 */ unsigned long DepthOfTree;
  /* 0x0038 */ struct _RTL_BALANCED_LINKS* RestartKey;
  /* 0x0040 */ unsigned long DeleteCount;
  /* 0x0048 */ void* CompareRoutine /* function */;
  /* 0x0050 */ void* AllocateRoutine /* function */;
  /* 0x0058 */ void* FreeRoutine /* function */;
  /* 0x0060 */ void* TableContext;
} RTL_AVL_TABLE, *PRTL_AVL_TABLE; /* size: 0x0068 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DPH_HEAP_ROOT
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long HeapFlags;
  /* 0x0008 */ struct _RTL_CRITICAL_SECTION* HeapCritSect;
  /* 0x0010 */ unsigned long nRemoteLockAcquired;
  /* 0x0018 */ struct _DPH_HEAP_BLOCK* pVirtualStorageListHead;
  /* 0x0020 */ struct _DPH_HEAP_BLOCK* pVirtualStorageListTail;
  /* 0x0028 */ unsigned long nVirtualStorageRanges;
  /* 0x0030 */ unsigned __int64 nVirtualStorageBytes;
  /* 0x0038 */ struct _RTL_AVL_TABLE BusyNodesTable;
  /* 0x00a0 */ struct _DPH_HEAP_BLOCK* NodeToAllocate;
  /* 0x00a8 */ unsigned long nBusyAllocations;
  /* 0x00b0 */ unsigned __int64 nBusyAllocationBytesCommitted;
  /* 0x00b8 */ struct _DPH_HEAP_BLOCK* pFreeAllocationListHead;
  /* 0x00c0 */ struct _DPH_HEAP_BLOCK* pFreeAllocationListTail;
  /* 0x00c8 */ unsigned long nFreeAllocations;
  /* 0x00d0 */ unsigned __int64 nFreeAllocationBytesCommitted;
  /* 0x00d8 */ struct _LIST_ENTRY AvailableAllocationHead;
  /* 0x00e8 */ unsigned long nAvailableAllocations;
  /* 0x00f0 */ unsigned __int64 nAvailableAllocationBytesCommitted;
  /* 0x00f8 */ struct _DPH_HEAP_BLOCK* pUnusedNodeListHead;
  /* 0x0100 */ struct _DPH_HEAP_BLOCK* pUnusedNodeListTail;
  /* 0x0108 */ unsigned long nUnusedNodes;
  /* 0x0110 */ unsigned __int64 nBusyAllocationBytesAccessible;
  /* 0x0118 */ struct _DPH_HEAP_BLOCK* pNodePoolListHead;
  /* 0x0120 */ struct _DPH_HEAP_BLOCK* pNodePoolListTail;
  /* 0x0128 */ unsigned long nNodePools;
  /* 0x0130 */ unsigned __int64 nNodePoolBytes;
  /* 0x0138 */ struct _LIST_ENTRY NextHeap;
  /* 0x0148 */ unsigned long ExtraFlags;
  /* 0x014c */ unsigned long Seed;
  /* 0x0150 */ void* NormalHeap;
  /* 0x0158 */ struct _RTL_TRACE_BLOCK* CreateStackTrace;
  /* 0x0160 */ void* FirstThread;
} DPH_HEAP_ROOT, *PDPH_HEAP_ROOT; /* size: 0x0168 */

