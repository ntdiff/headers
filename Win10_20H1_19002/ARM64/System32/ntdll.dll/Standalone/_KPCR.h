typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Elr_El1;
  /* 0x0008 */ unsigned int Spsr_El1;
  /* 0x0010 */ unsigned __int64 Tpidr_El0;
  /* 0x0018 */ unsigned __int64 Tpidrro_El0;
  /* 0x0020 */ unsigned __int64 Tpidr_El1;
  /* 0x0028 */ unsigned __int64 KernelBvr[8];
  /* 0x0068 */ unsigned long KernelBcr[8];
  /* 0x0088 */ unsigned __int64 KernelWvr[2];
  /* 0x0098 */ unsigned long KernelWcr[2];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00a0 */

typedef struct _KARM64_ARCH_STATE
{
  /* 0x0000 */ unsigned __int64 Midr_El1;
  /* 0x0008 */ unsigned __int64 Sctlr_El1;
  /* 0x0010 */ unsigned __int64 Actlr_El1;
  /* 0x0018 */ unsigned __int64 Cpacr_El1;
  /* 0x0020 */ unsigned __int64 Tcr_El1;
  /* 0x0028 */ unsigned __int64 Ttbr0_El1;
  /* 0x0030 */ unsigned __int64 Ttbr1_El1;
  /* 0x0038 */ unsigned __int64 Esr_El1;
  /* 0x0040 */ unsigned __int64 Far_El1;
  /* 0x0048 */ unsigned __int64 Pmcr_El0;
  /* 0x0050 */ unsigned __int64 Pmcntenset_El0;
  /* 0x0058 */ unsigned __int64 Pmccntr_El0;
  /* 0x0060 */ unsigned __int64 Pmxevcntr_El0[31];
  /* 0x0158 */ unsigned __int64 Pmxevtyper_El0[31];
  /* 0x0250 */ unsigned __int64 Pmovsclr_El0;
  /* 0x0258 */ unsigned __int64 Pmselr_El0;
  /* 0x0260 */ unsigned __int64 Pmuserenr_El0;
  /* 0x0268 */ unsigned __int64 Mair_El1;
  /* 0x0270 */ unsigned __int64 Vbar_El1;
} KARM64_ARCH_STATE, *PKARM64_ARCH_STATE; /* size: 0x0278 */

typedef union _ARM64_NT_NEON128
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Low;
      /* 0x0008 */ __int64 High;
    }; /* size: 0x0010 */
    /* 0x0000 */ double D[2];
    /* 0x0000 */ float S[4];
    /* 0x0000 */ unsigned short H[8];
    /* 0x0000 */ unsigned char B[16];
  }; /* size: 0x0010 */
} ARM64_NT_NEON128, *PARM64_NT_NEON128; /* size: 0x0010 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Cpsr;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 X0;
      /* 0x0010 */ unsigned __int64 X1;
      /* 0x0018 */ unsigned __int64 X2;
      /* 0x0020 */ unsigned __int64 X3;
      /* 0x0028 */ unsigned __int64 X4;
      /* 0x0030 */ unsigned __int64 X5;
      /* 0x0038 */ unsigned __int64 X6;
      /* 0x0040 */ unsigned __int64 X7;
      /* 0x0048 */ unsigned __int64 X8;
      /* 0x0050 */ unsigned __int64 X9;
      /* 0x0058 */ unsigned __int64 X10;
      /* 0x0060 */ unsigned __int64 X11;
      /* 0x0068 */ unsigned __int64 X12;
      /* 0x0070 */ unsigned __int64 X13;
      /* 0x0078 */ unsigned __int64 X14;
      /* 0x0080 */ unsigned __int64 X15;
      /* 0x0088 */ unsigned __int64 X16;
      /* 0x0090 */ unsigned __int64 X17;
      /* 0x0098 */ unsigned __int64 X18;
      /* 0x00a0 */ unsigned __int64 X19;
      /* 0x00a8 */ unsigned __int64 X20;
      /* 0x00b0 */ unsigned __int64 X21;
      /* 0x00b8 */ unsigned __int64 X22;
      /* 0x00c0 */ unsigned __int64 X23;
      /* 0x00c8 */ unsigned __int64 X24;
      /* 0x00d0 */ unsigned __int64 X25;
      /* 0x00d8 */ unsigned __int64 X26;
      /* 0x00e0 */ unsigned __int64 X27;
      /* 0x00e8 */ unsigned __int64 X28;
      /* 0x00f0 */ unsigned __int64 Fp;
      /* 0x00f8 */ unsigned __int64 Lr;
    }; /* size: 0x00f8 */
    /* 0x0008 */ unsigned __int64 X[31];
  }; /* size: 0x00f8 */
  /* 0x0100 */ unsigned __int64 Sp;
  /* 0x0108 */ unsigned __int64 Pc;
  /* 0x0110 */ union _ARM64_NT_NEON128 V[32];
  /* 0x0310 */ unsigned long Fpcr;
  /* 0x0314 */ unsigned long Fpsr;
  /* 0x0318 */ unsigned long Bcr[8];
  /* 0x0338 */ unsigned __int64 Bvr[8];
  /* 0x0378 */ unsigned long Wcr[2];
  /* 0x0380 */ unsigned __int64 Wvr[2];
} CONTEXT, *PCONTEXT; /* size: 0x0390 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00a0 */ struct _KARM64_ARCH_STATE ArchState;
  /* 0x0320 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x06b0 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0008 */ unsigned __int64* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0010 */

typedef struct _PP_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE* P;
  /* 0x0008 */ struct _GENERAL_LOOKASIDE* L;
} PP_LOOKASIDE_LIST, *PPP_LOOKASIDE_LIST; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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

typedef struct _KDPC_LIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListHead;
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY* LastEntry;
} KDPC_LIST, *PKDPC_LIST; /* size: 0x0010 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _KDPC_LIST DpcList;
  /* 0x0010 */ unsigned __int64 DpcLock;
  /* 0x0018 */ volatile long DpcQueueDepth;
  /* 0x001c */ unsigned long DpcCount;
  /* 0x0020 */ struct _KDPC* volatile ActiveDpc;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0028 */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

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
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _KENTROPY_TIMING_STATE
{
  /* 0x0000 */ unsigned long EntropyCount;
  /* 0x0004 */ unsigned long Buffer[64];
  /* 0x0108 */ struct _KDPC Dpc;
  /* 0x0148 */ unsigned long LastDeliveredBuffer;
  /* 0x014c */ long __PADDING__[1];
} KENTROPY_TIMING_STATE, *PKENTROPY_TIMING_STATE; /* size: 0x0150 */

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
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned __int64 CyclesLast;
  /* 0x0010 */ unsigned __int64 CyclesActive;
  /* 0x0018 */ struct _PROC_FEEDBACK_COUNTER* Counters[2];
  /* 0x0028 */ unsigned __int64 LastUpdateTime;
  /* 0x0030 */ unsigned __int64 UnscaledTime;
  /* 0x0038 */ volatile __int64 UnaccountedTime;
  /* 0x0040 */ unsigned __int64 ScaledTime[2];
  /* 0x0050 */ unsigned __int64 UnaccountedKernelTime;
  /* 0x0058 */ unsigned __int64 PerformanceScaledKernelTime;
  /* 0x0060 */ unsigned long UserTimeLast;
  /* 0x0064 */ unsigned long KernelTimeLast;
  /* 0x0068 */ unsigned __int64 IdleGenerationNumberLast;
  /* 0x0070 */ unsigned __int64 HvActiveTimeLast;
  /* 0x0078 */ unsigned char KernelTimesIndex;
  /* 0x0079 */ unsigned char CounterDiscardsIdleTime;
  /* 0x007a */ char __PADDING__[6];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0080 */

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
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ volatile unsigned __int64 IdleTimeEntry;
  /* 0x0028 */ unsigned __int64 IdleTimeExpiration;
  /* 0x0030 */ unsigned char NonInterruptibleTransition;
  /* 0x0031 */ unsigned char PepWokenTransition;
  /* 0x0032 */ unsigned char HvTargetState;
  /* 0x0033 */ unsigned char SoftParked;
  /* 0x0034 */ unsigned long TargetIdleState;
  /* 0x0038 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0040 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0048 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00c8 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00cc */ unsigned long LastSysTime;
  /* 0x00d0 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00d8 */ long WmiInterfaceEnabled;
  /* 0x00e0 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0100 */ struct _KDPC PerfActionDpc;
  /* 0x0140 */ volatile long PerfActionMask;
  /* 0x0148 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0150 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0158 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x0160 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x0168 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x0170 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0178 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0180 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x0181 */ unsigned char PerformanceSchedulingClass;
  /* 0x0182 */ unsigned char EfficiencySchedulingClass;
  /* 0x0183 */ unsigned char GuaranteedPerformancePercent;
  /* 0x0184 */ unsigned char Parked;
  /* 0x0185 */ unsigned char LongPriorQosPeriod;
  /* 0x0186 */ unsigned short LatestAffinitizedPercent;
  /* 0x0188 */ unsigned long LatestPerformancePercent;
  /* 0x018c */ unsigned long AveragePerformancePercent;
  /* 0x0190 */ unsigned long RelativePerformance;
  /* 0x0194 */ unsigned long Utility;
  /* 0x0198 */ unsigned long AffinitizedUtility;
  /* 0x019c */ unsigned long MediaUtility;
  union
  {
    /* 0x01a0 */ unsigned __int64 SnapTimeLast;
    /* 0x01a0 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01a8 */ unsigned __int64 ActiveTime;
  /* 0x01b0 */ unsigned __int64 TotalTime;
  /* 0x01b8 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x01c0 */ unsigned __int64 LastQosTranstionTsc;
  /* 0x01c8 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x01d0 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x01d4 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x01d8 */ unsigned short QosEquivalencyMask;
  /* 0x01da */ char __PADDING__[6];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x01e0 */

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

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ unsigned short Processor;
  /* 0x003a */ unsigned short TimerType;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

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

typedef struct _KTIMER_TABLE_ENTRY
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ struct _LIST_ENTRY Entry;
  /* 0x0018 */ union _ULARGE_INTEGER Time;
} KTIMER_TABLE_ENTRY, *PKTIMER_TABLE_ENTRY; /* size: 0x0020 */

typedef struct _KTIMER_TABLE_STATE
{
  /* 0x0000 */ unsigned __int64 LastTimerExpiration[2];
  /* 0x0010 */ unsigned long LastTimerHand[2];
} KTIMER_TABLE_STATE, *PKTIMER_TABLE_STATE; /* size: 0x0018 */

typedef struct _KTIMER_TABLE
{
  /* 0x0000 */ struct _KTIMER* TimerExpiry[64];
  /* 0x0200 */ struct _KTIMER_TABLE_ENTRY TimerEntries[256][2];
  /* 0x4200 */ struct _KTIMER_TABLE_STATE TableState;
} KTIMER_TABLE, *PKTIMER_TABLE; /* size: 0x4218 */

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

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0060 */

typedef struct _IOP_IRP_STACK_PROFILER
{
  /* 0x0000 */ unsigned long Profile[20];
  /* 0x0050 */ unsigned long TotalIrps;
} IOP_IRP_STACK_PROFILER, *PIOP_IRP_STACK_PROFILER; /* size: 0x0054 */

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned long ReadySummary;
  /* 0x0010 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0210 */ char RunningSummary[64];
  /* 0x0250 */ unsigned char Span;
  /* 0x0251 */ unsigned char LowProcIndex;
  /* 0x0252 */ unsigned char QueueIndex;
  /* 0x0253 */ unsigned char ProcCount;
  /* 0x0254 */ unsigned char ScanOwner;
  /* 0x0255 */ unsigned char Spare[3];
  /* 0x0258 */ unsigned __int64 Affinity;
  /* 0x0260 */ unsigned long ReadyThreadCount;
  /* 0x0268 */ unsigned __int64 ReadyQueueExpectedRunTime;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0270 */

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

typedef struct _KSTATIC_AFFINITY_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushTbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushWbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeSyncContextAffinity;
  }; /* size: 0x00a8 */
  /* 0x00a8 */ struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;
  /* 0x0150 */ struct _KAFFINITY_EX KeIpiSendAffinity;
  /* 0x01f8 */ struct _KAFFINITY_EX KeIpiSendIpiSet;
} KSTATIC_AFFINITY_BLOCK, *PKSTATIC_AFFINITY_BLOCK; /* size: 0x02a0 */

typedef struct _KSECURE_FAULT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 FaultCode;
  /* 0x0008 */ unsigned __int64 FaultVa;
} KSECURE_FAULT_INFORMATION, *PKSECURE_FAULT_INFORMATION; /* size: 0x0010 */

typedef struct _KLOCK_QUEUE_HANDLE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE LockQueue;
  /* 0x0010 */ unsigned char OldIrql;
  /* 0x0011 */ char __PADDING__[7];
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE; /* size: 0x0018 */

typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x0018 */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0020 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ struct _REQUEST_MAILBOX* Next;
  /* 0x0008 */ unsigned __int64 RequestSummary;
  /* 0x0010 */ struct _KREQUEST_PACKET RequestPacket;
  /* 0x0030 */ volatile long* NodeTargetCountAddr;
  /* 0x0038 */ volatile long NodeTargetCount;
  /* 0x003c */ long __PADDING__[1];
} REQUEST_MAILBOX, *PREQUEST_MAILBOX; /* size: 0x0040 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned char LegacyNumber;
  /* 0x0001 */ unsigned char ReservedMustBeZero;
  /* 0x0002 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char ClockOwner;
  union
  {
    /* 0x0022 */ unsigned char PendingTickFlags;
    struct /* bitfield */
    {
      /* 0x0022 */ unsigned char PendingTick : 1; /* bit position: 0 */
      /* 0x0022 */ unsigned char PendingBackupTick : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0023 */ unsigned char IdleState;
  /* 0x0024 */ unsigned long Number;
  /* 0x0028 */ unsigned __int64 PrcbLock;
  /* 0x0030 */ char* PriorityState;
  /* 0x0040 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x06f0 */ unsigned short ProcessorModel;
  /* 0x06f2 */ unsigned short ProcessorRevision;
  /* 0x06f4 */ unsigned long MHz;
  /* 0x06f8 */ unsigned __int64 CycleCounterFrequency;
  /* 0x0700 */ unsigned __int64 HalReserved[10];
  /* 0x0750 */ unsigned short MinorVersion;
  /* 0x0752 */ unsigned short MajorVersion;
  /* 0x0754 */ unsigned char BuildType;
  /* 0x0755 */ unsigned char CpuVendor;
  /* 0x0756 */ unsigned char CoresPerPhysicalProcessor;
  /* 0x0757 */ unsigned char LogicalProcessorsPerCore;
  /* 0x0758 */ void* AcpiReserved;
  /* 0x0760 */ unsigned __int64 GroupSetMember;
  /* 0x0768 */ unsigned char Group;
  /* 0x0769 */ unsigned char GroupIndex;
  /* 0x0780 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
  /* 0x0890 */ unsigned char ProcessorVendorString[2];
  /* 0x0892 */ unsigned char DoubleFlushTlb;
  /* 0x0894 */ unsigned long FeatureBits;
  /* 0x0898 */ unsigned long MaxBreakpoints;
  /* 0x089c */ unsigned long MaxWatchpoints;
  /* 0x08a0 */ struct _CONTEXT* Context;
  /* 0x08a8 */ unsigned long ContextFlagsInit;
  /* 0x08ac */ unsigned char EmulatedAccess;
  /* 0x08b0 */ unsigned long EmulatedFaultSyndrome;
  /* 0x08b8 */ unsigned __int64 EmulatedFaultAddress;
  /* 0x08c0 */ unsigned __int64 EmulatedLoadStoreAcquireRelease;
  /* 0x0900 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x0a00 */ volatile long PacketBarrier;
  /* 0x0a08 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x0a10 */ volatile long MmPageFaultCount;
  /* 0x0a14 */ volatile long MmCopyOnWriteCount;
  /* 0x0a18 */ volatile long MmTransitionCount;
  /* 0x0a1c */ volatile long MmDemandZeroCount;
  /* 0x0a20 */ volatile long MmPageReadCount;
  /* 0x0a24 */ volatile long MmPageReadIoCount;
  /* 0x0a28 */ volatile long MmDirtyPagesWriteCount;
  /* 0x0a2c */ volatile long MmDirtyWriteIoCount;
  /* 0x0a30 */ volatile long MmMappedPagesWriteCount;
  /* 0x0a34 */ volatile long MmMappedWriteIoCount;
  /* 0x0a38 */ unsigned long KeSystemCalls;
  /* 0x0a3c */ unsigned long KeContextSwitches;
  /* 0x0a40 */ unsigned long CcFastReadNoWait;
  /* 0x0a44 */ unsigned long CcFastReadWait;
  /* 0x0a48 */ unsigned long CcFastReadNotPossible;
  /* 0x0a4c */ unsigned long CcCopyReadNoWait;
  /* 0x0a50 */ unsigned long CcCopyReadWait;
  /* 0x0a54 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x0a58 */ long LookasideIrpFloat;
  /* 0x0a5c */ volatile long IoReadOperationCount;
  /* 0x0a60 */ volatile long IoWriteOperationCount;
  /* 0x0a64 */ volatile long IoOtherOperationCount;
  /* 0x0a68 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x0a70 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x0a78 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x0a80 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x0a88 */ volatile long TargetCount;
  /* 0x0a8c */ volatile unsigned long IpiFrozen;
  /* 0x0a90 */ volatile unsigned long RequestSummary;
  /* 0x0a98 */ struct _KDPC_DATA DpcData[2];
  /* 0x0ae8 */ void* DpcStack;
  /* 0x0af0 */ void* SpBase;
  /* 0x0af8 */ long MaximumDpcQueueDepth;
  /* 0x0afc */ unsigned long DpcRequestRate;
  /* 0x0b00 */ unsigned long MinimumDpcRate;
  /* 0x0b04 */ unsigned long DpcLastCount;
  /* 0x0b08 */ unsigned char ThreadDpcEnable;
  /* 0x0b09 */ volatile unsigned char QuantumEnd;
  /* 0x0b0a */ volatile unsigned char DpcRoutineActive;
  /* 0x0b0b */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x0b0c */ volatile long DpcRequestSummary;
    /* 0x0b0c */ short DpcRequestSlot[2];
    struct
    {
      /* 0x0b0c */ short NormalDpcState;
      /* 0x0b0e */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x0b0c */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x0b0c */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x0b0c */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x0b0c */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x0b0c */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x0b0c */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x0b0c */ unsigned long DpcNormalSpare : 10; /* bit position: 6 */
      /* 0x0b0c */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x0b0c */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x0b0c */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0b10 */ unsigned long LastTick;
  /* 0x0b14 */ unsigned long ClockInterrupts;
  /* 0x0b18 */ unsigned long ReadyScanTick;
  /* 0x0b1c */ union _KPRCBFLAG PrcbFlags;
  /* 0x0b20 */ unsigned __int64 TrappedSecurityDomain;
  /* 0x0b28 */ unsigned long InterruptLastCount;
  /* 0x0b2c */ unsigned long InterruptRate;
  /* 0x0b80 */ struct _KGATE DpcGate;
  /* 0x0b98 */ unsigned __int64 MPAffinity;
  /* 0x0ba0 */ struct _KDPC CallDpc;
  /* 0x0be0 */ long ClockKeepAlive;
  /* 0x0be4 */ unsigned char PrcbPad11[2];
  /* 0x0be8 */ long DpcWatchdogPeriod;
  /* 0x0bec */ long DpcWatchdogCount;
  /* 0x0bf0 */ unsigned long DpcWatchdogSequenceNumber;
  /* 0x0bf4 */ volatile long KeSpinLockOrdering;
  /* 0x0c00 */ struct _LIST_ENTRY WaitListHead;
  /* 0x0c10 */ unsigned __int64 WaitLock;
  /* 0x0c18 */ unsigned long ReadySummary;
  /* 0x0c1c */ long AffinitizedSelectionMask;
  /* 0x0c20 */ unsigned long QueueIndex;
  /* 0x0c28 */ struct _KDPC TimerExpirationDpc;
  /* 0x0c68 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x0c78 */ struct _LIST_ENTRY ScbList;
  /* 0x0d00 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x0f00 */ unsigned long InterruptCount;
  /* 0x0f04 */ unsigned long KernelTime;
  /* 0x0f08 */ unsigned long UserTime;
  /* 0x0f0c */ unsigned long DpcTime;
  /* 0x0f10 */ unsigned long InterruptTime;
  /* 0x0f14 */ unsigned long AdjustDpcThreshold;
  /* 0x0f18 */ unsigned char SkipTick;
  /* 0x0f19 */ unsigned char DebuggerSavedIRQL;
  /* 0x0f1a */ unsigned char TbFlushListActive;
  /* 0x0f1b */ unsigned char GroupSchedulingOverQuota;
  /* 0x0f1c */ unsigned long DpcTimeCount;
  /* 0x0f20 */ unsigned long DpcTimeLimit;
  /* 0x0f24 */ unsigned long PeriodicCount;
  /* 0x0f28 */ unsigned long PeriodicBias;
  /* 0x0f2c */ unsigned long AvailableTime;
  /* 0x0f30 */ unsigned long ScbOffset;
  /* 0x0f34 */ unsigned long KeExceptionDispatchCount;
  /* 0x0f38 */ struct _KNODE* ParentNode;
  /* 0x0f40 */ unsigned __int64 AffinitizedCycles;
  /* 0x0f48 */ unsigned __int64 StartCycles;
  /* 0x0f50 */ unsigned __int64 TaggedCyclesStart;
  /* 0x0f58 */ unsigned __int64 TaggedCycles[3];
  /* 0x0f70 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  /* 0x10c0 */ volatile long MmSpinLockOrdering;
  /* 0x10c8 */ void* volatile CachedStack;
  /* 0x10d0 */ unsigned long PageColor;
  /* 0x10d4 */ unsigned long NodeColor;
  /* 0x10d8 */ unsigned long NodeShiftedColor;
  /* 0x10dc */ unsigned long SecondaryColorMask;
  /* 0x10e0 */ volatile unsigned __int64 CycleTime;
  /* 0x10e8 */ unsigned __int64 Cycles[2][4];
  /* 0x1180 */ unsigned long CcFastMdlReadNoWait;
  /* 0x1184 */ unsigned long CcFastMdlReadWait;
  /* 0x1188 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x118c */ unsigned long CcMapDataNoWait;
  /* 0x1190 */ unsigned long CcMapDataWait;
  /* 0x1194 */ unsigned long CcPinMappedDataCount;
  /* 0x1198 */ unsigned long CcPinReadNoWait;
  /* 0x119c */ unsigned long CcPinReadWait;
  /* 0x11a0 */ unsigned long CcMdlReadNoWait;
  /* 0x11a4 */ unsigned long CcMdlReadWait;
  /* 0x11a8 */ unsigned long CcLazyWriteHotSpots;
  /* 0x11ac */ unsigned long CcLazyWriteIos;
  /* 0x11b0 */ unsigned long CcLazyWritePages;
  /* 0x11b4 */ unsigned long CcDataFlushes;
  /* 0x11b8 */ unsigned long CcDataPages;
  /* 0x11bc */ unsigned long CcLostDelayedWrites;
  /* 0x11c0 */ unsigned long CcFastReadResourceMiss;
  /* 0x11c4 */ unsigned long CcCopyReadWaitMiss;
  /* 0x11c8 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x11cc */ unsigned long CcMapDataNoWaitMiss;
  /* 0x11d0 */ unsigned long CcMapDataWaitMiss;
  /* 0x11d4 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x11d8 */ unsigned long CcPinReadWaitMiss;
  /* 0x11dc */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x11e0 */ unsigned long CcMdlReadWaitMiss;
  /* 0x11e4 */ unsigned long CcReadAheadIos;
  /* 0x11e8 */ volatile long MmCacheTransitionCount;
  /* 0x11ec */ volatile long MmCacheReadCount;
  /* 0x11f0 */ volatile long MmCacheIoCount;
  /* 0x1200 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x13e0 */ struct _KDPC ForceIdleDpc;
  /* 0x1420 */ struct _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;
  /* 0x1428 */ struct _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;
  /* 0x1430 */ void* CurrentDpcRoutine /* function */;
  /* 0x1438 */ unsigned __int64 CurrentDpcRuntimeHistoryCached;
  /* 0x1440 */ unsigned __int64 CurrentDpcStartTime;
  /* 0x1448 */ unsigned long DeviceInterrupts;
  /* 0x1450 */ void* IsrDpcStats;
  /* 0x1458 */ unsigned long KeAlignmentFixupCount;
  /* 0x1460 */ struct _KDPC DpcWatchdogDpc;
  /* 0x14a0 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x14e0 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x14f0 */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x1598 */ unsigned long PackageId;
  /* 0x1600 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x1608 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x1610 */ unsigned long SharedQueueScanOwner;
  /* 0x1614 */ unsigned long ScanSiblingIndex;
  /* 0x1618 */ unsigned __int64 CoreProcessorSet;
  /* 0x1620 */ unsigned __int64 ScanSiblingMask;
  /* 0x1628 */ unsigned __int64 LLCMask;
  /* 0x1630 */ unsigned __int64 CacheProcessorMask[5];
  /* 0x1658 */ struct _CACHE_DESCRIPTOR Cache[6];
  /* 0x16a0 */ unsigned char CacheCount;
  /* 0x16a1 */ unsigned char PrcbPad20[2];
  /* 0x16a3 */ unsigned char ExceptionStackActive;
  /* 0x16a4 */ volatile unsigned long CachedCommit;
  /* 0x16a8 */ volatile unsigned long CachedResidentAvailable;
  /* 0x16b0 */ void* HyperPte;
  /* 0x16b8 */ void* MmInternal;
  /* 0x16c0 */ unsigned __int64 GenerationTarget;
  /* 0x16c8 */ unsigned __int64 PcbPad21[4];
  /* 0x16e8 */ void* ExceptionStack;
  /* 0x16f0 */ void* WheaInfo;
  /* 0x16f8 */ void* EtwSupport;
  /* 0x1700 */ union _SLIST_HEADER HypercallPageList;
  /* 0x1710 */ void* HypercallCachedPages;
  /* 0x1718 */ void* VirtualApicAssist;
  /* 0x1720 */ unsigned __int64* StatisticsPage;
  /* 0x1780 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x1838 */ unsigned __int64 PteBitCache;
  /* 0x1840 */ unsigned long PteBitOffset;
  /* 0x1848 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x1858 */ unsigned __int64 PanicStackBase;
  /* 0x1860 */ void* IsrStack;
  /* 0x1880 */ struct _KTIMER_TABLE TimerTable;
  /* 0x5b00 */ struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];
  /* 0x6700 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x7300 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x7f00 */ struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
  /* 0x7f08 */ struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;
  /* 0x7f10 */ struct _KDPC AbDpc;
  /* 0x7f50 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
  /* 0x7fa4 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
  /* 0x8000 */ struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;
  /* 0x8270 */ struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];
  /* 0x8370 */ unsigned long TimerExpirationTraceCount;
  /* 0x8378 */ void* ExSaPageArray;
  /* 0x8380 */ volatile long FreezePowerOff;
  /* 0x8388 */ struct _KSTATIC_AFFINITY_BLOCK StaticAffinity;
  /* 0x8628 */ struct _KSECURE_FAULT_INFORMATION SecureFault;
  /* 0x8638 */ unsigned __int64 ImportantCycles;
  /* 0x8640 */ unsigned __int64 UnimportantCycles;
  /* 0x8648 */ unsigned long ReadyThreadCount;
  /* 0x8650 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x8658 */ unsigned long DpcWatchdogProfileCumulativeDpcThreshold;
  /* 0x865c */ unsigned long DpcWatchdogProfileSingleDpcThreshold;
  /* 0x8660 */ void** DpcWatchdogProfile;
  /* 0x8668 */ void** DpcWatchdogProfileCurrentEmptyCapture;
  /* 0x8670 */ void* SchedulerAssist;
  /* 0x8678 */ struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];
  /* 0x8700 */ struct _REQUEST_MAILBOX RequestMailbox[1];
  /* 0x8740 */ long __PADDING__[16];
} KPRCB, *PKPRCB; /* size: 0x8780 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ void* TibPad0[2];
      /* 0x0010 */ void* Spare1;
      /* 0x0018 */ struct _KPCR* Self;
      /* 0x0020 */ void* PcrReserved0;
      /* 0x0028 */ struct _KSPIN_LOCK_QUEUE* LockArray;
      /* 0x0030 */ void* Used_Self;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
  /* 0x0038 */ unsigned char CurrentIrql;
  /* 0x0039 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x003a */ unsigned char Pad1[2];
  /* 0x003c */ unsigned short MajorVersion;
  /* 0x003e */ unsigned short MinorVersion;
  /* 0x0040 */ unsigned long StallScaleFactor;
  /* 0x0044 */ unsigned long SecondLevelCacheSize;
  union
  {
    /* 0x0048 */ unsigned short SoftwareInterruptPending;
    struct
    {
      /* 0x0048 */ unsigned char ApcInterrupt;
      /* 0x0049 */ unsigned char DispatchInterrupt;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x004a */ unsigned short InterruptPad;
  /* 0x004c */ unsigned char BtiMitigation;
  /* 0x004d */ unsigned char SsbMitigation;
  /* 0x004e */ unsigned char Pad2[2];
  /* 0x0050 */ unsigned __int64 PanicStorage[6];
  /* 0x0080 */ void* KdVersionBlock;
  /* 0x0088 */ void* HalReserved[14];
  /* 0x00f8 */ void* KvaUserModeTtbr1;
  /* 0x0100 */ void* Idt[256];
  /* 0x0900 */ void** IdtExt;
  /* 0x0908 */ void* PcrAlign[15];
  /* 0x0980 */ struct _KPRCB Prcb;
} KPCR, *PKPCR; /* size: 0x9100 */

