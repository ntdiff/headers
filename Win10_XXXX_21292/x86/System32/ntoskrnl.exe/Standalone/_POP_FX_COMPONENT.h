typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _POP_FX_WORK_ORDER
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0010 */ long WorkCount;
  /* 0x0014 */ void* Context;
  /* 0x0018 */ struct _POP_FX_WORK_ORDER_WATCHDOG_INFO* WatchdogTimerInfo;
} POP_FX_WORK_ORDER, *PPOP_FX_WORK_ORDER; /* size: 0x001c */

typedef union _POP_FX_COMPONENT_FLAGS
{
  union
  {
    struct
    {
      /* 0x0000 */ long Value;
      /* 0x0004 */ long Value2;
    }; /* size: 0x0008 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long RefCount : 30; /* bit position: 0 */
        /* 0x0000 */ unsigned long Idling : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long Active : 1; /* bit position: 31 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long CriticalIdleOverride : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long ResidentOverride : 1; /* bit position: 1 */
        /* 0x0004 */ unsigned long Reserved : 30; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} POP_FX_COMPONENT_FLAGS, *PPOP_FX_COMPONENT_FLAGS; /* size: 0x0008 */

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
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
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
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
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
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
          }; /* bitfield */
          /* 0x0003 */ unsigned char DebugActive;
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _POP_FX_ACTIVE_TIME_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 Total;
  /* 0x0008 */ unsigned __int64 Unattributed;
  /* 0x0010 */ unsigned __int64 Buckets[5];
  /* 0x0038 */ unsigned __int64 PerBucket[5];
} POP_FX_ACTIVE_TIME_ACCOUNTING, *PPOP_FX_ACTIVE_TIME_ACCOUNTING; /* size: 0x0060 */

typedef struct _POP_FX_ACCOUNTING
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ unsigned char Active;
  /* 0x0008 */ unsigned long DripsRequiredState;
  /* 0x000c */ long Level;
  /* 0x0010 */ __int64 ActiveStamp;
  /* 0x0018 */ struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsActiveTimeAccounting;
  /* 0x0078 */ struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsCriticalActiveTimeAccounting;
} POP_FX_ACCOUNTING, *PPOP_FX_ACCOUNTING; /* size: 0x00d8 */

typedef struct _POP_FX_COMPONENT
{
  /* 0x0000 */ struct _GUID Id;
  /* 0x0010 */ unsigned long Index;
  /* 0x0014 */ struct _POP_FX_WORK_ORDER WorkOrder;
  /* 0x0030 */ struct _POP_FX_DEVICE* Device;
  /* 0x0034 */ volatile union _POP_FX_COMPONENT_FLAGS Flags;
  /* 0x003c */ volatile long Resident;
  /* 0x0040 */ struct _KEVENT ActiveEvent;
  /* 0x0050 */ unsigned long IdleLock;
  /* 0x0054 */ volatile long IdleConditionComplete;
  /* 0x0058 */ volatile long IdleStateComplete;
  /* 0x0060 */ unsigned __int64 IdleStamp;
  /* 0x0068 */ volatile unsigned long CurrentIdleState;
  /* 0x006c */ unsigned long IdleStateCount;
  /* 0x0070 */ struct _POP_FX_IDLE_STATE* IdleStates;
  /* 0x0074 */ unsigned long DeepestWakeableIdleState;
  /* 0x0078 */ unsigned long ProviderCount;
  /* 0x007c */ struct _POP_FX_PROVIDER* Providers;
  /* 0x0080 */ unsigned long IdleProviderCount;
  /* 0x0084 */ unsigned long DependentCount;
  /* 0x0088 */ struct _POP_FX_DEPENDENT* Dependents;
  /* 0x0090 */ struct _POP_FX_ACCOUNTING Accounting;
  /* 0x0168 */ struct _POP_FX_PERF_INFO* Performance;
  /* 0x016c */ struct _POP_COMPONENT_POWER_PROFILE* PowerProfile;
  /* 0x0170 */ struct _LIST_ENTRY ExternalDependents;
  /* 0x0178 */ struct _LIST_ENTRY ExternalDependencies;
} POP_FX_COMPONENT, *PPOP_FX_COMPONENT; /* size: 0x0180 */

