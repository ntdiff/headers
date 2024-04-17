typedef enum _CC_NUMA_TYPE
{
  InvalidNumaNodeType = 0,
  PartitionNumaNode = 1,
  VolumeNumaNode = 2,
  MaxNumaNodeType = 3,
} CC_NUMA_TYPE, *PCC_NUMA_TYPE;

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
  /* 0x0004 */ enum _CC_NUMA_TYPE NumaNodeType;
  /* 0x0008 */ struct _CC_PARTITION* Partition;
  /* 0x0010 */ struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;
  /* 0x0018 */ unsigned long NodeNumber;
  /* 0x0020 */ struct _LIST_ENTRY NodeList;
  /* 0x0030 */ unsigned long NumberActiveWorkerThreads;
  /* 0x0038 */ struct _LIST_ENTRY IdleWorkerThreadList;
  /* 0x0048 */ struct _LIST_ENTRY FastTeardownWorkQueue;
  /* 0x0058 */ struct _LIST_ENTRY ExpressWorkQueue;
  /* 0x0068 */ struct _LIST_ENTRY RegularWorkQueue;
  /* 0x0078 */ struct _LIST_ENTRY CleanCachemapUninitWorkQueue;
  /* 0x0088 */ struct _LIST_ENTRY IdleExtraWriteBehindThreadList;
  /* 0x0098 */ unsigned long ActiveExtraWriteBehindThreads;
  /* 0x00a0 */ struct _LIST_ENTRY IdleCacheMapUninitThreadList;
  /* 0x00b0 */ unsigned long ActiveCacheMapUninitThreads;
  /* 0x00b4 */ unsigned long ThreadsActiveBeforeThrottle;
  /* 0x00b8 */ unsigned long ExtraWBThreadsActiveBeforeThrottle;
  /* 0x00bc */ unsigned long ExecutingWriteBehindWorkItems;
  /* 0x00c0 */ unsigned long ExecutingHighPriorityWorkItem;
  /* 0x00c4 */ long ThroughputTrend;
  /* 0x00c8 */ union _LARGE_INTEGER PrevRegularQueueItemRunTime;
  /* 0x00d0 */ union _LARGE_INTEGER PrevExtraWBThreadCheckTime;
  /* 0x00d8 */ unsigned char AddExtraWriteBehindThreads;
  /* 0x00d9 */ unsigned char RemoveExtraThreadPending;
  /* 0x00e0 */ struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;
  /* 0x00e8 */ unsigned long* NumberActiveAsyncReadWorkerThreads;
  /* 0x00f0 */ unsigned long* NumberActiveCompleteAsyncReadWorkItems;
  /* 0x00f8 */ struct _LIST_ENTRY* AsyncReadWorkQueue;
  /* 0x0100 */ struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;
  /* 0x0108 */ struct _KEVENT* NewAsyncReadRequestEvent;
  /* 0x0110 */ struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;
} CC_NUMA_NODE, *PCC_NUMA_NODE; /* size: 0x0118 */

