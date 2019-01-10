typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Cr0NpxState;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _DESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad;
  /* 0x0002 */ unsigned short Limit;
  /* 0x0004 */ unsigned long Base;
} DESCRIPTOR, *PDESCRIPTOR; /* size: 0x0008 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned long Cr0;
  /* 0x0004 */ unsigned long Cr2;
  /* 0x0008 */ unsigned long Cr3;
  /* 0x000c */ unsigned long Cr4;
  /* 0x0010 */ unsigned long KernelDr0;
  /* 0x0014 */ unsigned long KernelDr1;
  /* 0x0018 */ unsigned long KernelDr2;
  /* 0x001c */ unsigned long KernelDr3;
  /* 0x0020 */ unsigned long KernelDr6;
  /* 0x0024 */ unsigned long KernelDr7;
  /* 0x0028 */ struct _DESCRIPTOR Gdtr;
  /* 0x0030 */ struct _DESCRIPTOR Idtr;
  /* 0x0038 */ unsigned short Tr;
  /* 0x003a */ unsigned short Ldtr;
  /* 0x003c */ unsigned long Reserved[6];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x0054 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _CONTEXT ContextFrame;
  /* 0x02cc */ struct _KSPECIAL_REGISTERS SpecialRegisters;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x0320 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0004 */ unsigned long* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0008 */

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

typedef struct _PP_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE* P;
  /* 0x0004 */ struct _GENERAL_LOOKASIDE* L;
} PP_LOOKASIDE_LIST, *PPP_LOOKASIDE_LIST; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0048 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _LIST_ENTRY DpcListHead;
  /* 0x0008 */ unsigned long DpcLock;
  /* 0x000c */ volatile long DpcQueueDepth;
  /* 0x0010 */ unsigned long DpcCount;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0014 */

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
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0010 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER_TABLE_ENTRY
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ struct _LIST_ENTRY Entry;
  /* 0x0010 */ union _ULARGE_INTEGER Time;
} KTIMER_TABLE_ENTRY, *PKTIMER_TABLE_ENTRY; /* size: 0x0018 */

typedef struct _KTIMER_TABLE
{
  /* 0x0000 */ struct _KTIMER* TimerExpiry[16];
  /* 0x0040 */ struct _KTIMER_TABLE_ENTRY TimerEntries[256];
} KTIMER_TABLE, *PKTIMER_TABLE; /* size: 0x1840 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
} PROC_HYPERVISOR_STATE, *PPROC_HYPERVISOR_STATE;

typedef struct _PPM_FFH_THROTTLE_STATE_INFO
{
  /* 0x0000 */ unsigned char EnableLogging;
  /* 0x0004 */ unsigned long MismatchCount;
  /* 0x0008 */ unsigned char Initialized;
  /* 0x0010 */ unsigned __int64 LastValue;
  /* 0x0018 */ union _LARGE_INTEGER LastLogTickCount;
} PPM_FFH_THROTTLE_STATE_INFO, *PPPM_FFH_THROTTLE_STATE_INFO; /* size: 0x0020 */

typedef struct _PROC_IDLE_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Idle;
} PROC_IDLE_SNAP, *PPROC_IDLE_SNAP; /* size: 0x0010 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ unsigned __int64 IdleTimeLast;
  /* 0x0010 */ unsigned __int64 IdleTimeTotal;
  /* 0x0018 */ unsigned __int64 IdleTimeEntry;
  /* 0x0020 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0024 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x0028 */ unsigned long PerfHistoryTotal;
  /* 0x002c */ unsigned char ThermalConstraint;
  /* 0x002d */ unsigned char PerfHistoryCount;
  /* 0x002e */ unsigned char PerfHistorySlot;
  /* 0x002f */ unsigned char Reserved;
  /* 0x0030 */ unsigned long LastSysTime;
  /* 0x0034 */ unsigned long WmiDispatchPtr;
  /* 0x0038 */ long WmiInterfaceEnabled;
  /* 0x0040 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0060 */ struct _KDPC PerfActionDpc;
  /* 0x0080 */ volatile long PerfActionMask;
  /* 0x0088 */ struct _PROC_IDLE_SNAP IdleCheck;
  /* 0x0098 */ struct _PROC_IDLE_SNAP PerfCheck;
  /* 0x00a8 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x00ac */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x00b0 */ struct _PROC_PERF_LOAD* Load;
  /* 0x00b4 */ struct _PROC_HISTORY_ENTRY* PerfHistory;
  /* 0x00b8 */ unsigned long Utility;
  /* 0x00bc */ unsigned long OverUtilizedHistory;
  /* 0x00c0 */ volatile unsigned long AffinityCount;
  /* 0x00c4 */ unsigned long AffinityHistory;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x00c8 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef enum _PROCESSOR_CACHE_TYPE
{
  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3,
} PROCESSOR_CACHE_TYPE, *PPROCESSOR_CACHE_TYPE;

typedef struct _CACHE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char Associativity;
  /* 0x0002 */ unsigned short LineSize;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR; /* size: 0x000c */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned short MinorVersion;
  /* 0x0002 */ unsigned short MajorVersion;
  /* 0x0004 */ struct _KTHREAD* CurrentThread;
  /* 0x0008 */ struct _KTHREAD* NextThread;
  /* 0x000c */ struct _KTHREAD* IdleThread;
  /* 0x0010 */ unsigned char LegacyNumber;
  /* 0x0011 */ unsigned char NestingLevel;
  /* 0x0012 */ unsigned short BuildType;
  /* 0x0014 */ char CpuType;
  /* 0x0015 */ char CpuID;
  union
  {
    /* 0x0016 */ unsigned short CpuStep;
    struct
    {
      /* 0x0016 */ unsigned char CpuStepping;
      /* 0x0017 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0018 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x0338 */ unsigned long KernelReserved[16];
  /* 0x0378 */ unsigned long HalReserved[16];
  /* 0x03b8 */ unsigned long CFlushSize;
  /* 0x03bc */ unsigned char CoresPerPhysicalProcessor;
  /* 0x03bd */ unsigned char LogicalProcessorsPerCore;
  /* 0x03be */ unsigned char PrcbPad0[2];
  /* 0x03c0 */ unsigned long MHz;
  /* 0x03c4 */ unsigned char CpuVendor;
  /* 0x03c5 */ unsigned char GroupIndex;
  /* 0x03c6 */ unsigned short Group;
  /* 0x03c8 */ unsigned long GroupSetMember;
  /* 0x03cc */ unsigned long Number;
  /* 0x03d0 */ unsigned char PrcbPad1[72];
  /* 0x0418 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
  /* 0x04a0 */ struct _KTHREAD* NpxThread;
  /* 0x04a4 */ unsigned long InterruptCount;
  /* 0x04a8 */ unsigned long KernelTime;
  /* 0x04ac */ unsigned long UserTime;
  /* 0x04b0 */ unsigned long DpcTime;
  /* 0x04b4 */ unsigned long DpcTimeCount;
  /* 0x04b8 */ unsigned long InterruptTime;
  /* 0x04bc */ unsigned long AdjustDpcThreshold;
  /* 0x04c0 */ unsigned long PageColor;
  /* 0x04c4 */ unsigned char DebuggerSavedIRQL;
  /* 0x04c5 */ unsigned char NodeColor;
  /* 0x04c6 */ unsigned char PrcbPad20[2];
  /* 0x04c8 */ unsigned long NodeShiftedColor;
  /* 0x04cc */ struct _KNODE* ParentNode;
  /* 0x04d0 */ unsigned long SecondaryColorMask;
  /* 0x04d4 */ unsigned long DpcTimeLimit;
  /* 0x04d8 */ unsigned long PrcbPad21[2];
  /* 0x04e0 */ unsigned long CcFastReadNoWait;
  /* 0x04e4 */ unsigned long CcFastReadWait;
  /* 0x04e8 */ unsigned long CcFastReadNotPossible;
  /* 0x04ec */ unsigned long CcCopyReadNoWait;
  /* 0x04f0 */ unsigned long CcCopyReadWait;
  /* 0x04f4 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x04f8 */ volatile long MmSpinLockOrdering;
  /* 0x04fc */ volatile long IoReadOperationCount;
  /* 0x0500 */ volatile long IoWriteOperationCount;
  /* 0x0504 */ volatile long IoOtherOperationCount;
  /* 0x0508 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x0510 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x0518 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x0520 */ unsigned long CcFastMdlReadNoWait;
  /* 0x0524 */ unsigned long CcFastMdlReadWait;
  /* 0x0528 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x052c */ unsigned long CcMapDataNoWait;
  /* 0x0530 */ unsigned long CcMapDataWait;
  /* 0x0534 */ unsigned long CcPinMappedDataCount;
  /* 0x0538 */ unsigned long CcPinReadNoWait;
  /* 0x053c */ unsigned long CcPinReadWait;
  /* 0x0540 */ unsigned long CcMdlReadNoWait;
  /* 0x0544 */ unsigned long CcMdlReadWait;
  /* 0x0548 */ unsigned long CcLazyWriteHotSpots;
  /* 0x054c */ unsigned long CcLazyWriteIos;
  /* 0x0550 */ unsigned long CcLazyWritePages;
  /* 0x0554 */ unsigned long CcDataFlushes;
  /* 0x0558 */ unsigned long CcDataPages;
  /* 0x055c */ unsigned long CcLostDelayedWrites;
  /* 0x0560 */ unsigned long CcFastReadResourceMiss;
  /* 0x0564 */ unsigned long CcCopyReadWaitMiss;
  /* 0x0568 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x056c */ unsigned long CcMapDataNoWaitMiss;
  /* 0x0570 */ unsigned long CcMapDataWaitMiss;
  /* 0x0574 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x0578 */ unsigned long CcPinReadWaitMiss;
  /* 0x057c */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x0580 */ unsigned long CcMdlReadWaitMiss;
  /* 0x0584 */ unsigned long CcReadAheadIos;
  /* 0x0588 */ unsigned long KeAlignmentFixupCount;
  /* 0x058c */ unsigned long KeExceptionDispatchCount;
  /* 0x0590 */ unsigned long KeSystemCalls;
  /* 0x0594 */ unsigned long AvailableTime;
  /* 0x0598 */ unsigned long PrcbPad22[2];
  /* 0x05a0 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x0620 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x0f20 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x1820 */ volatile unsigned long PacketBarrier;
  /* 0x1824 */ volatile long ReverseStall;
  /* 0x1828 */ void* IpiFrame;
  /* 0x182c */ unsigned char PrcbPad3[52];
  /* 0x1860 */ void* volatile CurrentPacket[3];
  /* 0x186c */ volatile unsigned long TargetSet;
  /* 0x1870 */ void* volatile WorkerRoutine /* function */;
  /* 0x1874 */ volatile unsigned long IpiFrozen;
  /* 0x1878 */ unsigned char PrcbPad4[40];
  /* 0x18a0 */ volatile unsigned long RequestSummary;
  /* 0x18a4 */ struct _KPRCB* volatile SignalDone;
  /* 0x18a8 */ unsigned char PrcbPad50[56];
  /* 0x18e0 */ struct _KDPC_DATA DpcData[2];
  /* 0x1908 */ void* DpcStack;
  /* 0x190c */ long MaximumDpcQueueDepth;
  /* 0x1910 */ unsigned long DpcRequestRate;
  /* 0x1914 */ unsigned long MinimumDpcRate;
  /* 0x1918 */ unsigned long DpcLastCount;
  /* 0x191c */ unsigned long PrcbLock;
  /* 0x1920 */ struct _KGATE DpcGate;
  /* 0x1930 */ unsigned char ThreadDpcEnable;
  /* 0x1931 */ volatile unsigned char QuantumEnd;
  /* 0x1932 */ volatile unsigned char DpcRoutineActive;
  /* 0x1933 */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x1934 */ volatile long DpcRequestSummary;
    /* 0x1934 */ short DpcRequestSlot[2];
    struct
    {
      /* 0x1934 */ short NormalDpcState;
      union
      {
        /* 0x1936 */ volatile unsigned short DpcThreadActive : 1; /* bit position: 0 */
        /* 0x1936 */ short ThreadDpcState;
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x1938 */ volatile unsigned long TimerHand;
  /* 0x193c */ unsigned long LastTick;
  /* 0x1940 */ long MasterOffset;
  /* 0x1944 */ unsigned long PrcbPad41[2];
  /* 0x194c */ unsigned long PeriodicCount;
  /* 0x1950 */ unsigned long PeriodicBias;
  /* 0x1958 */ unsigned __int64 TickOffset;
  /* 0x1960 */ struct _KTIMER_TABLE TimerTable;
  /* 0x31a0 */ struct _KDPC CallDpc;
  /* 0x31c0 */ long ClockKeepAlive;
  /* 0x31c4 */ unsigned char ClockCheckSlot;
  /* 0x31c5 */ unsigned char ClockPollCycle;
  /* 0x31c6 */ unsigned char PrcbPad6[2];
  /* 0x31c8 */ long DpcWatchdogPeriod;
  /* 0x31cc */ long DpcWatchdogCount;
  /* 0x31d0 */ long ThreadWatchdogPeriod;
  /* 0x31d4 */ long ThreadWatchdogCount;
  /* 0x31d8 */ volatile long KeSpinLockOrdering;
  /* 0x31dc */ unsigned long PrcbPad70[1];
  /* 0x31e0 */ struct _LIST_ENTRY WaitListHead;
  /* 0x31e8 */ unsigned long WaitLock;
  /* 0x31ec */ unsigned long ReadySummary;
  /* 0x31f0 */ unsigned long QueueIndex;
  /* 0x31f4 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x31f8 */ unsigned __int64 StartCycles;
  /* 0x3200 */ volatile unsigned __int64 CycleTime;
  /* 0x3208 */ volatile unsigned long HighCycleTime;
  /* 0x320c */ unsigned long PrcbPad71;
  /* 0x3210 */ unsigned __int64 PrcbPad72[2];
  /* 0x3220 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x3320 */ void* ChainedInterruptList;
  /* 0x3324 */ long LookasideIrpFloat;
  /* 0x3328 */ volatile long MmPageFaultCount;
  /* 0x332c */ volatile long MmCopyOnWriteCount;
  /* 0x3330 */ volatile long MmTransitionCount;
  /* 0x3334 */ volatile long MmCacheTransitionCount;
  /* 0x3338 */ volatile long MmDemandZeroCount;
  /* 0x333c */ volatile long MmPageReadCount;
  /* 0x3340 */ volatile long MmPageReadIoCount;
  /* 0x3344 */ volatile long MmCacheReadCount;
  /* 0x3348 */ volatile long MmCacheIoCount;
  /* 0x334c */ volatile long MmDirtyPagesWriteCount;
  /* 0x3350 */ volatile long MmDirtyWriteIoCount;
  /* 0x3354 */ volatile long MmMappedPagesWriteCount;
  /* 0x3358 */ volatile long MmMappedWriteIoCount;
  /* 0x335c */ volatile unsigned long CachedCommit;
  /* 0x3360 */ volatile unsigned long CachedResidentAvailable;
  /* 0x3364 */ void* HyperPte;
  /* 0x3368 */ unsigned char PrcbPad8[4];
  /* 0x336c */ unsigned char VendorString[13];
  /* 0x3379 */ unsigned char InitialApicId;
  /* 0x337a */ unsigned char LogicalProcessorsPerPhysicalProcessor;
  /* 0x337b */ unsigned char PrcbPad9[5];
  /* 0x3380 */ unsigned long FeatureBits;
  /* 0x3388 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x3390 */ volatile unsigned __int64 IsrTime;
  /* 0x3398 */ unsigned __int64 RuntimeAccumulation;
  /* 0x33a0 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x3468 */ struct _KDPC DpcWatchdogDpc;
  /* 0x3488 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x34b0 */ void* WheaInfo;
  /* 0x34b4 */ void* EtwSupport;
  /* 0x34b8 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x34c0 */ union _SLIST_HEADER HypercallPageList;
  /* 0x34c8 */ void* HypercallPageVirtual;
  /* 0x34cc */ void* VirtualApicAssist;
  /* 0x34d0 */ unsigned __int64* StatisticsPage;
  /* 0x34d4 */ void* RateControl;
  /* 0x34d8 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x3514 */ unsigned long CacheCount;
  /* 0x3518 */ unsigned long CacheProcessorMask[5];
  /* 0x352c */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x3538 */ unsigned long PrcbPad91[1];
  /* 0x353c */ unsigned long CoreProcessorSet;
  /* 0x3540 */ struct _KDPC TimerExpirationDpc;
  /* 0x3560 */ unsigned long SpinLockAcquireCount;
  /* 0x3564 */ unsigned long SpinLockContentionCount;
  /* 0x3568 */ unsigned long SpinLockSpinCount;
  /* 0x356c */ unsigned long IpiSendRequestBroadcastCount;
  /* 0x3570 */ unsigned long IpiSendRequestRoutineCount;
  /* 0x3574 */ unsigned long IpiSendSoftwareInterruptCount;
  /* 0x3578 */ unsigned long ExInitializeResourceCount;
  /* 0x357c */ unsigned long ExReInitializeResourceCount;
  /* 0x3580 */ unsigned long ExDeleteResourceCount;
  /* 0x3584 */ unsigned long ExecutiveResourceAcquiresCount;
  /* 0x3588 */ unsigned long ExecutiveResourceContentionsCount;
  /* 0x358c */ unsigned long ExecutiveResourceReleaseExclusiveCount;
  /* 0x3590 */ unsigned long ExecutiveResourceReleaseSharedCount;
  /* 0x3594 */ unsigned long ExecutiveResourceConvertsCount;
  /* 0x3598 */ unsigned long ExAcqResExclusiveAttempts;
  /* 0x359c */ unsigned long ExAcqResExclusiveAcquiresExclusive;
  /* 0x35a0 */ unsigned long ExAcqResExclusiveAcquiresExclusiveRecursive;
  /* 0x35a4 */ unsigned long ExAcqResExclusiveWaits;
  /* 0x35a8 */ unsigned long ExAcqResExclusiveNotAcquires;
  /* 0x35ac */ unsigned long ExAcqResSharedAttempts;
  /* 0x35b0 */ unsigned long ExAcqResSharedAcquiresExclusive;
  /* 0x35b4 */ unsigned long ExAcqResSharedAcquiresShared;
  /* 0x35b8 */ unsigned long ExAcqResSharedAcquiresSharedRecursive;
  /* 0x35bc */ unsigned long ExAcqResSharedWaits;
  /* 0x35c0 */ unsigned long ExAcqResSharedNotAcquires;
  /* 0x35c4 */ unsigned long ExAcqResSharedStarveExclusiveAttempts;
  /* 0x35c8 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresExclusive;
  /* 0x35cc */ unsigned long ExAcqResSharedStarveExclusiveAcquiresShared;
  /* 0x35d0 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
  /* 0x35d4 */ unsigned long ExAcqResSharedStarveExclusiveWaits;
  /* 0x35d8 */ unsigned long ExAcqResSharedStarveExclusiveNotAcquires;
  /* 0x35dc */ unsigned long ExAcqResSharedWaitForExclusiveAttempts;
  /* 0x35e0 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresExclusive;
  /* 0x35e4 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresShared;
  /* 0x35e8 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
  /* 0x35ec */ unsigned long ExAcqResSharedWaitForExclusiveWaits;
  /* 0x35f0 */ unsigned long ExAcqResSharedWaitForExclusiveNotAcquires;
  /* 0x35f4 */ unsigned long ExSetResOwnerPointerExclusive;
  /* 0x35f8 */ unsigned long ExSetResOwnerPointerSharedNew;
  /* 0x35fc */ unsigned long ExSetResOwnerPointerSharedOld;
  /* 0x3600 */ unsigned long ExTryToAcqExclusiveAttempts;
  /* 0x3604 */ unsigned long ExTryToAcqExclusiveAcquires;
  /* 0x3608 */ unsigned long ExBoostExclusiveOwner;
  /* 0x360c */ unsigned long ExBoostSharedOwners;
  /* 0x3610 */ unsigned long ExEtwSynchTrackingNotificationsCount;
  /* 0x3614 */ unsigned long ExEtwSynchTrackingNotificationsAccountedCount;
  /* 0x3618 */ struct _CONTEXT* Context;
  /* 0x361c */ unsigned long ContextFlags;
  /* 0x3620 */ struct _XSAVE_AREA* ExtendedState;
  /* 0x3624 */ long __PADDING__[1];
} KPRCB, *PKPRCB; /* size: 0x3628 */

