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
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
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
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
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
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[4];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0028 */

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
  }; /* size: 0x0001 */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef union _KSTACK_COUNT
{
  union
  {
    /* 0x0000 */ volatile long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ volatile unsigned long State : 3; /* bit position: 0 */
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
    /* 0x0000 */ unsigned __int64 Alignment;
  }; /* size: 0x0010 */
} KGDTENTRY64, *PKGDTENTRY64; /* size: 0x0010 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

typedef struct _KGUARDED_MUTEX
{
  /* 0x0000 */ volatile long Count;
  /* 0x0008 */ struct _KTHREAD* Owner;
  /* 0x0010 */ unsigned long Contention;
  /* 0x0018 */ struct _KGATE Gate;
  union
  {
    struct
    {
      /* 0x0030 */ short KernelApcDisable;
      /* 0x0032 */ short SpecialApcDisable;
    }; /* size: 0x0004 */
    /* 0x0030 */ unsigned long CombinedApcDisable;
  }; /* size: 0x0004 */
  /* 0x0034 */ long __PADDING__[1];
} KGUARDED_MUTEX, *PKGUARDED_MUTEX; /* size: 0x0038 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0028 */ unsigned __int64 DirectoryTableBase;
  /* 0x0030 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0040 */ unsigned __int64 ProcessLock;
  /* 0x0048 */ struct _KAFFINITY_EX Affinity;
  /* 0x0070 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0080 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0088 */ volatile struct _KAFFINITY_EX ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x00b0 */ volatile long AutoAlignment : 1; /* bit position: 0 */
      /* 0x00b0 */ volatile long DisableBoost : 1; /* bit position: 1 */
      /* 0x00b0 */ volatile long DisableQuantum : 1; /* bit position: 2 */
      /* 0x00b0 */ volatile unsigned long ActiveGroupsMask : 4; /* bit position: 3 */
      /* 0x00b0 */ volatile long ReservedFlags : 25; /* bit position: 7 */
    }; /* bitfield */
    /* 0x00b0 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x00b4 */ char BasePriority;
  /* 0x00b5 */ char QuantumReset;
  /* 0x00b6 */ unsigned char Visited;
  /* 0x00b7 */ unsigned char Unused3;
  /* 0x00b8 */ unsigned long ThreadSeed[4];
  /* 0x00c8 */ unsigned short IdealNode[4];
  /* 0x00d0 */ unsigned short IdealGlobalNode;
  /* 0x00d2 */ union _KEXECUTE_OPTIONS Flags;
  /* 0x00d3 */ unsigned char Unused1;
  /* 0x00d4 */ unsigned long Unused2;
  /* 0x00d8 */ unsigned long Unused4;
  /* 0x00dc */ union _KSTACK_COUNT StackCount;
  /* 0x00e0 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x00f0 */ volatile unsigned __int64 CycleTime;
  /* 0x00f8 */ unsigned long KernelTime;
  /* 0x00fc */ unsigned long UserTime;
  /* 0x0100 */ void* InstrumentationCallback;
  /* 0x0108 */ union _KGDTENTRY64 LdtSystemDescriptor;
  /* 0x0118 */ void* LdtBaseAddress;
  /* 0x0120 */ struct _KGUARDED_MUTEX LdtProcessLock;
  /* 0x0158 */ unsigned short LdtFreeSelectorHint;
  /* 0x015a */ unsigned short LdtTableLength;
  /* 0x015c */ long __PADDING__[1];
} KPROCESS, *PKPROCESS; /* size: 0x0160 */

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
    /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char ModwriterAttached : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char TrimHard : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char ForceTrim : 1; /* bit position: 6 */
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
  /* 0x0078 */ unsigned long RepurposeCount;
  /* 0x007c */ unsigned long Spare[2];
  /* 0x0084 */ struct _MMSUPPORT_FLAGS Flags;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0088 */

typedef struct _MMADDRESS_NODE
{
  union
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
  /* 0x0160 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x0168 */ union _LARGE_INTEGER CreateTime;
  /* 0x0170 */ union _LARGE_INTEGER ExitTime;
  /* 0x0178 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x0180 */ void* UniqueProcessId;
  /* 0x0188 */ struct _LIST_ENTRY ActiveProcessLinks;
  /* 0x0198 */ unsigned __int64 ProcessQuotaUsage[2];
  /* 0x01a8 */ unsigned __int64 ProcessQuotaPeak[2];
  /* 0x01b8 */ volatile unsigned __int64 CommitCharge;
  /* 0x01c0 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x01c8 */ struct _PS_CPU_QUOTA_BLOCK* CpuQuotaBlock;
  /* 0x01d0 */ unsigned __int64 PeakVirtualSize;
  /* 0x01d8 */ unsigned __int64 VirtualSize;
  /* 0x01e0 */ struct _LIST_ENTRY SessionProcessLinks;
  /* 0x01f0 */ void* DebugPort;
  union
  {
    /* 0x01f8 */ void* ExceptionPortData;
    /* 0x01f8 */ unsigned __int64 ExceptionPortValue;
    /* 0x01f8 */ unsigned __int64 ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0008 */
  /* 0x0200 */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x0208 */ struct _EX_FAST_REF Token;
  /* 0x0210 */ unsigned __int64 WorkingSetPage;
  /* 0x0218 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x0220 */ struct _ETHREAD* RotateInProgress;
  /* 0x0228 */ struct _ETHREAD* ForkInProgress;
  /* 0x0230 */ unsigned __int64 HardwareTrigger;
  /* 0x0238 */ struct _MM_AVL_TABLE* PhysicalVadRoot;
  /* 0x0240 */ void* CloneRoot;
  /* 0x0248 */ volatile unsigned __int64 NumberOfPrivatePages;
  /* 0x0250 */ volatile unsigned __int64 NumberOfLockedPages;
  /* 0x0258 */ void* Win32Process;
  /* 0x0260 */ struct _EJOB* volatile Job;
  /* 0x0268 */ void* SectionObject;
  /* 0x0270 */ void* SectionBaseAddress;
  /* 0x0278 */ unsigned long Cookie;
  /* 0x027c */ unsigned long UmsScheduledThreads;
  /* 0x0280 */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x0288 */ void* Win32WindowStation;
  /* 0x0290 */ void* InheritedFromUniqueProcessId;
  /* 0x0298 */ void* LdtInformation;
  /* 0x02a0 */ void* Spare;
  /* 0x02a8 */ unsigned __int64 ConsoleHostProcess;
  /* 0x02b0 */ void* DeviceMap;
  /* 0x02b8 */ void* EtwDataSource;
  /* 0x02c0 */ void* FreeTebHint;
  /* 0x02c8 */ void* FreeUmsTebHint;
  union
  {
    /* 0x02d0 */ struct _HARDWARE_PTE PageDirectoryPte;
    /* 0x02d0 */ unsigned __int64 Filler;
  }; /* size: 0x0008 */
  /* 0x02d8 */ void* Session;
  /* 0x02e0 */ unsigned char ImageFileName[15];
  /* 0x02ef */ unsigned char PriorityClass;
  /* 0x02f0 */ struct _LIST_ENTRY JobLinks;
  /* 0x0300 */ void* LockedPagesList;
  /* 0x0308 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0318 */ void* SecurityPort;
  /* 0x0320 */ void* Wow64Process;
  /* 0x0328 */ volatile unsigned long ActiveThreads;
  /* 0x032c */ unsigned long ImagePathHash;
  /* 0x0330 */ unsigned long DefaultHardErrorProcessing;
  /* 0x0334 */ long LastThreadExitStatus;
  /* 0x0338 */ struct _PEB* Peb;
  /* 0x0340 */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x0348 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x0350 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x0358 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x0360 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x0368 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x0370 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x0378 */ unsigned __int64 CommitChargeLimit;
  /* 0x0380 */ volatile unsigned __int64 CommitChargePeak;
  /* 0x0388 */ void* AweInfo;
  /* 0x0390 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x0398 */ struct _MMSUPPORT Vm;
  /* 0x0420 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x0430 */ void* HighestUserAddress;
  /* 0x0438 */ unsigned long ModifiedPageCount;
  union
  {
    /* 0x043c */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x043c */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x043c */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x043c */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x043c */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x043c */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x043c */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x043c */ unsigned long ReportPhysicalPageChanges : 1; /* bit position: 6 */
      /* 0x043c */ unsigned long HandleTableRundown : 1; /* bit position: 7 */
      /* 0x043c */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x043c */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x043c */ unsigned long NumaAware : 1; /* bit position: 10 */
      /* 0x043c */ unsigned long ProtectedProcess : 1; /* bit position: 11 */
      /* 0x043c */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x043c */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x043c */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x043c */ unsigned long StackRandomizationDisabled : 1; /* bit position: 17 */
      /* 0x043c */ unsigned long AffinityPermanent : 1; /* bit position: 18 */
      /* 0x043c */ unsigned long AffinityUpdateEnable : 1; /* bit position: 19 */
      /* 0x043c */ unsigned long PropagateNode : 1; /* bit position: 20 */
      /* 0x043c */ unsigned long ExplicitAffinity : 1; /* bit position: 21 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0440 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0440 */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x0440 */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x0440 */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x0440 */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x0440 */ unsigned long Wow64SplitPages : 1; /* bit position: 4 */
      /* 0x0440 */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x0440 */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x0440 */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x0440 */ unsigned long ForkFailed : 1; /* bit position: 8 */
      /* 0x0440 */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x0440 */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x0440 */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x0440 */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x0440 */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x0440 */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x0440 */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x0440 */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x0440 */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x0440 */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x0440 */ unsigned long InjectInpageErrors : 1; /* bit position: 20 */
      /* 0x0440 */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x0440 */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x0440 */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x0440 */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x0440 */ unsigned long CrossSessionCreate : 1; /* bit position: 25 */
      /* 0x0440 */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x0440 */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x0440 */ unsigned long ProcessSelfDelete : 1; /* bit position: 30 */
      /* 0x0440 */ unsigned long SetTimerResolutionLink : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0444 */ long ExitStatus;
  /* 0x0448 */ struct _MM_AVL_TABLE VadRoot;
  /* 0x0488 */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
  /* 0x04a8 */ struct _LIST_ENTRY TimerResolutionLink;
  /* 0x04b8 */ unsigned long RequestedTimerResolution;
  /* 0x04bc */ unsigned long ActiveThreadsHighWatermark;
  /* 0x04c0 */ unsigned long SmallestTimerResolution;
  /* 0x04c8 */ struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
} EPROCESS, *PEPROCESS; /* size: 0x04d0 */

