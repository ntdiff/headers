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
  /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
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

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ unsigned short Number;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
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
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
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

