typedef struct _VF_ADDRESS_RANGE
{
  /* 0x0000 */ unsigned char* Start;
  /* 0x0004 */ unsigned char* End;
} VF_ADDRESS_RANGE, *PVF_ADDRESS_RANGE; /* size: 0x0008 */

typedef enum _KERNEL_STACK_LIMITS
{
  BugcheckStackLimits = 0,
  DPCStackLimits = 1,
  ExpandedStackLimits = 2,
  NormalStackLimits = 3,
  Win32kStackLimits = 4,
  SwapBusyStackLimits = 5,
  IsrStackLimits = 6,
  DebuggerStackLimits = 7,
  NmiStackLimits = 8,
  MachineCheckStackLimits = 9,
  ExceptionStackLimits = 10,
  MaximumStackLimits = 11,
} KERNEL_STACK_LIMITS, *PKERNEL_STACK_LIMITS;

typedef struct _VI_DEADLOCK_GLOBALS
{
  /* 0x0000 */ __int64 TimeAcquire;
  /* 0x0008 */ __int64 TimeRelease;
  /* 0x0010 */ struct _LIST_ENTRY* ResourceDatabase;
  /* 0x0014 */ unsigned long ResourceDatabaseCount;
  /* 0x0018 */ struct _VF_ADDRESS_RANGE ResourceAddressRange[1023];
  /* 0x2010 */ struct _LIST_ENTRY* ThreadDatabase;
  /* 0x2014 */ unsigned long ThreadDatabaseCount;
  /* 0x2018 */ struct _VF_ADDRESS_RANGE ThreadAddressRange[1023];
  /* 0x4010 */ volatile unsigned long AllocationFailures;
  /* 0x4014 */ unsigned long NodesTrimmedBasedOnAge;
  /* 0x4018 */ unsigned long NodesTrimmedBasedOnCount;
  /* 0x401c */ unsigned long NodesSearched;
  /* 0x4020 */ unsigned long MaxNodesSearched;
  /* 0x4024 */ unsigned long SequenceNumber;
  /* 0x4028 */ unsigned long RecursionDepthLimit;
  /* 0x402c */ unsigned long SearchedNodesLimit;
  /* 0x4030 */ unsigned long DepthLimitHits;
  /* 0x4034 */ unsigned long SearchLimitHits;
  /* 0x4038 */ unsigned long StackLimitHits;
  /* 0x403c */ unsigned long ABC_ACB_Skipped;
  /* 0x4040 */ unsigned long OutOfOrderReleases;
  /* 0x4044 */ unsigned long NodesReleasedOutOfOrder;
  /* 0x4048 */ unsigned long TotalReleases;
  /* 0x404c */ unsigned long RootNodesDeleted;
  /* 0x4050 */ unsigned long ForgetHistoryCounter;
  /* 0x4054 */ void* Instigator;
  /* 0x4058 */ unsigned long NumberOfParticipants;
  /* 0x405c */ struct _VI_DEADLOCK_NODE* Participant[32];
  /* 0x40dc */ long ChildrenCountWatermark;
  /* 0x40e0 */ enum _KERNEL_STACK_LIMITS StackType;
  /* 0x40e4 */ unsigned long StackLowLimit;
  /* 0x40e8 */ unsigned long StackHighLimit;
  /* 0x40ec */ long __PADDING__[1];
} VI_DEADLOCK_GLOBALS, *PVI_DEADLOCK_GLOBALS; /* size: 0x40f0 */

