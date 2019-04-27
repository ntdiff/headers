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

typedef union _HEAP_BUCKET_COUNTERS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long TotalBlocks;
      /* 0x0004 */ unsigned long SubSegmentCounts;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 Aggregate64;
  }; /* size: 0x0008 */
} HEAP_BUCKET_COUNTERS, *PHEAP_BUCKET_COUNTERS; /* size: 0x0008 */

typedef struct _HEAP_LOCAL_SEGMENT_INFO
{
  /* 0x0000 */ struct _HEAP_LOCAL_DATA* LocalData;
  /* 0x0004 */ struct _HEAP_SUBSEGMENT* volatile ActiveSubsegment;
  /* 0x0008 */ struct _HEAP_SUBSEGMENT* volatile CachedItems[16];
  /* 0x0048 */ union _SLIST_HEADER SListHeader;
  /* 0x0050 */ volatile union _HEAP_BUCKET_COUNTERS Counters;
  /* 0x0058 */ unsigned long LastOpSequence;
  /* 0x005c */ unsigned short BucketIndex;
  /* 0x005e */ unsigned short LastUsed;
  /* 0x0060 */ unsigned short NoThrashCount;
  /* 0x0062 */ char __PADDING__[6];
} HEAP_LOCAL_SEGMENT_INFO, *PHEAP_LOCAL_SEGMENT_INFO; /* size: 0x0068 */

