typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _MM_DRIVER_VERIFIER_DATA
{
  /* 0x0000 */ unsigned long Level;
  /* 0x0004 */ volatile unsigned long RaiseIrqls;
  /* 0x0008 */ volatile unsigned long AcquireSpinLocks;
  /* 0x000c */ volatile unsigned long SynchronizeExecutions;
  /* 0x0010 */ volatile unsigned long AllocationsAttempted;
  /* 0x0014 */ volatile unsigned long AllocationsSucceeded;
  /* 0x0018 */ volatile unsigned long AllocationsSucceededSpecialPool;
  /* 0x001c */ unsigned long AllocationsWithNoTag;
  /* 0x0020 */ unsigned long TrimRequests;
  /* 0x0024 */ unsigned long Trims;
  /* 0x0028 */ unsigned long AllocationsFailed;
  /* 0x002c */ volatile unsigned long AllocationsFailedDeliberately;
  /* 0x0030 */ volatile unsigned long Loads;
  /* 0x0034 */ volatile unsigned long Unloads;
  /* 0x0038 */ unsigned long UnTrackedPool;
  /* 0x003c */ unsigned long UserTrims;
  /* 0x0040 */ volatile unsigned long CurrentPagedPoolAllocations;
  /* 0x0044 */ volatile unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0048 */ unsigned long PeakPagedPoolAllocations;
  /* 0x004c */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0050 */ volatile unsigned long PagedBytes;
  /* 0x0054 */ volatile unsigned long NonPagedBytes;
  /* 0x0058 */ unsigned long PeakPagedBytes;
  /* 0x005c */ unsigned long PeakNonPagedBytes;
  /* 0x0060 */ volatile unsigned long BurstAllocationsFailedDeliberately;
  /* 0x0064 */ unsigned long SessionTrims;
  /* 0x0068 */ volatile unsigned long OptionChanges;
  /* 0x006c */ volatile unsigned long VerifyMode;
  /* 0x0070 */ struct _UNICODE_STRING PreviousBucketName;
  /* 0x0078 */ volatile unsigned long ExecutePoolTypes;
  /* 0x007c */ volatile unsigned long ExecutePageProtections;
  /* 0x0080 */ volatile unsigned long ExecutePageMappings;
  /* 0x0084 */ volatile unsigned long ExecuteWriteSections;
  /* 0x0088 */ volatile unsigned long SectionAlignmentFailures;
  /* 0x008c */ volatile unsigned long IATInExecutableSection;
} MM_DRIVER_VERIFIER_DATA, *PMM_DRIVER_VERIFIER_DATA; /* size: 0x0090 */

