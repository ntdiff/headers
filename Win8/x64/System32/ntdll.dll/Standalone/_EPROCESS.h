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
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
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
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
              /* 0x0002 */ unsigned char Reserved : 4; /* bit position: 4 */
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
                  /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
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
    /* 0x0000 */ long LockNV;
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
        struct
        {
          /* 0x0004 */ unsigned char BaseMiddle;
          /* 0x0005 */ unsigned char Flags1;
          /* 0x0006 */ unsigned char Flags2;
          /* 0x0007 */ unsigned char BaseHigh;
        } /* size: 0x0004 */ Bytes;
        struct
        {
          struct
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
  /* 0x0048 */ struct _KAFFINITY_EX Affinity;
  /* 0x00f0 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0100 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0108 */ volatile struct _KAFFINITY_EX ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x01b0 */ long AutoAlignment : 1; /* bit position: 0 */
      /* 0x01b0 */ long DisableBoost : 1; /* bit position: 1 */
      /* 0x01b0 */ long DisableQuantum : 1; /* bit position: 2 */
      /* 0x01b0 */ long AffinitySet : 1; /* bit position: 3 */
      /* 0x01b0 */ unsigned long DeepFreeze : 1; /* bit position: 4 */
      /* 0x01b0 */ unsigned long TimerVirtualization : 1; /* bit position: 5 */
      /* 0x01b0 */ unsigned long ActiveGroupsMask : 20; /* bit position: 6 */
      /* 0x01b0 */ long ReservedFlags : 6; /* bit position: 26 */
    }; /* bitfield */
    /* 0x01b0 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x01b4 */ char BasePriority;
  /* 0x01b5 */ char QuantumReset;
  /* 0x01b6 */ unsigned char Visited;
  /* 0x01b7 */ union _KEXECUTE_OPTIONS Flags;
  /* 0x01b8 */ unsigned long ThreadSeed[20];
  /* 0x0208 */ unsigned short IdealNode[20];
  /* 0x0230 */ unsigned short IdealGlobalNode;
  /* 0x0232 */ unsigned short Spare1;
  /* 0x0234 */ volatile union _KSTACK_COUNT StackCount;
  /* 0x0238 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0248 */ unsigned __int64 CycleTime;
  /* 0x0250 */ unsigned __int64 ContextSwitches;
  /* 0x0258 */ struct _KSCHEDULING_GROUP* SchedulingGroup;
  /* 0x0260 */ unsigned long FreezeCount;
  /* 0x0264 */ unsigned long KernelTime;
  /* 0x0268 */ unsigned long UserTime;
  /* 0x026c */ unsigned short LdtFreeSelectorHint;
  /* 0x026e */ unsigned short LdtTableLength;
  /* 0x0270 */ union _KGDTENTRY64 LdtSystemDescriptor;
  /* 0x0280 */ void* LdtBaseAddress;
  /* 0x0288 */ struct _FAST_MUTEX LdtProcessLock;
  /* 0x02c0 */ void* InstrumentationCallback;
} KPROCESS, *PKPROCESS; /* size: 0x02c8 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

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

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

typedef struct _SE_AUDIT_PROCESS_CREATION_INFO
{
  /* 0x0000 */ struct _OBJECT_NAME_INFORMATION* ImageFileName;
} SE_AUDIT_PROCESS_CREATION_INFO, *PSE_AUDIT_PROCESS_CREATION_INFO; /* size: 0x0008 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char ForceCredits : 3; /* bit position: 3 */
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
  /* 0x0002 */ unsigned char MemoryPriority : 8; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char ExpansionFailed : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char Available : 5; /* bit position: 3 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK WorkingSetMutex;
  /* 0x0008 */ struct _KGATE* ExitGate;
  /* 0x0010 */ void* AccessLog;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ unsigned long AgeDistribution[7];
  /* 0x0044 */ unsigned long MinimumWorkingSetSize;
  /* 0x0048 */ unsigned long WorkingSetSize;
  /* 0x004c */ unsigned long WorkingSetPrivateSize;
  /* 0x0050 */ unsigned long MaximumWorkingSetSize;
  /* 0x0054 */ unsigned long ChargedWslePages;
  /* 0x0058 */ unsigned long ActualWslePages;
  /* 0x005c */ unsigned long WorkingSetSizeOverhead;
  /* 0x0060 */ unsigned long PeakWorkingSetSize;
  /* 0x0064 */ unsigned long HardFaultCount;
  /* 0x0068 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0070 */ unsigned short NextPageColor;
  /* 0x0072 */ unsigned short LastTrimStamp;
  /* 0x0074 */ unsigned long PageFaultCount;
  /* 0x0078 */ unsigned long TrimmedPageCount;
  /* 0x007c */ unsigned long Spare;
  /* 0x0080 */ unsigned long ForceTrimPages;
  /* 0x0084 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x0088 */ void* WsSwapSupport;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0090 */

typedef struct _MM_AVL_NODE
{
  union
  {
    union
    {
      /* 0x0000 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MM_AVL_NODE* Parent;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ struct _MM_AVL_NODE* LeftChild;
  /* 0x0010 */ struct _MM_AVL_NODE* RightChild;
} MM_AVL_NODE, *PMM_AVL_NODE; /* size: 0x0018 */

typedef struct _MM_AVL_TABLE
{
  /* 0x0000 */ struct _MM_AVL_NODE BalancedRoot;
  struct /* bitfield */
  {
    /* 0x0018 */ unsigned __int64 DepthOfTree : 5; /* bit position: 0 */
    /* 0x0018 */ unsigned __int64 TableType : 3; /* bit position: 5 */
    /* 0x0018 */ unsigned __int64 NumberGenericTableElements : 56; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0020 */ void* NodeHint;
  /* 0x0028 */ void* NodeFreeHint;
} MM_AVL_TABLE, *PMM_AVL_TABLE; /* size: 0x0030 */

typedef struct _ALPC_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _LIST_ENTRY ViewListHead;
  /* 0x0018 */ volatile unsigned __int64 PagedPoolQuotaCache;
} ALPC_PROCESS_CONTEXT, *PALPC_PROCESS_CONTEXT; /* size: 0x0020 */

typedef struct _EPROCESS
{
  /* 0x0000 */ struct _KPROCESS Pcb;
  /* 0x02c8 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x02d0 */ union _LARGE_INTEGER CreateTime;
  /* 0x02d8 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x02e0 */ void* UniqueProcessId;
  /* 0x02e8 */ struct _LIST_ENTRY ActiveProcessLinks;
  union
  {
    /* 0x02f8 */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x02f8 */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x02f8 */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x02f8 */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x02f8 */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x02f8 */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x02f8 */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x02f8 */ unsigned long NoWakeCharge : 1; /* bit position: 6 */
      /* 0x02f8 */ unsigned long HandleTableRundown : 1; /* bit position: 7 */
      /* 0x02f8 */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x02f8 */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x02f8 */ unsigned long NumaAware : 1; /* bit position: 10 */
      /* 0x02f8 */ unsigned long EmptyJobEvaluated : 1; /* bit position: 11 */
      /* 0x02f8 */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x02f8 */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x02f8 */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x02f8 */ unsigned long StackRandomizationDisabled : 1; /* bit position: 17 */
      /* 0x02f8 */ unsigned long AffinityPermanent : 1; /* bit position: 18 */
      /* 0x02f8 */ unsigned long AffinityUpdateEnable : 1; /* bit position: 19 */
      /* 0x02f8 */ unsigned long PropagateNode : 1; /* bit position: 20 */
      /* 0x02f8 */ unsigned long ExplicitAffinity : 1; /* bit position: 21 */
      /* 0x02f8 */ unsigned long ProcessExecutionState : 2; /* bit position: 22 */
      /* 0x02f8 */ unsigned long DisallowStrippedImages : 1; /* bit position: 24 */
      /* 0x02f8 */ unsigned long HighEntropyASLREnabled : 1; /* bit position: 25 */
      /* 0x02f8 */ unsigned long ExtensionPointDisable : 1; /* bit position: 26 */
      /* 0x02f8 */ unsigned long ForceRelocateImages : 1; /* bit position: 27 */
      /* 0x02f8 */ unsigned long ProcessStateChangeRequest : 2; /* bit position: 28 */
      /* 0x02f8 */ unsigned long ProcessStateChangeInProgress : 1; /* bit position: 30 */
      /* 0x02f8 */ unsigned long DisallowWin32kSystemCalls : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x02fc */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x02fc */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x02fc */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x02fc */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x02fc */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x02fc */ unsigned long Wow64SplitPages : 1; /* bit position: 4 */
      /* 0x02fc */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x02fc */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x02fc */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x02fc */ unsigned long ForkFailed : 1; /* bit position: 8 */
      /* 0x02fc */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x02fc */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x02fc */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x02fc */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x02fc */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x02fc */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x02fc */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x02fc */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x02fc */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x02fc */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x02fc */ unsigned long Background : 1; /* bit position: 20 */
      /* 0x02fc */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x02fc */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x02fc */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x02fc */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x02fc */ unsigned long CrossSessionCreate : 1; /* bit position: 25 */
      /* 0x02fc */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x02fc */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x02fc */ unsigned long ProcessSelfDelete : 1; /* bit position: 30 */
      /* 0x02fc */ unsigned long SetTimerResolutionLink : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0300 */ unsigned __int64 ProcessQuotaUsage[2];
  /* 0x0310 */ unsigned __int64 ProcessQuotaPeak[2];
  /* 0x0320 */ unsigned __int64 PeakVirtualSize;
  /* 0x0328 */ unsigned __int64 VirtualSize;
  /* 0x0330 */ struct _LIST_ENTRY SessionProcessLinks;
  union
  {
    /* 0x0340 */ void* ExceptionPortData;
    /* 0x0340 */ unsigned __int64 ExceptionPortValue;
    /* 0x0340 */ unsigned __int64 ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0008 */
  /* 0x0348 */ struct _EX_FAST_REF Token;
  /* 0x0350 */ unsigned __int64 WorkingSetPage;
  /* 0x0358 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x0360 */ struct _ETHREAD* RotateInProgress;
  /* 0x0368 */ struct _ETHREAD* ForkInProgress;
  /* 0x0370 */ unsigned __int64 HardwareTrigger;
  /* 0x0378 */ struct _EJOB* volatile CommitChargeJob;
  /* 0x0380 */ struct _MM_AVL_TABLE* CloneRoot;
  /* 0x0388 */ volatile unsigned __int64 NumberOfPrivatePages;
  /* 0x0390 */ volatile unsigned __int64 NumberOfLockedPages;
  /* 0x0398 */ void* Win32Process;
  /* 0x03a0 */ struct _EJOB* volatile Job;
  /* 0x03a8 */ void* SectionObject;
  /* 0x03b0 */ void* SectionBaseAddress;
  /* 0x03b8 */ unsigned long Cookie;
  /* 0x03c0 */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x03c8 */ void* Win32WindowStation;
  /* 0x03d0 */ void* InheritedFromUniqueProcessId;
  /* 0x03d8 */ void* LdtInformation;
  union
  {
    /* 0x03e0 */ struct _EPROCESS* CreatorProcess;
    /* 0x03e0 */ unsigned __int64 ConsoleHostProcess;
  }; /* size: 0x0008 */
  /* 0x03e8 */ struct _PEB* Peb;
  /* 0x03f0 */ void* Session;
  /* 0x03f8 */ void* AweInfo;
  /* 0x0400 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x0408 */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x0410 */ void* DebugPort;
  /* 0x0418 */ void* Wow64Process;
  /* 0x0420 */ void* DeviceMap;
  /* 0x0428 */ void* EtwDataSource;
  /* 0x0430 */ unsigned __int64 PageDirectoryPte;
  /* 0x0438 */ unsigned char ImageFileName[15];
  /* 0x0447 */ unsigned char PriorityClass;
  /* 0x0448 */ void* SecurityPort;
  /* 0x0450 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x0458 */ struct _LIST_ENTRY JobLinks;
  /* 0x0468 */ void* HighestUserAddress;
  /* 0x0470 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0480 */ volatile unsigned long ActiveThreads;
  /* 0x0484 */ unsigned long ImagePathHash;
  /* 0x0488 */ unsigned long DefaultHardErrorProcessing;
  /* 0x048c */ long LastThreadExitStatus;
  /* 0x0490 */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x0498 */ struct _MM_AVL_TABLE* LockedPagesList;
  /* 0x04a0 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x04a8 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x04b0 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x04b8 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x04c0 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x04c8 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x04d0 */ unsigned __int64 CommitChargeLimit;
  /* 0x04d8 */ volatile unsigned __int64 CommitCharge;
  /* 0x04e0 */ volatile unsigned __int64 CommitChargePeak;
  /* 0x04e8 */ struct _MMSUPPORT Vm;
  /* 0x0578 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x0588 */ unsigned long ModifiedPageCount;
  /* 0x058c */ long ExitStatus;
  /* 0x0590 */ struct _MM_AVL_TABLE VadRoot;
  /* 0x05c0 */ volatile unsigned __int64 VadPhysicalPages;
  /* 0x05c8 */ unsigned __int64 VadPhysicalPagesLimit;
  /* 0x05d0 */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
  /* 0x05f0 */ struct _LIST_ENTRY TimerResolutionLink;
  /* 0x0600 */ struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
  /* 0x0608 */ unsigned long RequestedTimerResolution;
  /* 0x060c */ unsigned long SmallestTimerResolution;
  /* 0x0610 */ union _LARGE_INTEGER ExitTime;
  /* 0x0618 */ struct _INVERTED_FUNCTION_TABLE* InvertedFunctionTable;
  /* 0x0620 */ struct _EX_PUSH_LOCK InvertedFunctionTableLock;
  /* 0x0628 */ unsigned long ActiveThreadsHighWatermark;
  /* 0x062c */ unsigned long LargePrivateVadCount;
  /* 0x0630 */ struct _EX_PUSH_LOCK ThreadListLock;
  /* 0x0638 */ void* WnfContext;
  /* 0x0640 */ unsigned __int64 SectionMappingSize;
  /* 0x0648 */ unsigned char SignatureLevel;
  /* 0x0649 */ unsigned char SectionSignatureLevel;
  /* 0x064a */ unsigned char SpareByte20[2];
  /* 0x064c */ unsigned long KeepAliveCounter;
  /* 0x0650 */ struct _PROCESS_DISK_COUNTERS* DiskCounters;
  /* 0x0658 */ unsigned __int64 LastFreezeInterruptTime;
} EPROCESS, *PEPROCESS; /* size: 0x0660 */

