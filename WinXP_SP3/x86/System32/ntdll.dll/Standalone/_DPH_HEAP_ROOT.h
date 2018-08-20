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
  /* 0x0020 */ struct _DPH_HEAP_BLOCK* pBusyAllocationListHead;
  /* 0x0024 */ struct _DPH_HEAP_BLOCK* pBusyAllocationListTail;
  /* 0x0028 */ unsigned long nBusyAllocations;
  /* 0x002c */ unsigned long nBusyAllocationBytesCommitted;
  /* 0x0030 */ struct _DPH_HEAP_BLOCK* pFreeAllocationListHead;
  /* 0x0034 */ struct _DPH_HEAP_BLOCK* pFreeAllocationListTail;
  /* 0x0038 */ unsigned long nFreeAllocations;
  /* 0x003c */ unsigned long nFreeAllocationBytesCommitted;
  /* 0x0040 */ struct _DPH_HEAP_BLOCK* pAvailableAllocationListHead;
  /* 0x0044 */ struct _DPH_HEAP_BLOCK* pAvailableAllocationListTail;
  /* 0x0048 */ unsigned long nAvailableAllocations;
  /* 0x004c */ unsigned long nAvailableAllocationBytesCommitted;
  /* 0x0050 */ struct _DPH_HEAP_BLOCK* pUnusedNodeListHead;
  /* 0x0054 */ struct _DPH_HEAP_BLOCK* pUnusedNodeListTail;
  /* 0x0058 */ unsigned long nUnusedNodes;
  /* 0x005c */ unsigned long nBusyAllocationBytesAccessible;
  /* 0x0060 */ struct _DPH_HEAP_BLOCK* pNodePoolListHead;
  /* 0x0064 */ struct _DPH_HEAP_BLOCK* pNodePoolListTail;
  /* 0x0068 */ unsigned long nNodePools;
  /* 0x006c */ unsigned long nNodePoolBytes;
  /* 0x0070 */ struct _DPH_HEAP_ROOT* pNextHeapRoot;
  /* 0x0074 */ struct _DPH_HEAP_ROOT* pPrevHeapRoot;
  /* 0x0078 */ unsigned long nUnProtectionReferenceCount;
  /* 0x007c */ unsigned long InsideAllocateNode;
  /* 0x0080 */ unsigned long ExtraFlags;
  /* 0x0084 */ unsigned long Seed;
  /* 0x0088 */ void* NormalHeap;
  /* 0x008c */ struct _RTL_TRACE_BLOCK* CreateStackTrace;
  /* 0x0090 */ void* FirstThread;
} DPH_HEAP_ROOT, *PDPH_HEAP_ROOT; /* size: 0x0094 */

