typedef struct _SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION
{
  /* 0x0000 */ unsigned long SegmentReserveSize;
  /* 0x0004 */ unsigned long SegmentCommitSize;
  /* 0x0008 */ unsigned long SegmentCount;
  /* 0x000c */ unsigned long AllocatedSize;
  /* 0x0010 */ unsigned long LargeAllocReserveSize;
  /* 0x0014 */ unsigned long LargeAllocCommitSize;
} SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION, *PSEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION; /* size: 0x0018 */

