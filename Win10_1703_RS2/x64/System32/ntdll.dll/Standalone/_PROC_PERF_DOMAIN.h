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
  /* 0x0010 */ struct _KPRCB* Master;
  /* 0x0018 */ struct _KAFFINITY_EX Members;
  /* 0x00c0 */ unsigned __int64 DomainContext;
  /* 0x00c8 */ unsigned long ProcessorCount;
  /* 0x00cc */ unsigned char EfficiencyClass;
  /* 0x00cd */ unsigned char NominalPerformanceClass;
  /* 0x00ce */ unsigned char HighestPerformanceClass;
  /* 0x00cf */ unsigned char Spare;
  /* 0x00d0 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x00d8 */ void* GetFFHThrottleState /* function */;
  /* 0x00e0 */ void* TimeWindowHandler /* function */;
  /* 0x00e8 */ void* BoostPolicyHandler /* function */;
  /* 0x00f0 */ void* BoostModeHandler /* function */;
  /* 0x00f8 */ void* EnergyPerfPreferenceHandler /* function */;
  /* 0x0100 */ void* AutonomousActivityWindowHandler /* function */;
  /* 0x0108 */ void* AutonomousModeHandler /* function */;
  /* 0x0110 */ void* ReinitializeHandler /* function */;
  /* 0x0118 */ void* PerfSelectionHandler /* function */;
  /* 0x0120 */ void* PerfControlHandler /* function */;
  /* 0x0128 */ void* DomainPerfControlHandler /* function */;
  /* 0x0130 */ unsigned long MaxFrequency;
  /* 0x0134 */ unsigned long NominalFrequency;
  /* 0x0138 */ unsigned long MaxPercent;
  /* 0x013c */ unsigned long MinPerfPercent;
  /* 0x0140 */ unsigned long MinThrottlePercent;
  /* 0x0148 */ unsigned __int64 MinimumRelativePerformance;
  /* 0x0150 */ unsigned __int64 NominalRelativePerformance;
  /* 0x0158 */ unsigned char NominalRelativePerformancePercent;
  /* 0x0159 */ unsigned char Coordination;
  /* 0x015a */ unsigned char HardPlatformCap;
  /* 0x015b */ unsigned char AffinitizeControl;
  /* 0x015c */ unsigned char EfficientThrottle;
  /* 0x015d */ unsigned char AllowVirtualHeterogeneity;
  /* 0x015e */ unsigned char InitiateAllProcessors;
  /* 0x015f */ unsigned char AutonomousMode;
  /* 0x0160 */ unsigned long DesiredPercent;
  /* 0x0164 */ unsigned long MaxPolicyPercent;
  /* 0x0168 */ unsigned long MaxEquivalentFrequencyPercent;
  /* 0x016c */ unsigned long MinPolicyPercent;
  /* 0x0170 */ unsigned long GuaranteedPercent;
  /* 0x0174 */ unsigned long SelectionGeneration;
  /* 0x0178 */ unsigned long BackgroundSelectionGeneration;
  /* 0x0180 */ struct _PERF_CONTROL_STATE_SELECTION Selection;
  /* 0x01a8 */ struct _PERF_CONTROL_STATE_SELECTION BackgroundSelection;
  /* 0x01d0 */ unsigned __int64 PerfChangeTime;
  /* 0x01d8 */ unsigned long PerfChangeIntervalCount;
  /* 0x01dc */ unsigned char Force;
  /* 0x01dd */ unsigned char ProvideGuidance;
  /* 0x01de */ char __PADDING__[2];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x01e0 */

