typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned long Bitmap[1];
    /* 0x0008 */ unsigned long StaticBitmap[1];
  }; /* size: 0x0004 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _PROC_PERF_QOS_CLASS_POLICY
{
  /* 0x0000 */ unsigned long MaxPolicyPercent;
  /* 0x0004 */ unsigned long MaxEquivalentFrequencyPercent;
  /* 0x0008 */ unsigned long MinPolicyPercent;
  /* 0x000c */ unsigned long AutonomousActivityWindow;
  /* 0x0010 */ unsigned long EnergyPerfPreference;
  /* 0x0014 */ unsigned char ProvideGuidance;
  /* 0x0015 */ unsigned char AllowThrottling;
  /* 0x0016 */ unsigned char PerfBoostMode;
  /* 0x0017 */ unsigned char LatencyHintPerf;
  /* 0x0018 */ unsigned char TrackDesiredCrossClass;
  /* 0x0019 */ char __PADDING__[3];
} PROC_PERF_QOS_CLASS_POLICY, *PPROC_PERF_QOS_CLASS_POLICY; /* size: 0x001c */

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

typedef struct _PROC_PERF_DOMAIN
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _PROC_PERF_CHECK_CONTEXT* Master;
  /* 0x000c */ struct _KAFFINITY_EX Members;
  /* 0x0018 */ unsigned long DomainContext;
  /* 0x001c */ unsigned long ProcessorCount;
  /* 0x0020 */ unsigned char EfficiencyClass;
  /* 0x0021 */ unsigned char NominalPerformanceClass;
  /* 0x0022 */ unsigned char HighestPerformanceClass;
  /* 0x0024 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x0028 */ void* GetFFHThrottleState /* function */;
  /* 0x002c */ void* TimeWindowHandler /* function */;
  /* 0x0030 */ void* BoostPolicyHandler /* function */;
  /* 0x0034 */ void* BoostModeHandler /* function */;
  /* 0x0038 */ void* AutonomousActivityWindowHandler /* function */;
  /* 0x003c */ void* AutonomousModeHandler /* function */;
  /* 0x0040 */ void* ReinitializeHandler /* function */;
  /* 0x0044 */ void* PerfSelectionHandler /* function */;
  /* 0x0048 */ void* PerfControlHandler /* function */;
  /* 0x004c */ void* DomainPerfControlHandler /* function */;
  /* 0x0050 */ void* PerfUpdateHwDebugData /* function */;
  /* 0x0054 */ unsigned long Id;
  /* 0x0058 */ unsigned long MaxFrequency;
  /* 0x005c */ unsigned long NominalFrequency;
  /* 0x0060 */ unsigned long MaxPercent;
  /* 0x0064 */ unsigned long MinPerfPercent;
  /* 0x0068 */ unsigned long MinThrottlePercent;
  /* 0x006c */ unsigned long AdvertizedMaximumFrequency;
  /* 0x0070 */ unsigned __int64 MinimumRelativePerformance;
  /* 0x0078 */ unsigned __int64 NominalRelativePerformance;
  /* 0x0080 */ unsigned char NominalRelativePerformancePercent;
  /* 0x0081 */ unsigned char Coordination;
  /* 0x0082 */ unsigned char HardPlatformCap;
  /* 0x0083 */ unsigned char AffinitizeControl;
  /* 0x0084 */ unsigned char EfficientThrottle;
  /* 0x0085 */ unsigned char AllowSchedulerDirectedPerfStates;
  /* 0x0086 */ unsigned char InitiateAllProcessors;
  /* 0x0087 */ unsigned char AllowVmPerfSelection;
  /* 0x0088 */ unsigned long VmFrequencyStepMhz;
  /* 0x008c */ unsigned long VmHighestFrequencyMhz;
  /* 0x0090 */ unsigned long VmNominalFrequencyMhz;
  /* 0x0094 */ unsigned long VmLowestFrequencyMhz;
  /* 0x0098 */ unsigned char AutonomousMode;
  /* 0x0099 */ unsigned char ProvideGuidance;
  /* 0x009c */ unsigned long DesiredPercent;
  /* 0x00a0 */ unsigned long GuaranteedPercent;
  /* 0x00a4 */ unsigned char EngageResponsivenessOverrides;
  /* 0x00a8 */ struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[5];
  /* 0x0134 */ unsigned long QosDisableReasons[5];
  /* 0x0148 */ unsigned short QosEquivalencyMasks[5];
  /* 0x0152 */ unsigned char QosSupported;
  /* 0x0154 */ volatile unsigned long SelectionGeneration;
  /* 0x0158 */ struct _PERF_CONTROL_STATE_SELECTION QosSelection[5];
  /* 0x0220 */ unsigned __int64 PerfChangeTime;
  /* 0x0228 */ unsigned long PerfChangeIntervalCount;
  /* 0x022c */ unsigned char Force;
  /* 0x022d */ unsigned char Update;
  /* 0x022e */ unsigned char Apply;
  /* 0x022f */ char __PADDING__[1];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0230 */

