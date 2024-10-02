typedef enum _PROCESSOR_PRESENCE
{
  ProcessorPresenceNt = 0,
  ProcessorPresenceHv = 1,
  ProcessorPresenceHidden = 2,
} PROCESSOR_PRESENCE, *PPROCESSOR_PRESENCE;

typedef struct _PERF_CONTROL_STATE_SELECTION
{
  /* 0x0000 */ unsigned __int64 SelectedState;
  /* 0x0008 */ unsigned __int64 SelectedResourcePriority;
  /* 0x0010 */ unsigned long SelectedPercent;
  /* 0x0014 */ unsigned long SelectedFrequency;
  /* 0x0018 */ unsigned long MinPercent;
  /* 0x001c */ unsigned long MaxPercent;
  /* 0x0020 */ unsigned long TolerancePercent;
  /* 0x0024 */ unsigned long EppPercent;
  /* 0x0028 */ unsigned long AutonomousActivityWindow;
  /* 0x002c */ unsigned long ResourcePriorityPercent;
  /* 0x0030 */ unsigned char Autonomous;
  /* 0x0031 */ unsigned char InheritFromDomain;
  /* 0x0032 */ char __PADDING__[6];
} PERF_CONTROL_STATE_SELECTION, *PPERF_CONTROL_STATE_SELECTION; /* size: 0x0038 */

typedef struct _PPM_PERF_SNAPSHOT
{
  /* 0x0000 */ unsigned long Initiator;
  /* 0x0004 */ unsigned char LogType;
  /* 0x0005 */ unsigned char Reset;
  /* 0x0006 */ unsigned char Remote;
  /* 0x0008 */ unsigned __int64 InterruptTime;
  /* 0x0010 */ unsigned __int64 RawUnscaledTime;
  /* 0x0018 */ unsigned __int64 TotalUnscaleTime;
  /* 0x0020 */ unsigned long CachedScalingFactor[2];
  /* 0x0028 */ unsigned __int64 RawReferenceCount[2];
  /* 0x0038 */ unsigned __int64 RawActualCount[2];
  /* 0x0048 */ unsigned __int64 RawScaledTime[2];
  /* 0x0058 */ unsigned __int64 TotalScaleTime[2];
  /* 0x0068 */ unsigned __int64 HvCurrentTime;
  /* 0x0070 */ unsigned __int64 IdleAccumulation;
  /* 0x0078 */ unsigned long Value[2];
} PPM_PERF_SNAPSHOT, *PPPM_PERF_SNAPSHOT; /* size: 0x0080 */

typedef struct _PROC_PERF_CONSTRAINT
{
  /* 0x0000 */ struct _PROC_PERF_CHECK_CONTEXT* CheckContext;
  /* 0x0008 */ unsigned __int64 PerfContext;
  /* 0x0010 */ enum _PROCESSOR_PRESENCE Presence;
  /* 0x0014 */ unsigned long ProcessorId;
  /* 0x0018 */ unsigned long PlatformCap;
  /* 0x001c */ unsigned long ThermalCap;
  /* 0x0020 */ unsigned long LimitReasons;
  /* 0x0028 */ unsigned __int64 PlatformCapStartTime;
  /* 0x0030 */ unsigned long ProcCap;
  /* 0x0034 */ unsigned long ProcFloor;
  /* 0x0038 */ unsigned long TargetPercent;
  /* 0x003c */ unsigned char EngageResponsivenessOverrides;
  /* 0x003d */ unsigned char ResponsivenessChangeCount;
  /* 0x0040 */ struct _PERF_CONTROL_STATE_SELECTION Selection;
  /* 0x0078 */ unsigned long DomainSelectionGeneration;
  /* 0x007c */ unsigned long PreviousFrequency;
  /* 0x0080 */ unsigned long PreviousPercent;
  /* 0x0084 */ unsigned long LatestFrequencyPercent;
  /* 0x0088 */ unsigned long LatestPerformancePercent;
  /* 0x008c */ unsigned char Force;
  /* 0x008d */ unsigned char UseQosUpdateLock;
  /* 0x0090 */ unsigned __int64 QosUpdateLock;
  /* 0x0098 */ unsigned long CurrentLogEntry;
  /* 0x00a0 */ struct _PPM_PERF_SNAPSHOT SnapshotLog[8];
  /* 0x04a0 */ unsigned long IncreasePerfCheckCount;
  /* 0x04a4 */ unsigned long DecreasePerfCheckCount;
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x04a8 */

