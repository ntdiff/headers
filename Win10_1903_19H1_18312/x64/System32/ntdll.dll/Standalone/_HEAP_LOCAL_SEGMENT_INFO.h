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
  /* 0x0008 */ struct _HEAP_SUBSEGMENT* volatile ActiveSubsegment;
  /* 0x0010 */ struct _HEAP_SUBSEGMENT* volatile CachedItems[16];
  /* 0x0090 */ union _SLIST_HEADER SListHeader;
  /* 0x00a0 */ volatile union _HEAP_BUCKET_COUNTERS Counters;
  /* 0x00a8 */ unsigned long LastOpSequence;
  /* 0x00ac */ unsigned short BucketIndex;
  /* 0x00ae */ unsigned short LastUsed;
  /* 0x00b0 */ unsigned short NoThrashCount;
  /* 0x00b2 */ char __PADDING__[14];
} HEAP_LOCAL_SEGMENT_INFO, *PHEAP_LOCAL_SEGMENT_INFO; /* size: 0x00c0 */

