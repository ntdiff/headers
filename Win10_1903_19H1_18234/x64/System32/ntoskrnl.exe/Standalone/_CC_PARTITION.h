typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SHARED_CACHE_MAP_LIST_CURSOR
{
  /* 0x0000 */ struct _LIST_ENTRY SharedCacheMapLinks;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long __PADDING__[1];
} SHARED_CACHE_MAP_LIST_CURSOR, *PSHARED_CACHE_MAP_LIST_CURSOR; /* size: 0x0018 */

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
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ unsigned long Processor;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _LAZY_WRITER
{
  /* 0x0000 */ struct _KDPC ScanDpc;
  /* 0x0040 */ struct _KTIMER ScanTimer;
  /* 0x0080 */ unsigned char ScanActive;
  /* 0x0081 */ unsigned char OtherWork;
  /* 0x0082 */ unsigned char PendingTeardownScan;
  /* 0x0083 */ unsigned char PendingPeriodicScan;
  /* 0x0084 */ unsigned char PendingLowMemoryScan;
  /* 0x0085 */ unsigned char PendingPowerScan;
  /* 0x0086 */ unsigned char PendingCoalescingFlushScan;
  /* 0x0087 */ char __PADDING__[1];
} LAZY_WRITER, *PLAZY_WRITER; /* size: 0x0088 */

typedef struct _DIRTY_PAGE_STATISTICS
{
  /* 0x0000 */ unsigned __int64 DirtyPages;
  /* 0x0008 */ unsigned __int64 DirtyPagesLastScan;
  /* 0x0010 */ unsigned long DirtyPagesScheduledLastScan;
  /* 0x0014 */ long __PADDING__[1];
} DIRTY_PAGE_STATISTICS, *PDIRTY_PAGE_STATISTICS; /* size: 0x0018 */

typedef struct _DIRTY_PAGE_THRESHOLDS
{
  /* 0x0000 */ unsigned __int64 DirtyPageThreshold;
  /* 0x0008 */ unsigned __int64 DirtyPageThresholdTop;
  /* 0x0010 */ unsigned __int64 DirtyPageThresholdBottom;
  /* 0x0018 */ unsigned long DirtyPageTarget;
  /* 0x0020 */ unsigned __int64 AggregateAvailablePages;
  /* 0x0028 */ unsigned __int64 AggregateDirtyPages;
  /* 0x0030 */ unsigned long AvailableHistory;
  /* 0x0034 */ long __PADDING__[1];
} DIRTY_PAGE_THRESHOLDS, *PDIRTY_PAGE_THRESHOLDS; /* size: 0x0038 */

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

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef enum _IO_PRIORITY_HINT
{
  IoPriorityVeryLow = 0,
  IoPriorityLow = 1,
  IoPriorityNormal = 2,
  IoPriorityHigh = 3,
  IoPriorityCritical = 4,
  MaxIoPriorityTypes = 5,
} IO_PRIORITY_HINT, *PIO_PRIORITY_HINT;

typedef struct _CC_PARTITION
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0008 */ struct _EPARTITION* PartitionObject;
  /* 0x0010 */ struct _LIST_ENTRY CleanSharedCacheMapList;
  /* 0x0020 */ struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;
  /* 0x0030 */ struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;
  /* 0x0048 */ struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;
  /* 0x0060 */ struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;
  /* 0x0080 */ unsigned __int64 PrivateLock;
  /* 0x0088 */ unsigned long ConsecutiveWorklessLazyScanCount;
  /* 0x008c */ unsigned char ForcedDisableLazywriteScan;
  /* 0x00c0 */ unsigned __int64 WorkQueueLock;
  /* 0x00c8 */ unsigned long NumberWorkerThreads;
  /* 0x00cc */ unsigned long NumberActiveWorkerThreads;
  /* 0x00d0 */ struct _LIST_ENTRY IdleWorkerThreadList;
  /* 0x00e0 */ struct _LIST_ENTRY FastTeardownWorkQueue;
  /* 0x00f0 */ struct _LIST_ENTRY ExpressWorkQueue;
  /* 0x0100 */ struct _LIST_ENTRY RegularWorkQueue;
  /* 0x0110 */ struct _LIST_ENTRY PostTickWorkQueue;
  /* 0x0120 */ struct _LIST_ENTRY IdleExtraWriteBehindThreadList;
  /* 0x0130 */ unsigned long ActiveExtraWriteBehindThreads;
  /* 0x0134 */ unsigned long MaxExtraWriteBehindThreads;
  /* 0x0138 */ unsigned char QueueThrottle;
  /* 0x013c */ unsigned long PostTickWorkItemCount;
  /* 0x0140 */ unsigned long ThreadsActiveBeforeThrottle;
  /* 0x0144 */ unsigned long ExtraWBThreadsActiveBeforeThrottle;
  /* 0x0148 */ unsigned long ExecutingWriteBehindWorkItems;
  /* 0x014c */ unsigned long ExecutingHighPriorityWorkItem;
  /* 0x0150 */ struct _KEVENT LowMemoryEvent;
  /* 0x0168 */ struct _KEVENT PowerEvent;
  /* 0x0180 */ struct _KEVENT PeriodicEvent;
  /* 0x0198 */ struct _KEVENT WaitingForTeardownEvent;
  /* 0x01b0 */ struct _KEVENT CoalescingFlushEvent;
  /* 0x01c8 */ unsigned long PagesYetToWrite;
  /* 0x01d0 */ struct _LAZY_WRITER LazyWriter;
  /* 0x0258 */ struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;
  /* 0x0270 */ struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;
  /* 0x02a8 */ struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;
  /* 0x02b0 */ long ThroughputTrend;
  /* 0x02b8 */ unsigned __int64 AverageAvailablePages;
  /* 0x02c0 */ unsigned __int64 AverageDirtyPages;
  /* 0x02c8 */ unsigned __int64 PagesSkippedDueToHotSpot;
  /* 0x02d0 */ union _LARGE_INTEGER PrevRegularQueueItemRunTime;
  /* 0x02d8 */ union _LARGE_INTEGER PrevExtraWBThreadCheckTime;
  /* 0x02e0 */ unsigned char AddExtraWriteBehindThreads;
  /* 0x02e1 */ unsigned char RemoveExtraThreadPending;
  /* 0x02e8 */ struct _LIST_ENTRY DeferredWrites;
  /* 0x0300 */ unsigned __int64 DeferredWriteSpinLock;
  /* 0x0308 */ struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;
  /* 0x0310 */ unsigned long* NumberActiveAsyncReadWorkerThreads;
  /* 0x0318 */ unsigned long* NumberActiveCompleteAsyncReadWorkItems;
  /* 0x0320 */ struct _LIST_ENTRY* AsyncReadWorkQueue;
  /* 0x0328 */ struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;
  /* 0x0330 */ struct _KEVENT* NewAsyncReadRequestEvent;
  /* 0x0338 */ struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;
  /* 0x0340 */ struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;
  /* 0x0348 */ struct _LIST_ENTRY VacbFreeHighPriorityList;
  /* 0x0358 */ unsigned long NumberOfFreeHighPriorityVacbs;
  /* 0x0360 */ struct _ETHREAD* LowPriWorkerThread;
  /* 0x0368 */ struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;
  /* 0x0370 */ long LowPriOldCpuPriority;
  /* 0x0374 */ enum _IO_PRIORITY_HINT LowPriOldIoPriority;
  /* 0x0378 */ struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;
  /* 0x0380 */ unsigned long MaxNumberOfWriteBehindThreads;
  /* 0x0384 */ unsigned char CoalescingState;
  /* 0x0385 */ unsigned char ActivePartition;
  /* 0x0386 */ unsigned char RundownPhase;
  /* 0x0388 */ __int64 RefCount;
  /* 0x0390 */ struct _KEVENT ExitEvent;
  /* 0x03a8 */ struct _KEVENT FinalDereferenceEvent;
  /* 0x03c0 */ void* LazyWriteScanThreadHandle;
  /* 0x03c8 */ long __PADDING__[14];
} CC_PARTITION, *PCC_PARTITION; /* size: 0x0400 */

