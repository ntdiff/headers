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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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
    /* 0x0000 */ unsigned char Spare : 2; /* bit position: 6 */
  }; /* bitfield */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0018 */ unsigned long DirectoryTableBase;
  /* 0x001c */ unsigned long Unused0;
  /* 0x0020 */ struct _KGDTENTRY LdtDescriptor;
  /* 0x0028 */ struct _KIDTENTRY Int21Descriptor;
  /* 0x0030 */ unsigned short IopmOffset;
  /* 0x0032 */ unsigned char Iopl;
  /* 0x0033 */ unsigned char Unused;
  /* 0x0034 */ volatile unsigned long ActiveProcessors;
  /* 0x0038 */ unsigned long KernelTime;
  /* 0x003c */ unsigned long UserTime;
  /* 0x0040 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0048 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x004c */ void* VdmTrapcHandler;
  /* 0x0050 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0058 */ unsigned long ProcessLock;
  /* 0x005c */ unsigned long Affinity;
  union
  {
    struct /* bitfield */
    {
      /* 0x0060 */ volatile long AutoAlignment : 1; /* bit position: 0 */
      /* 0x0060 */ volatile long DisableBoost : 1; /* bit position: 1 */
      /* 0x0060 */ volatile long DisableQuantum : 1; /* bit position: 2 */
      /* 0x0060 */ volatile long ReservedFlags : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0060 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x0064 */ char BasePriority;
  /* 0x0065 */ char QuantumReset;
  /* 0x0066 */ unsigned char State;
  /* 0x0067 */ unsigned char ThreadSeed;
  /* 0x0068 */ unsigned char PowerState;
  /* 0x0069 */ unsigned char IdealNode;
  /* 0x006a */ unsigned char Visited;
  union
  {
    /* 0x006b */ struct _KEXECUTE_OPTIONS Flags;
    /* 0x006b */ unsigned char ExecuteOptions;
  }; /* size: 0x0001 */
  /* 0x006c */ unsigned long StackCount;
  /* 0x0070 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0078 */ volatile unsigned __int64 CycleTime;
} KPROCESS, *PKPROCESS; /* size: 0x0080 */

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

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long reserved : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0004 */

typedef struct _SE_AUDIT_PROCESS_CREATION_INFO
{
  /* 0x0000 */ struct _OBJECT_NAME_INFORMATION* ImageFileName;
} SE_AUDIT_PROCESS_CREATION_INFO, *PSE_AUDIT_PROCESS_CREATION_INFO; /* size: 0x0004 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SessionSpace : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char ModwriterAttached : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char TrimHard : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char ForceTrim : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char SessionMaster : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char TrimmerAttached : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char TrimmerDetaching : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char Reserved : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char MemoryPriority : 8; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char Available : 6; /* bit position: 2 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0008 */ unsigned short LastTrimStamp;
  /* 0x000a */ unsigned short NextPageColor;
  /* 0x000c */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x0010 */ unsigned long PageFaultCount;
  /* 0x0014 */ unsigned long PeakWorkingSetSize;
  /* 0x0018 */ unsigned long Spare0;
  /* 0x001c */ unsigned long MinimumWorkingSetSize;
  /* 0x0020 */ unsigned long MaximumWorkingSetSize;
  /* 0x0024 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0028 */ unsigned long Claim;
  /* 0x002c */ unsigned long Spare[1];
  /* 0x0030 */ unsigned long WorkingSetPrivateSize;
  /* 0x0034 */ unsigned long WorkingSetSizeOverhead;
  /* 0x0038 */ unsigned long WorkingSetSize;
  /* 0x003c */ struct _KEVENT* ExitEvent;
  /* 0x0040 */ struct _EX_PUSH_LOCK WorkingSetMutex;
  /* 0x0044 */ void* AccessLog;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0048 */

typedef struct _MMADDRESS_NODE
{
  union
  {
    union
    {
      /* 0x0000 */ long Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMADDRESS_NODE* Parent;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ struct _MMADDRESS_NODE* LeftChild;
  /* 0x0008 */ struct _MMADDRESS_NODE* RightChild;
  /* 0x000c */ unsigned long StartingVpn;
  /* 0x0010 */ unsigned long EndingVpn;
} MMADDRESS_NODE, *PMMADDRESS_NODE; /* size: 0x0014 */

typedef struct _MM_AVL_TABLE
{
  /* 0x0000 */ struct _MMADDRESS_NODE BalancedRoot;
  struct /* bitfield */
  {
    /* 0x0014 */ unsigned long DepthOfTree : 5; /* bit position: 0 */
    /* 0x0014 */ unsigned long Unused : 3; /* bit position: 5 */
    /* 0x0014 */ unsigned long NumberGenericTableElements : 24; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0018 */ void* NodeHint;
  /* 0x001c */ void* NodeFreeHint;
} MM_AVL_TABLE, *PMM_AVL_TABLE; /* size: 0x0020 */

typedef struct _ALPC_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _LIST_ENTRY ViewListHead;
  /* 0x000c */ volatile unsigned long PagedPoolQuotaCache;
} ALPC_PROCESS_CONTEXT, *PALPC_PROCESS_CONTEXT; /* size: 0x0010 */

typedef struct _EPROCESS
{
  /* 0x0000 */ struct _KPROCESS Pcb;
  /* 0x0080 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x0088 */ union _LARGE_INTEGER CreateTime;
  /* 0x0090 */ union _LARGE_INTEGER ExitTime;
  /* 0x0098 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x009c */ void* UniqueProcessId;
  /* 0x00a0 */ struct _LIST_ENTRY ActiveProcessLinks;
  /* 0x00a8 */ unsigned long QuotaUsage[3];
  /* 0x00b4 */ unsigned long QuotaPeak[3];
  /* 0x00c0 */ volatile unsigned long CommitCharge;
  /* 0x00c4 */ unsigned long PeakVirtualSize;
  /* 0x00c8 */ unsigned long VirtualSize;
  /* 0x00cc */ struct _LIST_ENTRY SessionProcessLinks;
  /* 0x00d4 */ void* DebugPort;
  union
  {
    /* 0x00d8 */ void* ExceptionPortData;
    /* 0x00d8 */ unsigned long ExceptionPortValue;
    /* 0x00d8 */ unsigned long ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x00dc */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x00e0 */ struct _EX_FAST_REF Token;
  /* 0x00e4 */ unsigned long WorkingSetPage;
  /* 0x00e8 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x00ec */ struct _ETHREAD* RotateInProgress;
  /* 0x00f0 */ struct _ETHREAD* ForkInProgress;
  /* 0x00f4 */ unsigned long HardwareTrigger;
  /* 0x00f8 */ struct _MM_AVL_TABLE* PhysicalVadRoot;
  /* 0x00fc */ void* CloneRoot;
  /* 0x0100 */ volatile unsigned long NumberOfPrivatePages;
  /* 0x0104 */ volatile unsigned long NumberOfLockedPages;
  /* 0x0108 */ void* Win32Process;
  /* 0x010c */ struct _EJOB* Job;
  /* 0x0110 */ void* SectionObject;
  /* 0x0114 */ void* SectionBaseAddress;
  /* 0x0118 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x011c */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x0120 */ void* Win32WindowStation;
  /* 0x0124 */ void* InheritedFromUniqueProcessId;
  /* 0x0128 */ void* LdtInformation;
  /* 0x012c */ void* VadFreeHint;
  /* 0x0130 */ void* VdmObjects;
  /* 0x0134 */ void* DeviceMap;
  /* 0x0138 */ void* EtwDataSource;
  /* 0x013c */ void* FreeTebHint;
  union
  {
    /* 0x0140 */ struct _HARDWARE_PTE PageDirectoryPte;
    /* 0x0140 */ unsigned __int64 Filler;
  }; /* size: 0x0008 */
  /* 0x0148 */ void* Session;
  /* 0x014c */ unsigned char ImageFileName[16];
  /* 0x015c */ struct _LIST_ENTRY JobLinks;
  /* 0x0164 */ void* LockedPagesList;
  /* 0x0168 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0170 */ void* SecurityPort;
  /* 0x0174 */ void* PaeTop;
  /* 0x0178 */ volatile unsigned long ActiveThreads;
  /* 0x017c */ unsigned long ImagePathHash;
  /* 0x0180 */ unsigned long DefaultHardErrorProcessing;
  /* 0x0184 */ long LastThreadExitStatus;
  /* 0x0188 */ struct _PEB* Peb;
  /* 0x018c */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x0190 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x0198 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x01a0 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x01a8 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x01b0 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x01b8 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x01c0 */ unsigned long CommitChargeLimit;
  /* 0x01c4 */ volatile unsigned long CommitChargePeak;
  /* 0x01c8 */ void* AweInfo;
  /* 0x01cc */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x01d0 */ struct _MMSUPPORT Vm;
  /* 0x0218 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x0220 */ unsigned long ModifiedPageCount;
  union
  {
    /* 0x0224 */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x0224 */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x0224 */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x0224 */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x0224 */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x0224 */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x0224 */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x0224 */ unsigned long ReportPhysicalPageChanges : 1; /* bit position: 6 */
      /* 0x0224 */ unsigned long HandleTableRundown : 1; /* bit position: 7 */
      /* 0x0224 */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x0224 */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x0224 */ unsigned long NumaAware : 1; /* bit position: 10 */
      /* 0x0224 */ unsigned long ProtectedProcess : 1; /* bit position: 11 */
      /* 0x0224 */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x0224 */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x0224 */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x0224 */ unsigned long StackRandomizationDisabled : 1; /* bit position: 17 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0228 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0228 */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x0228 */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x0228 */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x0228 */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x0228 */ unsigned long Wow64SplitPages : 1; /* bit position: 4 */
      /* 0x0228 */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x0228 */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x0228 */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x0228 */ unsigned long ForkFailed : 1; /* bit position: 8 */
      /* 0x0228 */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x0228 */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x0228 */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x0228 */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x0228 */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x0228 */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x0228 */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x0228 */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x0228 */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x0228 */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x0228 */ unsigned long InjectInpageErrors : 1; /* bit position: 20 */
      /* 0x0228 */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x0228 */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x0228 */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x0228 */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x0228 */ unsigned long SmapAllowed : 1; /* bit position: 25 */
      /* 0x0228 */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x0228 */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x0228 */ unsigned long SparePsFlags1 : 2; /* bit position: 30 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x022c */ long ExitStatus;
  /* 0x0230 */ unsigned short Spare7;
  union
  {
    struct
    {
      /* 0x0232 */ unsigned char SubSystemMinorVersion;
      /* 0x0233 */ unsigned char SubSystemMajorVersion;
    }; /* size: 0x0002 */
    /* 0x0232 */ unsigned short SubSystemVersion;
  }; /* size: 0x0002 */
  /* 0x0234 */ unsigned char PriorityClass;
  /* 0x0238 */ struct _MM_AVL_TABLE VadRoot;
  /* 0x0258 */ unsigned long Cookie;
  /* 0x025c */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
  /* 0x026c */ long __PADDING__[1];
} EPROCESS, *PEPROCESS; /* size: 0x0270 */

