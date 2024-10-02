typedef struct _SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION
{
  /* 0x0000 */ unsigned __int64 SegmentReserveSize;
  /* 0x0008 */ unsigned __int64 SegmentCommitSize;
  /* 0x0010 */ unsigned __int64 SegmentCount;
  /* 0x0018 */ unsigned __int64 AllocatedSize;
  /* 0x0020 */ unsigned __int64 LargeAllocReserveSize;
  /* 0x0028 */ unsigned __int64 LargeAllocCommitSize;
} SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION, *PSEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION; /* size: 0x0030 */

