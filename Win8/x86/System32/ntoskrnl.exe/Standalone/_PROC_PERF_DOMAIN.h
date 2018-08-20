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
  /* 0x001c */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x0020 */ void* GetFFHThrottleState /* function */;
  /* 0x0024 */ void* BoostPolicyHandler /* function */;
  /* 0x0028 */ void* BoostModeHandler /* function */;
  /* 0x002c */ void* PerfSelectionHandler /* function */;
  /* 0x0030 */ void* PerfControlHandler /* function */;
  /* 0x0034 */ unsigned long MaxFrequency;
  /* 0x0038 */ unsigned long NominalFrequency;
  /* 0x003c */ unsigned long MaxPercent;
  /* 0x0040 */ unsigned long MinPerfPercent;
  /* 0x0044 */ unsigned long MinThrottlePercent;
  /* 0x0048 */ unsigned char Coordination;
  /* 0x0049 */ unsigned char HardPlatformCap;
  /* 0x004a */ unsigned char AffinitizeControl;
  /* 0x004c */ unsigned long SelectedPercent;
  /* 0x0050 */ unsigned long SelectedFrequency;
  /* 0x0054 */ unsigned long DesiredPercent;
  /* 0x0058 */ unsigned long MaxPolicyPercent;
  /* 0x005c */ unsigned long MinPolicyPercent;
  /* 0x0060 */ unsigned long ConstrainedMaxPercent;
  /* 0x0064 */ unsigned long ConstrainedMinPercent;
  /* 0x0068 */ unsigned long GuaranteedPercent;
  /* 0x006c */ unsigned long TolerancePercent;
  /* 0x0070 */ unsigned __int64 SelectedState;
  /* 0x0078 */ unsigned char Force;
  /* 0x0080 */ unsigned __int64 PerfChangeTime;
  /* 0x0088 */ unsigned long PerfChangeIntervalCount;
  /* 0x008c */ long __PADDING__[1];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0090 */

