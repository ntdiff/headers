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
  /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0068 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_2
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
  /* 0x0030 */ struct _RTL_SRWLOCK SubsegmentCreationLock;
  /* 0x0038 */ unsigned char MaxAffinity;
  /* 0x0040 */ const unsigned char* AffinityModArray;
  /* 0x0050 */ struct _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;
  /* 0x00c0 */ struct _HEAP_LFH_BUCKET* Buckets[129];
  /* 0x04c8 */ long __PADDING__[2];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x04d0 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ volatile unsigned __int64 TotalReservedPages;
  /* 0x0008 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0010 */ unsigned long Signature;
  /* 0x0014 */ unsigned long GlobalFlags;
  /* 0x0018 */ unsigned __int64 FreeCommittedPages;
  /* 0x0020 */ unsigned long Interceptor;
  /* 0x0024 */ unsigned short ProcessHeapListIndex;
  /* 0x0026 */ unsigned short GlobalLockCount;
  /* 0x0028 */ unsigned long GlobalLockOwner;
  /* 0x0030 */ struct _RTL_SRWLOCK LargeMetadataLock;
  /* 0x0038 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x0048 */ volatile unsigned __int64 LargeReservedPages;
  /* 0x0050 */ volatile unsigned __int64 LargeCommittedPages;
  /* 0x0058 */ struct _RTL_SRWLOCK SegmentAllocatorLock;
  /* 0x0060 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x0070 */ unsigned __int64 SegmentCount;
  /* 0x0078 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0088 */ struct _RTL_SRWLOCK ContextExtendLock;
  /* 0x0090 */ unsigned char* AllocatedBase;
  /* 0x0098 */ unsigned char* UncommittedBase;
  /* 0x00a0 */ unsigned char* ReservedLimit;
  /* 0x00a8 */ struct _HEAP_VS_CONTEXT VsContext;
  /* 0x0110 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x05e0 */

