typedef struct _HEAP_COUNTERS
{
  /* 0x0000 */ unsigned __int64 TotalMemoryReserved;
  /* 0x0008 */ unsigned __int64 TotalMemoryCommitted;
  /* 0x0010 */ unsigned __int64 TotalMemoryLargeUCR;
  /* 0x0018 */ unsigned __int64 TotalSizeInVirtualBlocks;
  /* 0x0020 */ unsigned long TotalSegments;
  /* 0x0024 */ unsigned long TotalUCRs;
  /* 0x0028 */ unsigned long CommittOps;
  /* 0x002c */ unsigned long DeCommitOps;
  /* 0x0030 */ unsigned long LockAcquires;
  /* 0x0034 */ unsigned long LockCollisions;
  /* 0x0038 */ unsigned long CommitRate;
  /* 0x003c */ unsigned long DecommittRate;
  /* 0x0040 */ unsigned long CommitFailures;
  /* 0x0044 */ unsigned long InBlockCommitFailures;
  /* 0x0048 */ unsigned long CompactHeapCalls;
  /* 0x004c */ unsigned long CompactedUCRs;
  /* 0x0050 */ unsigned long InBlockDeccommits;
  /* 0x0058 */ unsigned __int64 InBlockDeccomitSize;
} HEAP_COUNTERS, *PHEAP_COUNTERS; /* size: 0x0060 */

