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

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

typedef struct _HEAP_LOCK
{
  union
  {
    /* 0x0000 */ struct _RTL_CRITICAL_SECTION CriticalSection;
  } /* size: 0x0028 */ Lock;
} HEAP_LOCK, *PHEAP_LOCK; /* size: 0x0028 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_LFH_CALLBACKS
{
  /* 0x0000 */ void* Allocate /* function */;
  /* 0x0008 */ void* Free /* function */;
  /* 0x0010 */ void* Commit /* function */;
  /* 0x0018 */ void* Decommit /* function */;
} HEAP_LFH_CALLBACKS, *PHEAP_LFH_CALLBACKS; /* size: 0x0020 */

typedef struct _HEAP_LFH_SUBSEGMENT_OWNER
{
  /* 0x0000 */ unsigned char BucketIndex;
  /* 0x0001 */ unsigned char IsBucket;
  union
  {
    /* 0x0002 */ unsigned short SlotIndex;
    struct
    {
      /* 0x0002 */ unsigned char AffinitySlotMask;
      /* 0x0003 */ unsigned char Spare;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0008 */ unsigned __int64 AvailableSubsegmentCount;
  /* 0x0010 */ struct _RTL_SRWLOCK Lock;
  /* 0x0018 */ struct _LIST_ENTRY AvailableSubsegmentList;
  /* 0x0028 */ struct _LIST_ENTRY FullSubsegmentList;
} HEAP_LFH_SUBSEGMENT_OWNER, *PHEAP_LFH_SUBSEGMENT_OWNER; /* size: 0x0038 */

typedef struct _HEAP_LFH_BUCKET
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
  /* 0x0038 */ struct _HEAP_LFH_AFFINITY_SLOT* AffinitySlots;
  /* 0x0040 */ unsigned __int64 TotalBlockCount;
  /* 0x0048 */ unsigned __int64 TotalSubsegmentCount;
} HEAP_LFH_BUCKET, *PHEAP_LFH_BUCKET; /* size: 0x0050 */

typedef struct _HEAP_LFH_AFFINITY_SLOT
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
} HEAP_LFH_AFFINITY_SLOT, *PHEAP_LFH_AFFINITY_SLOT; /* size: 0x0038 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0008 */ struct _HEAP_LFH_CALLBACKS Callbacks;
  /* 0x0028 */ struct _HEAP_LFH_BUCKET Buckets[129];
  /* 0x2878 */ struct _HEAP_LFH_AFFINITY_SLOT AffinitySlots[129];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x44b0 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ volatile unsigned __int64 TotalReservedPages;
  /* 0x0008 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0010 */ unsigned long Signature;
  /* 0x0014 */ unsigned long GlobalFlags;
  /* 0x0018 */ unsigned short ProcessHeapListIndex;
  /* 0x0020 */ unsigned __int64 FreeCommittedPages;
  /* 0x0028 */ struct _RTL_SRWLOCK LargeMetadataLock;
  /* 0x0030 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x0040 */ volatile unsigned __int64 LargeReservedPages;
  /* 0x0048 */ volatile unsigned __int64 LargeCommittedPages;
  /* 0x0050 */ struct _HEAP_LOCK SegmentAllocatorLock;
  /* 0x0078 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x0088 */ unsigned __int64 SegmentCount;
  /* 0x0090 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x00a0 */ void* NextLocalInfoAddress;
  /* 0x00a8 */ void* NextUncommitedAddress;
  /* 0x00b0 */ void* ReservedLimit;
  /* 0x00b8 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x4568 */

