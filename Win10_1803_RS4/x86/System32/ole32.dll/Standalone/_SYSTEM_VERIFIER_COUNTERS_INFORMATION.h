typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SYSTEM_VERIFIER_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long Level;
  /* 0x0008 */ struct _UNICODE_STRING DriverName;
  /* 0x0010 */ unsigned long RaiseIrqls;
  /* 0x0014 */ unsigned long AcquireSpinLocks;
  /* 0x0018 */ unsigned long SynchronizeExecutions;
  /* 0x001c */ unsigned long AllocationsAttempted;
  /* 0x0020 */ unsigned long AllocationsSucceeded;
  /* 0x0024 */ unsigned long AllocationsSucceededSpecialPool;
  /* 0x0028 */ unsigned long AllocationsWithNoTag;
  /* 0x002c */ unsigned long TrimRequests;
  /* 0x0030 */ unsigned long Trims;
  /* 0x0034 */ unsigned long AllocationsFailed;
  /* 0x0038 */ unsigned long AllocationsFailedDeliberately;
  /* 0x003c */ unsigned long Loads;
  /* 0x0040 */ unsigned long Unloads;
  /* 0x0044 */ unsigned long UnTrackedPool;
  /* 0x0048 */ unsigned long CurrentPagedPoolAllocations;
  /* 0x004c */ unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0050 */ unsigned long PeakPagedPoolAllocations;
  /* 0x0054 */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0058 */ unsigned long PagedPoolUsageInBytes;
  /* 0x005c */ unsigned long NonPagedPoolUsageInBytes;
  /* 0x0060 */ unsigned long PeakPagedPoolUsageInBytes;
  /* 0x0064 */ unsigned long PeakNonPagedPoolUsageInBytes;
} SYSTEM_VERIFIER_INFORMATION, *PSYSTEM_VERIFIER_INFORMATION; /* size: 0x0068 */

typedef struct _SYSTEM_VERIFIER_COUNTERS_INFORMATION
{
  /* 0x0000 */ struct _SYSTEM_VERIFIER_INFORMATION Legacy;
  /* 0x0068 */ unsigned long RaiseIrqls;
  /* 0x006c */ unsigned long AcquireSpinLocks;
  /* 0x0070 */ unsigned long SynchronizeExecutions;
  /* 0x0074 */ unsigned long AllocationsWithNoTag;
  /* 0x0078 */ unsigned long AllocationsFailed;
  /* 0x007c */ unsigned long AllocationsFailedDeliberately;
  /* 0x0080 */ unsigned long LockedBytes;
  /* 0x0084 */ unsigned long PeakLockedBytes;
  /* 0x0088 */ unsigned long MappedLockedBytes;
  /* 0x008c */ unsigned long PeakMappedLockedBytes;
  /* 0x0090 */ unsigned long MappedIoSpaceBytes;
  /* 0x0094 */ unsigned long PeakMappedIoSpaceBytes;
  /* 0x0098 */ unsigned long PagesForMdlBytes;
  /* 0x009c */ unsigned long PeakPagesForMdlBytes;
  /* 0x00a0 */ unsigned long ContiguousMemoryBytes;
  /* 0x00a4 */ unsigned long PeakContiguousMemoryBytes;
  /* 0x00a8 */ unsigned long ExecutePoolTypes;
  /* 0x00ac */ unsigned long ExecutePageProtections;
  /* 0x00b0 */ unsigned long ExecutePageMappings;
  /* 0x00b4 */ unsigned long ExecuteWriteSections;
  /* 0x00b8 */ unsigned long SectionAlignmentFailures;
  /* 0x00bc */ unsigned long IATInExecutableSection;
} SYSTEM_VERIFIER_COUNTERS_INFORMATION, *PSYSTEM_VERIFIER_COUNTERS_INFORMATION; /* size: 0x00c0 */

