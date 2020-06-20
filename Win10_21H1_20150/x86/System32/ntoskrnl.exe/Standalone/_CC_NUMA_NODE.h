typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0004 */ struct _CC_PARTITION* Partition;
  /* 0x0008 */ unsigned long NodeNumber;
  /* 0x000c */ struct _LIST_ENTRY NodeList;
  /* 0x0014 */ unsigned long NumberActiveWorkerThreads;
  /* 0x0018 */ struct _LIST_ENTRY IdleWorkerThreadList;
  /* 0x0020 */ struct _LIST_ENTRY FastTeardownWorkQueue;
  /* 0x0028 */ struct _LIST_ENTRY ExpressWorkQueue;
  /* 0x0030 */ struct _LIST_ENTRY RegularWorkQueue;
  /* 0x0038 */ struct _LIST_ENTRY CleanCachemapUninitWorkQueue;
  /* 0x0040 */ struct _LIST_ENTRY IdleExtraWriteBehindThreadList;
  /* 0x0048 */ unsigned long ActiveExtraWriteBehindThreads;
  /* 0x004c */ struct _LIST_ENTRY IdleCacheMapUninitThreadList;
  /* 0x0054 */ unsigned long ActiveCacheMapUninitThreads;
  /* 0x0058 */ unsigned long ThreadsActiveBeforeThrottle;
  /* 0x005c */ unsigned long ExtraWBThreadsActiveBeforeThrottle;
  /* 0x0060 */ unsigned long ExecutingWriteBehindWorkItems;
  /* 0x0064 */ unsigned long ExecutingHighPriorityWorkItem;
  /* 0x0068 */ long ThroughputTrend;
  /* 0x0070 */ union _LARGE_INTEGER PrevRegularQueueItemRunTime;
  /* 0x0078 */ union _LARGE_INTEGER PrevExtraWBThreadCheckTime;
  /* 0x0080 */ unsigned char AddExtraWriteBehindThreads;
  /* 0x0081 */ unsigned char RemoveExtraThreadPending;
  /* 0x0084 */ struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;
  /* 0x0088 */ unsigned long* NumberActiveAsyncReadWorkerThreads;
  /* 0x008c */ unsigned long* NumberActiveCompleteAsyncReadWorkItems;
  /* 0x0090 */ struct _LIST_ENTRY* AsyncReadWorkQueue;
  /* 0x0094 */ struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;
  /* 0x0098 */ struct _KEVENT* NewAsyncReadRequestEvent;
  /* 0x009c */ struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;
} CC_NUMA_NODE, *PCC_NUMA_NODE; /* size: 0x00a0 */

