typedef struct _SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION
{
  /* 0x0000 */ unsigned __int64 SegmentReserveSize;
  /* 0x0008 */ unsigned __int64 SegmentCommitSize;
  /* 0x0010 */ unsigned __int64 SegmentCount;
  /* 0x0018 */ unsigned __int64 AllocatedSize;
  /* 0x0020 */ unsigned __int64 LargeAllocReserveSize;
  /* 0x0028 */ unsigned __int64 LargeAllocCommitSize;
} SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION, *PSEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION; /* size: 0x0030 */

typedef struct _HEAP_PERFORMANCE_COUNTERS_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long HeapIndex;
  /* 0x000c */ unsigned long LastHeapIndex;
  /* 0x0010 */ unsigned __int64 BaseAddress;
  /* 0x0018 */ unsigned __int64 ReserveSize;
  /* 0x0020 */ unsigned __int64 CommitSize;
  /* 0x0028 */ unsigned long SegmentCount;
  /* 0x0030 */ unsigned __int64 LargeUCRMemory;
  /* 0x0038 */ unsigned long UCRLength;
  /* 0x0040 */ unsigned __int64 AllocatedSpace;
  /* 0x0048 */ unsigned __int64 FreeSpace;
  /* 0x0050 */ unsigned long FreeListLength;
  /* 0x0054 */ unsigned long Contention;
  /* 0x0058 */ unsigned long VirtualBlocks;
  /* 0x005c */ unsigned long CommitRate;
  /* 0x0060 */ unsigned long DecommitRate;
  /* 0x0068 */ struct _SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION SegmentHeapPerfInformation;
} HEAP_PERFORMANCE_COUNTERS_INFORMATION, *PHEAP_PERFORMANCE_COUNTERS_INFORMATION; /* size: 0x0098 */

