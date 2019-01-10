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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _HEAP_BUCKET_RUN_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Bucket;
      /* 0x0004 */ unsigned long RunLength;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 Aggregate64;
  }; /* size: 0x0008 */
} HEAP_BUCKET_RUN_INFO, *PHEAP_BUCKET_RUN_INFO; /* size: 0x0008 */

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
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _USER_MEMORY_CACHE_ENTRY
{
  /* 0x0000 */ union _SLIST_HEADER UserBlocks;
  /* 0x0010 */ volatile unsigned long AvailableBlocks;
  /* 0x0014 */ volatile unsigned long MinimumDepth;
  /* 0x0018 */ volatile unsigned long CacheShiftThreshold;
  /* 0x001c */ volatile unsigned short Allocations;
  /* 0x001e */ volatile unsigned short Frees;
  /* 0x0020 */ volatile unsigned short CacheHits;
  /* 0x0022 */ char __PADDING__[14];
} USER_MEMORY_CACHE_ENTRY, *PUSER_MEMORY_CACHE_ENTRY; /* size: 0x0030 */

typedef struct _HEAP_LFH_MEM_POLICIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DisableAffinity : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long SlowSubsegmentGrowth : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Spare : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllPolicies;
  }; /* size: 0x0004 */
} HEAP_LFH_MEM_POLICIES, *PHEAP_LFH_MEM_POLICIES; /* size: 0x0004 */

typedef struct _HEAP_BUCKET
{
  /* 0x0000 */ unsigned short BlockUnits;
  /* 0x0002 */ unsigned char SizeIndex;
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char UseAffinity : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char DebugFlags : 2; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0003 */ volatile unsigned char Flags;
  }; /* size: 0x0001 */
} HEAP_BUCKET, *PHEAP_BUCKET; /* size: 0x0004 */

typedef struct _HEAP_LOCAL_DATA
{
  /* 0x0000 */ union _SLIST_HEADER DeletedSubSegments;
  /* 0x0010 */ struct _LFH_BLOCK_ZONE* volatile CrtZone;
  /* 0x0018 */ struct _LFH_HEAP* LowFragHeap;
  /* 0x0020 */ unsigned long Sequence;
  /* 0x0024 */ unsigned long DeleteRateThreshold;
  /* 0x0028 */ long __PADDING__[2];
} HEAP_LOCAL_DATA, *PHEAP_LOCAL_DATA; /* size: 0x0030 */

typedef struct _LFH_HEAP
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0008 */ struct _LIST_ENTRY SubSegmentZones;
  /* 0x0018 */ void* Heap;
  /* 0x0020 */ void* NextSegmentInfoArrayAddress;
  /* 0x0028 */ void* FirstUncommittedAddress;
  /* 0x0030 */ void* ReservedAddressLimit;
  /* 0x0038 */ unsigned long SegmentCreate;
  /* 0x003c */ unsigned long SegmentDelete;
  /* 0x0040 */ volatile unsigned long MinimumCacheDepth;
  /* 0x0044 */ volatile unsigned long CacheShiftThreshold;
  /* 0x0048 */ volatile unsigned __int64 SizeInCache;
  /* 0x0050 */ volatile union _HEAP_BUCKET_RUN_INFO RunInfo;
  /* 0x0060 */ struct _USER_MEMORY_CACHE_ENTRY UserBlockCache[12];
  /* 0x02a0 */ struct _HEAP_LFH_MEM_POLICIES MemoryPolicies;
  /* 0x02a4 */ struct _HEAP_BUCKET Buckets[129];
  /* 0x04a8 */ struct _HEAP_LOCAL_SEGMENT_INFO* SegmentInfoArrays[129];
  /* 0x08b0 */ struct _HEAP_LOCAL_SEGMENT_INFO* AffinitizedInfoArrays[129];
  /* 0x0cb8 */ struct _SEGMENT_HEAP* SegmentAllocator;
  /* 0x0cc0 */ struct _HEAP_LOCAL_DATA LocalData[1];
} LFH_HEAP, *PLFH_HEAP; /* size: 0x0cf0 */

