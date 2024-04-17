typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_VERIFIER_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long Level;
  /* 0x0008 */ struct _UNICODE_STRING DriverName;
  /* 0x0018 */ unsigned long RaiseIrqls;
  /* 0x001c */ unsigned long AcquireSpinLocks;
  /* 0x0020 */ unsigned long SynchronizeExecutions;
  /* 0x0024 */ unsigned long AllocationsAttempted;
  /* 0x0028 */ unsigned long AllocationsSucceeded;
  /* 0x002c */ unsigned long AllocationsSucceededSpecialPool;
  /* 0x0030 */ unsigned long AllocationsWithNoTag;
  /* 0x0034 */ unsigned long TrimRequests;
  /* 0x0038 */ unsigned long Trims;
  /* 0x003c */ unsigned long AllocationsFailed;
  /* 0x0040 */ unsigned long AllocationsFailedDeliberately;
  /* 0x0044 */ unsigned long Loads;
  /* 0x0048 */ unsigned long Unloads;
  /* 0x004c */ unsigned long UnTrackedPool;
  /* 0x0050 */ unsigned long CurrentPagedPoolAllocations;
  /* 0x0054 */ unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0058 */ unsigned long PeakPagedPoolAllocations;
  /* 0x005c */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0060 */ unsigned __int64 PagedPoolUsageInBytes;
  /* 0x0068 */ unsigned __int64 NonPagedPoolUsageInBytes;
  /* 0x0070 */ unsigned __int64 PeakPagedPoolUsageInBytes;
  /* 0x0078 */ unsigned __int64 PeakNonPagedPoolUsageInBytes;
} SYSTEM_VERIFIER_INFORMATION, *PSYSTEM_VERIFIER_INFORMATION; /* size: 0x0080 */

