typedef struct _HEAP_COUNTERS
{
  /* 0x0000 */ unsigned long TotalMemoryReserved;
  /* 0x0004 */ unsigned long TotalMemoryCommitted;
  /* 0x0008 */ unsigned long TotalMemoryLargeUCR;
  /* 0x000c */ unsigned long TotalSizeInVirtualBlocks;
  /* 0x0010 */ unsigned long TotalSegments;
  /* 0x0014 */ unsigned long TotalUCRs;
  /* 0x0018 */ unsigned long CommittOps;
  /* 0x001c */ unsigned long DeCommitOps;
  /* 0x0020 */ unsigned long LockAcquires;
  /* 0x0024 */ unsigned long LockCollisions;
  /* 0x0028 */ unsigned long CommitRate;
  /* 0x002c */ unsigned long DecommittRate;
  /* 0x0030 */ unsigned long CommitFailures;
  /* 0x0034 */ unsigned long InBlockCommitFailures;
  /* 0x0038 */ unsigned long PollIntervalCounter;
  /* 0x003c */ unsigned long DecommitsSinceLastCheck;
  /* 0x0040 */ unsigned long HeapPollInterval;
  /* 0x0044 */ unsigned long AllocAndFreeOps;
  /* 0x0048 */ unsigned long AllocationIndicesActive;
  /* 0x004c */ unsigned long InBlockDeccommits;
  /* 0x0050 */ unsigned long InBlockDeccomitSize;
  /* 0x0054 */ unsigned long HighWatermarkSize;
  /* 0x0058 */ unsigned long LastPolledSize;
} HEAP_COUNTERS, *PHEAP_COUNTERS; /* size: 0x005c */

