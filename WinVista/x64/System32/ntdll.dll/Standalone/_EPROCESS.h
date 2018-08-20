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
    /* 0x0000 */ unsigned char Spare : 2; /* bit position: 6 */
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
    struct // _TAG_UNNAMED_3
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

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 28; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 12; /* bit position: 40 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _SE_AUDIT_PROCESS_CREATION_INFO
{
  /* 0x0000 */ struct _OBJECT_NAME_INFORMATION* ImageFileName;
} SE_AUDIT_PROCESS_CREATION_INFO, *PSE_AUDIT_PROCESS_CREATION_INFO; /* size: 0x0008 */

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
  /* 0x0010 */ unsigned short LastTrimStamp;
  /* 0x0012 */ unsigned short NextPageColor;
  /* 0x0014 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x0018 */ unsigned long PageFaultCount;
  /* 0x001c */ unsigned long PeakWorkingSetSize;
  /* 0x0020 */ unsigned long Spare0;
  /* 0x0024 */ unsigned long MinimumWorkingSetSize;
  /* 0x0028 */ unsigned long MaximumWorkingSetSize;
  /* 0x0030 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0038 */ unsigned long Claim;
  /* 0x003c */ unsigned long Spare[1];
  /* 0x0040 */ unsigned long WorkingSetPrivateSize;
  /* 0x0044 */ unsigned long WorkingSetSizeOverhead;
  /* 0x0048 */ unsigned long WorkingSetSize;
  /* 0x0050 */ struct _KEVENT* ExitEvent;
  /* 0x0058 */ struct _EX_PUSH_LOCK WorkingSetMutex;
  /* 0x0060 */ void* AccessLog;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0068 */

typedef struct _MMADDRESS_NODE
{
  union // _TAG_UNNAMED_7
  {
    union
    {
      /* 0x0000 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMADDRESS_NODE* Parent;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ struct _MMADDRESS_NODE* LeftChild;
  /* 0x0010 */ struct _MMADDRESS_NODE* RightChild;
  /* 0x0018 */ unsigned __int64 StartingVpn;
  /* 0x0020 */ unsigned __int64 EndingVpn;
} MMADDRESS_NODE, *PMMADDRESS_NODE; /* size: 0x0028 */

typedef struct _MM_AVL_TABLE
{
  /* 0x0000 */ struct _MMADDRESS_NODE BalancedRoot;
  struct /* bitfield */
  {
    /* 0x0028 */ unsigned __int64 DepthOfTree : 5; /* bit position: 0 */
    /* 0x0028 */ unsigned __int64 Unused : 3; /* bit position: 5 */
    /* 0x0028 */ unsigned __int64 NumberGenericTableElements : 56; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0030 */ void* NodeHint;
  /* 0x0038 */ void* NodeFreeHint;
} MM_AVL_TABLE, *PMM_AVL_TABLE; /* size: 0x0040 */

typedef struct _ALPC_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _LIST_ENTRY ViewListHead;
  /* 0x0018 */ volatile unsigned __int64 PagedPoolQuotaCache;
} ALPC_PROCESS_CONTEXT, *PALPC_PROCESS_CONTEXT; /* size: 0x0020 */

typedef struct _EPROCESS
{
  /* 0x0000 */ struct _KPROCESS Pcb;
  /* 0x00c0 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x00c8 */ union _LARGE_INTEGER CreateTime;
  /* 0x00d0 */ union _LARGE_INTEGER ExitTime;
  /* 0x00d8 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x00e0 */ void* UniqueProcessId;
  /* 0x00e8 */ struct _LIST_ENTRY ActiveProcessLinks;
  /* 0x00f8 */ unsigned __int64 QuotaUsage[3];
  /* 0x0110 */ unsigned __int64 QuotaPeak[3];
  /* 0x0128 */ volatile unsigned __int64 CommitCharge;
  /* 0x0130 */ unsigned __int64 PeakVirtualSize;
  /* 0x0138 */ unsigned __int64 VirtualSize;
  /* 0x0140 */ struct _LIST_ENTRY SessionProcessLinks;
  /* 0x0150 */ void* DebugPort;
  union
  {
    /* 0x0158 */ void* ExceptionPortData;
    /* 0x0158 */ unsigned __int64 ExceptionPortValue;
    /* 0x0158 */ unsigned __int64 ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0008 */
  /* 0x0160 */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x0168 */ struct _EX_FAST_REF Token;
  /* 0x0170 */ unsigned __int64 WorkingSetPage;
  /* 0x0178 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x0180 */ struct _ETHREAD* RotateInProgress;
  /* 0x0188 */ struct _ETHREAD* ForkInProgress;
  /* 0x0190 */ unsigned __int64 HardwareTrigger;
  /* 0x0198 */ struct _MM_AVL_TABLE* PhysicalVadRoot;
  /* 0x01a0 */ void* CloneRoot;
  /* 0x01a8 */ volatile unsigned __int64 NumberOfPrivatePages;
  /* 0x01b0 */ volatile unsigned __int64 NumberOfLockedPages;
  /* 0x01b8 */ void* Win32Process;
  /* 0x01c0 */ struct _EJOB* Job;
  /* 0x01c8 */ void* SectionObject;
  /* 0x01d0 */ void* SectionBaseAddress;
  /* 0x01d8 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x01e0 */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x01e8 */ void* Win32WindowStation;
  /* 0x01f0 */ void* InheritedFromUniqueProcessId;
  /* 0x01f8 */ void* LdtInformation;
  /* 0x0200 */ void* VadFreeHint;
  /* 0x0208 */ void* VdmObjects;
  /* 0x0210 */ void* DeviceMap;
  /* 0x0218 */ void* EtwDataSource;
  /* 0x0220 */ void* FreeTebHint;
  union
  {
    /* 0x0228 */ struct _HARDWARE_PTE PageDirectoryPte;
    /* 0x0228 */ unsigned __int64 Filler;
  }; /* size: 0x0008 */
  /* 0x0230 */ void* Session;
  /* 0x0238 */ unsigned char ImageFileName[16];
  /* 0x0248 */ struct _LIST_ENTRY JobLinks;
  /* 0x0258 */ void* LockedPagesList;
  /* 0x0260 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0270 */ void* SecurityPort;
  /* 0x0278 */ struct _WOW64_PROCESS* Wow64Process;
  /* 0x0280 */ volatile unsigned long ActiveThreads;
  /* 0x0284 */ unsigned long ImagePathHash;
  /* 0x0288 */ unsigned long DefaultHardErrorProcessing;
  /* 0x028c */ long LastThreadExitStatus;
  /* 0x0290 */ struct _PEB* Peb;
  /* 0x0298 */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x02a0 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x02a8 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x02b0 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x02b8 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x02c0 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x02c8 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x02d0 */ unsigned __int64 CommitChargeLimit;
  /* 0x02d8 */ volatile unsigned __int64 CommitChargePeak;
  /* 0x02e0 */ void* AweInfo;
  /* 0x02e8 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x02f0 */ struct _MMSUPPORT Vm;
  /* 0x0358 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x0368 */ unsigned long ModifiedPageCount;
  union
  {
    /* 0x036c */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x036c */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x036c */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x036c */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x036c */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x036c */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x036c */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x036c */ unsigned long ReportPhysicalPageChanges : 1; /* bit position: 6 */
      /* 0x036c */ unsigned long HandleTableRundown : 1; /* bit position: 7 */
      /* 0x036c */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x036c */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x036c */ unsigned long NumaAware : 1; /* bit position: 10 */
      /* 0x036c */ unsigned long ProtectedProcess : 1; /* bit position: 11 */
      /* 0x036c */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x036c */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x036c */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x036c */ unsigned long StackRandomizationDisabled : 1; /* bit position: 17 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0370 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0370 */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x0370 */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x0370 */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x0370 */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x0370 */ unsigned long Wow64SplitPages : 1; /* bit position: 4 */
      /* 0x0370 */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x0370 */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x0370 */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x0370 */ unsigned long ForkFailed : 1; /* bit position: 8 */
      /* 0x0370 */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x0370 */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x0370 */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x0370 */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x0370 */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x0370 */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x0370 */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x0370 */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x0370 */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x0370 */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x0370 */ unsigned long InjectInpageErrors : 1; /* bit position: 20 */
      /* 0x0370 */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x0370 */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x0370 */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x0370 */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x0370 */ unsigned long SmapAllowed : 1; /* bit position: 25 */
      /* 0x0370 */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x0370 */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x0370 */ unsigned long SparePsFlags1 : 2; /* bit position: 30 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0374 */ long ExitStatus;
  /* 0x0378 */ unsigned short Spare7;
  union
  {
    struct
    {
      /* 0x037a */ unsigned char SubSystemMinorVersion;
      /* 0x037b */ unsigned char SubSystemMajorVersion;
    }; /* size: 0x0002 */
    /* 0x037a */ unsigned short SubSystemVersion;
  }; /* size: 0x0002 */
  /* 0x037c */ unsigned char PriorityClass;
  /* 0x0380 */ struct _MM_AVL_TABLE VadRoot;
  /* 0x03c0 */ unsigned long Cookie;
  /* 0x03c8 */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
} EPROCESS, *PEPROCESS; /* size: 0x03e8 */

