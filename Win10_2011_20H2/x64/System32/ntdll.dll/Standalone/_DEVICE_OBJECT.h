typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0010 */ unsigned long SortKey;
  /* 0x0014 */ unsigned char Inserted;
  /* 0x0015 */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0018 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY DmaWaitEntry;
      /* 0x0010 */ unsigned long NumberOfChannels;
      struct /* bitfield */
      {
        /* 0x0014 */ unsigned long SyncCallback : 1; /* bit position: 0 */
        /* 0x0014 */ unsigned long DmaContext : 1; /* bit position: 1 */
        /* 0x0014 */ unsigned long ZeroMapRegisters : 1; /* bit position: 2 */
        /* 0x0014 */ unsigned long Reserved : 9; /* bit position: 3 */
        /* 0x0014 */ unsigned long NumberOfRemapPages : 20; /* bit position: 12 */
      }; /* bitfield */
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ void* DeviceRoutine /* function */;
  /* 0x0020 */ void* DeviceContext;
  /* 0x0028 */ unsigned long NumberOfMapRegisters;
  /* 0x0030 */ void* DeviceObject;
  /* 0x0038 */ void* CurrentIrp;
  /* 0x0040 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0048 */

typedef struct _KDEVICE_QUEUE
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x0018 */ unsigned __int64 Lock;
  union
  {
    /* 0x0020 */ unsigned char Busy;
    struct /* bitfield */
    {
      /* 0x0020 */ __int64 Reserved : 8; /* bit position: 0 */
      /* 0x0020 */ __int64 Hint : 56; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KDEVICE_QUEUE, *PKDEVICE_QUEUE; /* size: 0x0028 */

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

typedef struct _DEVICE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ long ReferenceCount;
  /* 0x0008 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0010 */ struct _DEVICE_OBJECT* NextDevice;
  /* 0x0018 */ struct _DEVICE_OBJECT* AttachedDevice;
  /* 0x0020 */ struct _IRP* CurrentIrp;
  /* 0x0028 */ struct _IO_TIMER* Timer;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ unsigned long Characteristics;
  /* 0x0038 */ struct _VPB* Vpb;
  /* 0x0040 */ void* DeviceExtension;
  /* 0x0048 */ unsigned long DeviceType;
  /* 0x004c */ char StackSize;
  union
  {
    union
    {
      /* 0x0050 */ struct _LIST_ENTRY ListEntry;
      /* 0x0050 */ struct _WAIT_CONTEXT_BLOCK Wcb;
    }; /* size: 0x0048 */
  } /* size: 0x0048 */ Queue;
  /* 0x0098 */ unsigned long AlignmentRequirement;
  /* 0x00a0 */ struct _KDEVICE_QUEUE DeviceQueue;
  /* 0x00c8 */ struct _KDPC Dpc;
  /* 0x0108 */ unsigned long ActiveThreadCount;
  /* 0x0110 */ void* SecurityDescriptor;
  /* 0x0118 */ struct _KEVENT DeviceLock;
  /* 0x0130 */ unsigned short SectorSize;
  /* 0x0132 */ unsigned short Spare1;
  /* 0x0138 */ struct _DEVOBJ_EXTENSION* DeviceObjectExtension;
  /* 0x0140 */ void* Reserved;
  /* 0x0148 */ long __PADDING__[2];
} DEVICE_OBJECT, *PDEVICE_OBJECT; /* size: 0x0150 */

