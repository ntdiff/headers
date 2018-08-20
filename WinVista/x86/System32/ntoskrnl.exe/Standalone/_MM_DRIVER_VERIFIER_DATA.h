typedef struct _MM_DRIVER_VERIFIER_DATA
{
  /* 0x0000 */ unsigned long Level;
  /* 0x0004 */ unsigned long RaiseIrqls;
  /* 0x0008 */ unsigned long AcquireSpinLocks;
  /* 0x000c */ unsigned long SynchronizeExecutions;
  /* 0x0010 */ unsigned long AllocationsAttempted;
  /* 0x0014 */ unsigned long AllocationsSucceeded;
  /* 0x0018 */ volatile unsigned long AllocationsSucceededSpecialPool;
  /* 0x001c */ unsigned long AllocationsWithNoTag;
  /* 0x0020 */ unsigned long TrimRequests;
  /* 0x0024 */ unsigned long Trims;
  /* 0x0028 */ unsigned long AllocationsFailed;
  /* 0x002c */ unsigned long AllocationsFailedDeliberately;
  /* 0x0030 */ unsigned long Loads;
  /* 0x0034 */ unsigned long Unloads;
  /* 0x0038 */ unsigned long UnTrackedPool;
  /* 0x003c */ unsigned long UserTrims;
  /* 0x0040 */ unsigned long CurrentPagedPoolAllocations;
  /* 0x0044 */ unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0048 */ unsigned long PeakPagedPoolAllocations;
  /* 0x004c */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0050 */ unsigned long PagedBytes;
  /* 0x0054 */ unsigned long NonPagedBytes;
  /* 0x0058 */ unsigned long PeakPagedBytes;
  /* 0x005c */ unsigned long PeakNonPagedBytes;
  /* 0x0060 */ unsigned long BurstAllocationsFailedDeliberately;
  /* 0x0064 */ unsigned long SessionTrims;
  /* 0x0068 */ unsigned long OptionChanges;
  /* 0x006c */ unsigned long VerifyMode;
} MM_DRIVER_VERIFIER_DATA, *PMM_DRIVER_VERIFIER_DATA; /* size: 0x0070 */

