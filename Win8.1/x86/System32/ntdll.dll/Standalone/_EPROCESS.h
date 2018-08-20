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

typedef struct _KGDTENTRY
{
  /* 0x0000 */ unsigned short LimitLow;
  /* 0x0002 */ unsigned short BaseLow;
  union // _TAG_UNNAMED_36
  {
    union
    {
      struct // _TAG_UNNAMED_37
      {
        /* 0x0004 */ unsigned char BaseMid;
        /* 0x0005 */ unsigned char Flags1;
        /* 0x0006 */ unsigned char Flags2;
        /* 0x0007 */ unsigned char BaseHi;
      } /* size: 0x0004 */ Bytes;
      struct // _TAG_UNNAMED_38
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
  /* 0x0038 */ struct _KAFFINITY_EX Affinity;
  /* 0x0044 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x004c */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0050 */ volatile struct _KAFFINITY_EX ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x005c */ long AutoAlignment : 1; /* bit position: 0 */
      /* 0x005c */ long DisableBoost : 1; /* bit position: 1 */
      /* 0x005c */ long DisableQuantum : 1; /* bit position: 2 */
      /* 0x005c */ long AffinitySet : 1; /* bit position: 3 */
      /* 0x005c */ unsigned long DeepFreeze : 1; /* bit position: 4 */
      /* 0x005c */ unsigned long TimerVirtualization : 1; /* bit position: 5 */
      /* 0x005c */ unsigned long CheckStackExtents : 1; /* bit position: 6 */
      /* 0x005c */ unsigned long ActiveGroupsMask : 1; /* bit position: 7 */
      /* 0x005c */ long ReservedFlags : 24; /* bit position: 8 */
    }; /* bitfield */
    /* 0x005c */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x0060 */ char BasePriority;
  /* 0x0061 */ char QuantumReset;
  /* 0x0062 */ unsigned char Visited;
  /* 0x0063 */ union _KEXECUTE_OPTIONS Flags;
  /* 0x0064 */ unsigned long ThreadSeed[1];
  /* 0x0068 */ unsigned short IdealNode[1];
  /* 0x006a */ unsigned short IdealGlobalNode;
  /* 0x006c */ unsigned short Spare1;
  /* 0x006e */ unsigned short IopmOffset;
  /* 0x0070 */ struct _KSCHEDULING_GROUP* SchedulingGroup;
  /* 0x0074 */ volatile union _KSTACK_COUNT StackCount;
  /* 0x0078 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0080 */ unsigned __int64 CycleTime;
  /* 0x0088 */ unsigned __int64 ContextSwitches;
  /* 0x0090 */ unsigned long FreezeCount;
  /* 0x0094 */ unsigned long KernelTime;
  /* 0x0098 */ unsigned long UserTime;
  /* 0x009c */ void* VdmTrapcHandler;
} KPROCESS, *PKPROCESS; /* size: 0x00a0 */

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

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

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
  /* 0x0002 */ unsigned char MemoryPriority;
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char ExpansionFailed : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 3 */
    /* 0x0003 */ unsigned char Available : 4; /* bit position: 4 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK WorkingSetMutex;
  /* 0x0004 */ struct _KGATE* ExitGate;
  /* 0x0008 */ void* AccessLog;
  /* 0x000c */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0014 */ unsigned long AgeDistribution[7];
  /* 0x0030 */ unsigned long MinimumWorkingSetSize;
  /* 0x0034 */ unsigned long WorkingSetSize;
  /* 0x0038 */ unsigned long WorkingSetPrivateSize;
  /* 0x003c */ unsigned long MaximumWorkingSetSize;
  /* 0x0040 */ unsigned long ChargedWslePages;
  /* 0x0044 */ unsigned long ActualWslePages;
  /* 0x0048 */ unsigned long WorkingSetSizeOverhead;
  /* 0x004c */ unsigned long PeakWorkingSetSize;
  /* 0x0050 */ unsigned long HardFaultCount;
  /* 0x0054 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0058 */ unsigned short NextPageColor;
  /* 0x005a */ unsigned short LastTrimStamp;
  /* 0x005c */ unsigned long PageFaultCount;
  /* 0x0060 */ unsigned long TrimmedPageCount;
  /* 0x0064 */ unsigned long ForceTrimPages;
  /* 0x0068 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x006c */ void* WsSwapSupport;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0070 */

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

typedef struct _EPROCESS
{
  /* 0x0000 */ struct _KPROCESS Pcb;
  /* 0x00a0 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x00a8 */ union _LARGE_INTEGER CreateTime;
  /* 0x00b0 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x00b4 */ void* UniqueProcessId;
  /* 0x00b8 */ struct _LIST_ENTRY ActiveProcessLinks;
  union
  {
    /* 0x00c0 */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x00c0 */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x00c0 */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x00c0 */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x00c0 */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x00c0 */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x00c0 */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x00c0 */ unsigned long ForceWakeCharge : 1; /* bit position: 6 */
      /* 0x00c0 */ unsigned long CrossSessionCreate : 1; /* bit position: 7 */
      /* 0x00c0 */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x00c0 */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x00c0 */ unsigned long DisableDynamicCode : 1; /* bit position: 10 */
      /* 0x00c0 */ unsigned long EmptyJobEvaluated : 1; /* bit position: 11 */
      /* 0x00c0 */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x00c0 */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x00c0 */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x00c0 */ unsigned long StackRandomizationDisabled : 1; /* bit position: 17 */
      /* 0x00c0 */ unsigned long AffinityPermanent : 1; /* bit position: 18 */
      /* 0x00c0 */ unsigned long AffinityUpdateEnable : 1; /* bit position: 19 */
      /* 0x00c0 */ unsigned long PropagateNode : 1; /* bit position: 20 */
      /* 0x00c0 */ unsigned long ExplicitAffinity : 1; /* bit position: 21 */
      /* 0x00c0 */ unsigned long ProcessExecutionState : 2; /* bit position: 22 */
      /* 0x00c0 */ unsigned long DisallowStrippedImages : 1; /* bit position: 24 */
      /* 0x00c0 */ unsigned long HighEntropyASLREnabled : 1; /* bit position: 25 */
      /* 0x00c0 */ unsigned long ExtensionPointDisable : 1; /* bit position: 26 */
      /* 0x00c0 */ unsigned long ForceRelocateImages : 1; /* bit position: 27 */
      /* 0x00c0 */ unsigned long ProcessStateChangeRequest : 2; /* bit position: 28 */
      /* 0x00c0 */ unsigned long ProcessStateChangeInProgress : 1; /* bit position: 30 */
      /* 0x00c0 */ unsigned long DisallowWin32kSystemCalls : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x00c4 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x00c4 */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x00c4 */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x00c4 */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x00c4 */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x00c4 */ unsigned long ControlFlowGuardEnabled : 1; /* bit position: 4 */
      /* 0x00c4 */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x00c4 */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x00c4 */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x00c4 */ unsigned long ForkFailed : 1; /* bit position: 8 */
      /* 0x00c4 */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x00c4 */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x00c4 */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x00c4 */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x00c4 */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x00c4 */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x00c4 */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x00c4 */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x00c4 */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x00c4 */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x00c4 */ unsigned long Background : 1; /* bit position: 20 */
      /* 0x00c4 */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x00c4 */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x00c4 */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x00c4 */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x00c4 */ unsigned long ProcessRundown : 1; /* bit position: 25 */
      /* 0x00c4 */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x00c4 */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x00c4 */ unsigned long ProcessSelfDelete : 1; /* bit position: 30 */
      /* 0x00c4 */ unsigned long SetTimerResolutionLink : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x00c8 */ unsigned long ProcessQuotaUsage[2];
  /* 0x00d0 */ unsigned long ProcessQuotaPeak[2];
  /* 0x00d8 */ unsigned long PeakVirtualSize;
  /* 0x00dc */ unsigned long VirtualSize;
  /* 0x00e0 */ struct _LIST_ENTRY SessionProcessLinks;
  union
  {
    /* 0x00e8 */ void* ExceptionPortData;
    /* 0x00e8 */ unsigned long ExceptionPortValue;
    /* 0x00e8 */ unsigned long ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x00ec */ struct _EX_FAST_REF Token;
  /* 0x00f0 */ unsigned long WorkingSetPage;
  /* 0x00f4 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x00f8 */ struct _EX_PUSH_LOCK PageTableCommitmentLock;
  /* 0x00fc */ struct _ETHREAD* RotateInProgress;
  /* 0x0100 */ struct _ETHREAD* ForkInProgress;
  /* 0x0104 */ struct _EJOB* volatile CommitChargeJob;
  /* 0x0108 */ struct _RTL_AVL_TREE CloneRoot;
  /* 0x010c */ volatile unsigned long NumberOfPrivatePages;
  /* 0x0110 */ volatile unsigned long NumberOfLockedPages;
  /* 0x0114 */ void* Win32Process;
  /* 0x0118 */ struct _EJOB* volatile Job;
  /* 0x011c */ void* SectionObject;
  /* 0x0120 */ void* SectionBaseAddress;
  /* 0x0124 */ unsigned long Cookie;
  /* 0x0128 */ void* VdmObjects;
  /* 0x012c */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x0130 */ void* Win32WindowStation;
  /* 0x0134 */ void* InheritedFromUniqueProcessId;
  /* 0x0138 */ void* LdtInformation;
  /* 0x013c */ volatile unsigned long OwnerProcessId;
  /* 0x0140 */ struct _PEB* Peb;
  /* 0x0144 */ void* Session;
  /* 0x0148 */ void* AweInfo;
  /* 0x014c */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x0150 */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x0154 */ void* DebugPort;
  /* 0x0158 */ void* PaeTop;
  /* 0x015c */ void* DeviceMap;
  /* 0x0160 */ void* EtwDataSource;
  /* 0x0168 */ unsigned __int64 PageDirectoryPte;
  /* 0x0170 */ unsigned char ImageFileName[15];
  /* 0x017f */ unsigned char PriorityClass;
  /* 0x0180 */ void* SecurityPort;
  /* 0x0184 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x0188 */ struct _LIST_ENTRY JobLinks;
  /* 0x0190 */ void* HighestUserAddress;
  /* 0x0194 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x019c */ volatile unsigned long ActiveThreads;
  /* 0x01a0 */ unsigned long ImagePathHash;
  /* 0x01a4 */ unsigned long DefaultHardErrorProcessing;
  /* 0x01a8 */ long LastThreadExitStatus;
  /* 0x01ac */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x01b0 */ void* LockedPagesList;
  /* 0x01b8 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x01c0 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x01c8 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x01d0 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x01d8 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x01e0 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x01e8 */ unsigned long CommitChargeLimit;
  /* 0x01ec */ volatile unsigned long CommitCharge;
  /* 0x01f0 */ volatile unsigned long CommitChargePeak;
  /* 0x01f4 */ struct _MMSUPPORT Vm;
  /* 0x0264 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x026c */ unsigned long ModifiedPageCount;
  /* 0x0270 */ long ExitStatus;
  /* 0x0274 */ struct _RTL_AVL_TREE VadRoot;
  /* 0x0278 */ void* VadHint;
  /* 0x027c */ unsigned long VadCount;
  /* 0x0280 */ volatile unsigned long VadPhysicalPages;
  /* 0x0284 */ unsigned long VadPhysicalPagesLimit;
  /* 0x0288 */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
  /* 0x0298 */ struct _LIST_ENTRY TimerResolutionLink;
  /* 0x02a0 */ struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
  /* 0x02a4 */ unsigned long RequestedTimerResolution;
  /* 0x02a8 */ unsigned long SmallestTimerResolution;
  /* 0x02b0 */ union _LARGE_INTEGER ExitTime;
  /* 0x02b8 */ unsigned long ActiveThreadsHighWatermark;
  /* 0x02bc */ unsigned long LargePrivateVadCount;
  /* 0x02c0 */ struct _EX_PUSH_LOCK ThreadListLock;
  /* 0x02c4 */ void* WnfContext;
  /* 0x02c8 */ unsigned long Spare0;
  /* 0x02cc */ unsigned char SignatureLevel;
  /* 0x02cd */ unsigned char SectionSignatureLevel;
  /* 0x02ce */ struct _PS_PROTECTION Protection;
  /* 0x02cf */ unsigned char SpareByte20[1];
  union
  {
    /* 0x02d0 */ unsigned long Flags3;
    /* 0x02d0 */ unsigned long Minimal : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x02d4 */ long SvmReserved;
  /* 0x02d8 */ void* SvmReserved1;
  /* 0x02dc */ unsigned long SvmReserved2;
  /* 0x02e0 */ unsigned __int64 LastFreezeInterruptTime;
  /* 0x02e8 */ struct _PROCESS_DISK_COUNTERS* DiskCounters;
  /* 0x02ec */ unsigned long KeepAliveCounter;
  /* 0x02f0 */ unsigned long NoWakeKeepAliveCounter;
  /* 0x02f4 */ long __PADDING__[1];
} EPROCESS, *PEPROCESS; /* size: 0x02f8 */

