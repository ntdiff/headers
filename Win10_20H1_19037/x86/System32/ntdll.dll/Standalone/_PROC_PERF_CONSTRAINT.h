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
  /* 0x0004 */ unsigned long PerfContext;
  /* 0x0008 */ unsigned long PlatformCap;
  /* 0x000c */ unsigned long ThermalCap;
  /* 0x0010 */ unsigned long LimitReasons;
  /* 0x0018 */ unsigned __int64 PlatformCapStartTime;
  /* 0x0020 */ unsigned long ProcCap;
  /* 0x0024 */ unsigned long ProcFloor;
  /* 0x0028 */ unsigned long TargetPercent;
  /* 0x002c */ unsigned char EngageResponsivenessOverrides;
  /* 0x002d */ unsigned char ResponsivenessChangeCount;
  /* 0x0030 */ struct _PERF_CONTROL_STATE_SELECTION Selection;
  /* 0x0058 */ unsigned long DomainSelectionGeneration;
  /* 0x005c */ unsigned long PreviousFrequency;
  /* 0x0060 */ unsigned long PreviousPercent;
  /* 0x0064 */ unsigned long LatestFrequencyPercent;
  /* 0x0068 */ unsigned long LatestPerformancePercent;
  /* 0x006c */ unsigned char Force;
  /* 0x006d */ unsigned char UseQosUpdateLock;
  /* 0x0070 */ unsigned long QosUpdateLock;
  /* 0x0074 */ long __PADDING__[1];
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x0078 */

