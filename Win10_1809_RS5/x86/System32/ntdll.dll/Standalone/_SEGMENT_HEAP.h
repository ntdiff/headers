struct RTL_HP_ENV_HANDLE
{
  /* 0x0000 */ void* h[2];
}; /* size: 0x0008 */

typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned long CommitLimitBytes;
  /* 0x0004 */ unsigned long CommitLimitFailureCode;
  /* 0x0008 */ unsigned long MaxAllocationSizeBytes;
  /* 0x000c */ unsigned long AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0010 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0004 */

typedef struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS
{
  /* 0x0000 */ volatile unsigned long SmallPagesInUseWithinLarge;
  /* 0x0004 */ volatile unsigned long OpportunisticLargePageCount;
} HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS, *PHEAP_OPPORTUNISTIC_LARGE_PAGE_STATS; /* size: 0x0008 */

typedef struct _RTL_HP_SEG_ALLOC_POLICY
{
  /* 0x0000 */ unsigned long MinLargePages;
  /* 0x0004 */ unsigned long MaxLargePages;
  /* 0x0008 */ unsigned char MinUtilization;
  /* 0x0009 */ char __PADDING__[3];
} RTL_HP_SEG_ALLOC_POLICY, *PRTL_HP_SEG_ALLOC_POLICY; /* size: 0x000c */

typedef struct _HEAP_RUNTIME_MEMORY_STATS
{
  /* 0x0000 */ volatile unsigned long TotalReservedPages;
  /* 0x0004 */ volatile unsigned long TotalCommittedPages;
  /* 0x0008 */ unsigned long FreeCommittedPages;
  /* 0x000c */ unsigned long LfhFreeCommittedPages;
  /* 0x0010 */ struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];
  /* 0x0020 */ struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;
} HEAP_RUNTIME_MEMORY_STATS, *PHEAP_RUNTIME_MEMORY_STATS; /* size: 0x002c */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned long SegmentMask;
  /* 0x0004 */ unsigned char UnitShift;
  /* 0x0005 */ unsigned char PagesPerUnitShift;
  /* 0x0006 */ unsigned char FirstDescriptorIndex;
  /* 0x0007 */ unsigned char CachedCommitSoftShift;
  /* 0x0008 */ unsigned char CachedCommitHighShift;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0009 */ unsigned char LargePagePolicy : 3; /* bit position: 0 */
        /* 0x0009 */ unsigned char FullDecommit : 1; /* bit position: 3 */
        /* 0x0009 */ unsigned char ReleaseEmptySegments : 1; /* bit position: 4 */
      }; /* bitfield */
      /* 0x0009 */ unsigned char AllFlags;
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ Flags;
  /* 0x000c */ unsigned long MaxAllocationSize;
  /* 0x0010 */ short OlpStatsOffset;
  /* 0x0012 */ short MemStatsOffset;
  /* 0x0014 */ void* LfhContext;
  /* 0x0018 */ void* VsContext;
  /* 0x001c */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0024 */ void* Heap;
  /* 0x0040 */ unsigned long SegmentLock;
  /* 0x0044 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x004c */ unsigned long SegmentCount;
  /* 0x0050 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0058 */ unsigned long FreeSegmentListLock;
  /* 0x005c */ struct _SINGLE_LIST_ENTRY FreeSegmentList[2];
  /* 0x0064 */ long __PADDING__[7];
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x0080 */

typedef enum _RTLP_HP_LOCK_TYPE
{
  HeapLockPaged = 0,
  HeapLockNonPaged = 1,
  HeapLockTypeMax = 2,
} RTLP_HP_LOCK_TYPE, *PRTLP_HP_LOCK_TYPE;

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned long Allocate;
  /* 0x0004 */ unsigned long Free;
  /* 0x0008 */ unsigned long Commit;
  /* 0x000c */ unsigned long Decommit;
  /* 0x0010 */ unsigned long ExtendContext;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0014 */

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
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ enum _RTLP_HP_LOCK_TYPE LockType;
  /* 0x0008 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x0010 */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0018 */ unsigned long TotalCommittedUnits;
  /* 0x001c */ unsigned long FreeCommittedUnits;
  /* 0x0020 */ void* BackendCtx;
  /* 0x0024 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0038 */ struct _RTL_HP_VS_CONFIG Config;
  /* 0x003c */ unsigned long Flags;
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x0040 */

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
    /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[2];
    /* 0x0000 */ void* AllStats;
  }; /* size: 0x0004 */
} HEAP_LFH_SUBSEGMENT_STATS, *PHEAP_LFH_SUBSEGMENT_STATS; /* size: 0x0004 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0004 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0018 */ const unsigned char* AffinityModArray;
  /* 0x001c */ unsigned char MaxAffinity;
  /* 0x001d */ unsigned char LockType;
  /* 0x001e */ short MemStatsOffset;
  /* 0x0020 */ struct _RTL_HP_LFH_CONFIG Config;
  /* 0x0040 */ union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;
  /* 0x0044 */ unsigned long SubsegmentCreationLock;
  /* 0x0080 */ struct _HEAP_LFH_BUCKET* Buckets[129];
  /* 0x0284 */ long __PADDING__[15];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x02c0 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned long GlobalFlags;
  /* 0x0010 */ unsigned long Interceptor;
  /* 0x0014 */ unsigned short ProcessHeapListIndex;
  /* 0x0016 */ unsigned short AllocatedFromMetadata : 1; /* bit position: 0 */
  /* 0x0018 */ struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
  /* 0x0040 */ unsigned long LargeMetadataLock;
  /* 0x0044 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x004c */ volatile unsigned long LargeReservedPages;
  /* 0x0050 */ volatile unsigned long LargeCommittedPages;
  /* 0x0054 */ union _RTL_RUN_ONCE StackTraceInitVar;
  /* 0x0080 */ struct _HEAP_RUNTIME_MEMORY_STATS MemStats;
  /* 0x00ac */ unsigned short GlobalLockCount;
  /* 0x00b0 */ unsigned long GlobalLockOwner;
  /* 0x00b4 */ unsigned long ContextExtendLock;
  /* 0x00b8 */ unsigned char* AllocatedBase;
  /* 0x00bc */ unsigned char* UncommittedBase;
  /* 0x00c0 */ unsigned char* ReservedLimit;
  /* 0x0100 */ struct _HEAP_SEG_CONTEXT SegContexts[2];
  /* 0x0200 */ struct _HEAP_VS_CONTEXT VsContext;
  /* 0x0240 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x0500 */

