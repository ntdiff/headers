typedef struct _ARBITER_ORDERING_LIST
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Maximum;
  /* 0x0008 */ struct _ARBITER_ORDERING* Orderings;
} ARBITER_ORDERING_LIST, *PARBITER_ORDERING_LIST; /* size: 0x0010 */

typedef struct _ARBITER_INSTANCE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0008 */ struct _KEVENT* MutexEvent;
  /* 0x0010 */ wchar_t* Name;
  /* 0x0018 */ wchar_t* OrderingName;
  /* 0x0020 */ int ResourceType;
  /* 0x0028 */ struct _RTL_RANGE_LIST* Allocation;
  /* 0x0030 */ struct _RTL_RANGE_LIST* PossibleAllocation;
  /* 0x0038 */ struct _ARBITER_ORDERING_LIST OrderingList;
  /* 0x0048 */ struct _ARBITER_ORDERING_LIST ReservedList;
  /* 0x0058 */ long ReferenceCount;
  /* 0x0060 */ struct _ARBITER_INTERFACE* Interface;
  /* 0x0068 */ unsigned long AllocationStackMaxSize;
  /* 0x0070 */ struct _ARBITER_ALLOCATION_STATE* AllocationStack;
  /* 0x0078 */ void* UnpackRequirement /* function */;
  /* 0x0080 */ void* PackResource /* function */;
  /* 0x0088 */ void* UnpackResource /* function */;
  /* 0x0090 */ void* ScoreRequirement /* function */;
  /* 0x0098 */ void* TestAllocation /* function */;
  /* 0x00a0 */ void* RetestAllocation /* function */;
  /* 0x00a8 */ void* CommitAllocation /* function */;
  /* 0x00b0 */ void* RollbackAllocation /* function */;
  /* 0x00b8 */ void* BootAllocation /* function */;
  /* 0x00c0 */ void* QueryArbitrate /* function */;
  /* 0x00c8 */ void* QueryConflict /* function */;
  /* 0x00d0 */ void* AddReserved /* function */;
  /* 0x00d8 */ void* StartArbiter /* function */;
  /* 0x00e0 */ void* PreprocessEntry /* function */;
  /* 0x00e8 */ void* AllocateEntry /* function */;
  /* 0x00f0 */ void* GetNextAllocationRange /* function */;
  /* 0x00f8 */ void* FindSuitableRange /* function */;
  /* 0x0100 */ void* AddAllocation /* function */;
  /* 0x0108 */ void* BacktrackAllocation /* function */;
  /* 0x0110 */ void* OverrideConflict /* function */;
  /* 0x0118 */ void* InitializeRangeList /* function */;
  /* 0x0120 */ void* DeleteOwnerRanges /* function */;
  /* 0x0128 */ unsigned char TransactionInProgress;
  /* 0x0130 */ struct _KEVENT* TransactionEvent;
  /* 0x0138 */ void* Extension;
  /* 0x0140 */ struct _DEVICE_OBJECT* BusDeviceObject;
  /* 0x0148 */ void* ConflictCallbackContext;
  /* 0x0150 */ void* ConflictCallback /* function */;
} ARBITER_INSTANCE, *PARBITER_INSTANCE; /* size: 0x0158 */

