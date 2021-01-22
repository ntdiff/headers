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
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

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
  /* 0x0120 */ unsigned __int64 DomainContext;
  /* 0x0128 */ unsigned long ProcessorCount;
  /* 0x012c */ unsigned char EfficiencyClass;
  /* 0x012d */ unsigned char NominalPerformanceClass;
  /* 0x012e */ unsigned char HighestPerformanceClass;
  /* 0x0130 */ enum _PROCESSOR_PRESENCE Presence;
  /* 0x0138 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x0140 */ void* GetFFHThrottleState /* function */;
  /* 0x0148 */ void* TimeWindowHandler /* function */;
  /* 0x0150 */ void* BoostPolicyHandler /* function */;
  /* 0x0158 */ void* BoostModeHandler /* function */;
  /* 0x0160 */ void* AutonomousActivityWindowHandler /* function */;
  /* 0x0168 */ void* AutonomousModeHandler /* function */;
  /* 0x0170 */ void* ReinitializeHandler /* function */;
  /* 0x0178 */ void* PerfSelectionHandler /* function */;
  /* 0x0180 */ void* PerfControlHandler /* function */;
  /* 0x0188 */ void* PerfControlHandlerHidden /* function */;
  /* 0x0190 */ void* DomainPerfControlHandler /* function */;
  /* 0x0198 */ void* PerfUpdateHwDebugData /* function */;
  /* 0x01a0 */ unsigned long Id;
  /* 0x01a4 */ unsigned long MaxFrequency;
  /* 0x01a8 */ unsigned long NominalFrequency;
  /* 0x01ac */ unsigned long MaxPercent;
  /* 0x01b0 */ unsigned long MinPerfPercent;
  /* 0x01b4 */ unsigned long MinThrottlePercent;
  /* 0x01b8 */ unsigned long AdvertizedMaximumFrequency;
  /* 0x01c0 */ unsigned __int64 MinimumRelativePerformance;
  /* 0x01c8 */ unsigned __int64 NominalRelativePerformance;
  /* 0x01d0 */ unsigned char NominalRelativePerformancePercent;
  /* 0x01d1 */ unsigned char Coordination;
  /* 0x01d2 */ unsigned char HardPlatformCap;
  /* 0x01d3 */ unsigned char AffinitizeControl;
  /* 0x01d4 */ unsigned char EfficientThrottle;
  /* 0x01d5 */ unsigned char AllowSchedulerDirectedPerfStates;
  /* 0x01d6 */ unsigned char InitiateAllProcessors;
  /* 0x01d7 */ unsigned char AllowVmPerfSelection;
  /* 0x01d8 */ unsigned long VmFrequencyStepMhz;
  /* 0x01dc */ unsigned long VmHighestFrequencyMhz;
  /* 0x01e0 */ unsigned long VmNominalFrequencyMhz;
  /* 0x01e4 */ unsigned long VmLowestFrequencyMhz;
  /* 0x01e8 */ unsigned char AutonomousMode;
  /* 0x01e9 */ unsigned char ProvideGuidance;
  /* 0x01ec */ unsigned long DesiredPercent;
  /* 0x01f0 */ unsigned long GuaranteedPercent;
  /* 0x01f4 */ unsigned char EngageResponsivenessOverrides;
  /* 0x01f8 */ struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[5];
  /* 0x0284 */ unsigned long QosDisableReasons[5];
  /* 0x0298 */ unsigned short QosEquivalencyMasks[5];
  /* 0x02a2 */ unsigned char QosSupported;
  /* 0x02a4 */ volatile unsigned long SelectionGeneration;
  /* 0x02a8 */ struct _PERF_CONTROL_STATE_SELECTION QosSelection[5];
  /* 0x0370 */ unsigned __int64 PerfChangeTime;
  /* 0x0378 */ unsigned long PerfChangeIntervalCount;
  /* 0x037c */ unsigned char Force;
  /* 0x037d */ unsigned char Update;
  /* 0x037e */ unsigned char Apply;
  /* 0x037f */ char __PADDING__[1];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0380 */

