typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

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
      /* 0x0000 */ volatile unsigned long Bucket;
      /* 0x0004 */ volatile unsigned long RunLength;
    }; /* size: 0x0008 */
    /* 0x0000 */ volatile __int64 Aggregate64;
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
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _USER_MEMORY_CACHE_ENTRY
{
  /* 0x0000 */ union _SLIST_HEADER UserBlocks;
  /* 0x0008 */ unsigned long AvailableBlocks;
  /* 0x000c */ long __PADDING__[1];
} USER_MEMORY_CACHE_ENTRY, *PUSER_MEMORY_CACHE_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_BUCKET
{
  /* 0x0000 */ unsigned short BlockUnits;
  /* 0x0002 */ unsigned char SizeIndex;
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char UseAffinity : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char DebugFlags : 2; /* bit position: 1 */
  }; /* bitfield */
} HEAP_BUCKET, *PHEAP_BUCKET; /* size: 0x0004 */

typedef union _HEAP_BUCKET_COUNTERS
{
  union
  {
    struct
    {
      /* 0x0000 */ volatile unsigned long TotalBlocks;
      /* 0x0004 */ volatile unsigned long SubSegmentCounts;
    }; /* size: 0x0008 */
    /* 0x0000 */ volatile __int64 Aggregate64;
  }; /* size: 0x0008 */
} HEAP_BUCKET_COUNTERS, *PHEAP_BUCKET_COUNTERS; /* size: 0x0008 */

typedef struct _HEAP_LOCAL_SEGMENT_INFO
{
  /* 0x0000 */ struct _HEAP_SUBSEGMENT* Hint;
  /* 0x0004 */ struct _HEAP_SUBSEGMENT* ActiveSubsegment;
  /* 0x0008 */ struct _HEAP_SUBSEGMENT* volatile CachedItems[16];
  /* 0x0048 */ union _SLIST_HEADER SListHeader;
  /* 0x0050 */ union _HEAP_BUCKET_COUNTERS Counters;
  /* 0x0058 */ volatile struct _HEAP_LOCAL_DATA* LocalData;
  /* 0x005c */ unsigned long LastOpSequence;
  /* 0x0060 */ volatile unsigned short BucketIndex;
  /* 0x0062 */ unsigned short LastUsed;
  /* 0x0064 */ long __PADDING__[1];
} HEAP_LOCAL_SEGMENT_INFO, *PHEAP_LOCAL_SEGMENT_INFO; /* size: 0x0068 */

typedef struct _HEAP_LOCAL_DATA
{
  /* 0x0000 */ union _SLIST_HEADER DeletedSubSegments;
  /* 0x0008 */ struct _LFH_BLOCK_ZONE* volatile CrtZone;
  /* 0x000c */ volatile struct _LFH_HEAP* LowFragHeap;
  /* 0x0010 */ unsigned long Sequence;
  /* 0x0018 */ struct _HEAP_LOCAL_SEGMENT_INFO SegmentInfo[128];
} HEAP_LOCAL_DATA, *PHEAP_LOCAL_DATA; /* size: 0x3418 */

typedef struct _LFH_HEAP
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION Lock;
  /* 0x0018 */ struct _LIST_ENTRY SubSegmentZones;
  /* 0x0020 */ unsigned long ZoneBlockSize;
  /* 0x0024 */ void* Heap;
  /* 0x0028 */ unsigned long SegmentChange;
  /* 0x002c */ unsigned long SegmentCreate;
  /* 0x0030 */ unsigned long SegmentInsertInFree;
  /* 0x0034 */ unsigned long SegmentDelete;
  /* 0x0038 */ unsigned long CacheAllocs;
  /* 0x003c */ unsigned long CacheFrees;
  /* 0x0040 */ unsigned long SizeInCache;
  /* 0x0048 */ union _HEAP_BUCKET_RUN_INFO RunInfo;
  /* 0x0050 */ struct _USER_MEMORY_CACHE_ENTRY UserBlockCache[12];
  /* 0x0110 */ struct _HEAP_BUCKET Buckets[128];
  /* 0x0310 */ struct _HEAP_LOCAL_DATA LocalData[1];
} LFH_HEAP, *PLFH_HEAP; /* size: 0x3728 */

