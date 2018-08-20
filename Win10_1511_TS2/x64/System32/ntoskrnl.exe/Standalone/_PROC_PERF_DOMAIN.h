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

typedef struct _PROC_PERF_DOMAIN
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _KPRCB* Master;
  /* 0x0018 */ struct _KAFFINITY_EX Members;
  /* 0x00c0 */ unsigned long ProcessorCount;
  /* 0x00c4 */ unsigned char Class;
  /* 0x00c5 */ unsigned char Spare[3];
  /* 0x00c8 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x00d0 */ void* GetFFHThrottleState /* function */;
  /* 0x00d8 */ void* TimeWindowHandler /* function */;
  /* 0x00e0 */ void* BoostPolicyHandler /* function */;
  /* 0x00e8 */ void* BoostModeHandler /* function */;
  /* 0x00f0 */ void* EnergyPerfPreferenceHandler /* function */;
  /* 0x00f8 */ void* AutonomousActivityWindowHandler /* function */;
  /* 0x0100 */ void* AutonomousModeHandler /* function */;
  /* 0x0108 */ void* ReinitializeHandler /* function */;
  /* 0x0110 */ void* PerfSelectionHandler /* function */;
  /* 0x0118 */ void* PerfControlHandler /* function */;
  /* 0x0120 */ unsigned long MaxFrequency;
  /* 0x0124 */ unsigned long NominalFrequency;
  /* 0x0128 */ unsigned long MaxPercent;
  /* 0x012c */ unsigned long MinPerfPercent;
  /* 0x0130 */ unsigned long MinThrottlePercent;
  /* 0x0138 */ unsigned __int64 MinimumRelativePerformance;
  /* 0x0140 */ unsigned __int64 NominalRelativePerformance;
  /* 0x0148 */ unsigned char Coordination;
  /* 0x0149 */ unsigned char HardPlatformCap;
  /* 0x014a */ unsigned char AffinitizeControl;
  /* 0x014b */ unsigned char EfficientThrottle;
  /* 0x014c */ unsigned char AutonomousMode;
  /* 0x0150 */ unsigned long SelectedPercent;
  /* 0x0154 */ unsigned long SelectedFrequency;
  /* 0x0158 */ unsigned long DesiredPercent;
  /* 0x015c */ unsigned long MaxPolicyPercent;
  /* 0x0160 */ unsigned long MinPolicyPercent;
  /* 0x0164 */ unsigned long ConstrainedMaxPercent;
  /* 0x0168 */ unsigned long ConstrainedMinPercent;
  /* 0x016c */ unsigned long GuaranteedPercent;
  /* 0x0170 */ unsigned long TolerancePercent;
  /* 0x0178 */ unsigned __int64 SelectedState;
  /* 0x0180 */ unsigned __int64 PerfChangeTime;
  /* 0x0188 */ unsigned long PerfChangeIntervalCount;
  /* 0x018c */ unsigned char Force;
  /* 0x018d */ unsigned char ProvideGuidance;
  /* 0x018e */ char __PADDING__[2];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0190 */

