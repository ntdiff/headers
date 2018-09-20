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
  /* 0x0000 */ struct _KPRCB* Prcb;
  /* 0x0008 */ unsigned __int64 PerfContext;
  /* 0x0010 */ unsigned long PlatformCap;
  /* 0x0014 */ unsigned long ThermalCap;
  /* 0x0018 */ unsigned long LimitReasons;
  /* 0x0020 */ unsigned __int64 PlatformCapStartTime;
  /* 0x0028 */ unsigned long ProcCap;
  /* 0x002c */ unsigned long ProcFloor;
  /* 0x0030 */ unsigned long TargetPercent;
  /* 0x0034 */ unsigned char EngageResponsivenessOverrides;
  /* 0x0035 */ unsigned char ResponsivenessChangeCount;
  /* 0x0038 */ struct _PERF_CONTROL_STATE_SELECTION Selection;
  /* 0x0060 */ unsigned long DomainSelectionGeneration;
  /* 0x0064 */ unsigned long PreviousFrequency;
  /* 0x0068 */ unsigned long PreviousPercent;
  /* 0x006c */ unsigned long LatestFrequencyPercent;
  /* 0x0070 */ unsigned char Force;
  /* 0x0071 */ unsigned char UseQosUpdateLock;
  /* 0x0078 */ unsigned __int64 QosUpdateLock;
} PROC_PERF_CONSTRAINT, *PPROC_PERF_CONSTRAINT; /* size: 0x0080 */

