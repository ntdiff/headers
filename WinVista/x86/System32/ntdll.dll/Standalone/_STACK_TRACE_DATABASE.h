typedef struct _STACK_TRACE_DATABASE
{
  union
  {
    /* 0x0000 */ char Resource[56];
    /* 0x0000 */ void* Lock;
  }; /* size: 0x0038 */
  /* 0x0038 */ void* Reserved[3];
  /* 0x0044 */ unsigned char PreCommitted;
  /* 0x0045 */ unsigned char DumpInProgress;
  /* 0x0048 */ void* CommitBase;
  /* 0x004c */ void* CurrentLowerCommitLimit;
  /* 0x0050 */ void* CurrentUpperCommitLimit;
  /* 0x0054 */ char* NextFreeLowerMemory;
  /* 0x0058 */ char* NextFreeUpperMemory;
  /* 0x005c */ unsigned long NumberOfEntriesLookedUp;
  /* 0x0060 */ unsigned long NumberOfEntriesAdded;
  /* 0x0064 */ struct _RTL_STACK_TRACE_ENTRY** EntryIndexArray;
  /* 0x0068 */ unsigned long NumberOfEntriesDeleted;
  /* 0x006c */ unsigned long NumberOfEntriesAvailable;
  /* 0x0070 */ unsigned long NumberOfEntriesReused;
  /* 0x0074 */ unsigned long NumberOfAllocationFailures;
  /* 0x0078 */ struct _RTL_STACK_TRACE_ENTRY* FreeLists[32];
  /* 0x00f8 */ unsigned long NumberOfBuckets;
  /* 0x00fc */ struct _RTL_STACK_TRACE_ENTRY* Buckets[1];
} STACK_TRACE_DATABASE, *PSTACK_TRACE_DATABASE; /* size: 0x0100 */

