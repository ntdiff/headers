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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
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

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ unsigned __int64 IdleTimeLast;
  /* 0x0010 */ unsigned __int64 IdleTimeTotal;
  /* 0x0018 */ unsigned __int64 IdleTimeEntry;
  /* 0x0020 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0028 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x002c */ unsigned long PerfHistoryTotal;
  /* 0x0030 */ unsigned char ThermalConstraint;
  /* 0x0031 */ unsigned char PerfHistoryCount;
  /* 0x0032 */ unsigned char PerfHistorySlot;
  /* 0x0033 */ unsigned char Reserved;
  /* 0x0034 */ unsigned long LastSysTime;
  /* 0x0038 */ unsigned __int64 WmiDispatchPtr;
  /* 0x0040 */ long WmiInterfaceEnabled;
  /* 0x0048 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0068 */ struct _KDPC PerfActionDpc;
  /* 0x00a8 */ volatile long PerfActionMask;
  /* 0x00b0 */ struct _PROC_IDLE_SNAP IdleCheck;
  /* 0x00c0 */ struct _PROC_IDLE_SNAP PerfCheck;
  /* 0x00d0 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x00d8 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x00e0 */ struct _PROC_PERF_LOAD* Load;
  /* 0x00e8 */ struct _PROC_HISTORY_ENTRY* PerfHistory;
  /* 0x00f0 */ unsigned long Utility;
  /* 0x00f4 */ unsigned long OverUtilizedHistory;
  /* 0x00f8 */ volatile unsigned long AffinityCount;
  /* 0x00fc */ unsigned long AffinityHistory;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0100 */

