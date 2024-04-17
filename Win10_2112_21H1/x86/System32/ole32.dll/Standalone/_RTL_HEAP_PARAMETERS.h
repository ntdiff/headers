typedef struct _RTL_HEAP_PARAMETERS
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long SegmentReserve;
  /* 0x0008 */ unsigned long SegmentCommit;
  /* 0x000c */ unsigned long DeCommitFreeBlockThreshold;
  /* 0x0010 */ unsigned long DeCommitTotalFreeThreshold;
  /* 0x0014 */ unsigned long MaximumAllocationSize;
  /* 0x0018 */ unsigned long VirtualMemoryThreshold;
  /* 0x001c */ unsigned long InitialCommit;
  /* 0x0020 */ unsigned long InitialReserve;
  /* 0x0024 */ void* CommitRoutine /* function */;
  /* 0x0028 */ unsigned long Reserved[2];
} RTL_HEAP_PARAMETERS, *PRTL_HEAP_PARAMETERS; /* size: 0x0030 */

