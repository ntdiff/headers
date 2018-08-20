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
  /* 0x0068 */ unsigned char KernelTimesIndex;
  /* 0x0069 */ char __PADDING__[7];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0070 */

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
    struct // _TAG_UNNAMED_1
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

typedef struct _PROC_PERF_UTILITY
{
  /* 0x0000 */ unsigned long Affinitized;
  /* 0x0004 */ unsigned long Performance;
  /* 0x0008 */ unsigned long Total;
} PROC_PERF_UTILITY, *PPROC_PERF_UTILITY; /* size: 0x000c */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ unsigned __int64 IdleTimeEntry;
  /* 0x0028 */ unsigned __int64 Reserved;
  /* 0x0030 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0038 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0040 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00b0 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00b4 */ unsigned long LastSysTime;
  /* 0x00b8 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00c0 */ long WmiInterfaceEnabled;
  /* 0x00c8 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x00e8 */ struct _KDPC PerfActionDpc;
  /* 0x0128 */ volatile long PerfActionMask;
  /* 0x0130 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0140 */ struct _PROC_PERF_SNAP PerfCheck;
  /* 0x0180 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0188 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x0190 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x0198 */ struct _PROC_PERF_LOAD* Load;
  /* 0x01a0 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x01a8 */ unsigned char GuaranteedPerformancePercent;
  /* 0x01a9 */ unsigned char HvTargetState;
  /* 0x01aa */ unsigned char Parked;
  /* 0x01ab */ unsigned char OverUtilized;
  /* 0x01ac */ unsigned long LatestPerformancePercent;
  /* 0x01b0 */ unsigned long LatestAffinitizedPercent;
  /* 0x01b4 */ unsigned long ExpectedUtility;
  /* 0x01b8 */ struct _PROC_PERF_UTILITY Utility[3];
  /* 0x01dc */ long __PADDING__[1];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x01e0 */

