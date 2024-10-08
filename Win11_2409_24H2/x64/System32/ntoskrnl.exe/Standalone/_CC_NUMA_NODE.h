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

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _ASYNC_LAZYWRITE_THREAD_STATS
{
  /* 0x0000 */ unsigned long* CurrentLoad;
} ASYNC_LAZYWRITE_THREAD_STATS, *PASYNC_LAZYWRITE_THREAD_STATS; /* size: 0x0008 */

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
  /* 0x00c4 */ unsigned char QueueThrottle;
  /* 0x00c8 */ long ThroughputTrend;
  /* 0x00d0 */ union _LARGE_INTEGER PrevRegularQueueItemRunTime;
  /* 0x00d8 */ union _LARGE_INTEGER PrevExtraWBThreadCheckTime;
  /* 0x00e0 */ unsigned char AddExtraWriteBehindThreads;
  /* 0x00e1 */ unsigned char RemoveExtraThreadPending;
  /* 0x00e8 */ struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;
  /* 0x00f0 */ unsigned long* NumberActiveAsyncReadWorkerThreads;
  /* 0x00f8 */ unsigned long* NumberActiveCompleteAsyncReadWorkItems;
  /* 0x0100 */ struct _LIST_ENTRY* AsyncReadWorkQueue;
  /* 0x0108 */ struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;
  /* 0x0110 */ struct _KEVENT* NewAsyncReadRequestEvent;
  /* 0x0118 */ struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;
  /* 0x0120 */ struct _LIST_ENTRY IdleAsyncLazywriteWorkerThreadList;
  /* 0x0130 */ unsigned long NumberActiveAsyncLazywriteWorkerThreads;
  /* 0x0138 */ struct _LIST_ENTRY AsyncLazywriteWorkQueue;
  /* 0x0148 */ struct _KEVENT NewAsyncLazywriteRequestEvent;
  /* 0x0160 */ struct _ASYNC_LAZYWRITE_THREAD_STATS LazywriterThreadsStats;
  /* 0x0168 */ struct _LIST_ENTRY IdleCompleteAsyncLazywriteWorkerThreadList;
  /* 0x0178 */ unsigned long NumberActiveCompleteAsyncLazywriteWorkers;
  /* 0x0180 */ struct _LIST_ENTRY AsyncLazywriteCompletionWorkQueue;
} CC_NUMA_NODE, *PCC_NUMA_NODE; /* size: 0x0190 */

