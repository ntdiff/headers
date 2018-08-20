typedef struct _STACK_TRACE_DATABASE
{
  union
  {
    /* 0x0000 */ char Resource[104];
    /* 0x0000 */ void* Lock;
  }; /* size: 0x0068 */
  /* 0x0068 */ void* Reserved[3];
  /* 0x0080 */ unsigned char PreCommitted;
  /* 0x0081 */ unsigned char DumpInProgress;
  /* 0x0088 */ void* CommitBase;
  /* 0x0090 */ void* CurrentLowerCommitLimit;
  /* 0x0098 */ void* CurrentUpperCommitLimit;
  /* 0x00a0 */ char* NextFreeLowerMemory;
  /* 0x00a8 */ char* NextFreeUpperMemory;
  /* 0x00b0 */ unsigned long NumberOfEntriesLookedUp;
  /* 0x00b4 */ unsigned long NumberOfEntriesAdded;
  /* 0x00b8 */ struct _RTL_STACK_TRACE_ENTRY** EntryIndexArray;
  /* 0x00c0 */ unsigned long NumberOfEntriesDeleted;
  /* 0x00c4 */ unsigned long NumberOfEntriesAvailable;
  /* 0x00c8 */ unsigned long NumberOfEntriesReused;
  /* 0x00cc */ unsigned long NumberOfAllocationFailures;
  /* 0x00d0 */ struct _RTL_STACK_TRACE_ENTRY* FreeLists[32];
  /* 0x01d0 */ unsigned long NumberOfBuckets;
  /* 0x01d8 */ struct _RTL_STACK_TRACE_ENTRY* Buckets[1];
} STACK_TRACE_DATABASE, *PSTACK_TRACE_DATABASE; /* size: 0x01e0 */

