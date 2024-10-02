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
  /* 0x0278 */ unsigned __int64 APIBKeyHi_El1;
  /* 0x0280 */ unsigned __int64 APIBKeyLo_El1;
  /* 0x0288 */ unsigned __int64 Mpam0_El1;
  /* 0x0290 */ unsigned __int64 Zcr_El1;
  /* 0x0298 */ unsigned __int64 Padding;
} KARM64_ARCH_STATE, *PKARM64_ARCH_STATE; /* size: 0x02a0 */

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
  /* 0x0340 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x06d0 */

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
  /* 0x0028 */ unsigned long LongDpcPresent;
  /* 0x002c */ unsigned long Padding;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0030 */

typedef union _KPRCBFLAG
{
  union
  {
    /* 0x0000 */ volatile long PrcbFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BamQosLevel : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingQosUpdate : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long TracepointActive : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long LongDpcRunning : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long PrcbFlagsReserved : 20; /* bit position: 12 */
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
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
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
  /* 0x0150 */ void* ReservedRawDataBuffer;
} KENTROPY_TIMING_STATE, *PKENTROPY_TIMING_STATE; /* size: 0x0158 */

typedef struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE
{
  /* 0x0000 */ unsigned char buffer[256];
  /* 0x0100 */ struct _KDPC Dpc;
  /* 0x0140 */ unsigned __int64 nSamplesAccumulated;
  /* 0x0148 */ unsigned __int64 nHealthTestFailures;
  /* 0x0150 */ unsigned char* pCombinedSampleBuffer;
  /* 0x0158 */ unsigned __int64 nRawSamples;
  /* 0x0160 */ unsigned int accumulatorId;
  /* 0x0164 */ unsigned int nDPCScheduleFailures;
  /* 0x0168 */ unsigned char dpcInProgress;
  /* 0x0169 */ char __PADDING__[23];
} SYMCRYPT_ENTROPY_ACCUMULATOR_STATE, *PSYMCRYPT_ENTROPY_ACCUMULATOR_STATE; /* size: 0x0180 */

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
  /* 0x007a */ unsigned char CounterReadOptimize;
  /* 0x007b */ char __PADDING__[5];
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

typedef struct _PROC_PERF_CHECK_CONTEXT
{
  /* 0x0000 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0008 */ struct _PROC_PERF_CONSTRAINT* Constraint;
  /* 0x0010 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0018 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0020 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0028 */ unsigned long Utility;
  /* 0x002c */ unsigned long AffinitizedUtility;
  /* 0x0030 */ unsigned long MediaUtility;
  /* 0x0034 */ unsigned long ImportantUtility;
  /* 0x0038 */ unsigned long IdealUtility;
  /* 0x003c */ unsigned short LatestAffinitizedPercent;
  /* 0x003e */ unsigned short AveragePerformancePercent;
  /* 0x0040 */ unsigned long RelativePerformance;
  /* 0x0044 */ unsigned char NtProcessor;
  /* 0x0045 */ char __PADDING__[3];
} PROC_PERF_CHECK_CONTEXT, *PPROC_PERF_CHECK_CONTEXT; /* size: 0x0048 */

typedef enum _KHETERO_CPU_QOS
{
  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDeadline = 4,
  KHeteroCpuQosEco = 5,
  KHeteroCpuQosUtility = 6,
  KHeteroCpuQosDynamic = 7,
  KHeteroCpuQosMax = 7,
} KHETERO_CPU_QOS, *PKHETERO_CPU_QOS;

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ volatile unsigned __int64 IdleSequenceNumber;
  /* 0x0028 */ unsigned __int64 IdleTimeEntry;
  union
  {
    /* 0x0030 */ unsigned __int64 IdleTimeExpiration;
    /* 0x0030 */ volatile __int64 IdleWakeTime;
  }; /* size: 0x0008 */
  /* 0x0038 */ unsigned long IdleWakeLatencyLimit;
  /* 0x003c */ unsigned char NonInterruptibleTransition;
  /* 0x003d */ unsigned char PepWokenTransition;
  /* 0x003e */ unsigned char HvTargetState;
  /* 0x0040 */ unsigned long TargetIdleState;
  /* 0x0044 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x004c */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0050 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00d0 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00d4 */ unsigned long LastSysTime;
  /* 0x00d8 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00e0 */ long WmiInterfaceEnabled;
  /* 0x00e8 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0108 */ struct _KDPC PerfActionDpc;
  /* 0x0148 */ volatile long PerfActionMask;
  /* 0x0150 */ struct _PROC_PERF_CHECK_CONTEXT CheckContext;
  /* 0x0198 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x01a0 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x01a8 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x01a9 */ volatile unsigned char PerformanceSchedulingClass;
  /* 0x01aa */ volatile unsigned char EfficiencySchedulingClass;
  /* 0x01ab */ unsigned char Reserved;
  /* 0x01ac */ unsigned char Parked;
  /* 0x01ad */ unsigned char SoftParked;
  /* 0x01ae */ unsigned char LongPriorQosPeriod;
  union
  {
    /* 0x01b0 */ unsigned __int64 SnapTimeLast;
    /* 0x01b0 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01b8 */ unsigned __int64 ActiveTime;
  /* 0x01c0 */ unsigned __int64 TotalTime;
  /* 0x01c8 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x01d0 */ unsigned __int64 LastQosTransitionTime;
  /* 0x01d8 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x01e0 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x01e4 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x01e8 */ unsigned short QosEquivalencyMask;
  /* 0x01ea */ unsigned short FrequencyBucketThresholds[4];
  /* 0x01f2 */ char __PADDING__[6];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x01f8 */

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
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef enum _PROCESSOR_CACHE_TYPE
{
  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3,
  CacheUnknown = 4,
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

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

typedef enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
  KClockTimerOneShotUnarmed = 0,
  KClockTimerOneShotArmed = 1,
  KClockTimerOneShotRearmRequired = 2,
  KClockTimerOneShotInvalid = 3,
} KCLOCK_TIMER_ONE_SHOT_STATE, *PKCLOCK_TIMER_ONE_SHOT_STATE;

typedef enum _KCLOCK_TIMER_DEADLINE_TYPE
{
  KClockTimerKTimerExpirationNonHr = 0,
  KClockTimerKTimerExpirationPseudoHr = 1,
  KClockTimerKTimer2ExpirationHr = 2,
  KClockTimerKTimersMax = 2,
  KClockTimerQuantumEnd = 3,
  KClockTimerGroupSchedulingGenerationEnd = 4,
  KClockTimerIdlePromotion = 5,
  KClockTimerBamQosHysteresisEnd = 6,
  KClockTimerMax = 7,
} KCLOCK_TIMER_DEADLINE_TYPE, *PKCLOCK_TIMER_DEADLINE_TYPE;

typedef struct _KCLOCK_TIMER_DEADLINE_ENTRY
{
  /* 0x0000 */ unsigned __int64 DueTime;
  /* 0x0008 */ unsigned long TolerableDelay;
  union
  {
    /* 0x000c */ unsigned char TypeFlags;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned char Valid : 1; /* bit position: 0 */
      /* 0x000c */ unsigned char NoWake : 1; /* bit position: 1 */
      /* 0x000c */ unsigned char Unused : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x000d */ char __PADDING__[3];
} KCLOCK_TIMER_DEADLINE_ENTRY, *PKCLOCK_TIMER_DEADLINE_ENTRY; /* size: 0x0010 */

typedef struct _KCLOCK_TICK_TRACE
{
  /* 0x0000 */ unsigned __int64 PerformanceCounter;
  /* 0x0008 */ unsigned __int64 PreInterruptTime;
  /* 0x0010 */ unsigned __int64 PostInterruptTime;
  /* 0x0018 */ unsigned __int64 TimeStampCounter;
  /* 0x0020 */ unsigned char IsClockOwner;
  /* 0x0021 */ char __PADDING__[7];
} KCLOCK_TICK_TRACE, *PKCLOCK_TICK_TRACE; /* size: 0x0028 */

typedef struct _KCLOCK_INCREMENT_TRACE
{
  /* 0x0000 */ unsigned long ActualIncrement;
  /* 0x0004 */ unsigned long RequestedIncrement;
  /* 0x0008 */ unsigned __int64 InterruptTime;
  /* 0x0010 */ unsigned __int64 PerformanceCounter;
  /* 0x0018 */ unsigned char OneShot;
  /* 0x0019 */ char __PADDING__[7];
} KCLOCK_INCREMENT_TRACE, *PKCLOCK_INCREMENT_TRACE; /* size: 0x0020 */

typedef struct _KCLOCK_TIMER_STATE
{
  /* 0x0000 */ unsigned __int64 NextTickDueTime;
  /* 0x0008 */ unsigned long TimeIncrement;
  /* 0x000c */ unsigned long LastRequestedTimeIncrement;
  /* 0x0010 */ enum _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;
  /* 0x0014 */ enum _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;
  /* 0x0018 */ struct _KCLOCK_TIMER_DEADLINE_ENTRY ClockTimerEntries[7];
  /* 0x0088 */ unsigned char ClockActive;
  /* 0x0089 */ unsigned char ClockArmedForIdle;
  /* 0x008c */ unsigned long ClockTickTraceIndex;
  /* 0x0090 */ unsigned long ClockIncrementTraceIndex;
  /* 0x0098 */ struct _KCLOCK_TICK_TRACE ClockTickTraces[16];
  /* 0x0318 */ struct _KCLOCK_INCREMENT_TRACE ClockIncrementTraces[16];
} KCLOCK_TIMER_STATE, *PKCLOCK_TIMER_STATE; /* size: 0x0518 */

typedef struct _KE_PRCB_RCU_DATA
{
  /* 0x0000 */ unsigned long NestingLevel;
  /* 0x0004 */ unsigned char DispatchPin;
  /* 0x0005 */ unsigned char GracePeriodNeeded;
  /* 0x0006 */ unsigned char ExpediteReporting;
  /* 0x0007 */ char IdleState;
  /* 0x0008 */ unsigned __int64 GraceSequenceQuiescent;
  /* 0x0010 */ unsigned __int64 GraceSequenceReported;
  /* 0x0018 */ struct _LIST_ENTRY* AwaitingCompletion;
} KE_PRCB_RCU_DATA, *PKE_PRCB_RCU_DATA; /* size: 0x0020 */

typedef struct _KSTATIC_AFFINITY_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushTbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushWbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeSlistRollbackAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeSyncContextAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeRcuAffinity;
  }; /* size: 0x0108 */
  /* 0x0108 */ struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;
  /* 0x0210 */ struct _KAFFINITY_EX KeIpiSendAffinity;
  /* 0x0318 */ struct _KAFFINITY_EX KeIpiSendIpiSet;
  /* 0x0420 */ unsigned __int64 Padding[128];
} KSTATIC_AFFINITY_BLOCK, *PKSTATIC_AFFINITY_BLOCK; /* size: 0x0820 */

typedef struct _KSOFTWARE_INTERRUPT_BATCH
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char TargetType;
  /* 0x0002 */ unsigned char ReservedBatchInProgress;
  /* 0x0003 */ unsigned char Spare;
  /* 0x0004 */ unsigned long SingleTargetIndex;
  /* 0x0008 */ struct _KAFFINITY_EX MultipleTargetAffinity;
  /* 0x0110 */ unsigned __int64 Padding[32];
} KSOFTWARE_INTERRUPT_BATCH, *PKSOFTWARE_INTERRUPT_BATCH; /* size: 0x0210 */

typedef struct _KSECURE_FAULT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 FaultCode;
  /* 0x0008 */ unsigned __int64 FaultVa;
  /* 0x0010 */ unsigned __int64 FaultPa;
} KSECURE_FAULT_INFORMATION, *PKSECURE_FAULT_INFORMATION; /* size: 0x0018 */

typedef struct _KLOCK_QUEUE_HANDLE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE LockQueue;
  /* 0x0010 */ unsigned char OldIrql;
  /* 0x0011 */ char __PADDING__[7];
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE; /* size: 0x0018 */

typedef struct _KCORE_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned char ProcessorCount;
  /* 0x0001 */ unsigned char ScanStartIndex;
  /* 0x0002 */ unsigned char Spare[6];
  /* 0x0008 */ struct _KPRCB* Prcbs[4];
  /* 0x0028 */ struct _KCORE_CONTROL_BLOCK_SHADOW* CoreControlBlockShadow;
} KCORE_CONTROL_BLOCK, *PKCORE_CONTROL_BLOCK; /* size: 0x0030 */

typedef union _KCCB_SHADOW_PROCESSOR_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Idle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Transitioning : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllState;
  }; /* size: 0x0001 */
} KCCB_SHADOW_PROCESSOR_STATE, *PKCCB_SHADOW_PROCESSOR_STATE; /* size: 0x0001 */

typedef struct _KCORE_CONTROL_BLOCK_SHADOW
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ volatile unsigned __int64 CurrentIsolationDomain;
  /* 0x0010 */ volatile unsigned __int64 NextIsolationDomain;
  /* 0x0018 */ unsigned char TotalProcessors;
  /* 0x0019 */ unsigned char IdleProcessors;
  /* 0x001a */ unsigned char NewDomainProcessors;
  /* 0x001b */ unsigned char Spare;
  /* 0x001c */ union _KCCB_SHADOW_PROCESSOR_STATE ProcessorStates[4];
  /* 0x0020 */ unsigned __int64 InterruptTargets[4];
} KCORE_CONTROL_BLOCK_SHADOW, *PKCORE_CONTROL_BLOCK_SHADOW; /* size: 0x0040 */

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
  /* 0x0030 */ volatile long* SubNodeTargetCountAddr;
  /* 0x0038 */ volatile long SubNodeTargetCount;
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
  /* 0x0030 */ union _KPRIORITY_STATE* PriorityState;
  /* 0x0040 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x0710 */ unsigned __int64 HalReserved[10];
  /* 0x0760 */ unsigned short MinorVersion;
  /* 0x0762 */ unsigned short MajorVersion;
  /* 0x0764 */ unsigned char BuildType;
  /* 0x0765 */ unsigned char CpuVendor;
  /* 0x0766 */ unsigned char LegacyCoresPerPhysicalProcessor;
  /* 0x0767 */ unsigned char LegacyLogicalProcessorsPerCore;
  /* 0x0768 */ void* AcpiReserved;
  /* 0x0770 */ unsigned short ProcessorModel;
  /* 0x0772 */ unsigned short ProcessorRevision;
  /* 0x0774 */ unsigned long MHz;
  /* 0x0778 */ unsigned __int64 CycleCounterFrequency;
  /* 0x0780 */ unsigned __int64 GroupSetMember;
  /* 0x0788 */ unsigned char Group;
  /* 0x0789 */ unsigned char GroupIndex;
  /* 0x078a */ unsigned char QpcToTscIncrementShift;
  /* 0x078b */ unsigned char PrcbPad3[5];
  /* 0x0790 */ unsigned long CoresPerPhysicalProcessor;
  /* 0x0794 */ unsigned long LogicalProcessorsPerCore;
  /* 0x0798 */ unsigned __int64 QpcToTscIncrement;
  /* 0x07a0 */ unsigned __int64 PrcbPad4[12];
  /* 0x0800 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
  /* 0x0910 */ unsigned char ProcessorVendorString[2];
  /* 0x0912 */ unsigned char PrcbPad5[1];
  /* 0x0914 */ unsigned long FeatureBits;
  /* 0x0918 */ unsigned long MaxBreakpoints;
  /* 0x091c */ unsigned long MaxWatchpoints;
  /* 0x0920 */ struct _CONTEXT* Context;
  /* 0x0928 */ unsigned long ContextFlagsInit;
  /* 0x092c */ unsigned char EmulatedAccess;
  /* 0x0930 */ unsigned long EmulatedFaultSyndrome;
  /* 0x0938 */ unsigned __int64 EmulatedFaultAddress;
  /* 0x0940 */ unsigned __int64 EmulatedLoadStoreAcquireRelease;
  /* 0x0948 */ unsigned __int64 EmulatedMisalignedAtomics;
  /* 0x0950 */ volatile long EmulatedCoalesceCount;
  /* 0x0954 */ volatile unsigned long TrapFrameLogIndex;
  /* 0x0958 */ struct _TRAPFRAME_LOG_ENTRY* TrapFrameLog;
  /* 0x0980 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x0a80 */ volatile long PacketBarrier;
  /* 0x0a88 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x0a90 */ volatile long MmPageFaultCount;
  /* 0x0a94 */ volatile long MmCopyOnWriteCount;
  /* 0x0a98 */ volatile long MmTransitionCount;
  /* 0x0a9c */ volatile long MmDemandZeroCount;
  /* 0x0aa0 */ volatile long MmPageReadCount;
  /* 0x0aa4 */ volatile long MmPageReadIoCount;
  /* 0x0aa8 */ volatile long MmDirtyPagesWriteCount;
  /* 0x0aac */ volatile long MmDirtyWriteIoCount;
  /* 0x0ab0 */ volatile long MmMappedPagesWriteCount;
  /* 0x0ab4 */ volatile long MmMappedWriteIoCount;
  /* 0x0ab8 */ unsigned long KeSystemCalls;
  /* 0x0abc */ unsigned long KeContextSwitches;
  /* 0x0ac0 */ unsigned long CcFastReadNoWait;
  /* 0x0ac4 */ unsigned long CcFastReadWait;
  /* 0x0ac8 */ unsigned long CcFastReadNotPossible;
  /* 0x0acc */ unsigned long CcCopyReadNoWait;
  /* 0x0ad0 */ unsigned long CcCopyReadWait;
  /* 0x0ad4 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x0ad8 */ long LookasideIrpFloat;
  /* 0x0adc */ volatile long IoReadOperationCount;
  /* 0x0ae0 */ volatile long IoWriteOperationCount;
  /* 0x0ae4 */ volatile long IoOtherOperationCount;
  /* 0x0ae8 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x0af0 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x0af8 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x0b00 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x0b08 */ volatile long TargetCount;
  /* 0x0b0c */ volatile unsigned long IpiFrozen;
  /* 0x0b10 */ volatile unsigned long RequestSummary;
  /* 0x0b18 */ struct _KDPC_DATA DpcData[2];
  /* 0x0b78 */ void* DpcStack;
  /* 0x0b80 */ void* SpBase;
  /* 0x0b88 */ long MaximumDpcQueueDepth;
  /* 0x0b8c */ unsigned long DpcRequestRate;
  /* 0x0b90 */ unsigned long MinimumDpcRate;
  /* 0x0b94 */ unsigned long DpcLastCount;
  /* 0x0b98 */ unsigned char ThreadDpcEnable;
  /* 0x0b99 */ volatile unsigned char QuantumEnd;
  /* 0x0b9a */ volatile unsigned char DpcRoutineActive;
  /* 0x0b9b */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x0b9c */ volatile long DpcRequestSummary;
    /* 0x0b9c */ short DpcRequestSlot[2];
    struct
    {
      /* 0x0b9c */ short NormalDpcState;
      /* 0x0b9e */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x0b9c */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x0b9c */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x0b9c */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x0b9c */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x0b9c */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x0b9c */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x0b9c */ unsigned long DpcNormalPriorityAntiStarvation : 1; /* bit position: 6 */
      /* 0x0b9c */ unsigned long DpcNormalSwapToDpcDelegate : 1; /* bit position: 7 */
      /* 0x0b9c */ unsigned long DpcNormalSpare : 8; /* bit position: 8 */
      /* 0x0b9c */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x0b9c */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x0b9c */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0ba0 */ unsigned long LastTick;
  /* 0x0ba4 */ unsigned long ClockInterrupts;
  /* 0x0ba8 */ unsigned long ReadyScanTick;
  /* 0x0bac */ union _KPRCBFLAG PrcbFlags;
  /* 0x0bb0 */ unsigned long InterruptLastCount;
  /* 0x0bb4 */ unsigned long InterruptRate;
  /* 0x0bb8 */ unsigned long SingleDpcSoftTimeLimitTicks;
  /* 0x0bbc */ unsigned long CumulativeDpcSoftTimeLimitTicks;
  /* 0x0bc0 */ struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO* SingleDpcSoftTimeoutEventInfo;
  /* 0x0c00 */ struct _KGATE DpcGate;
  /* 0x0c18 */ unsigned __int64 MPAffinity;
  /* 0x0c20 */ struct _KDPC CallDpc;
  /* 0x0c60 */ long ClockKeepAlive;
  /* 0x0c64 */ unsigned char PrcbPad11[2];
  /* 0x0c68 */ long DpcWatchdogPeriodTicks;
  /* 0x0c6c */ long DpcWatchdogCount;
  /* 0x0c70 */ unsigned long DpcWatchdogSequenceNumber;
  /* 0x0c74 */ volatile long KeSpinLockOrdering;
  /* 0x0c78 */ unsigned __int64 TrappedSecurityDomain;
  /* 0x0c80 */ struct _LIST_ENTRY WaitListHead;
  /* 0x0c90 */ unsigned __int64 WaitLock;
  /* 0x0c98 */ unsigned long ReadySummary;
  /* 0x0c9c */ long AffinitizedSelectionMask;
  /* 0x0ca0 */ unsigned long QueueIndex;
  /* 0x0ca4 */ unsigned long NormalPriorityQueueIndex;
  /* 0x0ca8 */ unsigned long NormalPriorityReadyScanTick;
  /* 0x0cb0 */ struct _KDPC TimerExpirationDpc;
  /* 0x0cf0 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x0d00 */ struct _LIST_ENTRY ScbList;
  /* 0x0d80 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x0f80 */ unsigned long InterruptCount;
  /* 0x0f84 */ unsigned long KernelTime;
  /* 0x0f88 */ unsigned long UserTime;
  /* 0x0f8c */ unsigned long DpcTime;
  /* 0x0f90 */ unsigned long InterruptTime;
  /* 0x0f94 */ unsigned long AdjustDpcThreshold;
  /* 0x0f98 */ unsigned char SkipTick;
  /* 0x0f99 */ unsigned char DebuggerSavedIRQL;
  /* 0x0f9a */ unsigned char TbFlushListActive;
  /* 0x0f9b */ unsigned char GroupSchedulingOverQuota;
  /* 0x0f9c */ unsigned long DpcTimeCount;
  /* 0x0fa0 */ unsigned long DpcTimeLimitTicks;
  /* 0x0fa4 */ unsigned long PeriodicCount;
  /* 0x0fa8 */ unsigned long PeriodicBias;
  /* 0x0fac */ unsigned long AvailableTime;
  /* 0x0fb0 */ unsigned long ScbOffset;
  /* 0x0fb4 */ unsigned long KeExceptionDispatchCount;
  /* 0x0fb8 */ struct _KSCHEDULER_SUBNODE* SchedulerSubNode;
  /* 0x0fc0 */ unsigned __int64 AffinitizedCycles;
  /* 0x0fc8 */ unsigned __int64 StartCycles;
  /* 0x0fd0 */ unsigned __int64 TaggedCycles[4];
  /* 0x0ff0 */ unsigned long CpuCycleScalingFactor;
  /* 0x0ff8 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  /* 0x1150 */ void* volatile CachedStacks[2];
  /* 0x1160 */ unsigned long PageColor;
  /* 0x1164 */ unsigned long NodeColor;
  /* 0x1168 */ unsigned long PrcbPad18[2];
  /* 0x1170 */ volatile unsigned __int64 CycleTime;
  /* 0x1178 */ unsigned __int64 Cycles[2][4];
  /* 0x1200 */ struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE SymCryptEntropyAccumulatorState;
  /* 0x1380 */ unsigned long CcFastMdlReadNoWait;
  /* 0x1384 */ unsigned long CcFastMdlReadWait;
  /* 0x1388 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x138c */ unsigned long CcMapDataNoWait;
  /* 0x1390 */ unsigned long CcMapDataWait;
  /* 0x1394 */ unsigned long CcPinMappedDataCount;
  /* 0x1398 */ unsigned long CcPinReadNoWait;
  /* 0x139c */ unsigned long CcPinReadWait;
  /* 0x13a0 */ unsigned long CcMdlReadNoWait;
  /* 0x13a4 */ unsigned long CcMdlReadWait;
  /* 0x13a8 */ unsigned long CcLazyWriteHotSpots;
  /* 0x13ac */ unsigned long CcLazyWriteIos;
  /* 0x13b0 */ unsigned long CcLazyWritePages;
  /* 0x13b4 */ unsigned long CcDataFlushes;
  /* 0x13b8 */ unsigned long CcDataPages;
  /* 0x13bc */ unsigned long CcLostDelayedWrites;
  /* 0x13c0 */ unsigned long CcFastReadResourceMiss;
  /* 0x13c4 */ unsigned long CcCopyReadWaitMiss;
  /* 0x13c8 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x13cc */ unsigned long CcMapDataNoWaitMiss;
  /* 0x13d0 */ unsigned long CcMapDataWaitMiss;
  /* 0x13d4 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x13d8 */ unsigned long CcPinReadWaitMiss;
  /* 0x13dc */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x13e0 */ unsigned long CcMdlReadWaitMiss;
  /* 0x13e4 */ unsigned long CcReadAheadIos;
  /* 0x13e8 */ volatile long MmCacheTransitionCount;
  /* 0x13ec */ volatile long MmCacheReadCount;
  /* 0x13f0 */ volatile long MmCacheIoCount;
  /* 0x1400 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x15f8 */ struct _KDPC ForceIdleDpc;
  /* 0x1638 */ struct _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;
  /* 0x1640 */ struct _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;
  /* 0x1648 */ void* CurrentDpcRoutine /* function */;
  /* 0x1650 */ unsigned __int64 CurrentDpcRuntimeHistoryCached;
  /* 0x1658 */ unsigned __int64 CurrentDpcStartTime;
  /* 0x1660 */ struct _KTHREAD* DpcDelegateThread;
  /* 0x1668 */ unsigned long DeviceInterrupts;
  /* 0x1670 */ void* IsrDpcStats;
  /* 0x1678 */ unsigned long KeAlignmentFixupCount;
  /* 0x167c */ unsigned char CycleAccumulationInitialized;
  /* 0x167d */ unsigned char PrcbPad21[3];
  /* 0x1680 */ volatile __int64 MmSpinLockOrdering;
  /* 0x1688 */ struct _KDPC DpcWatchdogDpc;
  /* 0x16c8 */ unsigned __int64 StartCyclesQpc;
  /* 0x16d0 */ unsigned __int64 CycleTimeQpc;
  /* 0x16d8 */ unsigned __int64 NumberOfSecureFaults;
  /* 0x16e0 */ unsigned __int64 PrcbPad22[5];
  /* 0x1710 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x1720 */ struct _KAFFINITY_EX PackageProcessorSet;
  union
  {
    struct
    {
      /* 0x1828 */ unsigned long ProcessorId;
      /* 0x182c */ unsigned long CoreId;
      /* 0x1830 */ unsigned long ModuleId;
      /* 0x1834 */ unsigned long DieId;
      /* 0x1838 */ unsigned long PackageId;
    }; /* size: 0x0014 */
    /* 0x1828 */ unsigned long TopologyId[5];
  }; /* size: 0x0014 */
  /* 0x183c */ unsigned char PrcbPad25[84];
  /* 0x1900 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x1908 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x1910 */ unsigned long SharedQueueScanOwner;
  /* 0x1914 */ unsigned long ScanSiblingIndex;
  /* 0x1918 */ struct _KCORE_CONTROL_BLOCK* CoreControlBlock;
  /* 0x1920 */ unsigned __int64 CoreProcessorSet;
  /* 0x1928 */ unsigned __int64 ScanSiblingMask;
  /* 0x1930 */ unsigned __int64 LLCMask;
  /* 0x1938 */ unsigned __int64 GroupModuleProcessorSet;
  /* 0x1940 */ unsigned __int64 PrcbPad19[4];
  /* 0x1960 */ struct _KTHREAD* SmtIsolationThread;
  /* 0x1968 */ struct _CACHE_DESCRIPTOR Cache[6];
  /* 0x19b0 */ unsigned char CacheCount;
  /* 0x19b1 */ unsigned char PrcbPad20;
  /* 0x19b2 */ unsigned char SystemWorkKickInProgress;
  /* 0x19b3 */ unsigned char ExceptionStackActive;
  /* 0x19b4 */ volatile unsigned long CachedCommit;
  /* 0x19b8 */ volatile unsigned long CachedResidentAvailable;
  /* 0x19c0 */ void* MmFaultCompletionInfo;
  /* 0x19c8 */ void* MmInternal;
  /* 0x19d0 */ unsigned __int64 GenerationTarget;
  /* 0x19d8 */ unsigned __int64 PrcbPad24[1];
  /* 0x19e0 */ void* VmInternal;
  /* 0x19e8 */ void* DpcLog;
  /* 0x19f0 */ unsigned long DpcLogIndex;
  /* 0x19f4 */ unsigned long DpcLogBufferSize;
  /* 0x19f8 */ void* ExceptionStack;
  /* 0x1a00 */ void* WheaInfo;
  /* 0x1a08 */ void* EtwSupport;
  /* 0x1a10 */ union _SLIST_HEADER HypercallPageList;
  /* 0x1a20 */ void* HypercallCachedPages;
  /* 0x1a28 */ void* VirtualApicAssist;
  /* 0x1a30 */ union _LARGE_INTEGER VirtualApicAssistPage;
  /* 0x1a38 */ unsigned __int64* StatisticsPage;
  /* 0x1a80 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x1b38 */ unsigned __int64 PteBitCache;
  /* 0x1b40 */ unsigned long PteBitOffset;
  /* 0x1b48 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x1b58 */ unsigned __int64 PanicStackBase;
  /* 0x1b60 */ void* IsrStack;
  /* 0x1b80 */ struct _KTIMER_TABLE TimerTable;
  /* 0x5e00 */ struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];
  /* 0x6a00 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x7600 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x8200 */ struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
  /* 0x8208 */ struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;
  /* 0x8210 */ struct _KDPC AbDpc;
  /* 0x8250 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
  /* 0x82a4 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
  /* 0x8300 */ struct _KSHARED_READY_QUEUE* LocalSharedReadyQueue;
  /* 0x8308 */ struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];
  /* 0x8408 */ unsigned long TimerExpirationTraceCount;
  /* 0x8480 */ struct _KCLOCK_TIMER_STATE ClockTimerState;
  /* 0x8998 */ void* ExSaPageArray;
  /* 0x89a0 */ struct _KPRCB_TRACEPOINT_LOG* TracepointLog;
  /* 0x89a8 */ struct _KE_PRCB_RCU_DATA RcuData;
  /* 0x89c8 */ volatile long FreezePowerOff;
  /* 0x89cc */ unsigned long DpcWatchdogProfileBufferSize;
  /* 0x89d0 */ struct _KSTATIC_AFFINITY_BLOCK StaticAffinity;
  /* 0x91f0 */ struct _KSOFTWARE_INTERRUPT_BATCH DeferredDispatchInterrupts;
  /* 0x9400 */ struct _KI_RESCHEDULE_CONTEXT* StaticRescheduleContext;
  /* 0x9408 */ struct _KSECURE_FAULT_INFORMATION SecureFault;
  /* 0x9420 */ unsigned __int64* CyclesByThreadType;
  /* 0x9428 */ unsigned long ReadyThreadCount;
  /* 0x9430 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x9438 */ struct _KFORCE_PARK_DUTY_CYCLE_DATA* ForceParkDutyCycleData;
  /* 0x9440 */ struct _KCPU_PARTITION* volatile CpuPartition;
  /* 0x9448 */ unsigned long DpcWatchdogProfileCumulativeDpcThresholdTicks;
  /* 0x944c */ unsigned long DpcWatchdogProfileSingleDpcThresholdTicks;
  /* 0x9450 */ void** DpcWatchdogProfile;
  /* 0x9458 */ void** DpcWatchdogProfileCurrentEmptyCapture;
  /* 0x9460 */ void* SchedulerAssist;
  /* 0x9468 */ struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];
  /* 0x94c8 */ struct _KAFFINITY_EX CacheProcessorSet[6];
  /* 0x9af8 */ struct _KAFFINITY_EX ModuleProcessorSet;
  /* 0x9c00 */ struct _KAFFINITY_EX DieProcessorSet;
  /* 0x9d08 */ struct _KCORE_CONTROL_BLOCK LocalCoreControlBlock;
  /* 0x9d38 */ unsigned long CoreControlBlockIndex;
  /* 0x9d3c */ unsigned long PrcbPad26;
  /* 0x9d40 */ struct _KCORE_CONTROL_BLOCK_SHADOW* CoreControlBlockShadow;
  /* 0x9d48 */ struct _KCORE_CONTROL_BLOCK_SHADOW LocalCoreControlBlockShadow;
  /* 0x9d88 */ unsigned long NodeRelativeTopologyIndex[5];
  /* 0x9da0 */ struct _KDPC KstackFreeDpc;
  /* 0x9de0 */ union _SLIST_HEADER KstackFreeList;
  /* 0x9df0 */ struct _KTRAP_FRAME* IpiFrame;
  /* 0x9df8 */ struct _KDPC SlistRollbackDpc;
  /* 0x9e38 */ struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT* LocalSearchContexts[2];
  /* 0x9e48 */ struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT* SearchContexts[2];
  /* 0x9e58 */ struct _KI_COOPERATIVE_IDLE_SEARCH_GENERATION* SearchGenerations[2];
  /* 0x9e80 */ struct _REQUEST_MAILBOX RequestMailbox[1];
  /* 0x9ec0 */ long __PADDING__[16];
} KPRCB, *PKPRCB; /* size: 0x9f00 */

