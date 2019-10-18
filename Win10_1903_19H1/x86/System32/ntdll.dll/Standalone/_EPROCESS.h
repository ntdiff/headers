typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _KGDTENTRY
{
  /* 0x0000 */ unsigned short LimitLow;
  /* 0x0002 */ unsigned short BaseLow;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned char BaseMid;
        /* 0x0005 */ unsigned char Flags1;
        /* 0x0006 */ unsigned char Flags2;
        /* 0x0007 */ unsigned char BaseHi;
      } /* size: 0x0004 */ Bytes;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long BaseMid : 8; /* bit position: 0 */
          /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
          /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
          /* 0x0004 */ unsigned long Pres : 1; /* bit position: 15 */
          /* 0x0004 */ unsigned long LimitHi : 4; /* bit position: 16 */
          /* 0x0004 */ unsigned long Sys : 1; /* bit position: 20 */
          /* 0x0004 */ unsigned long Reserved_0 : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Default_Big : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
          /* 0x0004 */ unsigned long BaseHi : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighWord;
} KGDTENTRY, *PKGDTENTRY; /* size: 0x0008 */

typedef struct _KIDTENTRY
{
  /* 0x0000 */ unsigned short Offset;
  /* 0x0002 */ unsigned short Selector;
  /* 0x0004 */ unsigned short Access;
  /* 0x0006 */ unsigned short ExtendedOffset;
} KIDTENTRY, *PKIDTENTRY; /* size: 0x0008 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0018 */ unsigned long DirectoryTableBase;
  /* 0x001c */ struct _KGDTENTRY LdtDescriptor;
  /* 0x0024 */ struct _KIDTENTRY Int21Descriptor;
  /* 0x002c */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0034 */ unsigned long ProcessLock;
  /* 0x0038 */ unsigned __int64 DeepFreezeStartTime;
  /* 0x0040 */ struct _KAFFINITY_EX Affinity;
  /* 0x004c */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0054 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0058 */ volatile struct _KAFFINITY_EX ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x0064 */ unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x0064 */ unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x0064 */ unsigned long DisableQuantum : 1; /* bit position: 2 */
      /* 0x0064 */ unsigned long DeepFreeze : 1; /* bit position: 3 */
      /* 0x0064 */ unsigned long TimerVirtualization : 1; /* bit position: 4 */
      /* 0x0064 */ unsigned long CheckStackExtents : 1; /* bit position: 5 */
      /* 0x0064 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 6 */
      /* 0x0064 */ unsigned long PpmPolicy : 3; /* bit position: 7 */
      /* 0x0064 */ unsigned long VaSpaceDeleted : 1; /* bit position: 10 */
      /* 0x0064 */ unsigned long ReservedFlags : 21; /* bit position: 11 */
    }; /* bitfield */
    /* 0x0064 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x0068 */ char BasePriority;
  /* 0x0069 */ char QuantumReset;
  /* 0x006a */ char Visited;
  /* 0x006b */ union _KEXECUTE_OPTIONS Flags;
  /* 0x006c */ unsigned short ThreadSeed[1];
  /* 0x006e */ unsigned short IdealProcessor[1];
  /* 0x0070 */ unsigned short IdealNode[1];
  /* 0x0072 */ unsigned short IdealGlobalNode;
  /* 0x0074 */ unsigned short Spare1;
  /* 0x0076 */ unsigned short IopmOffset;
  /* 0x0078 */ struct _KSCHEDULING_GROUP* SchedulingGroup;
  /* 0x007c */ volatile union _KSTACK_COUNT StackCount;
  /* 0x0080 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0088 */ unsigned __int64 CycleTime;
  /* 0x0090 */ unsigned __int64 ContextSwitches;
  /* 0x0098 */ unsigned long FreezeCount;
  /* 0x009c */ unsigned long KernelTime;
  /* 0x00a0 */ unsigned long UserTime;
  /* 0x00a4 */ unsigned long ReadyTime;
  /* 0x00a8 */ void* VdmTrapcHandler;
  /* 0x00ac */ unsigned long ProcessTimerDelay;
} KPROCESS, *PKPROCESS; /* size: 0x00b0 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long RefCnt : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0004 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _SE_AUDIT_PROCESS_CREATION_INFO
{
  /* 0x0000 */ struct _OBJECT_NAME_INFORMATION* ImageFileName;
} SE_AUDIT_PROCESS_CREATION_INFO, *PSE_AUDIT_PROCESS_CREATION_INFO; /* size: 0x0004 */

typedef struct _MMSUPPORT_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned char Reserved0 : 3; /* bit position: 3 */
        /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
        /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
        /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
        /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short u1;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned char MemoryPriority;
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
      /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
      /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
      /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 4 */
      /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0003 */ unsigned char u2;
  }; /* size: 0x0001 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned long TrimmedPageCount;
  /* 0x000c */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0010 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0018 */ unsigned long AgeDistribution[8];
  /* 0x0038 */ struct _KGATE* ExitOutswapGate;
  /* 0x003c */ unsigned long MinimumWorkingSetSize;
  /* 0x0040 */ unsigned long WorkingSetLeafSize;
  /* 0x0044 */ unsigned long WorkingSetLeafPrivateSize;
  /* 0x0048 */ unsigned long WorkingSetSize;
  /* 0x004c */ unsigned long WorkingSetPrivateSize;
  /* 0x0050 */ unsigned long MaximumWorkingSetSize;
  /* 0x0054 */ unsigned long PeakWorkingSetSize;
  /* 0x0058 */ unsigned long HardFaultCount;
  /* 0x005c */ unsigned short LastTrimStamp;
  /* 0x005e */ unsigned short Unused0;
  /* 0x0060 */ struct _MMSUPPORT_FLAGS Flags;
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x0064 */

typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ long GoodCitizenWaiting;
  /* 0x0008 */ unsigned long ReleasedCommitDebt;
  /* 0x000c */ unsigned long ResetPagesRepurposedCount;
  /* 0x0010 */ void* WsSwapSupport;
  /* 0x0014 */ void* CommitReleaseContext;
  /* 0x0018 */ void* AccessLog;
  /* 0x001c */ volatile unsigned long ChargedWslePages;
  /* 0x0020 */ unsigned long ActualWslePages;
  /* 0x0040 */ unsigned long WorkingSetCoreLock;
  /* 0x0044 */ void* ShadowMapping;
  /* 0x0048 */ long __PADDING__[14];
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0080 */

typedef struct _MMSUPPORT_FULL
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE Instance;
  /* 0x0080 */ struct _MMSUPPORT_SHARED Shared;
} MMSUPPORT_FULL, *PMMSUPPORT_FULL; /* size: 0x0100 */

typedef struct _ALPC_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _LIST_ENTRY ViewListHead;
  /* 0x000c */ volatile unsigned long PagedPoolQuotaCache;
} ALPC_PROCESS_CONTEXT, *PALPC_PROCESS_CONTEXT; /* size: 0x0010 */

typedef struct _PS_PROTECTION
{
  union
  {
    /* 0x0000 */ unsigned char Level;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Type : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned char Audit : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char Signer : 4; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} PS_PROTECTION, *PPS_PROTECTION; /* size: 0x0001 */

typedef union _PS_INTERLOCKED_TIMER_DELAY_VALUES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 DelayMs : 30; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 CoalescingWindowMs : 30; /* bit position: 30 */
      /* 0x0000 */ unsigned __int64 Reserved : 1; /* bit position: 60 */
      /* 0x0000 */ unsigned __int64 NewTimerWheel : 1; /* bit position: 61 */
      /* 0x0000 */ unsigned __int64 Retry : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 All;
  }; /* size: 0x0008 */
} PS_INTERLOCKED_TIMER_DELAY_VALUES, *PPS_INTERLOCKED_TIMER_DELAY_VALUES; /* size: 0x0008 */

typedef struct _WNF_STATE_NAME
{
  /* 0x0000 */ unsigned long Data[2];
} WNF_STATE_NAME, *PWNF_STATE_NAME; /* size: 0x0008 */

typedef struct _JOBOBJECT_WAKE_FILTER
{
  /* 0x0000 */ unsigned long HighEdgeFilter;
  /* 0x0004 */ unsigned long LowEdgeFilter;
} JOBOBJECT_WAKE_FILTER, *PJOBOBJECT_WAKE_FILTER; /* size: 0x0008 */

typedef struct _PS_PROCESS_WAKE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NotificationChannel;
  /* 0x0008 */ unsigned long WakeCounters[7];
  /* 0x0024 */ struct _JOBOBJECT_WAKE_FILTER WakeFilter;
  /* 0x002c */ unsigned long NoWakeCounter;
} PS_PROCESS_WAKE_INFORMATION, *PPS_PROCESS_WAKE_INFORMATION; /* size: 0x0030 */

typedef struct _EPROCESS
{
  /* 0x0000 */ struct _KPROCESS Pcb;
  /* 0x00b0 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x00b4 */ void* UniqueProcessId;
  /* 0x00b8 */ struct _LIST_ENTRY ActiveProcessLinks;
  /* 0x00c0 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x00c4 */ void* VdmObjects;
  union
  {
    /* 0x00c8 */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x00c8 */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x00c8 */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x00c8 */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x00c8 */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x00c8 */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x00c8 */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x00c8 */ unsigned long ForceWakeCharge : 1; /* bit position: 6 */
      /* 0x00c8 */ unsigned long CrossSessionCreate : 1; /* bit position: 7 */
      /* 0x00c8 */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x00c8 */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x00c8 */ unsigned long PicoCreated : 1; /* bit position: 10 */
      /* 0x00c8 */ unsigned long EmptyJobEvaluated : 1; /* bit position: 11 */
      /* 0x00c8 */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x00c8 */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x00c8 */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x00c8 */ unsigned long RestrictSetThreadContext : 1; /* bit position: 17 */
      /* 0x00c8 */ unsigned long AffinityPermanent : 1; /* bit position: 18 */
      /* 0x00c8 */ unsigned long AffinityUpdateEnable : 1; /* bit position: 19 */
      /* 0x00c8 */ unsigned long PropagateNode : 1; /* bit position: 20 */
      /* 0x00c8 */ unsigned long ExplicitAffinity : 1; /* bit position: 21 */
      /* 0x00c8 */ unsigned long ProcessExecutionState : 2; /* bit position: 22 */
      /* 0x00c8 */ unsigned long EnableReadVmLogging : 1; /* bit position: 24 */
      /* 0x00c8 */ unsigned long EnableWriteVmLogging : 1; /* bit position: 25 */
      /* 0x00c8 */ unsigned long FatalAccessTerminationRequested : 1; /* bit position: 26 */
      /* 0x00c8 */ unsigned long DisableSystemAllowedCpuSet : 1; /* bit position: 27 */
      /* 0x00c8 */ unsigned long ProcessStateChangeRequest : 2; /* bit position: 28 */
      /* 0x00c8 */ unsigned long ProcessStateChangeInProgress : 1; /* bit position: 30 */
      /* 0x00c8 */ unsigned long InPrivate : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x00cc */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x00cc */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x00cc */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x00cc */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x00cc */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x00cc */ unsigned long ManageExecutableMemoryWrites : 1; /* bit position: 4 */
      /* 0x00cc */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x00cc */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x00cc */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x00cc */ unsigned long FailFastOnCommitFail : 1; /* bit position: 8 */
      /* 0x00cc */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x00cc */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x00cc */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x00cc */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x00cc */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x00cc */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x00cc */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x00cc */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x00cc */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x00cc */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x00cc */ unsigned long Background : 1; /* bit position: 20 */
      /* 0x00cc */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x00cc */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x00cc */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x00cc */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x00cc */ unsigned long ProcessRundown : 1; /* bit position: 25 */
      /* 0x00cc */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x00cc */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x00cc */ unsigned long ProcessSelfDelete : 1; /* bit position: 30 */
      /* 0x00cc */ unsigned long SetTimerResolutionLink : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x00d0 */ union _LARGE_INTEGER CreateTime;
  /* 0x00d8 */ unsigned long ProcessQuotaUsage[2];
  /* 0x00e0 */ unsigned long ProcessQuotaPeak[2];
  /* 0x00e8 */ unsigned long PeakVirtualSize;
  /* 0x00ec */ unsigned long VirtualSize;
  /* 0x00f0 */ struct _LIST_ENTRY SessionProcessLinks;
  union
  {
    /* 0x00f8 */ void* ExceptionPortData;
    /* 0x00f8 */ unsigned long ExceptionPortValue;
    /* 0x00f8 */ unsigned long ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x00fc */ struct _EX_FAST_REF Token;
  /* 0x0100 */ unsigned long MmReserved;
  /* 0x0104 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x0108 */ struct _EX_PUSH_LOCK PageTableCommitmentLock;
  /* 0x010c */ struct _ETHREAD* RotateInProgress;
  /* 0x0110 */ struct _ETHREAD* ForkInProgress;
  /* 0x0114 */ struct _EJOB* volatile CommitChargeJob;
  /* 0x0118 */ struct _RTL_AVL_TREE CloneRoot;
  /* 0x011c */ volatile unsigned long NumberOfPrivatePages;
  /* 0x0120 */ volatile unsigned long NumberOfLockedPages;
  /* 0x0124 */ void* Win32Process;
  /* 0x0128 */ struct _EJOB* volatile Job;
  /* 0x012c */ void* SectionObject;
  /* 0x0130 */ void* SectionBaseAddress;
  /* 0x0134 */ unsigned long Cookie;
  /* 0x0138 */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x013c */ void* Win32WindowStation;
  /* 0x0140 */ void* InheritedFromUniqueProcessId;
  /* 0x0144 */ void* LdtInformation;
  /* 0x0148 */ volatile unsigned long OwnerProcessId;
  /* 0x014c */ struct _PEB* Peb;
  /* 0x0150 */ struct _MM_SESSION_SPACE* Session;
  /* 0x0154 */ void* Spare1;
  /* 0x0158 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x015c */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x0160 */ void* DebugPort;
  /* 0x0164 */ void* PaeTop;
  /* 0x0168 */ void* DeviceMap;
  /* 0x016c */ void* EtwDataSource;
  /* 0x0170 */ unsigned __int64 PageDirectoryPte;
  /* 0x0178 */ struct _FILE_OBJECT* ImageFilePointer;
  /* 0x017c */ unsigned char ImageFileName[15];
  /* 0x018b */ unsigned char PriorityClass;
  /* 0x018c */ void* SecurityPort;
  /* 0x0190 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x0194 */ struct _LIST_ENTRY JobLinks;
  /* 0x019c */ void* HighestUserAddress;
  /* 0x01a0 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x01a8 */ volatile unsigned long ActiveThreads;
  /* 0x01ac */ unsigned long ImagePathHash;
  /* 0x01b0 */ unsigned long DefaultHardErrorProcessing;
  /* 0x01b4 */ long LastThreadExitStatus;
  /* 0x01b8 */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x01bc */ void* LockedPagesList;
  /* 0x01c0 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x01c8 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x01d0 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x01d8 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x01e0 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x01e8 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x01f0 */ unsigned long CommitChargeLimit;
  /* 0x01f4 */ volatile unsigned long CommitCharge;
  /* 0x01f8 */ volatile unsigned long CommitChargePeak;
  /* 0x0200 */ struct _MMSUPPORT_FULL Vm;
  /* 0x0300 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x0308 */ unsigned long ModifiedPageCount;
  /* 0x030c */ long ExitStatus;
  /* 0x0310 */ struct _RTL_AVL_TREE VadRoot;
  /* 0x0314 */ void* VadHint;
  /* 0x0318 */ unsigned long VadCount;
  /* 0x031c */ volatile unsigned long VadPhysicalPages;
  /* 0x0320 */ unsigned long VadPhysicalPagesLimit;
  /* 0x0324 */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
  /* 0x0334 */ struct _LIST_ENTRY TimerResolutionLink;
  /* 0x033c */ struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
  /* 0x0340 */ unsigned long RequestedTimerResolution;
  /* 0x0344 */ unsigned long SmallestTimerResolution;
  /* 0x0348 */ union _LARGE_INTEGER ExitTime;
  /* 0x0350 */ unsigned long ActiveThreadsHighWatermark;
  /* 0x0354 */ unsigned long LargePrivateVadCount;
  /* 0x0358 */ struct _EX_PUSH_LOCK ThreadListLock;
  /* 0x035c */ void* WnfContext;
  /* 0x0360 */ struct _EJOB* ServerSilo;
  /* 0x0364 */ unsigned char SignatureLevel;
  /* 0x0365 */ unsigned char SectionSignatureLevel;
  /* 0x0366 */ struct _PS_PROTECTION Protection;
  struct /* bitfield */
  {
    /* 0x0367 */ unsigned char HangCount : 3; /* bit position: 0 */
    /* 0x0367 */ unsigned char GhostCount : 3; /* bit position: 3 */
    /* 0x0367 */ unsigned char PrefilterException : 1; /* bit position: 6 */
  }; /* bitfield */
  union
  {
    /* 0x0368 */ unsigned long Flags3;
    struct /* bitfield */
    {
      /* 0x0368 */ unsigned long Minimal : 1; /* bit position: 0 */
      /* 0x0368 */ unsigned long ReplacingPageRoot : 1; /* bit position: 1 */
      /* 0x0368 */ unsigned long Crashed : 1; /* bit position: 2 */
      /* 0x0368 */ unsigned long JobVadsAreTracked : 1; /* bit position: 3 */
      /* 0x0368 */ unsigned long VadTrackingDisabled : 1; /* bit position: 4 */
      /* 0x0368 */ unsigned long AuxiliaryProcess : 1; /* bit position: 5 */
      /* 0x0368 */ unsigned long SubsystemProcess : 1; /* bit position: 6 */
      /* 0x0368 */ unsigned long IndirectCpuSets : 1; /* bit position: 7 */
      /* 0x0368 */ unsigned long RelinquishedCommit : 1; /* bit position: 8 */
      /* 0x0368 */ unsigned long HighGraphicsPriority : 1; /* bit position: 9 */
      /* 0x0368 */ unsigned long CommitFailLogged : 1; /* bit position: 10 */
      /* 0x0368 */ unsigned long ReserveFailLogged : 1; /* bit position: 11 */
      /* 0x0368 */ unsigned long SystemProcess : 1; /* bit position: 12 */
      /* 0x0368 */ unsigned long HideImageBaseAddresses : 1; /* bit position: 13 */
      /* 0x0368 */ unsigned long AddressPolicyFrozen : 1; /* bit position: 14 */
      /* 0x0368 */ unsigned long ProcessFirstResume : 1; /* bit position: 15 */
      /* 0x0368 */ unsigned long ForegroundExternal : 1; /* bit position: 16 */
      /* 0x0368 */ unsigned long ForegroundSystem : 1; /* bit position: 17 */
      /* 0x0368 */ unsigned long HighMemoryPriority : 1; /* bit position: 18 */
      /* 0x0368 */ unsigned long EnableProcessSuspendResumeLogging : 1; /* bit position: 19 */
      /* 0x0368 */ unsigned long EnableThreadSuspendResumeLogging : 1; /* bit position: 20 */
      /* 0x0368 */ unsigned long SecurityDomainChanged : 1; /* bit position: 21 */
      /* 0x0368 */ unsigned long SecurityFreezeComplete : 1; /* bit position: 22 */
      /* 0x0368 */ unsigned long VmProcessorHost : 1; /* bit position: 23 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x036c */ long DeviceAsid;
  /* 0x0370 */ void* SvmData;
  /* 0x0374 */ struct _EX_PUSH_LOCK SvmProcessLock;
  /* 0x0378 */ unsigned long SvmLock;
  /* 0x037c */ struct _LIST_ENTRY SvmProcessDeviceListHead;
  /* 0x0388 */ unsigned __int64 LastFreezeInterruptTime;
  /* 0x0390 */ struct _PROCESS_DISK_COUNTERS* DiskCounters;
  /* 0x0394 */ void* PicoContext;
  /* 0x0398 */ unsigned long HighPriorityFaultsAllowed;
  /* 0x039c */ void* InstrumentationCallback;
  /* 0x03a0 */ struct _PO_PROCESS_ENERGY_CONTEXT* EnergyContext;
  /* 0x03a4 */ void* VmContext;
  /* 0x03a8 */ unsigned __int64 SequenceNumber;
  /* 0x03b0 */ unsigned __int64 CreateInterruptTime;
  /* 0x03b8 */ unsigned __int64 CreateUnbiasedInterruptTime;
  /* 0x03c0 */ unsigned __int64 TotalUnbiasedFrozenTime;
  /* 0x03c8 */ unsigned __int64 LastAppStateUpdateTime;
  struct /* bitfield */
  {
    /* 0x03d0 */ unsigned __int64 LastAppStateUptime : 61; /* bit position: 0 */
    /* 0x03d0 */ unsigned __int64 LastAppState : 3; /* bit position: 61 */
  }; /* bitfield */
  /* 0x03d8 */ volatile unsigned long SharedCommitCharge;
  /* 0x03dc */ struct _EX_PUSH_LOCK SharedCommitLock;
  /* 0x03e0 */ struct _LIST_ENTRY SharedCommitLinks;
  union
  {
    struct
    {
      /* 0x03e8 */ unsigned long AllowedCpuSets;
      /* 0x03ec */ unsigned long DefaultCpuSets;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x03e8 */ unsigned long* AllowedCpuSetsIndirect;
      /* 0x03ec */ unsigned long* DefaultCpuSetsIndirect;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x03f0 */ void* DiskIoAttribution;
  /* 0x03f4 */ void* DxgProcess;
  /* 0x03f8 */ unsigned long Win32KFilterSet;
  /* 0x0400 */ volatile union _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;
  /* 0x0408 */ volatile unsigned long KTimerSets;
  /* 0x040c */ volatile unsigned long KTimer2Sets;
  /* 0x0410 */ volatile unsigned long ThreadTimerSets;
  /* 0x0414 */ unsigned long VirtualTimerListLock;
  /* 0x0418 */ struct _LIST_ENTRY VirtualTimerListHead;
  union
  {
    /* 0x0420 */ struct _WNF_STATE_NAME WakeChannel;
    /* 0x0420 */ struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;
  }; /* size: 0x0030 */
  union
  {
    /* 0x0450 */ unsigned long MitigationFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0450 */ unsigned long ControlFlowGuardEnabled : 1; /* bit position: 0 */
        /* 0x0450 */ unsigned long ControlFlowGuardExportSuppressionEnabled : 1; /* bit position: 1 */
        /* 0x0450 */ unsigned long ControlFlowGuardStrict : 1; /* bit position: 2 */
        /* 0x0450 */ unsigned long DisallowStrippedImages : 1; /* bit position: 3 */
        /* 0x0450 */ unsigned long ForceRelocateImages : 1; /* bit position: 4 */
        /* 0x0450 */ unsigned long HighEntropyASLREnabled : 1; /* bit position: 5 */
        /* 0x0450 */ unsigned long StackRandomizationDisabled : 1; /* bit position: 6 */
        /* 0x0450 */ unsigned long ExtensionPointDisable : 1; /* bit position: 7 */
        /* 0x0450 */ unsigned long DisableDynamicCode : 1; /* bit position: 8 */
        /* 0x0450 */ unsigned long DisableDynamicCodeAllowOptOut : 1; /* bit position: 9 */
        /* 0x0450 */ unsigned long DisableDynamicCodeAllowRemoteDowngrade : 1; /* bit position: 10 */
        /* 0x0450 */ unsigned long AuditDisableDynamicCode : 1; /* bit position: 11 */
        /* 0x0450 */ unsigned long DisallowWin32kSystemCalls : 1; /* bit position: 12 */
        /* 0x0450 */ unsigned long AuditDisallowWin32kSystemCalls : 1; /* bit position: 13 */
        /* 0x0450 */ unsigned long EnableFilteredWin32kAPIs : 1; /* bit position: 14 */
        /* 0x0450 */ unsigned long AuditFilteredWin32kAPIs : 1; /* bit position: 15 */
        /* 0x0450 */ unsigned long DisableNonSystemFonts : 1; /* bit position: 16 */
        /* 0x0450 */ unsigned long AuditNonSystemFontLoading : 1; /* bit position: 17 */
        /* 0x0450 */ unsigned long PreferSystem32Images : 1; /* bit position: 18 */
        /* 0x0450 */ unsigned long ProhibitRemoteImageMap : 1; /* bit position: 19 */
        /* 0x0450 */ unsigned long AuditProhibitRemoteImageMap : 1; /* bit position: 20 */
        /* 0x0450 */ unsigned long ProhibitLowILImageMap : 1; /* bit position: 21 */
        /* 0x0450 */ unsigned long AuditProhibitLowILImageMap : 1; /* bit position: 22 */
        /* 0x0450 */ unsigned long SignatureMitigationOptIn : 1; /* bit position: 23 */
        /* 0x0450 */ unsigned long AuditBlockNonMicrosoftBinaries : 1; /* bit position: 24 */
        /* 0x0450 */ unsigned long AuditBlockNonMicrosoftBinariesAllowStore : 1; /* bit position: 25 */
        /* 0x0450 */ unsigned long LoaderIntegrityContinuityEnabled : 1; /* bit position: 26 */
        /* 0x0450 */ unsigned long AuditLoaderIntegrityContinuity : 1; /* bit position: 27 */
        /* 0x0450 */ unsigned long EnableModuleTamperingProtection : 1; /* bit position: 28 */
        /* 0x0450 */ unsigned long EnableModuleTamperingProtectionNoInherit : 1; /* bit position: 29 */
        /* 0x0450 */ unsigned long RestrictIndirectBranchPrediction : 1; /* bit position: 30 */
        /* 0x0450 */ unsigned long IsolateSecurityDomain : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ MitigationFlagsValues;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0454 */ unsigned long MitigationFlags2;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0454 */ unsigned long EnableExportAddressFilter : 1; /* bit position: 0 */
        /* 0x0454 */ unsigned long AuditExportAddressFilter : 1; /* bit position: 1 */
        /* 0x0454 */ unsigned long EnableExportAddressFilterPlus : 1; /* bit position: 2 */
        /* 0x0454 */ unsigned long AuditExportAddressFilterPlus : 1; /* bit position: 3 */
        /* 0x0454 */ unsigned long EnableRopStackPivot : 1; /* bit position: 4 */
        /* 0x0454 */ unsigned long AuditRopStackPivot : 1; /* bit position: 5 */
        /* 0x0454 */ unsigned long EnableRopCallerCheck : 1; /* bit position: 6 */
        /* 0x0454 */ unsigned long AuditRopCallerCheck : 1; /* bit position: 7 */
        /* 0x0454 */ unsigned long EnableRopSimExec : 1; /* bit position: 8 */
        /* 0x0454 */ unsigned long AuditRopSimExec : 1; /* bit position: 9 */
        /* 0x0454 */ unsigned long EnableImportAddressFilter : 1; /* bit position: 10 */
        /* 0x0454 */ unsigned long AuditImportAddressFilter : 1; /* bit position: 11 */
        /* 0x0454 */ unsigned long DisablePageCombine : 1; /* bit position: 12 */
        /* 0x0454 */ unsigned long SpeculativeStoreBypassDisable : 1; /* bit position: 13 */
        /* 0x0454 */ unsigned long CetUserShadowStacks : 1; /* bit position: 14 */
      }; /* bitfield */
    } /* size: 0x0004 */ MitigationFlags2Values;
  }; /* size: 0x0004 */
  /* 0x0458 */ void* PartitionObject;
  /* 0x0460 */ unsigned __int64 SecurityDomain;
  /* 0x0468 */ unsigned __int64 ParentSecurityDomain;
  /* 0x0470 */ void* CoverageSamplerContext;
  /* 0x0474 */ void* MmHotPatchContext;
  /* 0x0478 */ long __PADDING__[2];
} EPROCESS, *PEPROCESS; /* size: 0x0480 */

