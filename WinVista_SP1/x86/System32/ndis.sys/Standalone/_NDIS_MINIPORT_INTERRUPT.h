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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _NDIS_MINIPORT_INTERRUPT
{
  /* 0x0000 */ struct _KINTERRUPT* InterruptObject;
  /* 0x0004 */ unsigned long DpcCountLock;
  /* 0x0008 */ void* Reserved;
  /* 0x000c */ void* MiniportIsr /* function */;
  /* 0x0010 */ void* MiniportDpc /* function */;
  /* 0x0014 */ struct _KDPC InterruptDpc;
  /* 0x0034 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0038 */ unsigned char DpcCount;
  /* 0x0039 */ unsigned char Filler1;
  /* 0x003c */ struct _KEVENT DpcsCompletedEvent;
  /* 0x004c */ unsigned char SharedInterrupt;
  /* 0x004d */ unsigned char IsrRequested;
  /* 0x004e */ char __PADDING__[2];
} NDIS_MINIPORT_INTERRUPT, *PNDIS_MINIPORT_INTERRUPT; /* size: 0x0050 */

