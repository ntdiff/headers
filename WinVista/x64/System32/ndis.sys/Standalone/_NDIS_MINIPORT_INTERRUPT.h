typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _NDIS_MINIPORT_INTERRUPT
{
  /* 0x0000 */ struct _KINTERRUPT* InterruptObject;
  /* 0x0008 */ unsigned __int64 DpcCountLock;
  /* 0x0010 */ void* Reserved;
  /* 0x0018 */ void* MiniportIsr /* function */;
  /* 0x0020 */ void* MiniportDpc /* function */;
  /* 0x0028 */ struct _KDPC InterruptDpc;
  /* 0x0068 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0070 */ unsigned char DpcCount;
  /* 0x0071 */ unsigned char Filler1;
  /* 0x0078 */ struct _KEVENT DpcsCompletedEvent;
  /* 0x0090 */ unsigned char SharedInterrupt;
  /* 0x0091 */ unsigned char IsrRequested;
  /* 0x0092 */ char __PADDING__[6];
} NDIS_MINIPORT_INTERRUPT, *PNDIS_MINIPORT_INTERRUPT; /* size: 0x0098 */

