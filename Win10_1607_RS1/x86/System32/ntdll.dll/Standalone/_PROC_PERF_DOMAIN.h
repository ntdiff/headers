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

typedef struct _PROC_PERF_DOMAIN
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _KPRCB* Master;
  /* 0x000c */ struct _KAFFINITY_EX Members;
  /* 0x0018 */ unsigned long ProcessorCount;
  /* 0x001c */ unsigned char EfficiencyClass;
  /* 0x001d */ unsigned char NominalPerformanceClass;
  /* 0x001e */ unsigned char HighestPerformanceClass;
  /* 0x001f */ unsigned char Spare;
  /* 0x0020 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x0024 */ void* GetFFHThrottleState /* function */;
  /* 0x0028 */ void* TimeWindowHandler /* function */;
  /* 0x002c */ void* BoostPolicyHandler /* function */;
  /* 0x0030 */ void* BoostModeHandler /* function */;
  /* 0x0034 */ void* EnergyPerfPreferenceHandler /* function */;
  /* 0x0038 */ void* AutonomousActivityWindowHandler /* function */;
  /* 0x003c */ void* AutonomousModeHandler /* function */;
  /* 0x0040 */ void* ReinitializeHandler /* function */;
  /* 0x0044 */ void* PerfSelectionHandler /* function */;
  /* 0x0048 */ void* PerfControlHandler /* function */;
  /* 0x004c */ unsigned long MaxFrequency;
  /* 0x0050 */ unsigned long NominalFrequency;
  /* 0x0054 */ unsigned long MaxPercent;
  /* 0x0058 */ unsigned long MinPerfPercent;
  /* 0x005c */ unsigned long MinThrottlePercent;
  /* 0x0060 */ unsigned __int64 MinimumRelativePerformance;
  /* 0x0068 */ unsigned __int64 NominalRelativePerformance;
  /* 0x0070 */ unsigned char Coordination;
  /* 0x0071 */ unsigned char HardPlatformCap;
  /* 0x0072 */ unsigned char AffinitizeControl;
  /* 0x0073 */ unsigned char EfficientThrottle;
  /* 0x0074 */ unsigned char AutonomousMode;
  /* 0x0078 */ unsigned long SelectedPercent;
  /* 0x007c */ unsigned long SelectedFrequency;
  /* 0x0080 */ unsigned long DesiredPercent;
  /* 0x0084 */ unsigned long MaxPolicyPercent;
  /* 0x0088 */ unsigned long MinPolicyPercent;
  /* 0x008c */ unsigned long ConstrainedMaxPercent;
  /* 0x0090 */ unsigned long ConstrainedMinPercent;
  /* 0x0094 */ unsigned long GuaranteedPercent;
  /* 0x0098 */ unsigned long TolerancePercent;
  /* 0x00a0 */ unsigned __int64 SelectedState;
  /* 0x00a8 */ unsigned __int64 PerfChangeTime;
  /* 0x00b0 */ unsigned long PerfChangeIntervalCount;
  /* 0x00b4 */ unsigned char Force;
  /* 0x00b5 */ unsigned char ProvideGuidance;
  /* 0x00b6 */ char __PADDING__[2];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x00b8 */

