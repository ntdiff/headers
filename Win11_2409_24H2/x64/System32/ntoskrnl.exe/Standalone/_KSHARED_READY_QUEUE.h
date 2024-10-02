typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _KPRIORITY_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Priority : 7; /* bit position: 0 */
      /* 0x0000 */ unsigned char IsolationWidth : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFields;
  }; /* size: 0x0001 */
} KPRIORITY_STATE, *PKPRIORITY_STATE; /* size: 0x0001 */

typedef union _KHETERO_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Qos : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned char WorkloadClass : 3; /* bit position: 3 */
      /* 0x0000 */ unsigned char RunningType : 1; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFields;
  }; /* size: 0x0001 */
} KHETERO_STATE, *PKHETERO_STATE; /* size: 0x0001 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _KSHARED_READY_QUEUE_HETERO_STATISTICS
{
  /* 0x0000 */ unsigned __int64 ExpectedRuntimeByClass[8][2][7];
} KSHARED_READY_QUEUE_HETERO_STATISTICS, *PKSHARED_READY_QUEUE_HETERO_STATISTICS; /* size: 0x0380 */

typedef struct _KSHARED_READY_QUEUE_AFFINITY_STATISTICS
{
  /* 0x0000 */ unsigned __int64 AffinitySummary;
} KSHARED_READY_QUEUE_AFFINITY_STATISTICS, *PKSHARED_READY_QUEUE_AFFINITY_STATISTICS; /* size: 0x0008 */

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned long ReadySummary;
  /* 0x000c */ unsigned long ReadyThreadCount;
  /* 0x0010 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x0018 */ unsigned __int64 Spare1[5];
  /* 0x0040 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0240 */ union _KPRIORITY_STATE RunningSummary[64];
  /* 0x0280 */ union _KHETERO_STATE HeteroRunningSummary[64];
  /* 0x02c0 */ unsigned char Span;
  /* 0x02c1 */ unsigned char LowProcIndex;
  /* 0x02c2 */ unsigned char QueueIndex;
  /* 0x02c3 */ unsigned char NormalPriorityQueueIndex;
  /* 0x02c4 */ unsigned char ProcCount;
  /* 0x02c5 */ unsigned char ScanOwner;
  /* 0x02c6 */ unsigned short Group;
  /* 0x02c8 */ unsigned __int64 Affinity;
  /* 0x02d0 */ struct _KSCHEDULER_SUBNODE* SubNode;
  /* 0x02d8 */ unsigned __int64 Spare2[3];
  /* 0x0300 */ unsigned __int64 SoftParkElectionLock;
  /* 0x0308 */ volatile unsigned __int64 SoftParkElectionGeneration;
  /* 0x0310 */ unsigned long SoftParkElectionThreadCount;
  /* 0x0314 */ unsigned char SoftParkElectionScheduled;
  /* 0x0315 */ unsigned char Spare4[3];
  /* 0x0318 */ unsigned __int64 SoftParkElectionRunTime;
  /* 0x0320 */ struct _KDPC SoftParkElectionDpc;
  /* 0x0360 */ struct _KSHARED_READY_QUEUE_HETERO_STATISTICS SoftParkElectionHeteroStats;
  /* 0x06e0 */ struct _KSHARED_READY_QUEUE_AFFINITY_STATISTICS SoftParkElectionAffinityStats;
  /* 0x06e8 */ volatile unsigned __int64 ForceParkDutyCyclingArmedMask;
  /* 0x06f0 */ long __PADDING__[4];
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0700 */

