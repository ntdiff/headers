typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0004 */

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned long Allocate;
  /* 0x0004 */ unsigned long Free;
  /* 0x0008 */ unsigned long Commit;
  /* 0x000c */ unsigned long Decommit;
  /* 0x0010 */ unsigned long ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0014 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0004 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x000c */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0014 */ unsigned long TotalCommittedUnits;
  /* 0x0018 */ unsigned long FreeCommittedUnits;
  /* 0x001c */ void* BackendCtx;
  /* 0x0020 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0034 */ unsigned long Flags;
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0038 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _HEAP_LFH_SUBSEGMENT_CACHE
{
  /* 0x0000 */ union _SLIST_HEADER SLists[7];
} HEAP_LFH_SUBSEGMENT_CACHE, *PHEAP_LFH_SUBSEGMENT_CACHE; /* size: 0x0038 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0004 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0018 */ struct _RTL_SRWLOCK SubsegmentCreationLock;
  /* 0x001c */ unsigned char MaxAffinity;
  /* 0x0020 */ const unsigned char* AffinityModArray;
  /* 0x0028 */ struct _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;
  /* 0x0060 */ struct _HEAP_LFH_BUCKET* Buckets[129];
  /* 0x0264 */ long __PADDING__[1];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x0268 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ volatile unsigned long TotalReservedPages;
  /* 0x0004 */ volatile unsigned long TotalCommittedPages;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned long GlobalFlags;
  /* 0x0010 */ unsigned long FreeCommittedPages;
  /* 0x0014 */ unsigned long Interceptor;
  /* 0x0018 */ unsigned short ProcessHeapListIndex;
  /* 0x001a */ unsigned short GlobalLockCount;
  /* 0x001c */ unsigned long GlobalLockOwner;
  /* 0x0020 */ struct _RTL_SRWLOCK LargeMetadataLock;
  /* 0x0024 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x002c */ volatile unsigned long LargeReservedPages;
  /* 0x0030 */ volatile unsigned long LargeCommittedPages;
  /* 0x0034 */ struct _RTL_SRWLOCK SegmentAllocatorLock;
  /* 0x0038 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x0040 */ unsigned long SegmentCount;
  /* 0x0044 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x004c */ union _RTL_RUN_ONCE StackTraceInitVar;
  /* 0x0050 */ struct _RTL_SRWLOCK ContextExtendLock;
  /* 0x0054 */ unsigned char* AllocatedBase;
  /* 0x0058 */ unsigned char* UncommittedBase;
  /* 0x005c */ unsigned char* ReservedLimit;
  /* 0x0060 */ struct _HEAP_VS_CONTEXT VsContext;
  /* 0x0098 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x0300 */

