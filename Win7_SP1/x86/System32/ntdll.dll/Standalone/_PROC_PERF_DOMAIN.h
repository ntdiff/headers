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
  /* 0x0018 */ void* FeedbackHandler /* function */;
  /* 0x001c */ void* GetFFHThrottleState /* function */;
  /* 0x0020 */ void* BoostPolicyHandler /* function */;
  /* 0x0024 */ void* PerfSelectionHandler /* function */;
  /* 0x0028 */ void* PerfHandler /* function */;
  /* 0x002c */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x0030 */ unsigned __int64 PerfChangeTime;
  /* 0x0038 */ unsigned long ProcessorCount;
  /* 0x003c */ unsigned long PreviousFrequencyMhz;
  /* 0x0040 */ unsigned long CurrentFrequencyMhz;
  /* 0x0044 */ unsigned long PreviousFrequency;
  /* 0x0048 */ unsigned long CurrentFrequency;
  /* 0x004c */ unsigned long CurrentPerfContext;
  /* 0x0050 */ unsigned long DesiredFrequency;
  /* 0x0054 */ unsigned long MaxFrequency;
  /* 0x0058 */ unsigned long MinPerfPercent;
  /* 0x005c */ unsigned long MinThrottlePercent;
  /* 0x0060 */ unsigned long MaxPercent;
  /* 0x0064 */ unsigned long MinPercent;
  /* 0x0068 */ unsigned long ConstrainedMaxPercent;
  /* 0x006c */ unsigned long ConstrainedMinPercent;
  /* 0x0070 */ unsigned char Coordination;
  /* 0x0074 */ volatile long PerfChangeIntervalCount;
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x0078 */

