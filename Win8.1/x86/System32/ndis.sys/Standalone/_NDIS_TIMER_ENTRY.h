typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
          /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Signalling;
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
            /* 0x0001 */ unsigned char Reserved1 : 2; /* bit position: 6 */
          }; /* bitfield */
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
              /* 0x0002 */ unsigned char Reserved2 : 4; /* bit position: 4 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            /* 0x0002 */ unsigned char Reserved3;
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
                /* 0x0003 */ unsigned char DpcActive;
                /* 0x0003 */ unsigned char Reserved5;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

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
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _NDIS_TIMER_ENTRY
{
  /* 0x0000 */ struct _NDIS_TIMER_ENTRY* NextTimer;
  /* 0x0004 */ struct _LIST_ENTRY GlobalLink;
  /* 0x000c */ void* Handle;
  /* 0x0010 */ struct _KTIMER Timer;
  /* 0x0038 */ struct _KDPC Dpc;
  /* 0x0058 */ unsigned long AllocationTag;
  /* 0x005c */ void* TimerFunction /* function */;
  /* 0x0060 */ void* DefaultFunctionContext;
  /* 0x0064 */ void* FunctionContext;
  /* 0x0068 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x006c */ unsigned char Periodic;
  /* 0x006d */ char __PADDING__[3];
} NDIS_TIMER_ENTRY, *PNDIS_TIMER_ENTRY; /* size: 0x0070 */

