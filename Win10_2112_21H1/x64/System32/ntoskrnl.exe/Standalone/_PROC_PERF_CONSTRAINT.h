typedef enum _PROCESSOR_PRESENCE
{
  ProcessorPresenceNt = 0,
  ProcessorPresenceHv = 1,
  ProcessorPresenceHidden = 2,
} PROCESSOR_PRESENCE, *PPROCESSOR_PRESENCE;

typedef struct _PERF_CONTROL_STATE_SELECTION
{
  /* 0x0000 */ unsigned __int64 SelectedState;
  /* 0x0008 */ unsigned long SelectedPercent;
  /* 0x000c */ unsigned long SelectedFrequency;
  /* 0x0010 */ unsigned long MinPercent;
  /* 0x0014 */ unsigned long MaxPercent;
  /* 0x0018 */ unsigned long TolerancePercent;
  /* 0x001c */ unsigned long EppPercent;
  /* 0x0020 */ unsigned long AutonomousActivityWindow;
  /* 0x0024 */ unsigned char Autonomous;
  /* 0x0025 */ unsigned char InheritFromDomain;
  /* 0x0026 */ char __PADDING__[2];
} PERF_CONTROL_STATE_SELECTION, *PPERF_CONTROL_STATE_SELECTION; /* size: 0x0028 */

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
  /* 0x0068 */ unsigned long DomainSelectionGeneration;
  /* 0x006c */ unsigned long PreviousFrequency;
  /* 0x0070 */ unsigned long PreviousPercent;
  /* 0x0074 */ unsigned long LatestFrequencyPercent;
  /* 0x0078 */ unsigned long LatestPerformancePercent;
  /* 0x007c */ unsigned char Force;
  /* 0x007d */ unsigned char UseQosUpdateLock;
  /* 0x0080 */ unsigned __int64 QosUpdateLock;
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x0088 */

