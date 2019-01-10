typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Removable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char GroupAssigned : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char GroupCommitted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char GroupAssignmentFixed : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Fill : 4; /* bit position: 4 */
  }; /* bitfield */
} flags, *Pflags; /* size: 0x0001 */

typedef struct _KHETERO_PROCESSOR_SET
{
  /* 0x0000 */ unsigned __int64 PreferredMask;
  /* 0x0008 */ unsigned __int64 AvailableMask;
} KHETERO_PROCESSOR_SET, *PKHETERO_PROCESSOR_SET; /* size: 0x0010 */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned __int64 IdleNonParkedCpuSet;
  /* 0x0008 */ unsigned __int64 IdleSmtSet;
  /* 0x0010 */ unsigned __int64 IdleCpuSet;
  /* 0x0040 */ unsigned __int64 DeepIdleSet;
  /* 0x0048 */ unsigned __int64 IdleConstrainedSet;
  /* 0x0050 */ unsigned __int64 NonParkedSet;
  /* 0x0058 */ long ParkLock;
  /* 0x005c */ unsigned long Seed;
  /* 0x0080 */ unsigned long SiblingMask;
  union
  {
    /* 0x0088 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0088 */ unsigned char AffinityFill[10];
      /* 0x0092 */ unsigned short NodeNumber;
      /* 0x0094 */ unsigned short PrimaryNodeNumber;
      /* 0x0096 */ unsigned char Stride;
      /* 0x0097 */ unsigned char Spare0;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0098 */ unsigned __int64 SharedReadyQueueLeaders;
  /* 0x00a0 */ unsigned long ProximityId;
  /* 0x00a4 */ unsigned long Lowest;
  /* 0x00a8 */ unsigned long Highest;
  /* 0x00ac */ unsigned char MaximumProcessors;
  /* 0x00ad */ struct _flags Flags;
  /* 0x00ae */ unsigned char Spare10;
  /* 0x00b0 */ struct _KHETERO_PROCESSOR_SET HeteroSets[5];
} KNODE, *PKNODE; /* size: 0x0100 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2Reserved1;
          /* 0x0003 */ unsigned char Timer2Reserved2;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KPRIQUEUE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY EntryListHead[32];
  /* 0x0218 */ volatile long CurrentCount[32];
  /* 0x0298 */ unsigned long MaximumCount;
  /* 0x02a0 */ struct _LIST_ENTRY ThreadListHead;
} KPRIQUEUE, *PKPRIQUEUE; /* size: 0x02b0 */

typedef enum _EXQUEUEINDEX
{
  ExPoolUntrusted = 0,
  ExPoolTrusted = 1,
  ExPoolMax = 8,
} EXQUEUEINDEX, *PEXQUEUEINDEX;

typedef struct _EX_WORK_QUEUE
{
  /* 0x0000 */ struct _KPRIQUEUE WorkPriQueue;
  /* 0x02b0 */ struct _ENODE* Node;
  /* 0x02b8 */ volatile unsigned long WorkItemsProcessed;
  /* 0x02bc */ unsigned long WorkItemsProcessedLastPass;
  /* 0x02c0 */ volatile long ThreadCount;
  struct /* bitfield */
  {
    /* 0x02c4 */ long MinThreads : 31; /* bit position: 0 */
    /* 0x02c4 */ volatile unsigned long TryFailed : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x02c8 */ long MaxThreads;
  /* 0x02cc */ enum _EXQUEUEINDEX QueueIndex;
} EX_WORK_QUEUE, *PEX_WORK_QUEUE; /* size: 0x02d0 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ unsigned long Processor;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0010 */ unsigned char WaitType;
  /* 0x0011 */ volatile unsigned char BlockState;
  /* 0x0012 */ unsigned short WaitKey;
  /* 0x0014 */ long SpareLong;
  union
  {
    /* 0x0018 */ struct _KTHREAD* Thread;
    /* 0x0018 */ struct _KQUEUE* NotificationQueue;
  }; /* size: 0x0008 */
  /* 0x0020 */ void* Object;
  /* 0x0028 */ void* SparePtr;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0030 */

typedef struct _ENODE
{
  /* 0x0000 */ struct _KNODE Ncb;
  /* 0x0100 */ struct _EX_WORK_QUEUE* volatile ExWorkQueues[8];
  /* 0x0140 */ struct _EX_WORK_QUEUE ExWorkQueue;
  /* 0x0410 */ struct _KEVENT ExpThreadSetManagerEvent;
  /* 0x0428 */ struct _KTIMER ExpDeadlockTimer;
  /* 0x0468 */ struct _KEVENT ExpThreadReaperEvent;
  /* 0x0480 */ struct _KWAIT_BLOCK WaitBlocks[3];
  /* 0x0510 */ struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;
  /* 0x0518 */ unsigned long ExpWorkerSeed;
  union
  {
    struct /* bitfield */
    {
      /* 0x051c */ volatile unsigned long ExWorkerFullInit : 1; /* bit position: 0 */
      /* 0x051c */ volatile unsigned long ExWorkerStructInit : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x051c */ volatile unsigned long ExWorkerFlags;
  }; /* size: 0x0004 */
  /* 0x0520 */ long __PADDING__[8];
} ENODE, *PENODE; /* size: 0x0540 */

