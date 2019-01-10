typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Absolute;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char Inserted;
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
  /* 0x0018 */ unsigned long DirectoryTableBase[2];
  /* 0x0020 */ struct _KGDTENTRY LdtDescriptor;
  /* 0x0028 */ struct _KIDTENTRY Int21Descriptor;
  /* 0x0030 */ unsigned short IopmOffset;
  /* 0x0032 */ unsigned char Iopl;
  /* 0x0033 */ unsigned char Unused;
  /* 0x0034 */ unsigned long ActiveProcessors;
  /* 0x0038 */ unsigned long KernelTime;
  /* 0x003c */ unsigned long UserTime;
  /* 0x0040 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0048 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x004c */ void* VdmTrapcHandler;
  /* 0x0050 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0058 */ unsigned long ProcessLock;
  /* 0x005c */ unsigned long Affinity;
  /* 0x0060 */ unsigned short StackCount;
  /* 0x0062 */ char BasePriority;
  /* 0x0063 */ char ThreadQuantum;
  /* 0x0064 */ unsigned char AutoAlignment;
  /* 0x0065 */ unsigned char State;
  /* 0x0066 */ unsigned char ThreadSeed;
  /* 0x0067 */ unsigned char DisableBoost;
  /* 0x0068 */ unsigned char PowerState;
  /* 0x0069 */ unsigned char DisableQuantum;
  /* 0x006a */ unsigned char IdealNode;
  union
  {
    /* 0x006b */ struct _KEXECUTE_OPTIONS Flags;
    /* 0x006b */ unsigned char ExecuteOptions;
  }; /* size: 0x0001 */
} KPROCESS, *PKPROCESS; /* size: 0x006c */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Exclusive : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Shared : 30; /* bit position: 2 */
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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ long Count;
  /* 0x0004 */ struct _KTHREAD* Owner;
  /* 0x0008 */ unsigned long Contention;
  /* 0x000c */ struct _KEVENT Event;
  /* 0x001c */ unsigned long OldIrql;
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0020 */

typedef struct _HARDWARE_PTE_X86
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
} HARDWARE_PTE_X86, *PHARDWARE_PTE_X86; /* size: 0x0004 */

typedef struct _SE_AUDIT_PROCESS_CREATION_INFO
{
  /* 0x0000 */ struct _OBJECT_NAME_INFORMATION* ImageFileName;
} SE_AUDIT_PROCESS_CREATION_INFO, *PSE_AUDIT_PROCESS_CREATION_INFO; /* size: 0x0004 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int SessionSpace : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int BeingTrimmed : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int SessionLeader : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int TrimHard : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int WorkingSetHard : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int AddressSpaceBeingDeleted : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int Available : 10; /* bit position: 6 */
    /* 0x0000 */ unsigned int AllowWorkingSetAdjustment : 8; /* bit position: 16 */
    /* 0x0000 */ unsigned int MemoryPriority : 8; /* bit position: 24 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ union _LARGE_INTEGER LastTrimTime;
  /* 0x0008 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x000c */ unsigned long PageFaultCount;
  /* 0x0010 */ unsigned long PeakWorkingSetSize;
  /* 0x0014 */ unsigned long WorkingSetSize;
  /* 0x0018 */ unsigned long MinimumWorkingSetSize;
  /* 0x001c */ unsigned long MaximumWorkingSetSize;
  /* 0x0020 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0024 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x002c */ unsigned long Claim;
  /* 0x0030 */ unsigned long NextEstimationSlot;
  /* 0x0034 */ unsigned long NextAgingSlot;
  /* 0x0038 */ unsigned long EstimatedAvailable;
  /* 0x003c */ unsigned long GrowthSinceLastEstimate;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0040 */

typedef struct _EPROCESS
{
  /* 0x0000 */ struct _KPROCESS Pcb;
  /* 0x006c */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x0070 */ union _LARGE_INTEGER CreateTime;
  /* 0x0078 */ union _LARGE_INTEGER ExitTime;
  /* 0x0080 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x0084 */ void* UniqueProcessId;
  /* 0x0088 */ struct _LIST_ENTRY ActiveProcessLinks;
  /* 0x0090 */ unsigned long QuotaUsage[3];
  /* 0x009c */ unsigned long QuotaPeak[3];
  /* 0x00a8 */ unsigned long CommitCharge;
  /* 0x00ac */ unsigned long PeakVirtualSize;
  /* 0x00b0 */ unsigned long VirtualSize;
  /* 0x00b4 */ struct _LIST_ENTRY SessionProcessLinks;
  /* 0x00bc */ void* DebugPort;
  /* 0x00c0 */ void* ExceptionPort;
  /* 0x00c4 */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x00c8 */ struct _EX_FAST_REF Token;
  /* 0x00cc */ struct _FAST_MUTEX WorkingSetLock;
  /* 0x00ec */ unsigned long WorkingSetPage;
  /* 0x00f0 */ struct _FAST_MUTEX AddressCreationLock;
  /* 0x0110 */ unsigned long HyperSpaceLock;
  /* 0x0114 */ struct _ETHREAD* ForkInProgress;
  /* 0x0118 */ unsigned long HardwareTrigger;
  /* 0x011c */ void* VadRoot;
  /* 0x0120 */ void* VadHint;
  /* 0x0124 */ void* CloneRoot;
  /* 0x0128 */ unsigned long NumberOfPrivatePages;
  /* 0x012c */ unsigned long NumberOfLockedPages;
  /* 0x0130 */ void* Win32Process;
  /* 0x0134 */ struct _EJOB* Job;
  /* 0x0138 */ void* SectionObject;
  /* 0x013c */ void* SectionBaseAddress;
  /* 0x0140 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x0144 */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x0148 */ void* Win32WindowStation;
  /* 0x014c */ void* InheritedFromUniqueProcessId;
  /* 0x0150 */ void* LdtInformation;
  /* 0x0154 */ void* VadFreeHint;
  /* 0x0158 */ void* VdmObjects;
  /* 0x015c */ void* DeviceMap;
  /* 0x0160 */ struct _LIST_ENTRY PhysicalVadList;
  union
  {
    /* 0x0168 */ struct _HARDWARE_PTE_X86 PageDirectoryPte;
    /* 0x0168 */ unsigned __int64 Filler;
  }; /* size: 0x0008 */
  /* 0x0170 */ void* Session;
  /* 0x0174 */ unsigned char ImageFileName[16];
  /* 0x0184 */ struct _LIST_ENTRY JobLinks;
  /* 0x018c */ void* LockedPagesList;
  /* 0x0190 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0198 */ void* SecurityPort;
  /* 0x019c */ void* PaeTop;
  /* 0x01a0 */ unsigned long ActiveThreads;
  /* 0x01a4 */ unsigned long GrantedAccess;
  /* 0x01a8 */ unsigned long DefaultHardErrorProcessing;
  /* 0x01ac */ long LastThreadExitStatus;
  /* 0x01b0 */ struct _PEB* Peb;
  /* 0x01b4 */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x01b8 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x01c0 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x01c8 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x01d0 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x01d8 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x01e0 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x01e8 */ unsigned long CommitChargeLimit;
  /* 0x01ec */ unsigned long CommitChargePeak;
  /* 0x01f0 */ void* AweInfo;
  /* 0x01f4 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x01f8 */ struct _MMSUPPORT Vm;
  /* 0x0238 */ unsigned long LastFaultCount;
  /* 0x023c */ unsigned long ModifiedPageCount;
  /* 0x0240 */ unsigned long NumberOfVads;
  /* 0x0244 */ unsigned long JobStatus;
  union
  {
    /* 0x0248 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0248 */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x0248 */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x0248 */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x0248 */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x0248 */ unsigned long Wow64SplitPages : 1; /* bit position: 4 */
      /* 0x0248 */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x0248 */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x0248 */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x0248 */ unsigned long ForkFailed : 1; /* bit position: 8 */
      /* 0x0248 */ unsigned long HasPhysicalVad : 1; /* bit position: 9 */
      /* 0x0248 */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x0248 */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x0248 */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x0248 */ unsigned long SessionCreationUnderway : 1; /* bit position: 14 */
      /* 0x0248 */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x0248 */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x0248 */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x0248 */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x0248 */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x0248 */ unsigned long InjectInpageErrors : 1; /* bit position: 20 */
      /* 0x0248 */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x0248 */ unsigned long Unused3 : 1; /* bit position: 22 */
      /* 0x0248 */ unsigned long Unused4 : 1; /* bit position: 23 */
      /* 0x0248 */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x0248 */ unsigned long Unused : 5; /* bit position: 25 */
      /* 0x0248 */ unsigned long Unused1 : 1; /* bit position: 30 */
      /* 0x0248 */ unsigned long Unused2 : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x024c */ long ExitStatus;
  /* 0x0250 */ unsigned short NextPageColor;
  union
  {
    struct
    {
      /* 0x0252 */ unsigned char SubSystemMinorVersion;
      /* 0x0253 */ unsigned char SubSystemMajorVersion;
    }; /* size: 0x0002 */
    /* 0x0252 */ unsigned short SubSystemVersion;
  }; /* size: 0x0002 */
  /* 0x0254 */ unsigned char PriorityClass;
  /* 0x0255 */ unsigned char WorkingSetAcquiredUnsafe;
  /* 0x0258 */ unsigned long Cookie;
  /* 0x025c */ long __PADDING__[1];
} EPROCESS, *PEPROCESS; /* size: 0x0260 */

