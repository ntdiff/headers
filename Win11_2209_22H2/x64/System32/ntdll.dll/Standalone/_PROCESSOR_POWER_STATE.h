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
  /* 0x0078 */ unsigned __int64 StallCyclesLast;
  /* 0x0080 */ unsigned __int64 StallTime;
  /* 0x0088 */ unsigned char KernelTimesIndex;
  /* 0x0089 */ unsigned char CounterDiscardsIdleTime;
  /* 0x008a */ unsigned char CounterReadOptimize;
  /* 0x008b */ char __PADDING__[5];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0090 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
  ProcHypervisorHvCounters = 3,
} PROC_HYPERVISOR_STATE, *PPROC_HYPERVISOR_STATE;

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

typedef struct _PPM_FFH_THROTTLE_STATE_INFO
{
  /* 0x0000 */ unsigned char EnableLogging;
  /* 0x0004 */ unsigned long MismatchCount;
  /* 0x0008 */ unsigned char Initialized;
  /* 0x0010 */ unsigned __int64 LastValue;
  /* 0x0018 */ union _LARGE_INTEGER LastLogTickCount;
} PPM_FFH_THROTTLE_STATE_INFO, *PPPM_FFH_THROTTLE_STATE_INFO; /* size: 0x0020 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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

typedef struct _PROC_IDLE_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Idle;
} PROC_IDLE_SNAP, *PPROC_IDLE_SNAP; /* size: 0x0010 */

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
  /* 0x0038 */ unsigned char NonInterruptibleTransition;
  /* 0x0039 */ unsigned char PepWokenTransition;
  /* 0x003a */ unsigned char HvTargetState;
  /* 0x003b */ unsigned char SoftParked;
  /* 0x003c */ unsigned long TargetIdleState;
  /* 0x0040 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0048 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0050 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00e0 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00e4 */ unsigned long LastSysTime;
  /* 0x00e8 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00f0 */ long WmiInterfaceEnabled;
  /* 0x00f8 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0118 */ struct _KDPC PerfActionDpc;
  /* 0x0158 */ volatile long PerfActionMask;
  /* 0x0160 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0170 */ struct _PROC_PERF_CHECK_CONTEXT CheckContext;
  /* 0x01b8 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x01c0 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x01c8 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x01c9 */ unsigned char PerformanceSchedulingClass;
  /* 0x01ca */ unsigned char EfficiencySchedulingClass;
  /* 0x01cb */ unsigned char EarlyBootArchitecturalEfficiencyClass;
  /* 0x01cc */ unsigned char Parked;
  /* 0x01cd */ unsigned char LongPriorQosPeriod;
  union
  {
    /* 0x01d0 */ unsigned __int64 SnapTimeLast;
    /* 0x01d0 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01d8 */ unsigned __int64 ActiveTime;
  /* 0x01e0 */ unsigned __int64 TotalTime;
  /* 0x01e8 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x01f0 */ unsigned __int64 LastQosTranstionTsc;
  /* 0x01f8 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x0200 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x0204 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x0208 */ unsigned short QosEquivalencyMask;
  /* 0x020a */ unsigned short HwFeedbackTableOffset;
  /* 0x020c */ unsigned char HwFeedbackParkHint;
  /* 0x020d */ unsigned char HeteroCoreType;
  /* 0x020e */ unsigned short HwFeedbackTableIndex;
  /* 0x0210 */ struct _KHETRO_HWFEEDBACK_TYPE* HwFeedbackClassList;
  /* 0x0218 */ struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* EeCyclesWorkloadClassList;
  /* 0x0220 */ struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* PerfCyclesWorkloadClassList;
  /* 0x0228 */ unsigned char NotUsed;
  /* 0x0229 */ char __PADDING__[7];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0230 */

