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
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

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
  /* 0x0008 */ struct _KPRCB* Master;
  /* 0x000c */ struct _KAFFINITY_EX Members;
  /* 0x0018 */ unsigned long DomainContext;
  /* 0x001c */ unsigned long ProcessorCount;
  /* 0x0020 */ unsigned char EfficiencyClass;
  /* 0x0021 */ unsigned char NominalPerformanceClass;
  /* 0x0022 */ unsigned char HighestPerformanceClass;
  /* 0x0023 */ unsigned char Spare;
  /* 0x0024 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x0028 */ void* GetFFHThrottleState /* function */;
  /* 0x002c */ void* TimeWindowHandler /* function */;
  /* 0x0030 */ void* BoostPolicyHandler /* function */;
  /* 0x0034 */ void* BoostModeHandler /* function */;
  /* 0x0038 */ void* EnergyPerfPreferenceHandler /* function */;
  /* 0x003c */ void* AutonomousActivityWindowHandler /* function */;
  /* 0x0040 */ void* AutonomousModeHandler /* function */;
  /* 0x0044 */ void* ReinitializeHandler /* function */;
  /* 0x0048 */ void* PerfSelectionHandler /* function */;
  /* 0x004c */ void* PerfControlHandler /* function */;
  /* 0x0050 */ void* DomainPerfControlHandler /* function */;
  /* 0x0054 */ unsigned long MaxFrequency;
  /* 0x0058 */ unsigned long NominalFrequency;
  /* 0x005c */ unsigned long MaxPercent;
  /* 0x0060 */ unsigned long MinPerfPercent;
  /* 0x0064 */ unsigned long MinThrottlePercent;
  /* 0x0068 */ unsigned __int64 MinimumRelativePerformance;
  /* 0x0070 */ unsigned __int64 NominalRelativePerformance;
  /* 0x0078 */ unsigned char NominalRelativePerformancePercent;
  /* 0x0079 */ unsigned char Coordination;
  /* 0x007a */ unsigned char HardPlatformCap;
  /* 0x007b */ unsigned char AffinitizeControl;
  /* 0x007c */ unsigned char EfficientThrottle;
  /* 0x007d */ unsigned char AllowVirtualHeterogeneity;
  /* 0x007e */ unsigned char InitiateAllProcessors;
  /* 0x007f */ unsigned char AutonomousMode;
  /* 0x0080 */ unsigned long DesiredPercent;
  /* 0x0084 */ unsigned long MaxPolicyPercent;
  /* 0x0088 */ unsigned long MaxEquivalentFrequencyPercent;
  /* 0x008c */ unsigned long MinPolicyPercent;
  /* 0x0090 */ unsigned long GuaranteedPercent;
  /* 0x0094 */ unsigned long SelectionGeneration;
  /* 0x0098 */ unsigned long BackgroundSelectionGeneration;
  /* 0x00a0 */ struct _PERF_CONTROL_STATE_SELECTION Selection;
  /* 0x00c8 */ struct _PERF_CONTROL_STATE_SELECTION BackgroundSelection;
  /* 0x00f0 */ unsigned __int64 PerfChangeTime;
  /* 0x00f8 */ unsigned long PerfChangeIntervalCount;
  /* 0x00fc */ unsigned char Force;
  /* 0x00fd */ unsigned char ProvideGuidance;
  /* 0x00fe */ char __PADDING__[2];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0100 */

