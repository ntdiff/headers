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

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef union _KEXECUTE_OPTIONS
{
  union
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
    /* 0x0000 */ volatile unsigned char ExecuteOptions;
    /* 0x0000 */ unsigned char ExecuteOptionsNV;
  }; /* size: 0x0001 */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef union _KSTACK_COUNT
{
  union
  {
    /* 0x0000 */ long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long State : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long StackCount : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KSTACK_COUNT, *PKSTACK_COUNT; /* size: 0x0004 */

typedef union _KGDTENTRY64
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short LimitLow;
      /* 0x0002 */ unsigned short BaseLow;
      union
      {
        struct // _TAG_UNNAMED_25
        {
          /* 0x0004 */ unsigned char BaseMiddle;
          /* 0x0005 */ unsigned char Flags1;
          /* 0x0006 */ unsigned char Flags2;
          /* 0x0007 */ unsigned char BaseHigh;
        } /* size: 0x0004 */ Bytes;
        struct
        {
          struct // _TAG_UNNAMED_26
          {
            struct /* bitfield */
            {
              /* 0x0004 */ unsigned long BaseMiddle : 8; /* bit position: 0 */
              /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
              /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
              /* 0x0004 */ unsigned long Present : 1; /* bit position: 15 */
              /* 0x0004 */ unsigned long LimitHigh : 4; /* bit position: 16 */
              /* 0x0004 */ unsigned long System : 1; /* bit position: 20 */
              /* 0x0004 */ unsigned long LongMode : 1; /* bit position: 21 */
              /* 0x0004 */ unsigned long DefaultBig : 1; /* bit position: 22 */
              /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
              /* 0x0004 */ unsigned long BaseHigh : 8; /* bit position: 24 */
            }; /* bitfield */
          } /* size: 0x0004 */ Bits;
          /* 0x0008 */ unsigned long BaseUpper;
          /* 0x000c */ unsigned long MustBeZero;
        }; /* size: 0x000c */
      }; /* size: 0x000c */
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ __int64 DataLow;
      /* 0x0008 */ __int64 DataHigh;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} KGDTENTRY64, *PKGDTENTRY64; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ long Count;
  /* 0x0008 */ void* Owner;
  /* 0x0010 */ unsigned long Contention;
  /* 0x0018 */ struct _KEVENT Event;
  /* 0x0030 */ unsigned long OldIrql;
  /* 0x0034 */ long __PADDING__[1];
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0038 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0028 */ unsigned __int64 DirectoryTableBase;
  /* 0x0030 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0040 */ unsigned long ProcessLock;
  /* 0x0044 */ unsigned long Spare0;
  /* 0x0048 */ unsigned __int64 DeepFreezeStartTime;
  /* 0x0050 */ struct _KAFFINITY_EX Affinity;
  /* 0x00f8 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0108 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0110 */ volatile struct _KAFFINITY_EX ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x01b8 */ long AutoAlignment : 1; /* bit position: 0 */
      /* 0x01b8 */ long DisableBoost : 1; /* bit position: 1 */
      /* 0x01b8 */ long DisableQuantum : 1; /* bit position: 2 */
      /* 0x01b8 */ unsigned long DeepFreeze : 1; /* bit position: 3 */
      /* 0x01b8 */ unsigned long TimerVirtualization : 1; /* bit position: 4 */
      /* 0x01b8 */ unsigned long CheckStackExtents : 1; /* bit position: 5 */
      /* 0x01b8 */ unsigned long SpareFlags0 : 2; /* bit position: 6 */
      /* 0x01b8 */ unsigned long ActiveGroupsMask : 20; /* bit position: 8 */
      /* 0x01b8 */ long ReservedFlags : 4; /* bit position: 28 */
    }; /* bitfield */
    /* 0x01b8 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x01bc */ char BasePriority;
  /* 0x01bd */ char QuantumReset;
  /* 0x01be */ unsigned char Visited;
  /* 0x01bf */ union _KEXECUTE_OPTIONS Flags;
  /* 0x01c0 */ unsigned long ThreadSeed[20];
  /* 0x0210 */ unsigned short IdealNode[20];
  /* 0x0238 */ unsigned short IdealGlobalNode;
  /* 0x023a */ unsigned short Spare1;
  /* 0x023c */ volatile union _KSTACK_COUNT StackCount;
  /* 0x0240 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0250 */ unsigned __int64 CycleTime;
  /* 0x0258 */ unsigned __int64 ContextSwitches;
  /* 0x0260 */ struct _KSCHEDULING_GROUP* SchedulingGroup;
  /* 0x0268 */ unsigned long FreezeCount;
  /* 0x026c */ unsigned long KernelTime;
  /* 0x0270 */ unsigned long UserTime;
  /* 0x0274 */ unsigned short LdtFreeSelectorHint;
  /* 0x0276 */ unsigned short LdtTableLength;
  /* 0x0278 */ union _KGDTENTRY64 LdtSystemDescriptor;
  /* 0x0288 */ void* LdtBaseAddress;
  /* 0x0290 */ struct _FAST_MUTEX LdtProcessLock;
  /* 0x02c8 */ void* InstrumentationCallback;
  /* 0x02d0 */ unsigned __int64 SecurePid;
} KPROCESS, *PKPROCESS; /* size: 0x02d8 */

