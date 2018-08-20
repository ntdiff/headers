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
  /* 0x0008 */ unsigned __int64 Bitmap[4];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0028 */

typedef struct _PROC_PERF_DOMAIN
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _KPRCB* Master;
  /* 0x0018 */ struct _KAFFINITY_EX Members;
  /* 0x0040 */ void* FeedbackHandler /* function */;
  /* 0x0048 */ void* GetFFHThrottleState /* function */;
  /* 0x0050 */ void* BoostPolicyHandler /* function */;
  /* 0x0058 */ void* PerfSelectionHandler /* function */;
  /* 0x0060 */ void* PerfHandler /* function */;
  /* 0x0068 */ struct _PROC_PERF_CONSTRAINT* Processors;
  /* 0x0070 */ unsigned __int64 PerfChangeTime;
  /* 0x0078 */ unsigned long ProcessorCount;
  /* 0x007c */ unsigned long PreviousFrequencyMhz;
  /* 0x0080 */ unsigned long CurrentFrequencyMhz;
  /* 0x0084 */ unsigned long PreviousFrequency;
  /* 0x0088 */ unsigned long CurrentFrequency;
  /* 0x008c */ unsigned long CurrentPerfContext;
  /* 0x0090 */ unsigned long DesiredFrequency;
  /* 0x0094 */ unsigned long MaxFrequency;
  /* 0x0098 */ unsigned long MinPerfPercent;
  /* 0x009c */ unsigned long MinThrottlePercent;
  /* 0x00a0 */ unsigned long MaxPercent;
  /* 0x00a4 */ unsigned long MinPercent;
  /* 0x00a8 */ unsigned long ConstrainedMaxPercent;
  /* 0x00ac */ unsigned long ConstrainedMinPercent;
  /* 0x00b0 */ unsigned char Coordination;
  /* 0x00b4 */ volatile long PerfChangeIntervalCount;
} PROC_PERF_DOMAIN, *PPROC_PERF_DOMAIN; /* size: 0x00b8 */

