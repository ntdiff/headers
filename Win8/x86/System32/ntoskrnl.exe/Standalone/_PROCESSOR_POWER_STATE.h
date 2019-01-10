typedef struct _PROC_IDLE_POLICY
{
  /* 0x0000 */ unsigned char PromotePercent;
  /* 0x0001 */ unsigned char DemotePercent;
  /* 0x0002 */ unsigned char PromotePercentBase;
  /* 0x0003 */ unsigned char DemotePercentBase;
  /* 0x0004 */ unsigned char AllowScaling;
} PROC_IDLE_POLICY, *PPROC_IDLE_POLICY; /* size: 0x0005 */

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
  /* 0x0060 */ unsigned char KernelTimesIndex;
  /* 0x0061 */ char __PADDING__[7];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0068 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _PROC_IDLE_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Idle;
} PROC_IDLE_SNAP, *PPROC_IDLE_SNAP; /* size: 0x0010 */

typedef struct _PROC_PERF_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 LastTime;
  /* 0x0010 */ unsigned __int64 Active;
  /* 0x0018 */ unsigned __int64 LastActive;
  /* 0x0020 */ unsigned __int64 FrequencyScaledActive;
  /* 0x0028 */ unsigned __int64 PerformanceScaledActive;
  /* 0x0030 */ unsigned __int64 CyclesActive;
  /* 0x0038 */ unsigned __int64 CyclesAffinitized;
} PROC_PERF_SNAP, *PPROC_PERF_SNAP; /* size: 0x0040 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0004 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0008 */ struct _PLATFORM_IDLE_ACCOUNTING* PlatformIdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ unsigned __int64 IdleTimeEntry;
  /* 0x0028 */ unsigned __int64 Reserved;
  /* 0x0030 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0038 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0040 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00a8 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00ac */ unsigned long LastSysTime;
  /* 0x00b0 */ unsigned long WmiDispatchPtr;
  /* 0x00b4 */ long WmiInterfaceEnabled;
  /* 0x00b8 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x00d8 */ struct _KDPC PerfActionDpc;
  /* 0x00f8 */ volatile long PerfActionMask;
  /* 0x0100 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0110 */ struct _PROC_PERF_SNAP PerfCheck;
  /* 0x0150 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0154 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x0158 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x015c */ struct _PROC_PERF_LOAD* Load;
  /* 0x0160 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0164 */ unsigned char GuaranteedPerformancePercent;
  /* 0x0165 */ unsigned char HvTargetState;
  /* 0x0166 */ unsigned char Parked;
  /* 0x0167 */ unsigned char OverUtilized;
  /* 0x0168 */ unsigned long LatestPerformancePercent;
  /* 0x016c */ unsigned long AveragePerformancePercent;
  /* 0x0170 */ unsigned long LatestAffinitizedPercent;
  /* 0x0174 */ unsigned long Utility;
  /* 0x0178 */ unsigned long AffinitizedUtility;
  /* 0x017c */ long __PADDING__[1];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0180 */

