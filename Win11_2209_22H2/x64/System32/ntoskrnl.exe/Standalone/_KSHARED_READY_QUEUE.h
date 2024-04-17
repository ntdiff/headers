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

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned long ReadySummary;
  /* 0x0010 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0210 */ union _KPRIORITY_STATE RunningSummary[64];
  /* 0x0250 */ union _KHETERO_STATE HeteroRunningSummary[64];
  /* 0x0290 */ unsigned char Span;
  /* 0x0291 */ unsigned char LowProcIndex;
  /* 0x0292 */ unsigned char QueueIndex;
  /* 0x0293 */ unsigned char NormalPriorityQueueIndex;
  /* 0x0294 */ unsigned char ProcCount;
  /* 0x0295 */ unsigned char ScanOwner;
  /* 0x0296 */ unsigned char Spare1[2];
  /* 0x0298 */ unsigned __int64 Affinity;
  /* 0x02a0 */ unsigned long ReadyThreadCount;
  /* 0x02a4 */ unsigned char SoftParkElectionScheduled;
  /* 0x02a5 */ unsigned char Spare2[3];
  /* 0x02a8 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x02b0 */ unsigned __int64 SoftParkElectionGeneration;
  /* 0x02b8 */ unsigned __int64 SoftParkElectionRunTime;
  /* 0x02c0 */ struct _KDPC SoftParkElectionDpc;
  /* 0x0300 */ struct _KSHARED_READY_QUEUE_HETERO_STATISTICS SoftParkElectionHeteroStats;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0680 */

