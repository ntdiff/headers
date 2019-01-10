typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_BAD_MEMORY_EVENT_ENTRY
{
  /* 0x0000 */ unsigned long BugCheckCode;
  /* 0x0004 */ long Active;
  /* 0x0008 */ unsigned long Data;
  /* 0x0010 */ union _LARGE_INTEGER PhysicalAddress;
  /* 0x0018 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_BAD_MEMORY_EVENT_ENTRY, *PMI_BAD_MEMORY_EVENT_ENTRY; /* size: 0x0038 */

typedef struct _MI_PROBE_RAISE_TRACKER
{
  /* 0x0000 */ unsigned long UserRangeInKernel;
  /* 0x0004 */ unsigned long FaultFailed;
  /* 0x0008 */ unsigned long WriteFaultFailed;
  /* 0x000c */ unsigned long LargePageFailed;
  /* 0x0010 */ unsigned long UserAccessToKernelPte;
  /* 0x0014 */ unsigned long BadPageLocation;
  /* 0x0018 */ unsigned long InsufficientCharge;
  /* 0x001c */ unsigned long PageTableCharge;
  /* 0x0020 */ unsigned long NoPhysicalMapping;
  /* 0x0024 */ unsigned long NoIoReference;
  /* 0x0028 */ unsigned long ProbeFailed;
  /* 0x002c */ unsigned long PteIsZero;
  /* 0x0030 */ unsigned long StrongCodeWrite;
  /* 0x0034 */ unsigned long ReducedCloneCommitChargeFailed;
  /* 0x0038 */ unsigned long CopyOnWriteAtDispatchNoPages;
  /* 0x003c */ unsigned long NoPageTablesAllowed;
} MI_PROBE_RAISE_TRACKER, *PMI_PROBE_RAISE_TRACKER; /* size: 0x0040 */

typedef struct _MI_FORCED_COMMITS
{
  /* 0x0000 */ unsigned long Regular;
  /* 0x0004 */ unsigned long Wrap;
} MI_FORCED_COMMITS, *PMI_FORCED_COMMITS; /* size: 0x0008 */

typedef struct _MI_RESAVAIL_FAILURES
{
  /* 0x0000 */ unsigned long Wrap;
  /* 0x0004 */ unsigned long NoCharge;
} MI_RESAVAIL_FAILURES, *PMI_RESAVAIL_FAILURES; /* size: 0x0008 */

typedef struct _MI_ERROR_STATE
{
  /* 0x0000 */ struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;
  /* 0x0038 */ unsigned __int64 PageOfInterest;
  /* 0x0040 */ struct _MI_PROBE_RAISE_TRACKER ProbeRaises;
  /* 0x0080 */ struct _MI_FORCED_COMMITS ForcedCommits;
  /* 0x0088 */ unsigned long WsleFailures[1];
  /* 0x008c */ unsigned long PageHashErrors;
  /* 0x0090 */ unsigned long CheckZeroCount;
  /* 0x0094 */ volatile long ZeroedPageSingleBitErrorsDetected;
  /* 0x0098 */ volatile long BadPagesDetected;
  /* 0x009c */ long ScrubPasses;
  /* 0x00a0 */ long ScrubBadPagesFound;
  /* 0x00a4 */ unsigned long UserViewFailures;
  /* 0x00a8 */ unsigned long UserViewCollisionFailures;
  /* 0x00ac */ unsigned long UserAllocateFailures;
  /* 0x00b0 */ unsigned long UserAllocateCollisionFailures;
  /* 0x00b4 */ struct _MI_RESAVAIL_FAILURES ResavailFailures;
  /* 0x00bc */ unsigned char PendingBadPages;
  /* 0x00bd */ unsigned char InitFailure;
  /* 0x00be */ char __PADDING__[2];
} MI_ERROR_STATE, *PMI_ERROR_STATE; /* size: 0x00c0 */

