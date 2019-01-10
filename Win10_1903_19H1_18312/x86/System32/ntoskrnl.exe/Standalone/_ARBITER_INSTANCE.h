typedef struct _ARBITER_ORDERING_LIST
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Maximum;
  /* 0x0004 */ struct _ARBITER_ORDERING* Orderings;
} ARBITER_ORDERING_LIST, *PARBITER_ORDERING_LIST; /* size: 0x0008 */

typedef struct _ARBITER_INSTANCE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ struct _KEVENT* MutexEvent;
  /* 0x0008 */ wchar_t* Name;
  /* 0x000c */ wchar_t* OrderingName;
  /* 0x0010 */ int ResourceType;
  /* 0x0014 */ struct _RTL_RANGE_LIST* Allocation;
  /* 0x0018 */ struct _RTL_RANGE_LIST* PossibleAllocation;
  /* 0x001c */ struct _ARBITER_ORDERING_LIST OrderingList;
  /* 0x0024 */ struct _ARBITER_ORDERING_LIST ReservedList;
  /* 0x002c */ long ReferenceCount;
  /* 0x0030 */ struct _ARBITER_INTERFACE* Interface;
  /* 0x0034 */ unsigned long AllocationStackMaxSize;
  /* 0x0038 */ struct _ARBITER_ALLOCATION_STATE* AllocationStack;
  /* 0x003c */ void* UnpackRequirement /* function */;
  /* 0x0040 */ void* PackResource /* function */;
  /* 0x0044 */ void* UnpackResource /* function */;
  /* 0x0048 */ void* ScoreRequirement /* function */;
  /* 0x004c */ void* TestAllocation /* function */;
  /* 0x0050 */ void* RetestAllocation /* function */;
  /* 0x0054 */ void* CommitAllocation /* function */;
  /* 0x0058 */ void* RollbackAllocation /* function */;
  /* 0x005c */ void* BootAllocation /* function */;
  /* 0x0060 */ void* QueryArbitrate /* function */;
  /* 0x0064 */ void* QueryConflict /* function */;
  /* 0x0068 */ void* AddReserved /* function */;
  /* 0x006c */ void* StartArbiter /* function */;
  /* 0x0070 */ void* PreprocessEntry /* function */;
  /* 0x0074 */ void* AllocateEntry /* function */;
  /* 0x0078 */ void* GetNextAllocationRange /* function */;
  /* 0x007c */ void* FindSuitableRange /* function */;
  /* 0x0080 */ void* AddAllocation /* function */;
  /* 0x0084 */ void* BacktrackAllocation /* function */;
  /* 0x0088 */ void* OverrideConflict /* function */;
  /* 0x008c */ void* InitializeRangeList /* function */;
  /* 0x0090 */ void* DeleteOwnerRanges /* function */;
  /* 0x0094 */ unsigned char TransactionInProgress;
  /* 0x0098 */ struct _KEVENT* TransactionEvent;
  /* 0x009c */ void* Extension;
  /* 0x00a0 */ struct _DEVICE_OBJECT* BusDeviceObject;
  /* 0x00a4 */ void* ConflictCallbackContext;
  /* 0x00a8 */ void* ConflictCallback /* function */;
} ARBITER_INSTANCE, *PARBITER_INSTANCE; /* size: 0x00ac */

