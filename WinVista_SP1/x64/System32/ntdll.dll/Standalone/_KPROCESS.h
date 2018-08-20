typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KEXECUTE_OPTIONS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char ExecuteDisable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char ExecuteEnable : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char DisableThunkEmulation : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char Permanent : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char ExecuteDispatchEnable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ImageDispatchEnable : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char DisableExceptionChainValidation : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char Spare : 1; /* bit position: 7 */
  }; /* bitfield */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0028 */ unsigned __int64 DirectoryTableBase;
  /* 0x0030 */ unsigned __int64 Unused0;
  /* 0x0038 */ unsigned short IopmOffset;
  /* 0x0040 */ volatile unsigned __int64 ActiveProcessors;
  /* 0x0048 */ unsigned long KernelTime;
  /* 0x004c */ unsigned long UserTime;
  /* 0x0050 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0060 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0068 */ void* InstrumentationCallback;
  /* 0x0070 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0080 */ unsigned __int64 ProcessLock;
  /* 0x0088 */ unsigned __int64 Affinity;
  union
  {
    struct /* bitfield */
    {
      /* 0x0090 */ volatile long AutoAlignment : 1; /* bit position: 0 */
      /* 0x0090 */ volatile long DisableBoost : 1; /* bit position: 1 */
      /* 0x0090 */ volatile long DisableQuantum : 1; /* bit position: 2 */
      /* 0x0090 */ volatile long ReservedFlags : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0090 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x0094 */ char BasePriority;
  /* 0x0095 */ char QuantumReset;
  /* 0x0096 */ unsigned char State;
  /* 0x0097 */ unsigned char ThreadSeed;
  /* 0x0098 */ unsigned char PowerState;
  /* 0x0099 */ unsigned char IdealNode;
  /* 0x009a */ unsigned char Visited;
  union
  {
    /* 0x009b */ struct _KEXECUTE_OPTIONS Flags;
    /* 0x009b */ unsigned char ExecuteOptions;
  }; /* size: 0x0001 */
  /* 0x00a0 */ unsigned __int64 StackCount;
  /* 0x00a8 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x00b8 */ volatile unsigned __int64 CycleTime;
} KPROCESS, *PKPROCESS; /* size: 0x00c0 */

