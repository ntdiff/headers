typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
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
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef struct _NDIS_INTERRUPT_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long DpcCountLock;
  /* 0x0008 */ void* MiniportInterruptContext;
  /* 0x000c */ void* MiniportIsr /* function */;
  /* 0x0010 */ void* MiniportDpc /* function */;
  /* 0x0014 */ struct _KDPC InterruptDpc;
  /* 0x0034 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0038 */ unsigned char DpcCount;
  /* 0x003c */ void* MiniportEnableInterrupt /* function */;
  /* 0x0040 */ void* MiniportDisableInterrupt /* function */;
  /* 0x0044 */ struct _KDPC* Dpc;
  union
  {
    /* 0x0048 */ void* Generic;
    /* 0x0048 */ struct _KINTERRUPT* InterruptObject;
    /* 0x0048 */ struct _IO_INTERRUPT_MESSAGE_INFO* MessageInfoTable;
  }; /* size: 0x0004 */
  /* 0x004c */ struct _KEVENT DpcsCompletedEvent;
  /* 0x005c */ unsigned char SharedInterrupt;
  /* 0x005d */ unsigned char IsrRequested;
  /* 0x0060 */ struct _NDIS_INTERRUPT_BLOCK* NextInterrupt;
  /* 0x0064 */ unsigned int InterruptVector;
  /* 0x0068 */ unsigned int InterruptLevel;
  /* 0x006c */ enum _KINTERRUPT_MODE InterruptMode;
  /* 0x0070 */ void* MiniportMessageIsr /* function */;
  /* 0x0074 */ void* MiniportMessageInterruptDpc /* function */;
  /* 0x0078 */ void* MiniportDisableMessageInterrupt /* function */;
  /* 0x007c */ void* MiniportEnableMessageInterrupt /* function */;
  /* 0x0080 */ unsigned char MsiSupported;
  /* 0x0081 */ unsigned char MessageUsed;
  /* 0x0084 */ unsigned long MessagesSyncLock;
  /* 0x0088 */ struct _IO_INTERRUPT_MESSAGE_INFO* NdisMessageInfoTable;
  /* 0x008c */ struct _NDIS_DPC_WORK_ITEM* DpcWorkItems;
  /* 0x0090 */ struct _KDPC* MsgDpc;
} NDIS_INTERRUPT_BLOCK, *PNDIS_INTERRUPT_BLOCK; /* size: 0x0094 */

