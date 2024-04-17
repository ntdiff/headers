typedef struct _RTL_HEAP_PARAMETERS
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ unsigned __int64 SegmentReserve;
  /* 0x0010 */ unsigned __int64 SegmentCommit;
  /* 0x0018 */ unsigned __int64 DeCommitFreeBlockThreshold;
  /* 0x0020 */ unsigned __int64 DeCommitTotalFreeThreshold;
  /* 0x0028 */ unsigned __int64 MaximumAllocationSize;
  /* 0x0030 */ unsigned __int64 VirtualMemoryThreshold;
  /* 0x0038 */ unsigned __int64 InitialCommit;
  /* 0x0040 */ unsigned __int64 InitialReserve;
  /* 0x0048 */ void* CommitRoutine /* function */;
  /* 0x0050 */ unsigned __int64 Reserved[2];
} RTL_HEAP_PARAMETERS, *PRTL_HEAP_PARAMETERS; /* size: 0x0060 */

