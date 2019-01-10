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
  /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

typedef struct _HEAP_LOCK
{
  union
  {
    /* 0x0000 */ struct _RTL_CRITICAL_SECTION CriticalSection;
  } /* size: 0x0018 */ Lock;
} HEAP_LOCK, *PHEAP_LOCK; /* size: 0x0018 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_LFH_CALLBACKS
{
  /* 0x0000 */ void* Allocate /* function */;
  /* 0x0004 */ void* Free /* function */;
  /* 0x0008 */ void* Commit /* function */;
  /* 0x000c */ void* Decommit /* function */;
} HEAP_LFH_CALLBACKS, *PHEAP_LFH_CALLBACKS; /* size: 0x0010 */

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
  /* 0x0004 */ unsigned long AvailableSubsegmentCount;
  /* 0x0008 */ struct _RTL_SRWLOCK Lock;
  /* 0x000c */ struct _LIST_ENTRY AvailableSubsegmentList;
  /* 0x0014 */ struct _LIST_ENTRY FullSubsegmentList;
} HEAP_LFH_SUBSEGMENT_OWNER, *PHEAP_LFH_SUBSEGMENT_OWNER; /* size: 0x001c */

typedef struct _HEAP_LFH_BUCKET
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
  /* 0x001c */ struct _HEAP_LFH_AFFINITY_SLOT* AffinitySlots;
  /* 0x0020 */ unsigned long TotalBlockCount;
  /* 0x0024 */ unsigned long TotalSubsegmentCount;
} HEAP_LFH_BUCKET, *PHEAP_LFH_BUCKET; /* size: 0x0028 */

typedef struct _HEAP_LFH_AFFINITY_SLOT
{
  /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_OWNER State;
} HEAP_LFH_AFFINITY_SLOT, *PHEAP_LFH_AFFINITY_SLOT; /* size: 0x001c */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0004 */ struct _HEAP_LFH_CALLBACKS Callbacks;
  /* 0x0014 */ struct _HEAP_LFH_BUCKET Buckets[129];
  /* 0x143c */ struct _HEAP_LFH_AFFINITY_SLOT AffinitySlots[129];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x2258 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ volatile unsigned long TotalReservedPages;
  /* 0x0004 */ volatile unsigned long TotalCommittedPages;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned long GlobalFlags;
  /* 0x0010 */ unsigned short ProcessHeapListIndex;
  /* 0x0014 */ unsigned long FreeCommittedPages;
  /* 0x0018 */ struct _RTL_SRWLOCK LargeMetadataLock;
  /* 0x001c */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x0024 */ volatile unsigned long LargeReservedPages;
  /* 0x0028 */ volatile unsigned long LargeCommittedPages;
  /* 0x002c */ struct _HEAP_LOCK SegmentAllocatorLock;
  /* 0x0044 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x004c */ unsigned long SegmentCount;
  /* 0x0050 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0058 */ void* NextLocalInfoAddress;
  /* 0x005c */ void* NextUncommitedAddress;
  /* 0x0060 */ void* ReservedLimit;
  /* 0x0064 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x22bc */

