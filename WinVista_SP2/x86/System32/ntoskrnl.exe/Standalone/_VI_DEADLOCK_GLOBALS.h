typedef struct _VI_DEADLOCK_ADDRESS_RANGE
{
  /* 0x0000 */ unsigned char* Start;
  /* 0x0004 */ unsigned char* End;
} VI_DEADLOCK_ADDRESS_RANGE, *PVI_DEADLOCK_ADDRESS_RANGE; /* size: 0x0008 */

typedef struct _VI_DEADLOCK_GLOBALS
{
  /* 0x0000 */ __int64 TimeAcquire;
  /* 0x0008 */ __int64 TimeRelease;
  /* 0x0010 */ struct _LIST_ENTRY* ResourceDatabase;
  /* 0x0014 */ unsigned long ResourceDatabaseCount;
  /* 0x0018 */ struct _VI_DEADLOCK_ADDRESS_RANGE ResourceAddressRange[1023];
  /* 0x2010 */ struct _LIST_ENTRY* ThreadDatabase;
  /* 0x2014 */ unsigned long ThreadDatabaseCount;
  /* 0x2018 */ struct _VI_DEADLOCK_ADDRESS_RANGE ThreadAddressRange[1023];
  /* 0x4010 */ unsigned long AllocationFailures;
  /* 0x4014 */ unsigned long NodesTrimmedBasedOnAge;
  /* 0x4018 */ unsigned long NodesTrimmedBasedOnCount;
  /* 0x401c */ unsigned long NodesSearched;
  /* 0x4020 */ unsigned long MaxNodesSearched;
  /* 0x4024 */ unsigned long SequenceNumber;
  /* 0x4028 */ unsigned long RecursionDepthLimit;
  /* 0x402c */ unsigned long SearchedNodesLimit;
  /* 0x4030 */ unsigned long DepthLimitHits;
  /* 0x4034 */ unsigned long SearchLimitHits;
  /* 0x4038 */ unsigned long ABC_ACB_Skipped;
  /* 0x403c */ unsigned long OutOfOrderReleases;
  /* 0x4040 */ unsigned long NodesReleasedOutOfOrder;
  /* 0x4044 */ unsigned long TotalReleases;
  /* 0x4048 */ unsigned long RootNodesDeleted;
  /* 0x404c */ unsigned long ForgetHistoryCounter;
  /* 0x4050 */ void* Instigator;
  /* 0x4054 */ unsigned long NumberOfParticipants;
  /* 0x4058 */ struct _VI_DEADLOCK_NODE* Participant[32];
  /* 0x40d8 */ long ChildrenCountWatermark;
  /* 0x40dc */ long __PADDING__[1];
} VI_DEADLOCK_GLOBALS, *PVI_DEADLOCK_GLOBALS; /* size: 0x40e0 */

