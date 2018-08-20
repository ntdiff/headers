typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

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
      /* 0x0000 */ volatile unsigned long Bucket;
      /* 0x0004 */ volatile unsigned long RunLength;
    }; /* size: 0x0008 */
    /* 0x0000 */ volatile __int64 Aggregate64;
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
    struct // _TAG_UNNAMED_3
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct // _TAG_UNNAMED_4
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
    struct // _TAG_UNNAMED_5
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _USER_MEMORY_CACHE_ENTRY
{
  /* 0x0000 */ union _SLIST_HEADER UserBlocks;
  /* 0x0010 */ unsigned long AvailableBlocks;
  /* 0x0014 */ long __PADDING__[3];
} USER_MEMORY_CACHE_ENTRY, *PUSER_MEMORY_CACHE_ENTRY; /* size: 0x0020 */

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
  /* 0x0008 */ struct _HEAP_SUBSEGMENT* ActiveSubsegment;
  /* 0x0010 */ struct _HEAP_SUBSEGMENT* volatile CachedItems[16];
  /* 0x0090 */ union _SLIST_HEADER SListHeader;
  /* 0x00a0 */ union _HEAP_BUCKET_COUNTERS Counters;
  /* 0x00a8 */ volatile struct _HEAP_LOCAL_DATA* LocalData;
  /* 0x00b0 */ unsigned long LastOpSequence;
  /* 0x00b4 */ volatile unsigned short BucketIndex;
  /* 0x00b6 */ unsigned short LastUsed;
  /* 0x00b8 */ long __PADDING__[2];
} HEAP_LOCAL_SEGMENT_INFO, *PHEAP_LOCAL_SEGMENT_INFO; /* size: 0x00c0 */

typedef struct _HEAP_LOCAL_DATA
{
  /* 0x0000 */ union _SLIST_HEADER DeletedSubSegments;
  /* 0x0010 */ struct _LFH_BLOCK_ZONE* volatile CrtZone;
  /* 0x0018 */ volatile struct _LFH_HEAP* LowFragHeap;
  /* 0x0020 */ unsigned long Sequence;
  /* 0x0030 */ struct _HEAP_LOCAL_SEGMENT_INFO SegmentInfo[128];
} HEAP_LOCAL_DATA, *PHEAP_LOCAL_DATA; /* size: 0x6030 */

typedef struct _LFH_HEAP
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION Lock;
  /* 0x0028 */ struct _LIST_ENTRY SubSegmentZones;
  /* 0x0038 */ unsigned __int64 ZoneBlockSize;
  /* 0x0040 */ void* Heap;
  /* 0x0048 */ unsigned long SegmentChange;
  /* 0x004c */ unsigned long SegmentCreate;
  /* 0x0050 */ unsigned long SegmentInsertInFree;
  /* 0x0054 */ unsigned long SegmentDelete;
  /* 0x0058 */ unsigned long CacheAllocs;
  /* 0x005c */ unsigned long CacheFrees;
  /* 0x0060 */ unsigned __int64 SizeInCache;
  /* 0x0068 */ union _HEAP_BUCKET_RUN_INFO RunInfo;
  /* 0x0070 */ struct _USER_MEMORY_CACHE_ENTRY UserBlockCache[12];
  /* 0x01f0 */ struct _HEAP_BUCKET Buckets[128];
  /* 0x03f0 */ struct _HEAP_LOCAL_DATA LocalData[1];
} LFH_HEAP, *PLFH_HEAP; /* size: 0x6420 */

