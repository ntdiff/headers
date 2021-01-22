typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _POP_FX_DEVICE_STATUS
{
  union
  {
    /* 0x0000 */ long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SystemTransition : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PepD0Notify : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long IdleTimerOn : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long IgnoreIdleTimeout : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long IrpInUse : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long IrpPending : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long DPNRDeviceNotified : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long DPNRReceivedFromPep : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long IrpFirstPendingIndex : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long IrpLastPendingIndex : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long SIrpBlocked : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long BlockFastResume : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long DirectedPoweredDown : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long DirectedTransitionInProgress : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned long Reserved : 18; /* bit position: 14 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} POP_FX_DEVICE_STATUS, *PPOP_FX_DEVICE_STATUS; /* size: 0x0004 */

typedef struct _POP_FX_DRIVER_CALLBACKS
{
  /* 0x0000 */ void* ComponentActive /* function */;
  /* 0x0008 */ void* ComponentIdle /* function */;
  /* 0x0010 */ void* ComponentIdleState /* function */;
  /* 0x0018 */ void* DevicePowerRequired /* function */;
  /* 0x0020 */ void* DevicePowerNotRequired /* function */;
  /* 0x0028 */ void* PowerControl /* function */;
  /* 0x0030 */ void* ComponentCriticalTransition /* function */;
  /* 0x0038 */ void* DripsWatchdogCallback /* function */;
  /* 0x0040 */ void* DirectedPowerUpCallback /* function */;
  /* 0x0048 */ void* DirectedPowerDownCallback /* function */;
} POP_FX_DRIVER_CALLBACKS, *PPOP_FX_DRIVER_CALLBACKS; /* size: 0x0050 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK
{
  /* 0x0000 */ unsigned char Removed;
  /* 0x0001 */ unsigned char Reserved[3];
  /* 0x0004 */ long IoCount;
  /* 0x0008 */ struct _KEVENT RemoveEvent;
} IO_REMOVE_LOCK_COMMON_BLOCK, *PIO_REMOVE_LOCK_COMMON_BLOCK; /* size: 0x0020 */

typedef struct _IO_REMOVE_LOCK
{
  /* 0x0000 */ struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;
} IO_REMOVE_LOCK, *PIO_REMOVE_LOCK; /* size: 0x0020 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _POP_FX_WORK_ORDER
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ long WorkCount;
  /* 0x0028 */ void* Context;
  /* 0x0030 */ struct _POP_FX_WORK_ORDER_WATCHDOG_INFO* WatchdogTimerInfo;
} POP_FX_WORK_ORDER, *PPOP_FX_WORK_ORDER; /* size: 0x0038 */

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
  /* 0x0038 */ unsigned short Processor;
  /* 0x003a */ unsigned short TimerType;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

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

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef union _POWER_STATE
{
  union
  {
    /* 0x0000 */ enum _SYSTEM_POWER_STATE SystemState;
    /* 0x0000 */ enum _DEVICE_POWER_STATE DeviceState;
  }; /* size: 0x0004 */
} POWER_STATE, *PPOWER_STATE; /* size: 0x0004 */

typedef struct _POP_FX_ACTIVE_TIME_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 Total;
  /* 0x0008 */ unsigned __int64 Unattributed;
  /* 0x0010 */ unsigned __int64 Buckets[5];
  /* 0x0038 */ unsigned __int64 PerBucket[5];
} POP_FX_ACTIVE_TIME_ACCOUNTING, *PPOP_FX_ACTIVE_TIME_ACCOUNTING; /* size: 0x0060 */

typedef struct _POP_FX_ACCOUNTING
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned char Active;
  /* 0x000c */ unsigned long DripsRequiredState;
  /* 0x0010 */ long Level;
  /* 0x0018 */ __int64 ActiveStamp;
  /* 0x0020 */ struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsActiveTimeAccounting;
  /* 0x0080 */ struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsCriticalActiveTimeAccounting;
} POP_FX_ACCOUNTING, *PPOP_FX_ACCOUNTING; /* size: 0x00e0 */

typedef struct _POP_FX_DRIPS_WATCHDOG_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ unsigned long ComponentIndex;
  /* 0x0018 */ struct _DEVICE_NODE** ChildDevices;
  /* 0x0020 */ unsigned long ChildDeviceCount;
  /* 0x0024 */ long __PADDING__[1];
} POP_FX_DRIPS_WATCHDOG_CONTEXT, *PPOP_FX_DRIPS_WATCHDOG_CONTEXT; /* size: 0x0028 */

typedef struct _POP_FX_WORK_ORDER_WATCHDOG_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _KTIMER Timer;
  /* 0x0050 */ struct _KDPC Dpc;
  /* 0x0090 */ struct _POP_FX_WORK_ORDER* WorkOrder;
  /* 0x0098 */ struct _PEP_WORK_INFORMATION* CurrentWorkInfo;
  /* 0x00a0 */ unsigned __int64 WatchdogStart;
  /* 0x00a8 */ struct _KTHREAD* WorkerThread;
} POP_FX_WORK_ORDER_WATCHDOG_INFO, *PPOP_FX_WORK_ORDER_WATCHDOG_INFO; /* size: 0x00b0 */

typedef struct _POP_FX_DEVICE_DIRECTED_TRANSITION_STATE
{
  /* 0x0000 */ void* CompletionContext;
  /* 0x0008 */ long CompletionStatus;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long DIrpPending : 1; /* bit position: 0 */
    /* 0x000c */ unsigned long DIrpCompleted : 1; /* bit position: 1 */
  }; /* bitfield */
} POP_FX_DEVICE_DIRECTED_TRANSITION_STATE, *PPOP_FX_DEVICE_DIRECTED_TRANSITION_STATE; /* size: 0x0010 */

typedef struct _POP_FX_DEVICE
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _IRP* Irp;
  /* 0x0018 */ struct _POP_IRP_DATA* IrpData;
  /* 0x0020 */ volatile union _POP_FX_DEVICE_STATUS Status;
  /* 0x0024 */ volatile long PowerReqCall;
  /* 0x0028 */ volatile long PowerNotReqCall;
  /* 0x0030 */ struct _DEVICE_NODE* DevNode;
  /* 0x0038 */ struct PEPHANDLE__* DpmContext;
  /* 0x0040 */ struct _POP_FX_PLUGIN* Plugin;
  /* 0x0048 */ struct PEPHANDLE__* PluginHandle;
  /* 0x0050 */ struct _POP_FX_PLUGIN* AcpiPlugin;
  /* 0x0058 */ struct PEPHANDLE__* AcpiPluginHandle;
  /* 0x0060 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0068 */ struct _DEVICE_OBJECT* TargetDevice;
  /* 0x0070 */ struct _POP_FX_DRIVER_CALLBACKS Callbacks;
  /* 0x00c0 */ void* DriverContext;
  /* 0x00c8 */ struct _LIST_ENTRY AcpiLink;
  /* 0x00d8 */ struct _UNICODE_STRING DeviceId;
  /* 0x00e8 */ struct _IO_REMOVE_LOCK RemoveLock;
  /* 0x0108 */ struct _IO_REMOVE_LOCK AcpiRemoveLock;
  /* 0x0128 */ struct _POP_FX_WORK_ORDER WorkOrder;
  /* 0x0160 */ unsigned __int64 IdleLock;
  /* 0x0168 */ struct _KTIMER IdleTimer;
  /* 0x01a8 */ struct _KDPC IdleDpc;
  /* 0x01e8 */ unsigned __int64 IdleTimeout;
  /* 0x01f0 */ unsigned __int64 IdleStamp;
  /* 0x01f8 */ struct _DEVICE_OBJECT* NextIrpDeviceObject[2];
  /* 0x0208 */ union _POWER_STATE NextIrpPowerState[2];
  /* 0x0210 */ void* NextIrpCallerCompletion[2] /* function */;
  /* 0x0220 */ void* NextIrpCallerContext[2];
  /* 0x0230 */ struct _KEVENT IrpCompleteEvent;
  /* 0x0248 */ void* PowerOnDumpDeviceCallback /* function */;
  /* 0x0250 */ struct _POP_FX_ACCOUNTING Accounting;
  /* 0x0330 */ volatile unsigned long Flags;
  /* 0x0334 */ unsigned long ComponentCount;
  /* 0x0338 */ struct _POP_FX_COMPONENT** Components;
  /* 0x0340 */ unsigned long LogEntries;
  /* 0x0348 */ struct _POP_FX_LOG_ENTRY* Log;
  /* 0x0350 */ volatile long LogIndex;
  /* 0x0358 */ struct _DRIVER_OBJECT* DripsWatchdogDriverObject;
  /* 0x0360 */ struct _POP_FX_DRIPS_WATCHDOG_CONTEXT DripsWatchdogContext;
  /* 0x0388 */ unsigned long DirectedTimeout;
  /* 0x0390 */ struct _POP_FX_WORK_ORDER DirectedWorkOrder;
  /* 0x03c8 */ struct _POP_FX_WORK_ORDER_WATCHDOG_INFO DirectedWorkWatchdogInfo;
  /* 0x0478 */ unsigned __int64 DirectedLock;
  /* 0x0480 */ volatile long DirectedTransitionCallCount;
  /* 0x0488 */ struct _POP_FX_DEVICE_DIRECTED_TRANSITION_STATE DirectedTransitionState;
  /* 0x0498 */ struct _POP_DEVICE_POWER_PROFILE* PowerProfile;
  /* 0x04a0 */ struct _UNICODE_STRING FriendlyName;
} POP_FX_DEVICE, *PPOP_FX_DEVICE; /* size: 0x04b0 */

