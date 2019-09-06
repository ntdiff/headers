typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0004 */ void* StackBase;
  /* 0x0008 */ void* StackLimit;
  /* 0x000c */ void* SubSystemTib;
  union
  {
    /* 0x0010 */ void* FiberData;
    /* 0x0010 */ unsigned long Version;
  }; /* size: 0x0004 */
  /* 0x0014 */ void* ArbitraryUserPointer;
  /* 0x0018 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x001c */

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
  /* 0x006c */ unsigned long Spare0;
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
  /* 0x003c */ unsigned __int64 Xcr0;
  /* 0x0044 */ unsigned long ExceptionList;
  /* 0x0048 */ unsigned long Reserved[3];
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

typedef union _KPRCBFLAG
{
  union
  {
    /* 0x0000 */ volatile long PrcbFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BamQosLevel : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingQosUpdate : 2; /* bit position: 8 */
      /* 0x0000 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long PrcbFlagsReserved : 21; /* bit position: 11 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KPRCBFLAG, *PKPRCBFLAG; /* size: 0x0004 */

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
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
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

typedef struct _KDPC_LIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListHead;
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY* LastEntry;
} KDPC_LIST, *PKDPC_LIST; /* size: 0x0008 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _KDPC_LIST DpcList;
  /* 0x0008 */ unsigned long DpcLock;
  /* 0x000c */ volatile long DpcQueueDepth;
  /* 0x0010 */ unsigned long DpcCount;
  /* 0x0014 */ struct _KDPC* volatile ActiveDpc;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0018 */

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

typedef struct _KTIMER_TABLE_STATE
{
  /* 0x0000 */ unsigned __int64 LastTimerExpiration[1];
  /* 0x0008 */ unsigned long LastTimerHand[1];
  /* 0x000c */ long __PADDING__[1];
} KTIMER_TABLE_STATE, *PKTIMER_TABLE_STATE; /* size: 0x0010 */

typedef struct _KTIMER_TABLE
{
  /* 0x0000 */ struct _KTIMER* TimerExpiry[16];
  /* 0x0040 */ struct _KTIMER_TABLE_ENTRY TimerEntries[256][1];
  /* 0x1840 */ struct _KTIMER_TABLE_STATE TableState;
} KTIMER_TABLE, *PKTIMER_TABLE; /* size: 0x1850 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _PROC_IDLE_POLICY
{
  /* 0x0000 */ unsigned char PromotePercent;
  /* 0x0001 */ unsigned char DemotePercent;
  /* 0x0002 */ unsigned char PromotePercentBase;
  /* 0x0003 */ unsigned char DemotePercentBase;
  /* 0x0004 */ unsigned char AllowScaling;
  /* 0x0005 */ unsigned char ForceLightIdle;
} PROC_IDLE_POLICY, *PPROC_IDLE_POLICY; /* size: 0x0006 */

typedef union _PPM_IDLE_SYNCHRONIZATION_STATE
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ long RefCount : 24; /* bit position: 0 */
      /* 0x0000 */ unsigned long State : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_IDLE_SYNCHRONIZATION_STATE, *PPPM_IDLE_SYNCHRONIZATION_STATE; /* size: 0x0004 */

typedef struct _PROC_FEEDBACK
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0008 */ unsigned __int64 CyclesLast;
  /* 0x0010 */ unsigned __int64 CyclesActive;
  /* 0x0018 */ struct _PROC_FEEDBACK_COUNTER* Counters[2];
  /* 0x0020 */ unsigned __int64 LastUpdateTime;
  /* 0x0028 */ unsigned __int64 UnscaledTime;
  /* 0x0030 */ volatile __int64 UnaccountedTime;
  /* 0x0038 */ unsigned __int64 ScaledTime[2];
  /* 0x0048 */ unsigned __int64 UnaccountedKernelTime;
  /* 0x0050 */ unsigned __int64 PerformanceScaledKernelTime;
  /* 0x0058 */ unsigned long UserTimeLast;
  /* 0x005c */ unsigned long KernelTimeLast;
  /* 0x0060 */ unsigned __int64 IdleGenerationNumberLast;
  /* 0x0068 */ unsigned __int64 HvActiveTimeLast;
  /* 0x0070 */ unsigned __int64 StallCyclesLast;
  /* 0x0078 */ unsigned __int64 StallTime;
  /* 0x0080 */ unsigned char KernelTimesIndex;
  /* 0x0081 */ unsigned char CounterDiscardsIdleTime;
  /* 0x0082 */ char __PADDING__[6];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0088 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
  ProcHypervisorHvCounters = 3,
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

typedef enum _KHETERO_CPU_QOS
{
  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDeadline = 4,
  KHeteroCpuQosDynamic = 5,
  KHeteroCpuQosMax = 5,
} KHETERO_CPU_QOS, *PKHETERO_CPU_QOS;

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0004 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0008 */ unsigned __int64 IdleTimeLast;
  /* 0x0010 */ unsigned __int64 IdleTimeTotal;
  /* 0x0018 */ volatile unsigned __int64 IdleTimeEntry;
  /* 0x0020 */ unsigned __int64 IdleTimeExpiration;
  /* 0x0028 */ unsigned char NonInterruptibleTransition;
  /* 0x0029 */ unsigned char PepWokenTransition;
  /* 0x002a */ unsigned char HvTargetState;
  /* 0x002b */ unsigned char SoftParked;
  /* 0x002c */ unsigned long TargetIdleState;
  /* 0x0030 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0038 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0040 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00c8 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00cc */ unsigned long LastSysTime;
  /* 0x00d0 */ unsigned long WmiDispatchPtr;
  /* 0x00d4 */ long WmiInterfaceEnabled;
  /* 0x00d8 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x00f8 */ struct _KDPC PerfActionDpc;
  /* 0x0118 */ volatile long PerfActionMask;
  /* 0x0120 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0130 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0134 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0138 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x013c */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x0140 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x0144 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0148 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x014c */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x014d */ unsigned char PerformanceSchedulingClass;
  /* 0x014e */ unsigned char EfficiencySchedulingClass;
  /* 0x014f */ unsigned char GuaranteedPerformancePercent;
  /* 0x0150 */ unsigned char Parked;
  /* 0x0151 */ unsigned char LongPriorQosPeriod;
  /* 0x0152 */ unsigned short LatestAffinitizedPercent;
  /* 0x0154 */ unsigned long LatestPerformancePercent;
  /* 0x0158 */ unsigned long AveragePerformancePercent;
  /* 0x015c */ unsigned long RelativePerformance;
  /* 0x0160 */ unsigned long Utility;
  /* 0x0164 */ unsigned long AffinitizedUtility;
  /* 0x0168 */ unsigned long MediaUtility;
  union
  {
    /* 0x0170 */ unsigned __int64 SnapTimeLast;
    /* 0x0170 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x0178 */ unsigned __int64 ActiveTime;
  /* 0x0180 */ unsigned __int64 TotalTime;
  /* 0x0188 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x0190 */ unsigned __int64 LastQosTranstionTsc;
  /* 0x0198 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x01a0 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x01a4 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x01a8 */ unsigned short QosEquivalencyMask;
  /* 0x01aa */ unsigned short HwFeedbackTableIndex;
  /* 0x01ac */ unsigned char HwFeedbackParkHint;
  /* 0x01ad */ unsigned char HwFeedbackPerformanceClass;
  /* 0x01ae */ unsigned char HwFeedbackEfficiencyClass;
  /* 0x01af */ unsigned char HeteroCoreType;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x01b0 */

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

typedef struct _SYNCH_COUNTERS
{
  /* 0x0000 */ unsigned long SpinLockAcquireCount;
  /* 0x0004 */ unsigned long SpinLockContentionCount;
  /* 0x0008 */ unsigned long SpinLockSpinCount;
  /* 0x000c */ unsigned long IpiSendRequestBroadcastCount;
  /* 0x0010 */ unsigned long IpiSendRequestRoutineCount;
  /* 0x0014 */ unsigned long IpiSendSoftwareInterruptCount;
  /* 0x0018 */ unsigned long ExInitializeResourceCount;
  /* 0x001c */ unsigned long ExReInitializeResourceCount;
  /* 0x0020 */ unsigned long ExDeleteResourceCount;
  /* 0x0024 */ unsigned long ExecutiveResourceAcquiresCount;
  /* 0x0028 */ unsigned long ExecutiveResourceContentionsCount;
  /* 0x002c */ unsigned long ExecutiveResourceReleaseExclusiveCount;
  /* 0x0030 */ unsigned long ExecutiveResourceReleaseSharedCount;
  /* 0x0034 */ unsigned long ExecutiveResourceConvertsCount;
  /* 0x0038 */ unsigned long ExAcqResExclusiveAttempts;
  /* 0x003c */ unsigned long ExAcqResExclusiveAcquiresExclusive;
  /* 0x0040 */ unsigned long ExAcqResExclusiveAcquiresExclusiveRecursive;
  /* 0x0044 */ unsigned long ExAcqResExclusiveWaits;
  /* 0x0048 */ unsigned long ExAcqResExclusiveNotAcquires;
  /* 0x004c */ unsigned long ExAcqResSharedAttempts;
  /* 0x0050 */ unsigned long ExAcqResSharedAcquiresExclusive;
  /* 0x0054 */ unsigned long ExAcqResSharedAcquiresShared;
  /* 0x0058 */ unsigned long ExAcqResSharedAcquiresSharedRecursive;
  /* 0x005c */ unsigned long ExAcqResSharedWaits;
  /* 0x0060 */ unsigned long ExAcqResSharedNotAcquires;
  /* 0x0064 */ unsigned long ExAcqResSharedStarveExclusiveAttempts;
  /* 0x0068 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresExclusive;
  /* 0x006c */ unsigned long ExAcqResSharedStarveExclusiveAcquiresShared;
  /* 0x0070 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
  /* 0x0074 */ unsigned long ExAcqResSharedStarveExclusiveWaits;
  /* 0x0078 */ unsigned long ExAcqResSharedStarveExclusiveNotAcquires;
  /* 0x007c */ unsigned long ExAcqResSharedWaitForExclusiveAttempts;
  /* 0x0080 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresExclusive;
  /* 0x0084 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresShared;
  /* 0x0088 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
  /* 0x008c */ unsigned long ExAcqResSharedWaitForExclusiveWaits;
  /* 0x0090 */ unsigned long ExAcqResSharedWaitForExclusiveNotAcquires;
  /* 0x0094 */ unsigned long ExSetResOwnerPointerExclusive;
  /* 0x0098 */ unsigned long ExSetResOwnerPointerSharedNew;
  /* 0x009c */ unsigned long ExSetResOwnerPointerSharedOld;
  /* 0x00a0 */ unsigned long ExTryToAcqExclusiveAttempts;
  /* 0x00a4 */ unsigned long ExTryToAcqExclusiveAcquires;
  /* 0x00a8 */ unsigned long ExBoostExclusiveOwner;
  /* 0x00ac */ unsigned long ExBoostSharedOwners;
  /* 0x00b0 */ unsigned long ExEtwSynchTrackingNotificationsCount;
  /* 0x00b4 */ unsigned long ExEtwSynchTrackingNotificationsAccountedCount;
} SYNCH_COUNTERS, *PSYNCH_COUNTERS; /* size: 0x00b8 */

typedef struct _FILESYSTEM_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 FsBytesRead;
  /* 0x0008 */ unsigned __int64 FsBytesWritten;
} FILESYSTEM_DISK_COUNTERS, *PFILESYSTEM_DISK_COUNTERS; /* size: 0x0010 */

typedef struct _KENTROPY_TIMING_STATE
{
  /* 0x0000 */ unsigned long EntropyCount;
  /* 0x0004 */ unsigned long Buffer[64];
  /* 0x0104 */ struct _KDPC Dpc;
  /* 0x0124 */ unsigned long LastDeliveredBuffer;
} KENTROPY_TIMING_STATE, *PKENTROPY_TIMING_STATE; /* size: 0x0128 */

typedef struct _IOP_IRP_STACK_PROFILER
{
  /* 0x0000 */ unsigned long Profile[20];
  /* 0x0050 */ unsigned long TotalIrps;
} IOP_IRP_STACK_PROFILER, *PIOP_IRP_STACK_PROFILER; /* size: 0x0054 */

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ unsigned long ReadySummary;
  /* 0x0008 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0108 */ char RunningSummary[32];
  /* 0x0128 */ unsigned char Span;
  /* 0x0129 */ unsigned char LowProcIndex;
  /* 0x012a */ unsigned char QueueIndex;
  /* 0x012b */ unsigned char ProcCount;
  /* 0x012c */ unsigned char ScanOwner;
  /* 0x012d */ unsigned char Spare[3];
  /* 0x0130 */ unsigned long Affinity;
  /* 0x0134 */ unsigned long ReadyThreadCount;
  /* 0x0138 */ unsigned __int64 ReadyQueueExpectedRunTime;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0140 */

typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x000c */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0010 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ struct _REQUEST_MAILBOX* Next;
  /* 0x0004 */ unsigned long RequestSummary;
  /* 0x0008 */ struct _KREQUEST_PACKET RequestPacket;
  /* 0x0018 */ volatile long* NodeTargetCountAddr;
  /* 0x001c */ volatile long NodeTargetCount;
} REQUEST_MAILBOX, *PREQUEST_MAILBOX; /* size: 0x0020 */

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
  /* 0x0338 */ struct _KNODE* ParentNode;
  /* 0x033c */ char* PriorityState;
  /* 0x0340 */ unsigned long KernelReserved[14];
  /* 0x0378 */ unsigned long HalReserved[16];
  /* 0x03b8 */ unsigned long CFlushSize;
  /* 0x03bc */ unsigned char CoresPerPhysicalProcessor;
  /* 0x03bd */ unsigned char LogicalProcessorsPerCore;
  /* 0x03be */ unsigned char CpuVendor;
  /* 0x03bf */ unsigned char PrcbPad0[1];
  /* 0x03c0 */ unsigned long MHz;
  /* 0x03c4 */ unsigned char GroupIndex;
  /* 0x03c5 */ unsigned char Group;
  /* 0x03c6 */ unsigned char PrcbPad05[2];
  /* 0x03c8 */ unsigned long GroupSetMember;
  /* 0x03cc */ unsigned long Number;
  /* 0x03d0 */ unsigned char ClockOwner;
  union
  {
    /* 0x03d1 */ unsigned char PendingTickFlags;
    struct /* bitfield */
    {
      /* 0x03d1 */ unsigned char PendingTick : 1; /* bit position: 0 */
      /* 0x03d1 */ unsigned char PendingBackupTick : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x03d2 */ unsigned char PrcbPad10[70];
  /* 0x0418 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
  /* 0x04a0 */ unsigned long InterruptCount;
  /* 0x04a4 */ unsigned long KernelTime;
  /* 0x04a8 */ unsigned long UserTime;
  /* 0x04ac */ unsigned long DpcTime;
  /* 0x04b0 */ unsigned long DpcTimeCount;
  /* 0x04b4 */ unsigned long InterruptTime;
  /* 0x04b8 */ unsigned long AdjustDpcThreshold;
  /* 0x04bc */ unsigned long PageColor;
  /* 0x04c0 */ unsigned char DebuggerSavedIRQL;
  /* 0x04c1 */ unsigned char NodeColor;
  /* 0x04c2 */ unsigned char DeepSleep;
  /* 0x04c3 */ unsigned char TbFlushListActive;
  /* 0x04c4 */ void* volatile CachedStack;
  /* 0x04c8 */ unsigned long NodeShiftedColor;
  /* 0x04cc */ unsigned long SecondaryColorMask;
  /* 0x04d0 */ unsigned long DpcTimeLimit;
  /* 0x04d4 */ void* MmInternal;
  /* 0x04d8 */ union _KPRCBFLAG PrcbFlags;
  /* 0x04dc */ void* SchedulerAssist;
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
  /* 0x0620 */ struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];
  /* 0x0f20 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x1820 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x2120 */ volatile long PacketBarrier;
  /* 0x2124 */ volatile long ReverseStall;
  /* 0x2128 */ void* IpiFrame;
  /* 0x212c */ unsigned char PrcbPad3[52];
  /* 0x2160 */ void* volatile CurrentPacket[3];
  /* 0x216c */ volatile unsigned long TargetSet;
  /* 0x2170 */ void* volatile WorkerRoutine /* function */;
  /* 0x2174 */ volatile unsigned long IpiFrozen;
  /* 0x2178 */ unsigned char PrcbPad4[40];
  /* 0x21a0 */ volatile unsigned long RequestSummary;
  /* 0x21a4 */ volatile long TargetCount;
  /* 0x21a8 */ unsigned __int64 PrcbPad94[1];
  /* 0x21b0 */ unsigned __int64 TrappedSecurityDomain;
  union
  {
    /* 0x21b8 */ unsigned char BpbState;
    struct /* bitfield */
    {
      /* 0x21b8 */ unsigned char BpbCpuIdle : 1; /* bit position: 0 */
      /* 0x21b8 */ unsigned char BpbFlushRsbOnTrap : 1; /* bit position: 1 */
      /* 0x21b8 */ unsigned char BpbIbpbOnReturn : 1; /* bit position: 2 */
      /* 0x21b8 */ unsigned char BpbIbpbOnTrap : 1; /* bit position: 3 */
      /* 0x21b8 */ unsigned char BpbReserved : 4; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  union
  {
    /* 0x21b9 */ unsigned char BpbFeatures;
    struct /* bitfield */
    {
      /* 0x21b9 */ unsigned char BpbClearOnIdle : 1; /* bit position: 0 */
      /* 0x21b9 */ unsigned char BpbEnabled : 1; /* bit position: 1 */
      /* 0x21b9 */ unsigned char BpbSmep : 1; /* bit position: 2 */
      /* 0x21b9 */ unsigned char BpbFeaturesReserved : 5; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x21ba */ unsigned char BpbCurrentSpecCtrl;
  /* 0x21bb */ unsigned char BpbKernelSpecCtrl;
  /* 0x21bc */ unsigned char BpbNmiSpecCtrl;
  /* 0x21bd */ unsigned char BpbUserSpecCtrl;
  /* 0x21be */ unsigned char PrcbPad49[2];
  /* 0x21c0 */ unsigned long ProcessorSignature;
  /* 0x21c4 */ unsigned long ProcessorFlags;
  /* 0x21c8 */ unsigned char PrcbPad50[8];
  /* 0x21d0 */ unsigned long InterruptLastCount;
  /* 0x21d4 */ unsigned long InterruptRate;
  /* 0x21d8 */ unsigned long DeviceInterrupts;
  /* 0x21dc */ void* IsrDpcStats;
  /* 0x21e0 */ struct _KDPC_DATA DpcData[2];
  /* 0x2210 */ void* DpcStack;
  /* 0x2214 */ long MaximumDpcQueueDepth;
  /* 0x2218 */ unsigned long DpcRequestRate;
  /* 0x221c */ unsigned long MinimumDpcRate;
  /* 0x2220 */ unsigned long DpcLastCount;
  /* 0x2224 */ unsigned long PrcbLock;
  /* 0x2228 */ struct _KGATE DpcGate;
  /* 0x2238 */ unsigned char IdleState;
  /* 0x2239 */ volatile unsigned char QuantumEnd;
  /* 0x223a */ volatile unsigned char DpcRoutineActive;
  /* 0x223b */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x223c */ volatile long DpcRequestSummary;
    /* 0x223c */ short DpcRequestSlot[2];
    struct
    {
      /* 0x223c */ short NormalDpcState;
      /* 0x223e */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x223c */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x223c */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x223c */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x223c */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x223c */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x223c */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x223c */ unsigned long DpcNormalSpare : 10; /* bit position: 6 */
      /* 0x223c */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x223c */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x223c */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x2240 */ unsigned long LastTick;
  /* 0x2244 */ unsigned long PeriodicCount;
  /* 0x2248 */ unsigned long PeriodicBias;
  /* 0x224c */ unsigned long ClockInterrupts;
  /* 0x2250 */ unsigned long ReadyScanTick;
  /* 0x2254 */ unsigned char GroupSchedulingOverQuota;
  /* 0x2255 */ unsigned char ThreadDpcEnable;
  /* 0x2256 */ unsigned char PrcbPad41[6];
  /* 0x2260 */ struct _KTIMER_TABLE TimerTable;
  /* 0x3ab0 */ unsigned long PrcbPad92[12];
  /* 0x3ae0 */ struct _KDPC CallDpc;
  /* 0x3b00 */ long ClockKeepAlive;
  /* 0x3b04 */ unsigned char PrcbPad6[4];
  /* 0x3b08 */ long DpcWatchdogPeriod;
  /* 0x3b0c */ long DpcWatchdogCount;
  /* 0x3b10 */ volatile long KeSpinLockOrdering;
  /* 0x3b14 */ unsigned long DpcWatchdogProfileCumulativeDpcThreshold;
  /* 0x3b18 */ unsigned long QueueIndex;
  /* 0x3b1c */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x3b20 */ unsigned long ReadySummary;
  /* 0x3b24 */ long AffinitizedSelectionMask;
  /* 0x3b28 */ unsigned long WaitLock;
  /* 0x3b2c */ struct _LIST_ENTRY WaitListHead;
  /* 0x3b34 */ unsigned long ScbOffset;
  /* 0x3b38 */ unsigned long ReadyThreadCount;
  /* 0x3b40 */ unsigned __int64 StartCycles;
  /* 0x3b48 */ unsigned __int64 TaggedCyclesStart;
  /* 0x3b50 */ unsigned __int64 TaggedCycles[3];
  /* 0x3b68 */ volatile unsigned __int64 CycleTime;
  /* 0x3b70 */ unsigned __int64 AffinitizedCycles;
  /* 0x3b78 */ unsigned __int64 ImportantCycles;
  /* 0x3b80 */ unsigned __int64 UnimportantCycles;
  /* 0x3b88 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x3b90 */ volatile unsigned long HighCycleTime;
  /* 0x3b98 */ unsigned __int64 Cycles[2][4];
  /* 0x3bd8 */ unsigned long PrcbPad71;
  /* 0x3bdc */ unsigned long DpcWatchdogSequenceNumber;
  /* 0x3be0 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x3ce0 */ void* ChainedInterruptList;
  /* 0x3ce4 */ long LookasideIrpFloat;
  /* 0x3ce8 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x3cf0 */ struct _LIST_ENTRY ScbList;
  /* 0x3cf8 */ volatile long MmPageFaultCount;
  /* 0x3cfc */ volatile long MmCopyOnWriteCount;
  /* 0x3d00 */ volatile long MmTransitionCount;
  /* 0x3d04 */ volatile long MmCacheTransitionCount;
  /* 0x3d08 */ volatile long MmDemandZeroCount;
  /* 0x3d0c */ volatile long MmPageReadCount;
  /* 0x3d10 */ volatile long MmPageReadIoCount;
  /* 0x3d14 */ volatile long MmCacheReadCount;
  /* 0x3d18 */ volatile long MmCacheIoCount;
  /* 0x3d1c */ volatile long MmDirtyPagesWriteCount;
  /* 0x3d20 */ volatile long MmDirtyWriteIoCount;
  /* 0x3d24 */ volatile long MmMappedPagesWriteCount;
  /* 0x3d28 */ volatile long MmMappedWriteIoCount;
  /* 0x3d2c */ volatile unsigned long CachedCommit;
  /* 0x3d30 */ volatile unsigned long CachedResidentAvailable;
  /* 0x3d34 */ void* HyperPte;
  /* 0x3d38 */ unsigned char PrcbPad8[4];
  /* 0x3d3c */ unsigned char VendorString[13];
  /* 0x3d49 */ unsigned char InitialApicId;
  /* 0x3d4a */ unsigned char LogicalProcessorsPerPhysicalProcessor;
  /* 0x3d4b */ unsigned char PrcbPad9[1];
  /* 0x3d50 */ unsigned __int64 FeatureBits;
  /* 0x3d58 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x3d60 */ volatile unsigned __int64 IsrTime;
  /* 0x3d68 */ unsigned __int64 GenerationTarget;
  /* 0x3d70 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x3f20 */ struct _KDPC ForceIdleDpc;
  /* 0x3f40 */ unsigned long PrcbPad91[13];
  /* 0x3f74 */ unsigned long DpcWatchdogProfileSingleDpcThreshold;
  /* 0x3f78 */ struct _KDPC DpcWatchdogDpc;
  /* 0x3f98 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x3fc0 */ union _SLIST_HEADER HypercallPageList;
  /* 0x3fc8 */ void* HypercallCachedPages;
  /* 0x3fcc */ void* VirtualApicAssist;
  /* 0x3fd0 */ unsigned __int64* StatisticsPage;
  /* 0x3fd4 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x4010 */ unsigned long CacheCount;
  /* 0x4014 */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x4020 */ unsigned long SharedReadyQueueMask;
  /* 0x4024 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x4028 */ unsigned long SharedQueueScanOwner;
  /* 0x402c */ unsigned long CoreProcessorSet;
  /* 0x4030 */ unsigned long ScanSiblingMask;
  /* 0x4034 */ unsigned long LLCMask;
  /* 0x4038 */ unsigned long CacheProcessorMask[5];
  /* 0x404c */ unsigned long ScanSiblingIndex;
  /* 0x4050 */ void* WheaInfo;
  /* 0x4054 */ void* EtwSupport;
  /* 0x4058 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x4060 */ void** DpcWatchdogProfile;
  /* 0x4064 */ void** DpcWatchdogProfileCurrentEmptyCapture;
  /* 0x4068 */ unsigned long PackageId;
  /* 0x406c */ unsigned long PteBitCache;
  /* 0x4070 */ unsigned long PteBitOffset;
  /* 0x4074 */ unsigned long PrcbPad93;
  /* 0x4078 */ struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
  /* 0x407c */ void* ProfileEventIndexAddress;
  /* 0x4080 */ struct _KDPC TimerExpirationDpc;
  /* 0x40a0 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x4158 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x4168 */ struct _CONTEXT* Context;
  /* 0x416c */ unsigned long ContextFlagsInit;
  /* 0x4170 */ struct _XSAVE_AREA* ExtendedState;
  /* 0x4174 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  /* 0x429c */ void* IsrStack;
  /* 0x42a0 */ struct _KINTERRUPT* VectorToInterruptObject[208];
  /* 0x45e0 */ struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
  /* 0x45e4 */ struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;
  /* 0x45e8 */ struct _KDPC AbDpc;
  /* 0x4608 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
  /* 0x465c */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
  /* 0x46b0 */ struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];
  /* 0x47b0 */ unsigned long TimerExpirationTraceCount;
  /* 0x47b4 */ void* ExSaPageArray;
  /* 0x47b8 */ struct _XSAVE_AREA_HEADER* ExtendedSupervisorState;
  /* 0x47bc */ unsigned long PrcbPad100[9];
  /* 0x47e0 */ struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;
  /* 0x4920 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x4924 */ unsigned char PrcbPad[1468];
  /* 0x4ee0 */ unsigned long KernelDirectoryTableBase;
  /* 0x4ee4 */ unsigned long EspBaseShadow;
  /* 0x4ee8 */ unsigned long UserEspShadow;
  /* 0x4eec */ unsigned long ShadowFlags;
  /* 0x4ef0 */ unsigned long UserDS;
  /* 0x4ef4 */ unsigned long UserES;
  /* 0x4ef8 */ unsigned long UserFS;
  /* 0x4efc */ void* EspIretd;
  /* 0x4f00 */ unsigned long RestoreSegOption;
  /* 0x4f04 */ unsigned long SavedEsi;
  /* 0x4f08 */ unsigned long PrcbShadowPad;
  /* 0x4f0c */ unsigned long TaskSwitchCount;
  /* 0x4f10 */ unsigned long DbgLogs[512];
  /* 0x5710 */ unsigned long DbgCount;
  /* 0x5714 */ unsigned long PrcbPadRemainingPage[499];
  /* 0x5ee0 */ struct _REQUEST_MAILBOX RequestMailbox[1];
} KPRCB, *PKPRCB; /* size: 0x5f00 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Used_ExceptionList;
      /* 0x0004 */ void* Used_StackBase;
      /* 0x0008 */ unsigned long MxCsr;
      /* 0x000c */ void* TssCopy;
      /* 0x0010 */ unsigned long ContextSwitches;
      /* 0x0014 */ unsigned long SetMemberCopy;
      /* 0x0018 */ void* Used_Self;
    }; /* size: 0x001c */
  }; /* size: 0x001c */
  /* 0x001c */ struct _KPCR* SelfPcr;
  /* 0x0020 */ struct _KPRCB* Prcb;
  /* 0x0024 */ unsigned char Irql;
  /* 0x0028 */ unsigned long IRR;
  /* 0x002c */ unsigned long IrrActive;
  /* 0x0030 */ unsigned long IDR;
  /* 0x0034 */ void* KdVersionBlock;
  /* 0x0038 */ struct _KIDTENTRY* IDT;
  /* 0x003c */ struct _KGDTENTRY* GDT;
  /* 0x0040 */ struct _KTSS* TSS;
  /* 0x0044 */ unsigned short MajorVersion;
  /* 0x0046 */ unsigned short MinorVersion;
  /* 0x0048 */ unsigned long SetMember;
  /* 0x004c */ unsigned long StallScaleFactor;
  /* 0x0050 */ unsigned char SpareUnused;
  /* 0x0051 */ unsigned char Number;
  /* 0x0052 */ unsigned char Spare0;
  /* 0x0053 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x0054 */ unsigned long VdmAlert;
  /* 0x0058 */ unsigned long KernelReserved[14];
  /* 0x0090 */ unsigned long SecondLevelCacheSize;
  /* 0x0094 */ unsigned long HalReserved[16];
  /* 0x00d4 */ unsigned long InterruptMode;
  /* 0x00d8 */ unsigned char Spare1;
  /* 0x00dc */ unsigned long KernelReserved2[17];
  /* 0x0120 */ struct _KPRCB PrcbData;
} KPCR, *PKPCR; /* size: 0x6020 */

