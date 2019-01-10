struct PROCESSOR_IDLE_TIMES
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 EndTime;
  /* 0x0010 */ unsigned long IdleHandlerReserved[4];
}; /* size: 0x0020 */

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
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _KDPC
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Importance;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ unsigned long* Lock;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ void* IdleFunction /* function */;
  /* 0x0004 */ unsigned long Idle0KernelTimeLimit;
  /* 0x0008 */ unsigned long Idle0LastTime;
  /* 0x000c */ void* IdleHandlers;
  /* 0x0010 */ void* IdleState;
  /* 0x0014 */ unsigned long IdleHandlersCount;
  /* 0x0018 */ unsigned __int64 LastCheck;
  /* 0x0020 */ struct PROCESSOR_IDLE_TIMES IdleTimes;
  /* 0x0040 */ unsigned long IdleTime1;
  /* 0x0044 */ unsigned long PromotionCheck;
  /* 0x0048 */ unsigned long IdleTime2;
  /* 0x004c */ unsigned char CurrentThrottle;
  /* 0x004d */ unsigned char ThermalThrottleLimit;
  /* 0x004e */ unsigned char CurrentThrottleIndex;
  /* 0x004f */ unsigned char ThermalThrottleIndex;
  /* 0x0050 */ unsigned long LastKernelUserTime;
  /* 0x0054 */ unsigned long LastIdleThreadKernelTime;
  /* 0x0058 */ unsigned long PackageIdleStartTime;
  /* 0x005c */ unsigned long PackageIdleTime;
  /* 0x0060 */ unsigned long DebugCount;
  /* 0x0064 */ unsigned long LastSysTime;
  /* 0x0068 */ unsigned __int64 TotalIdleStateTime[3];
  /* 0x0080 */ unsigned long TotalIdleTransitions[3];
  /* 0x0090 */ unsigned __int64 PreviousC3StateTime;
  /* 0x0098 */ unsigned char KneeThrottleIndex;
  /* 0x0099 */ unsigned char ThrottleLimitIndex;
  /* 0x009a */ unsigned char PerfStatesCount;
  /* 0x009b */ unsigned char ProcessorMinThrottle;
  /* 0x009c */ unsigned char ProcessorMaxThrottle;
  /* 0x009d */ unsigned char EnableIdleAccounting;
  /* 0x009e */ unsigned char LastC3Percentage;
  /* 0x009f */ unsigned char LastAdjustedBusyPercentage;
  /* 0x00a0 */ unsigned long PromotionCount;
  /* 0x00a4 */ unsigned long DemotionCount;
  /* 0x00a8 */ unsigned long ErrorCount;
  /* 0x00ac */ unsigned long RetryCount;
  /* 0x00b0 */ unsigned long Flags;
  /* 0x00b8 */ union _LARGE_INTEGER PerfCounterFrequency;
  /* 0x00c0 */ unsigned long PerfTickCount;
  /* 0x00c8 */ struct _KTIMER PerfTimer;
  /* 0x00f0 */ struct _KDPC PerfDpc;
  /* 0x0110 */ struct PROCESSOR_PERF_STATE* PerfStates;
  /* 0x0114 */ void* PerfSetThrottle /* function */;
  /* 0x0118 */ unsigned long LastC3KernelUserTime;
  /* 0x011c */ unsigned long LastPackageIdleTime;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0120 */

