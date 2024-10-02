struct RTL_HP_ENV_HANDLE
{
  /* 0x0000 */ void* h[2];
}; /* size: 0x0010 */

typedef struct _RTLP_HEAP_COMMIT_LIMIT_DATA
{
  /* 0x0000 */ unsigned __int64 CommitLimitBytes;
  /* 0x0008 */ unsigned __int64 CommitLimitFailureCode;
} RTLP_HEAP_COMMIT_LIMIT_DATA, *PRTLP_HEAP_COMMIT_LIMIT_DATA; /* size: 0x0010 */

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
  /* 0x0020 */ unsigned __int64 VsFreeCommittedPages;
  /* 0x0028 */ struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];
  /* 0x0048 */ struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;
} HEAP_RUNTIME_MEMORY_STATS, *PHEAP_RUNTIME_MEMORY_STATS; /* size: 0x0060 */

typedef struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED
{
  /* 0x0000 */ unsigned __int64 CallbackContext;
  /* 0x0008 */ unsigned __int64 AllocateVirtualMemoryEncoded;
  /* 0x0010 */ unsigned __int64 FreeVirtualMemoryEncoded;
  /* 0x0018 */ unsigned __int64 QueryVirtualMemoryEncoded;
} RTL_HP_HEAP_VA_CALLBACKS_ENCODED, *PRTL_HP_HEAP_VA_CALLBACKS_ENCODED; /* size: 0x0020 */

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

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
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
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _HEAP_VS_DELAY_FREE_CONTEXT
{
  /* 0x0000 */ union _SLIST_HEADER ListHead;
} HEAP_VS_DELAY_FREE_CONTEXT, *PHEAP_VS_DELAY_FREE_CONTEXT; /* size: 0x0010 */

typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned __int64 Allocate;
  /* 0x0008 */ unsigned __int64 Free;
  /* 0x0010 */ unsigned __int64 Commit;
  /* 0x0018 */ unsigned __int64 Decommit;
  /* 0x0020 */ unsigned __int64 ExtendContext;
  /* 0x0028 */ unsigned __int64 TlsCleanup;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0030 */

typedef struct _RTL_HP_VS_CONFIG
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PageAlignLargeAllocs : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EnableDelayFree : 1; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
} RTL_HP_VS_CONFIG, *PRTL_HP_VS_CONFIG; /* size: 0x0004 */

typedef struct _HEAP_VS_CONTEXT
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ enum _RTLP_HP_LOCK_TYPE LockType;
  /* 0x000c */ short MemStatsOffset;
  /* 0x0010 */ struct _RTL_RB_TREE FreeChunkTree;
  /* 0x0020 */ struct _LIST_ENTRY SubsegmentList;
  /* 0x0030 */ unsigned __int64 TotalCommittedUnits;
  /* 0x0038 */ unsigned __int64 FreeCommittedUnits;
  /* 0x0040 */ struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;
  /* 0x0080 */ void* BackendCtx;
  /* 0x0088 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x00b8 */ struct _RTL_HP_VS_CONFIG Config;
  /* 0x00bc */ unsigned long EliminatePointers : 1; /* bit position: 0 */
} HEAP_VS_CONTEXT, *PHEAP_VS_CONTEXT; /* size: 0x00c0 */

typedef union _RTL_HP_LFH_CONFIG
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short MaxBlockSize;
      /* 0x0002 */ unsigned short WitholdPageCrossingBlocks : 1; /* bit position: 0 */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

typedef struct _HEAP_LFH_CONFIG
{
  /* 0x0000 */ union _RTL_HP_LFH_CONFIG Global;
  /* 0x0004 */ unsigned long EnablePrivateSlots : 1; /* bit position: 0 */
} HEAP_LFH_CONFIG, *PHEAP_LFH_CONFIG; /* size: 0x0008 */

typedef struct _HEAP_LFH_HEAT_MAP
{
  /* 0x0000 */ unsigned short Counts[126];
  /* 0x00fc */ unsigned long LastDecayPeriod;
} HEAP_LFH_HEAT_MAP, *PHEAP_LFH_HEAT_MAP; /* size: 0x0100 */

typedef struct _HEAP_LFH_SLOT_MAP
{
  /* 0x0000 */ unsigned short Map[128];
} HEAP_LFH_SLOT_MAP, *PHEAP_LFH_SLOT_MAP; /* size: 0x0100 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0008 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0038 */ const unsigned char* AffinityModArray;
  /* 0x0040 */ unsigned char MaxAffinity;
  /* 0x0041 */ unsigned char LockType;
  /* 0x0042 */ short MemStatsOffset;
  /* 0x0044 */ struct _HEAP_LFH_CONFIG Config;
  /* 0x004c */ unsigned long TlsSlotIndex;
  /* 0x0050 */ unsigned __int64 EncodeKey;
  /* 0x0080 */ unsigned __int64 ExtensionLock;
  /* 0x0088 */ struct _SINGLE_LIST_ENTRY MetadataList[4];
  /* 0x00c0 */ struct _HEAP_LFH_HEAT_MAP HeatMap;
  /* 0x01c0 */ struct _HEAP_LFH_BUCKET* Buckets[128];
  /* 0x05c0 */ struct _HEAP_LFH_SLOT_MAP SlotMaps[1];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x06c0 */

typedef struct _SEGMENT_HEAP
{
  /* 0x0000 */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0010 */ unsigned long Signature;
  /* 0x0014 */ unsigned long GlobalFlags;
  /* 0x0018 */ unsigned long Interceptor;
  /* 0x001c */ unsigned short ProcessHeapListIndex;
  union
  {
    struct /* bitfield */
    {
      /* 0x001e */ unsigned short AllocatedFromMetadata : 1; /* bit position: 0 */
      /* 0x001e */ unsigned short ReadOnly : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x001e */ unsigned short InternalFlags;
  }; /* size: 0x0002 */
  /* 0x0020 */ struct _RTLP_HEAP_COMMIT_LIMIT_DATA CommitLimitData;
  /* 0x0030 */ unsigned __int64 ReservedMustBeZero;
  /* 0x0038 */ void* UserContext;
  /* 0x0040 */ unsigned __int64 LargeMetadataLock;
  /* 0x0048 */ struct _RTL_RB_TREE LargeAllocMetadata;
  /* 0x0058 */ volatile unsigned __int64 LargeReservedPages;
  /* 0x0060 */ volatile unsigned __int64 LargeCommittedPages;
  /* 0x0068 */ unsigned __int64 Tag;
  /* 0x0070 */ union _RTL_RUN_ONCE StackTraceInitVar;
  /* 0x0080 */ struct _HEAP_RUNTIME_MEMORY_STATS MemStats;
  /* 0x00e0 */ unsigned long GlobalLockOwner;
  /* 0x00e8 */ unsigned __int64 ContextExtendLock;
  /* 0x00f0 */ unsigned char* AllocatedBase;
  /* 0x00f8 */ unsigned char* UncommittedBase;
  /* 0x0100 */ unsigned char* ReservedLimit;
  /* 0x0108 */ unsigned char* ReservedRegionEnd;
  /* 0x0110 */ struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED CallbacksEncoded;
  /* 0x0140 */ struct _HEAP_SEG_CONTEXT SegContexts[2];
  /* 0x02c0 */ struct _HEAP_VS_CONTEXT VsContext;
  /* 0x0380 */ struct _HEAP_LFH_CONTEXT LfhContext;
} SEGMENT_HEAP, *PSEGMENT_HEAP; /* size: 0x0a40 */

