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
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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

typedef struct _PROC_IDLE_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Idle;
} PROC_IDLE_SNAP, *PPROC_IDLE_SNAP; /* size: 0x0010 */

typedef struct _PROC_PERF_CHECK_CONTEXT
{
  /* 0x0000 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0004 */ struct _PROC_PERF_CONSTRAINT* Constraint;
  /* 0x0008 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x000c */ struct _PROC_PERF_LOAD* Load;
  /* 0x0010 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0014 */ unsigned long Utility;
  /* 0x0018 */ unsigned long AffinitizedUtility;
  /* 0x001c */ unsigned long MediaUtility;
  /* 0x0020 */ unsigned long ImportantUtility;
  /* 0x0024 */ unsigned short LatestAffinitizedPercent;
  /* 0x0026 */ unsigned short AveragePerformancePercent;
  /* 0x0028 */ unsigned long RelativePerformance;
} PROC_PERF_CHECK_CONTEXT, *PPROC_PERF_CHECK_CONTEXT; /* size: 0x002c */

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
  /* 0x0130 */ struct _PROC_PERF_CHECK_CONTEXT CheckContext;
  /* 0x015c */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x0160 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x0164 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x0165 */ unsigned char PerformanceSchedulingClass;
  /* 0x0166 */ unsigned char EfficiencySchedulingClass;
  /* 0x0167 */ unsigned char Unused;
  /* 0x0168 */ unsigned char Parked;
  /* 0x0169 */ unsigned char LongPriorQosPeriod;
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

