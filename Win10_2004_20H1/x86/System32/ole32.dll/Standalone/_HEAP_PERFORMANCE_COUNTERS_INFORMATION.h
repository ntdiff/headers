typedef struct _SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION
{
  /* 0x0000 */ unsigned long SegmentReserveSize;
  /* 0x0004 */ unsigned long SegmentCommitSize;
  /* 0x0008 */ unsigned long SegmentCount;
  /* 0x000c */ unsigned long AllocatedSize;
  /* 0x0010 */ unsigned long LargeAllocReserveSize;
  /* 0x0014 */ unsigned long LargeAllocCommitSize;
} SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION, *PSEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION; /* size: 0x0018 */

typedef struct _HEAP_PERFORMANCE_COUNTERS_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long HeapIndex;
  /* 0x000c */ unsigned long LastHeapIndex;
  /* 0x0010 */ unsigned long BaseAddress;
  /* 0x0014 */ unsigned long ReserveSize;
  /* 0x0018 */ unsigned long CommitSize;
  /* 0x001c */ unsigned long SegmentCount;
  /* 0x0020 */ unsigned long LargeUCRMemory;
  /* 0x0024 */ unsigned long UCRLength;
  /* 0x0028 */ unsigned long AllocatedSpace;
  /* 0x002c */ unsigned long FreeSpace;
  /* 0x0030 */ unsigned long FreeListLength;
  /* 0x0034 */ unsigned long Contention;
  /* 0x0038 */ unsigned long VirtualBlocks;
  /* 0x003c */ unsigned long CommitRate;
  /* 0x0040 */ unsigned long DecommitRate;
  /* 0x0044 */ struct _SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION SegmentHeapPerfInformation;
} HEAP_PERFORMANCE_COUNTERS_INFORMATION, *PHEAP_PERFORMANCE_COUNTERS_INFORMATION; /* size: 0x005c */

