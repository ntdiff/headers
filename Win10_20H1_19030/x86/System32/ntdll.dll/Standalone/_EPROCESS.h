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
  /* 0x00b0 */ unsigned __int64 KernelWaitTime;
  /* 0x00b8 */ unsigned __int64 UserWaitTime;
  /* 0x00c0 */ unsigned long EndPadding[8];
} KPROCESS, *PKPROCESS; /* size: 0x00e0 */

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
  /* 0x00e0 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x00e4 */ void* UniqueProcessId;
  /* 0x00e8 */ struct _LIST_ENTRY ActiveProcessLinks;
  /* 0x00f0 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x00f4 */ void* VdmObjects;
  union
  {
    /* 0x00f8 */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x00f8 */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x00f8 */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x00f8 */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x00f8 */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x00f8 */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x00f8 */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x00f8 */ unsigned long ForceWakeCharge : 1; /* bit position: 6 */
      /* 0x00f8 */ unsigned long CrossSessionCreate : 1; /* bit position: 7 */
      /* 0x00f8 */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x00f8 */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x00f8 */ unsigned long PicoCreated : 1; /* bit position: 10 */
      /* 0x00f8 */ unsigned long EmptyJobEvaluated : 1; /* bit position: 11 */
      /* 0x00f8 */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x00f8 */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x00f8 */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x00f8 */ unsigned long RestrictSetThreadContext : 1; /* bit position: 17 */
      /* 0x00f8 */ unsigned long AffinityPermanent : 1; /* bit position: 18 */
      /* 0x00f8 */ unsigned long AffinityUpdateEnable : 1; /* bit position: 19 */
      /* 0x00f8 */ unsigned long PropagateNode : 1; /* bit position: 20 */
      /* 0x00f8 */ unsigned long ExplicitAffinity : 1; /* bit position: 21 */
      /* 0x00f8 */ unsigned long ProcessExecutionState : 2; /* bit position: 22 */
      /* 0x00f8 */ unsigned long EnableReadVmLogging : 1; /* bit position: 24 */
      /* 0x00f8 */ unsigned long EnableWriteVmLogging : 1; /* bit position: 25 */
      /* 0x00f8 */ unsigned long FatalAccessTerminationRequested : 1; /* bit position: 26 */
      /* 0x00f8 */ unsigned long DisableSystemAllowedCpuSet : 1; /* bit position: 27 */
      /* 0x00f8 */ unsigned long ProcessStateChangeRequest : 2; /* bit position: 28 */
      /* 0x00f8 */ unsigned long ProcessStateChangeInProgress : 1; /* bit position: 30 */
      /* 0x00f8 */ unsigned long InPrivate : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x00fc */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x00fc */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x00fc */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x00fc */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x00fc */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x00fc */ unsigned long ManageExecutableMemoryWrites : 1; /* bit position: 4 */
      /* 0x00fc */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x00fc */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x00fc */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x00fc */ unsigned long FailFastOnCommitFail : 1; /* bit position: 8 */
      /* 0x00fc */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x00fc */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x00fc */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x00fc */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x00fc */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x00fc */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x00fc */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x00fc */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x00fc */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x00fc */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x00fc */ unsigned long Background : 1; /* bit position: 20 */
      /* 0x00fc */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x00fc */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x00fc */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x00fc */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x00fc */ unsigned long ProcessRundown : 1; /* bit position: 25 */
      /* 0x00fc */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x00fc */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x00fc */ unsigned long ProcessSelfDelete : 1; /* bit position: 30 */
      /* 0x00fc */ unsigned long SetTimerResolutionLink : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0100 */ union _LARGE_INTEGER CreateTime;
  /* 0x0108 */ unsigned long ProcessQuotaUsage[2];
  /* 0x0110 */ unsigned long ProcessQuotaPeak[2];
  /* 0x0118 */ unsigned long PeakVirtualSize;
  /* 0x011c */ unsigned long VirtualSize;
  /* 0x0120 */ struct _LIST_ENTRY SessionProcessLinks;
  union
  {
    /* 0x0128 */ void* ExceptionPortData;
    /* 0x0128 */ unsigned long ExceptionPortValue;
    /* 0x0128 */ unsigned long ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x012c */ struct _EX_FAST_REF Token;
  /* 0x0130 */ unsigned long MmReserved;
  /* 0x0134 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x0138 */ struct _EX_PUSH_LOCK PageTableCommitmentLock;
  /* 0x013c */ struct _ETHREAD* RotateInProgress;
  /* 0x0140 */ struct _ETHREAD* ForkInProgress;
  /* 0x0144 */ struct _EJOB* volatile CommitChargeJob;
  /* 0x0148 */ struct _RTL_AVL_TREE CloneRoot;
  /* 0x014c */ volatile unsigned long NumberOfPrivatePages;
  /* 0x0150 */ volatile unsigned long NumberOfLockedPages;
  /* 0x0154 */ void* Win32Process;
  /* 0x0158 */ struct _EJOB* volatile Job;
  /* 0x015c */ void* SectionObject;
  /* 0x0160 */ void* SectionBaseAddress;
  /* 0x0164 */ unsigned long Cookie;
  /* 0x0168 */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x016c */ void* Win32WindowStation;
  /* 0x0170 */ void* InheritedFromUniqueProcessId;
  /* 0x0174 */ void* LdtInformation;
  /* 0x0178 */ volatile unsigned long OwnerProcessId;
  /* 0x017c */ struct _PEB* Peb;
  /* 0x0180 */ struct _MM_SESSION_SPACE* Session;
  /* 0x0184 */ void* Spare1;
  /* 0x0188 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x018c */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x0190 */ void* DebugPort;
  /* 0x0194 */ void* PaeTop;
  /* 0x0198 */ void* DeviceMap;
  /* 0x019c */ void* EtwDataSource;
  /* 0x01a0 */ unsigned __int64 PageDirectoryPte;
  /* 0x01a8 */ struct _FILE_OBJECT* ImageFilePointer;
  /* 0x01ac */ unsigned char ImageFileName[15];
  /* 0x01bb */ unsigned char PriorityClass;
  /* 0x01bc */ void* SecurityPort;
  /* 0x01c0 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x01c4 */ struct _LIST_ENTRY JobLinks;
  /* 0x01cc */ void* HighestUserAddress;
  /* 0x01d0 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x01d8 */ volatile unsigned long ActiveThreads;
  /* 0x01dc */ unsigned long ImagePathHash;
  /* 0x01e0 */ unsigned long DefaultHardErrorProcessing;
  /* 0x01e4 */ long LastThreadExitStatus;
  /* 0x01e8 */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x01ec */ void* LockedPagesList;
  /* 0x01f0 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x01f8 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x0200 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x0208 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x0210 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x0218 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x0220 */ unsigned long CommitChargeLimit;
  /* 0x0224 */ volatile unsigned long CommitCharge;
  /* 0x0228 */ volatile unsigned long CommitChargePeak;
  /* 0x0240 */ struct _MMSUPPORT_FULL Vm;
  /* 0x0340 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x0348 */ unsigned long ModifiedPageCount;
  /* 0x034c */ long ExitStatus;
  /* 0x0350 */ struct _RTL_AVL_TREE VadRoot;
  /* 0x0354 */ void* VadHint;
  /* 0x0358 */ unsigned long VadCount;
  /* 0x035c */ volatile unsigned long VadPhysicalPages;
  /* 0x0360 */ unsigned long VadPhysicalPagesLimit;
  /* 0x0364 */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
  /* 0x0374 */ struct _LIST_ENTRY TimerResolutionLink;
  /* 0x037c */ struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
  /* 0x0380 */ unsigned long RequestedTimerResolution;
  /* 0x0384 */ unsigned long SmallestTimerResolution;
  /* 0x0388 */ union _LARGE_INTEGER ExitTime;
  /* 0x0390 */ unsigned long ActiveThreadsHighWatermark;
  /* 0x0394 */ unsigned long LargePrivateVadCount;
  /* 0x0398 */ struct _EX_PUSH_LOCK ThreadListLock;
  /* 0x039c */ void* WnfContext;
  /* 0x03a0 */ struct _EJOB* ServerSilo;
  /* 0x03a4 */ unsigned char SignatureLevel;
  /* 0x03a5 */ unsigned char SectionSignatureLevel;
  /* 0x03a6 */ struct _PS_PROTECTION Protection;
  struct /* bitfield */
  {
    /* 0x03a7 */ unsigned char HangCount : 3; /* bit position: 0 */
    /* 0x03a7 */ unsigned char GhostCount : 3; /* bit position: 3 */
    /* 0x03a7 */ unsigned char PrefilterException : 1; /* bit position: 6 */
  }; /* bitfield */
  union
  {
    /* 0x03a8 */ unsigned long Flags3;
    struct /* bitfield */
    {
      /* 0x03a8 */ unsigned long Minimal : 1; /* bit position: 0 */
      /* 0x03a8 */ unsigned long ReplacingPageRoot : 1; /* bit position: 1 */
      /* 0x03a8 */ unsigned long Crashed : 1; /* bit position: 2 */
      /* 0x03a8 */ unsigned long JobVadsAreTracked : 1; /* bit position: 3 */
      /* 0x03a8 */ unsigned long VadTrackingDisabled : 1; /* bit position: 4 */
      /* 0x03a8 */ unsigned long AuxiliaryProcess : 1; /* bit position: 5 */
      /* 0x03a8 */ unsigned long SubsystemProcess : 1; /* bit position: 6 */
      /* 0x03a8 */ unsigned long IndirectCpuSets : 1; /* bit position: 7 */
      /* 0x03a8 */ unsigned long RelinquishedCommit : 1; /* bit position: 8 */
      /* 0x03a8 */ unsigned long HighGraphicsPriority : 1; /* bit position: 9 */
      /* 0x03a8 */ unsigned long CommitFailLogged : 1; /* bit position: 10 */
      /* 0x03a8 */ unsigned long ReserveFailLogged : 1; /* bit position: 11 */
      /* 0x03a8 */ unsigned long SystemProcess : 1; /* bit position: 12 */
      /* 0x03a8 */ unsigned long HideImageBaseAddresses : 1; /* bit position: 13 */
      /* 0x03a8 */ unsigned long AddressPolicyFrozen : 1; /* bit position: 14 */
      /* 0x03a8 */ unsigned long ProcessFirstResume : 1; /* bit position: 15 */
      /* 0x03a8 */ unsigned long ForegroundExternal : 1; /* bit position: 16 */
      /* 0x03a8 */ unsigned long ForegroundSystem : 1; /* bit position: 17 */
      /* 0x03a8 */ unsigned long HighMemoryPriority : 1; /* bit position: 18 */
      /* 0x03a8 */ unsigned long EnableProcessSuspendResumeLogging : 1; /* bit position: 19 */
      /* 0x03a8 */ unsigned long EnableThreadSuspendResumeLogging : 1; /* bit position: 20 */
      /* 0x03a8 */ unsigned long SecurityDomainChanged : 1; /* bit position: 21 */
      /* 0x03a8 */ unsigned long SecurityFreezeComplete : 1; /* bit position: 22 */
      /* 0x03a8 */ unsigned long VmProcessorHost : 1; /* bit position: 23 */
      /* 0x03a8 */ unsigned long VmProcessorHostTransition : 1; /* bit position: 24 */
      /* 0x03a8 */ unsigned long AltSyscall : 1; /* bit position: 25 */
      /* 0x03a8 */ unsigned long TimerResolutionIgnore : 1; /* bit position: 26 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x03ac */ long DeviceAsid;
  /* 0x03b0 */ void* SvmData;
  /* 0x03b4 */ struct _EX_PUSH_LOCK SvmProcessLock;
  /* 0x03b8 */ unsigned long SvmLock;
  /* 0x03bc */ struct _LIST_ENTRY SvmProcessDeviceListHead;
  /* 0x03c8 */ unsigned __int64 LastFreezeInterruptTime;
  /* 0x03d0 */ struct _PROCESS_DISK_COUNTERS* DiskCounters;
  /* 0x03d4 */ void* PicoContext;
  /* 0x03d8 */ unsigned long HighPriorityFaultsAllowed;
  /* 0x03dc */ void* InstrumentationCallback;
  /* 0x03e0 */ struct _PO_PROCESS_ENERGY_CONTEXT* EnergyContext;
  /* 0x03e4 */ void* VmContext;
  /* 0x03e8 */ unsigned __int64 SequenceNumber;
  /* 0x03f0 */ unsigned __int64 CreateInterruptTime;
  /* 0x03f8 */ unsigned __int64 CreateUnbiasedInterruptTime;
  /* 0x0400 */ unsigned __int64 TotalUnbiasedFrozenTime;
  /* 0x0408 */ unsigned __int64 LastAppStateUpdateTime;
  struct /* bitfield */
  {
    /* 0x0410 */ unsigned __int64 LastAppStateUptime : 61; /* bit position: 0 */
    /* 0x0410 */ unsigned __int64 LastAppState : 3; /* bit position: 61 */
  }; /* bitfield */
  /* 0x0418 */ volatile unsigned long SharedCommitCharge;
  /* 0x041c */ struct _EX_PUSH_LOCK SharedCommitLock;
  /* 0x0420 */ struct _LIST_ENTRY SharedCommitLinks;
  union
  {
    struct
    {
      /* 0x0428 */ unsigned long AllowedCpuSets;
      /* 0x042c */ unsigned long DefaultCpuSets;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0428 */ unsigned long* AllowedCpuSetsIndirect;
      /* 0x042c */ unsigned long* DefaultCpuSetsIndirect;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x0430 */ void* DiskIoAttribution;
  /* 0x0434 */ void* DxgProcess;
  /* 0x0438 */ unsigned long Win32KFilterSet;
  /* 0x0440 */ volatile union _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;
  /* 0x0448 */ volatile unsigned long KTimerSets;
  /* 0x044c */ volatile unsigned long KTimer2Sets;
  /* 0x0450 */ volatile unsigned long ThreadTimerSets;
  /* 0x0454 */ unsigned long VirtualTimerListLock;
  /* 0x0458 */ struct _LIST_ENTRY VirtualTimerListHead;
  union
  {
    /* 0x0460 */ struct _WNF_STATE_NAME WakeChannel;
    /* 0x0460 */ struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;
  }; /* size: 0x0030 */
  union
  {
    /* 0x0490 */ unsigned long MitigationFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0490 */ unsigned long ControlFlowGuardEnabled : 1; /* bit position: 0 */
        /* 0x0490 */ unsigned long ControlFlowGuardExportSuppressionEnabled : 1; /* bit position: 1 */
        /* 0x0490 */ unsigned long ControlFlowGuardStrict : 1; /* bit position: 2 */
        /* 0x0490 */ unsigned long DisallowStrippedImages : 1; /* bit position: 3 */
        /* 0x0490 */ unsigned long ForceRelocateImages : 1; /* bit position: 4 */
        /* 0x0490 */ unsigned long HighEntropyASLREnabled : 1; /* bit position: 5 */
        /* 0x0490 */ unsigned long StackRandomizationDisabled : 1; /* bit position: 6 */
        /* 0x0490 */ unsigned long ExtensionPointDisable : 1; /* bit position: 7 */
        /* 0x0490 */ unsigned long DisableDynamicCode : 1; /* bit position: 8 */
        /* 0x0490 */ unsigned long DisableDynamicCodeAllowOptOut : 1; /* bit position: 9 */
        /* 0x0490 */ unsigned long DisableDynamicCodeAllowRemoteDowngrade : 1; /* bit position: 10 */
        /* 0x0490 */ unsigned long AuditDisableDynamicCode : 1; /* bit position: 11 */
        /* 0x0490 */ unsigned long DisallowWin32kSystemCalls : 1; /* bit position: 12 */
        /* 0x0490 */ unsigned long AuditDisallowWin32kSystemCalls : 1; /* bit position: 13 */
        /* 0x0490 */ unsigned long EnableFilteredWin32kAPIs : 1; /* bit position: 14 */
        /* 0x0490 */ unsigned long AuditFilteredWin32kAPIs : 1; /* bit position: 15 */
        /* 0x0490 */ unsigned long DisableNonSystemFonts : 1; /* bit position: 16 */
        /* 0x0490 */ unsigned long AuditNonSystemFontLoading : 1; /* bit position: 17 */
        /* 0x0490 */ unsigned long PreferSystem32Images : 1; /* bit position: 18 */
        /* 0x0490 */ unsigned long ProhibitRemoteImageMap : 1; /* bit position: 19 */
        /* 0x0490 */ unsigned long AuditProhibitRemoteImageMap : 1; /* bit position: 20 */
        /* 0x0490 */ unsigned long ProhibitLowILImageMap : 1; /* bit position: 21 */
        /* 0x0490 */ unsigned long AuditProhibitLowILImageMap : 1; /* bit position: 22 */
        /* 0x0490 */ unsigned long SignatureMitigationOptIn : 1; /* bit position: 23 */
        /* 0x0490 */ unsigned long AuditBlockNonMicrosoftBinaries : 1; /* bit position: 24 */
        /* 0x0490 */ unsigned long AuditBlockNonMicrosoftBinariesAllowStore : 1; /* bit position: 25 */
        /* 0x0490 */ unsigned long LoaderIntegrityContinuityEnabled : 1; /* bit position: 26 */
        /* 0x0490 */ unsigned long AuditLoaderIntegrityContinuity : 1; /* bit position: 27 */
        /* 0x0490 */ unsigned long EnableModuleTamperingProtection : 1; /* bit position: 28 */
        /* 0x0490 */ unsigned long EnableModuleTamperingProtectionNoInherit : 1; /* bit position: 29 */
        /* 0x0490 */ unsigned long RestrictIndirectBranchPrediction : 1; /* bit position: 30 */
        /* 0x0490 */ unsigned long IsolateSecurityDomain : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ MitigationFlagsValues;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0494 */ unsigned long MitigationFlags2;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0494 */ unsigned long EnableExportAddressFilter : 1; /* bit position: 0 */
        /* 0x0494 */ unsigned long AuditExportAddressFilter : 1; /* bit position: 1 */
        /* 0x0494 */ unsigned long EnableExportAddressFilterPlus : 1; /* bit position: 2 */
        /* 0x0494 */ unsigned long AuditExportAddressFilterPlus : 1; /* bit position: 3 */
        /* 0x0494 */ unsigned long EnableRopStackPivot : 1; /* bit position: 4 */
        /* 0x0494 */ unsigned long AuditRopStackPivot : 1; /* bit position: 5 */
        /* 0x0494 */ unsigned long EnableRopCallerCheck : 1; /* bit position: 6 */
        /* 0x0494 */ unsigned long AuditRopCallerCheck : 1; /* bit position: 7 */
        /* 0x0494 */ unsigned long EnableRopSimExec : 1; /* bit position: 8 */
        /* 0x0494 */ unsigned long AuditRopSimExec : 1; /* bit position: 9 */
        /* 0x0494 */ unsigned long EnableImportAddressFilter : 1; /* bit position: 10 */
        /* 0x0494 */ unsigned long AuditImportAddressFilter : 1; /* bit position: 11 */
        /* 0x0494 */ unsigned long DisablePageCombine : 1; /* bit position: 12 */
        /* 0x0494 */ unsigned long SpeculativeStoreBypassDisable : 1; /* bit position: 13 */
        /* 0x0494 */ unsigned long CetUserShadowStacks : 1; /* bit position: 14 */
        /* 0x0494 */ unsigned long AuditCetUserShadowStacks : 1; /* bit position: 15 */
        /* 0x0494 */ unsigned long AuditCetUserShadowStacksLogged : 1; /* bit position: 16 */
        /* 0x0494 */ unsigned long UserCetSetContextIpValidation : 1; /* bit position: 17 */
        /* 0x0494 */ unsigned long AuditUserCetSetContextIpValidation : 1; /* bit position: 18 */
        /* 0x0494 */ unsigned long AuditUserCetSetContextIpValidationLogged : 1; /* bit position: 19 */
      }; /* bitfield */
    } /* size: 0x0004 */ MitigationFlags2Values;
  }; /* size: 0x0004 */
  /* 0x0498 */ void* PartitionObject;
  /* 0x04a0 */ unsigned __int64 SecurityDomain;
  /* 0x04a8 */ unsigned __int64 ParentSecurityDomain;
  /* 0x04b0 */ void* CoverageSamplerContext;
  /* 0x04b4 */ void* MmHotPatchContext;
  /* 0x04b8 */ struct _RTL_AVL_TREE DynamicEHContinuationTargetsTree;
  /* 0x04bc */ struct _EX_PUSH_LOCK DynamicEHContinuationTargetsLock;
} EPROCESS, *PEPROCESS; /* size: 0x04c0 */

