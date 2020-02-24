typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef enum _PROCESSOR_PRESENCE
{
  ProcessorPresenceNt = 0,
  ProcessorPresenceHv = 1,
  ProcessorPresenceHidden = 2,
} PROCESSOR_PRESENCE, *PPROCESSOR_PRESENCE;

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
  /* 0x0010 */ struct _PROC_PERF_CHECK_CONTEXT* Master;
  /* 0x0018 */ struct _KAFFINITY_EX Members;
  /* 0x00c0 */ unsigned __int64 DomainContext;
  /* 0x00c8 */ unsigned long ProcessorCount;
  /* 0x00cc */ unsigned char EfficiencyClass;
  /* 0x00cd */ unsigned char NominalPerformanceClass;
  /* 0x00ce */ unsigned char HighestPerformanceClass;
  /* 0x00d0 */ enum _PROCESSOR_PRESENCE Presence;
  /* 0x00d8 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x00e0 */ void* GetFFHThrottleState /* function */;
  /* 0x00e8 */ void* TimeWindowHandler /* function */;
  /* 0x00f0 */ void* BoostPolicyHandler /* function */;
  /* 0x00f8 */ void* BoostModeHandler /* function */;
  /* 0x0100 */ void* AutonomousActivityWindowHandler /* function */;
  /* 0x0108 */ void* AutonomousModeHandler /* function */;
  /* 0x0110 */ void* ReinitializeHandler /* function */;
  /* 0x0118 */ void* PerfSelectionHandler /* function */;
  /* 0x0120 */ void* PerfControlHandler /* function */;
  /* 0x0128 */ void* PerfControlHandlerHidden /* function */;
  /* 0x0130 */ void* DomainPerfControlHandler /* function */;
  /* 0x0138 */ unsigned long MaxFrequency;
  /* 0x013c */ unsigned long NominalFrequency;
  /* 0x0140 */ unsigned long MaxPercent;
  /* 0x0144 */ unsigned long MinPerfPercent;
  /* 0x0148 */ unsigned long MinThrottlePercent;
  /* 0x014c */ unsigned long AdvertizedMaximumFrequency;
  /* 0x0150 */ unsigned __int64 MinimumRelativePerformance;
  /* 0x0158 */ unsigned __int64 NominalRelativePerformance;
  /* 0x0160 */ unsigned char NominalRelativePerformancePercent;
  /* 0x0161 */ unsigned char Coordination;
  /* 0x0162 */ unsigned char HardPlatformCap;
  /* 0x0163 */ unsigned char AffinitizeControl;
  /* 0x0164 */ unsigned char EfficientThrottle;
  /* 0x0165 */ unsigned char AllowSchedulerDirectedPerfStates;
  /* 0x0166 */ unsigned char InitiateAllProcessors;
  /* 0x0167 */ unsigned char AllowVmPerfSelection;
  /* 0x0168 */ unsigned char AutonomousMode;
  /* 0x0169 */ unsigned char ProvideGuidance;
  /* 0x016c */ unsigned long DesiredPercent;
  /* 0x0170 */ unsigned long GuaranteedPercent;
  /* 0x0174 */ unsigned char EngageResponsivenessOverrides;
  /* 0x0178 */ struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[5];
  /* 0x0204 */ unsigned long QosDisableReasons[5];
  /* 0x0218 */ unsigned short QosEquivalencyMasks[5];
  /* 0x0222 */ unsigned char QosSupported;
  /* 0x0224 */ volatile unsigned long SelectionGeneration;
  /* 0x0228 */ struct _PERF_CONTROL_STATE_SELECTION QosSelection[5];
  /* 0x02f0 */ unsigned __int64 PerfChangeTime;
  /* 0x02f8 */ unsigned long PerfChangeIntervalCount;
  /* 0x02fc */ unsigned char Force;
  /* 0x02fd */ unsigned char Update;
  /* 0x02fe */ unsigned char Apply;
  /* 0x02ff */ char __PADDING__[1];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0300 */

