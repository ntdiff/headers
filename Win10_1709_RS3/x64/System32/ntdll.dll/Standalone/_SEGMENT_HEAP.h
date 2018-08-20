typedef struct _HEAP_RUNTIME_MEMORY_STATS
{
  /* 0x0000 */ volatile unsigned __int64 TotalReservedPages;
  /* 0x0008 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0010 */ unsigned __int64 FreeCommittedPages;
  /* 0x0018 */ unsigned __int64 LfhFreeCommittedPages;
} HEAP_RUNTIME_MEMORY_STATS, *PHEAP_RUNTIME_MEMORY_STATS; /* size: 0x0020 */

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned __int64 SegmentMask;
  /* 0x0008 */ unsigned char UnitShift;
  /* 0x0009 */ unsigned char PagesPerUnitShift;
  /* 0x000a */ unsigned char FirstDescriptorIndex;
  /* 0x000b */ unsigned char CachedCommitSoftShift;
  /* 0x000c */ unsigned char CachedCommitHighShift;
  /* 0x0010 */ unsigned long MaxAllocationSize;
  /* 0x0018 */ struct _RTL_SRWLOCK SegmentLock;
  /* 0x0020 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x0030 */ unsigned __int64 SegmentCount;
  /* 0x0038 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0048 */ struct _HEAP_RUNTIME_MEMORY_STATS* MemStats;
  /* 0x0050 */ void* LfhContext;
  /* 0x0058 */ void* VsContext;
  /* 0x0060 */ void* Heap;
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x0068 */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ unsigned __int64 State : 2; /* bit position: 0 */
  }; /* size: 0x0008 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0008 */

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned __int64 Allocate;
  /* 0x0008 */ unsigned __int64 Free;
  /* 0x0010 */ unsigned __int64 Commit;
  /* 0x0018 */ unsigned __int64 Decommit;
  /* 0x0020 */ unsigned __int64 ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0028 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0008 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x0018 */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0028 */ unsigned __int64 TotalCommittedUnits;
  /* 0x0030 */ unsigned __int64 FreeCommittedUnits;
  /* 0x0038 */ void* BackendCtx;
  /* 0x0040 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0068 */ unsigned long Flags;
  /* 0x006c */ long __PADDING__[1];
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0070 */

typedef struct _HEAP_LFH_SUBSEGMENT_STAT
{
  /* 0x0000 */ unsigned char Index;
  /* 0x0001 */ unsigned char Count;
} HEAP_LFH_SUBSEGMENT_STAT, *PHEAP_LFH_SUBSEGMENT_STAT; /* size: 0x0002 */

typedef union _HEAP_LFH_SUBSEGMENT_STATS
{
  union
  {
    /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];
    /* 0x0000 */ void* AllStats;
  }; /* size: 0x0008 */
} HEAP_LFH_SUBSEGMENT_STATS, *PHEAP_LFH_SUBSEGMENT_STATS; /* size: 0x0008 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_1
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _HEAP_LFH_SUBSEGMENT_CACHE
{
  /* 0x0000 */ union _SLIST_HEADER SLists[7];
} HEAP_LFH_SUBSEGMENT_CACHE, *PHEAP_LFH_SUBSEGMENT_CACHE; /* size: 0x0070 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0008 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0030 */ unsigned char MaxAffinity;
  /* 0x0038 */ const unsigned char* AffinityModArray;
  /* 0x0040 */ struct _HEAP_RUNTIME_MEMORY_STATS* MemStats;
  /* 0x0048 */ struct _RTL_SRWLOCK SubsegmentCreationLock;
  /* 0x0050 */ union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;
  /* 0x0060 */ struct _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;
  /* 0x00d0 */ struct _HEAP_LFH_BUCKET* Buckets[129];
  /* 0x04d8 */ long __PADDING__[2];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x04e0 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ void* Padding[2];
  /* 0x0010 */ unsigned long Signature;
  /* 0x0014 */ unsigned long GlobalFlags;
  /* 0x0018 */ struct _HEAP_RUNTIME_MEMORY_STATS MemStats;
  /* 0x0038 */ unsigned long Interceptor;
  /* 0x003c */ unsigned short ProcessHeapListIndex;
  /* 0x003e */ unsigned short GlobalLockCount;
  /* 0x0040 */ unsigned long GlobalLockOwner;
  /* 0x0048 */ struct _RTL_SRWLOCK LargeMetadataLock;
  /* 0x0050 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x0060 */ volatile unsigned __int64 LargeReservedPages;
  /* 0x0068 */ volatile unsigned __int64 LargeCommittedPages;
  /* 0x0070 */ struct _HEAP_SEG_CONTEXT SegContexts[2];
  /* 0x0140 */ union _RTL_RUN_ONCE StackTraceInitVar;
  /* 0x0148 */ struct _RTL_SRWLOCK ContextExtendLock;
  /* 0x0150 */ unsigned char* AllocatedBase;
  /* 0x0158 */ unsigned char* UncommittedBase;
  /* 0x0160 */ unsigned char* ReservedLimit;
  /* 0x0168 */ struct _HEAP_VS_CONTEXT VsContext;
  /* 0x01e0 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x06c0 */

