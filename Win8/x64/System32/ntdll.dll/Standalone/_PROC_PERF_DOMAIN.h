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
  /* 0x00c8 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x00d0 */ void* GetFFHThrottleState /* function */;
  /* 0x00d8 */ void* BoostPolicyHandler /* function */;
  /* 0x00e0 */ void* BoostModeHandler /* function */;
  /* 0x00e8 */ void* PerfSelectionHandler /* function */;
  /* 0x00f0 */ void* PerfControlHandler /* function */;
  /* 0x00f8 */ unsigned long MaxFrequency;
  /* 0x00fc */ unsigned long NominalFrequency;
  /* 0x0100 */ unsigned long MaxPercent;
  /* 0x0104 */ unsigned long MinPerfPercent;
  /* 0x0108 */ unsigned long MinThrottlePercent;
  /* 0x010c */ unsigned char Coordination;
  /* 0x010d */ unsigned char HardPlatformCap;
  /* 0x010e */ unsigned char AffinitizeControl;
  /* 0x0110 */ unsigned long SelectedPercent;
  /* 0x0114 */ unsigned long SelectedFrequency;
  /* 0x0118 */ unsigned long DesiredPercent;
  /* 0x011c */ unsigned long MaxPolicyPercent;
  /* 0x0120 */ unsigned long MinPolicyPercent;
  /* 0x0124 */ unsigned long ConstrainedMaxPercent;
  /* 0x0128 */ unsigned long ConstrainedMinPercent;
  /* 0x012c */ unsigned long GuaranteedPercent;
  /* 0x0130 */ unsigned long TolerancePercent;
  /* 0x0138 */ unsigned __int64 SelectedState;
  /* 0x0140 */ unsigned char Force;
  /* 0x0148 */ unsigned __int64 PerfChangeTime;
  /* 0x0150 */ unsigned long PerfChangeIntervalCount;
  /* 0x0154 */ long __PADDING__[1];
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0158 */

