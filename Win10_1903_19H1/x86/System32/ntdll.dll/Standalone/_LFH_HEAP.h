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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _USER_MEMORY_CACHE_ENTRY
{
  /* 0x0000 */ union _SLIST_HEADER UserBlocks;
  /* 0x0008 */ volatile unsigned long AvailableBlocks;
  /* 0x000c */ volatile unsigned long MinimumDepth;
  /* 0x0010 */ volatile unsigned long CacheShiftThreshold;
  /* 0x0014 */ volatile unsigned short Allocations;
  /* 0x0016 */ volatile unsigned short Frees;
  /* 0x0018 */ volatile unsigned short CacheHits;
  /* 0x001a */ char __PADDING__[6];
} USER_MEMORY_CACHE_ENTRY, *PUSER_MEMORY_CACHE_ENTRY; /* size: 0x0020 */

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
  /* 0x0008 */ struct _LFH_BLOCK_ZONE* volatile CrtZone;
  /* 0x000c */ struct _LFH_HEAP* LowFragHeap;
  /* 0x0010 */ unsigned long Sequence;
  /* 0x0014 */ unsigned long DeleteRateThreshold;
} HEAP_LOCAL_DATA, *PHEAP_LOCAL_DATA; /* size: 0x0018 */

typedef struct _LFH_HEAP
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
  /* 0x0004 */ struct _LIST_ENTRY SubSegmentZones;
  /* 0x000c */ void* Heap;
  /* 0x0010 */ void* NextSegmentInfoArrayAddress;
  /* 0x0014 */ void* FirstUncommittedAddress;
  /* 0x0018 */ void* ReservedAddressLimit;
  /* 0x001c */ unsigned long SegmentCreate;
  /* 0x0020 */ unsigned long SegmentDelete;
  /* 0x0024 */ volatile unsigned long MinimumCacheDepth;
  /* 0x0028 */ volatile unsigned long CacheShiftThreshold;
  /* 0x002c */ volatile unsigned long SizeInCache;
  /* 0x0030 */ volatile union _HEAP_BUCKET_RUN_INFO RunInfo;
  /* 0x0038 */ struct _USER_MEMORY_CACHE_ENTRY UserBlockCache[12];
  /* 0x01b8 */ struct _HEAP_LFH_MEM_POLICIES MemoryPolicies;
  /* 0x01bc */ struct _HEAP_BUCKET Buckets[129];
  /* 0x03c0 */ struct _HEAP_LOCAL_SEGMENT_INFO* SegmentInfoArrays[129];
  /* 0x05c4 */ struct _HEAP_LOCAL_SEGMENT_INFO* AffinitizedInfoArrays[129];
  /* 0x07c8 */ struct _SEGMENT_HEAP* SegmentAllocator;
  /* 0x07d0 */ struct _HEAP_LOCAL_DATA LocalData[1];
} LFH_HEAP, *PLFH_HEAP; /* size: 0x07e8 */

