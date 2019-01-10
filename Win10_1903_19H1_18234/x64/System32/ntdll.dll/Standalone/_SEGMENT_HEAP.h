struct RTL_HP_ENV_HANDLE
{
  /* 0x0000 */ void* h[2];
}; /* size: 0x0010 */

typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned __int64 CommitLimitBytes;
  /* 0x0008 */ unsigned __int64 CommitLimitFailureCode;
  /* 0x0010 */ unsigned __int64 MaxAllocationSizeBytes;
  /* 0x0018 */ unsigned __int64 AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0020 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ unsigned __int64 State : 2; /* bit position: 0 */
  }; /* size: 0x0008 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0008 */

typedef struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS
{
  /* 0x0000 */ volatile unsigned __int64 SmallPagesInUseWithinLarge;
  /* 0x0008 */ volatile unsigned __int64 OpportunisticLargePageCount;
} HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS, *PHEAP_OPPORTUNISTIC_LARGE_PAGE_STATS; /* size: 0x0010 */

typedef struct _RTL_HP_SEG_ALLOC_POLICY
{
  /* 0x0000 */ unsigned __int64 MinLargePages;
  /* 0x0008 */ unsigned __int64 MaxLargePages;
  /* 0x0010 */ unsigned char MinUtilization;
  /* 0x0011 */ char __PADDING__[7];
} RTL_HP_SEG_ALLOC_POLICY, *PRTL_HP_SEG_ALLOC_POLICY; /* size: 0x0018 */

typedef struct _HEAP_RUNTIME_MEMORY_STATS
{
  /* 0x0000 */ volatile unsigned __int64 TotalReservedPages;
  /* 0x0008 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0010 */ unsigned __int64 FreeCommittedPages;
  /* 0x0018 */ unsigned __int64 LfhFreeCommittedPages;
  /* 0x0020 */ struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];
  /* 0x0040 */ struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;
} HEAP_RUNTIME_MEMORY_STATS, *PHEAP_RUNTIME_MEMORY_STATS; /* size: 0x0058 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned __int64 SegmentMask;
  /* 0x0008 */ unsigned char UnitShift;
  /* 0x0009 */ unsigned char PagesPerUnitShift;
  /* 0x000a */ unsigned char FirstDescriptorIndex;
  /* 0x000b */ unsigned char CachedCommitSoftShift;
  /* 0x000c */ unsigned char CachedCommitHighShift;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x000d */ unsigned char LargePagePolicy : 3; /* bit position: 0 */
        /* 0x000d */ unsigned char FullDecommit : 1; /* bit position: 3 */
        /* 0x000d */ unsigned char ReleaseEmptySegments : 1; /* bit position: 4 */
      }; /* bitfield */
      /* 0x000d */ unsigned char AllFlags;
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ Flags;
  /* 0x0010 */ unsigned long MaxAllocationSize;
  /* 0x0014 */ short OlpStatsOffset;
  /* 0x0016 */ short MemStatsOffset;
  /* 0x0018 */ void* LfhContext;
  /* 0x0020 */ void* VsContext;
  /* 0x0028 */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0038 */ void* Heap;
  /* 0x0040 */ unsigned __int64 SegmentLock;
  /* 0x0048 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x0058 */ unsigned __int64 SegmentCount;
  /* 0x0060 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0070 */ unsigned __int64 FreeSegmentListLock;
  /* 0x0078 */ struct _SINGLE_LIST_ENTRY FreeSegmentList[2];
  /* 0x0088 */ long __PADDING__[14];
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x00c0 */

typedef enum _RTLP_HP_LOCK_TYPE
{
  HeapLockPaged = 0,
  HeapLockNonPaged = 1,
  HeapLockTypeMax = 2,
} RTLP_HP_LOCK_TYPE, *PRTLP_HP_LOCK_TYPE;

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned __int64 Allocate;
  /* 0x0008 */ unsigned __int64 Free;
  /* 0x0010 */ unsigned __int64 Commit;
  /* 0x0018 */ unsigned __int64 Decommit;
  /* 0x0020 */ unsigned __int64 ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0028 */

typedef struct _RTL_HP_VS_CONFIG
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PageAlignLargeAllocs : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FullDecommit : 1; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
} RTL_HP_VS_CONFIG, *PRTL_HP_VS_CONFIG; /* size: 0x0004 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ enum _RTLP_HP_LOCK_TYPE LockType;
  /* 0x0010 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x0020 */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0030 */ unsigned __int64 TotalCommittedUnits;
  /* 0x0038 */ unsigned __int64 FreeCommittedUnits;
  /* 0x0040 */ void* BackendCtx;
  /* 0x0048 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0070 */ struct _RTL_HP_VS_CONFIG Config;
  /* 0x0074 */ unsigned long Flags;
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0078 */

typedef struct _RTL_HP_LFH_CONFIG
{
  /* 0x0000 */ unsigned short MaxBlockSize;
  /* 0x0002 */ unsigned short MaxSubsegmentPages;
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

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

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0008 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0030 */ const unsigned char* AffinityModArray;
  /* 0x0038 */ unsigned char MaxAffinity;
  /* 0x0039 */ unsigned char LockType;
  /* 0x003a */ short MemStatsOffset;
  /* 0x003c */ struct _RTL_HP_LFH_CONFIG Config;
  /* 0x0040 */ union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;
  /* 0x0048 */ unsigned __int64 SubsegmentCreationLock;
  /* 0x0080 */ struct _HEAP_LFH_BUCKET* Buckets[129];
  /* 0x0488 */ long __PADDING__[14];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x04c0 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0010 */ unsigned long Signature;
  /* 0x0014 */ unsigned long GlobalFlags;
  /* 0x0018 */ unsigned long Interceptor;
  /* 0x001c */ unsigned short ProcessHeapListIndex;
  /* 0x001e */ unsigned short AllocatedFromMetadata : 1; /* bit position: 0 */
  /* 0x0020 */ struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
  /* 0x0040 */ unsigned __int64 LargeMetadataLock;
  /* 0x0048 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x0058 */ volatile unsigned __int64 LargeReservedPages;
  /* 0x0060 */ volatile unsigned __int64 LargeCommittedPages;
  /* 0x0068 */ union _RTL_RUN_ONCE StackTraceInitVar;
  /* 0x0080 */ struct _HEAP_RUNTIME_MEMORY_STATS MemStats;
  /* 0x00d8 */ unsigned short GlobalLockCount;
  /* 0x00dc */ unsigned long GlobalLockOwner;
  /* 0x00e0 */ unsigned __int64 ContextExtendLock;
  /* 0x00e8 */ unsigned char* AllocatedBase;
  /* 0x00f0 */ unsigned char* UncommittedBase;
  /* 0x00f8 */ unsigned char* ReservedLimit;
  /* 0x0100 */ struct _HEAP_SEG_CONTEXT SegContexts[2];
  /* 0x0280 */ struct _HEAP_VS_CONTEXT VsContext;
  /* 0x0300 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x07c0 */

