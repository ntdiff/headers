typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _CC_NUMA_NODE
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0008 */ struct _CC_PARTITION* Partition;
  /* 0x0010 */ unsigned long NodeNumber;
  /* 0x0018 */ struct _LIST_ENTRY NodeList;
  /* 0x0028 */ unsigned long NumberActiveWorkerThreads;
  /* 0x0030 */ struct _LIST_ENTRY IdleWorkerThreadList;
  /* 0x0040 */ struct _LIST_ENTRY FastTeardownWorkQueue;
  /* 0x0050 */ struct _LIST_ENTRY ExpressWorkQueue;
  /* 0x0060 */ struct _LIST_ENTRY RegularWorkQueue;
  /* 0x0070 */ struct _LIST_ENTRY CleanCachemapUninitWorkQueue;
  /* 0x0080 */ struct _LIST_ENTRY IdleExtraWriteBehindThreadList;
  /* 0x0090 */ unsigned long ActiveExtraWriteBehindThreads;
  /* 0x0098 */ struct _LIST_ENTRY IdleCacheMapUninitThreadList;
  /* 0x00a8 */ unsigned long ActiveCacheMapUninitThreads;
  /* 0x00ac */ unsigned long ThreadsActiveBeforeThrottle;
  /* 0x00b0 */ unsigned long ExtraWBThreadsActiveBeforeThrottle;
  /* 0x00b4 */ unsigned long ExecutingWriteBehindWorkItems;
  /* 0x00b8 */ unsigned long ExecutingHighPriorityWorkItem;
  /* 0x00bc */ long ThroughputTrend;
  /* 0x00c0 */ union _LARGE_INTEGER PrevRegularQueueItemRunTime;
  /* 0x00c8 */ union _LARGE_INTEGER PrevExtraWBThreadCheckTime;
  /* 0x00d0 */ unsigned char AddExtraWriteBehindThreads;
  /* 0x00d1 */ unsigned char RemoveExtraThreadPending;
  /* 0x00d8 */ struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;
  /* 0x00e0 */ unsigned long* NumberActiveAsyncReadWorkerThreads;
  /* 0x00e8 */ unsigned long* NumberActiveCompleteAsyncReadWorkItems;
  /* 0x00f0 */ struct _LIST_ENTRY* AsyncReadWorkQueue;
  /* 0x00f8 */ struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;
  /* 0x0100 */ struct _KEVENT* NewAsyncReadRequestEvent;
  /* 0x0108 */ struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;
} CC_NUMA_NODE, *PCC_NUMA_NODE; /* size: 0x0110 */

