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

