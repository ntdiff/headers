typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _SHARED_CACHE_MAP_LIST_CURSOR
{
  /* 0x0000 */ struct _LIST_ENTRY SharedCacheMapLinks;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long __PADDING__[1];
} SHARED_CACHE_MAP_LIST_CURSOR, *PSHARED_CACHE_MAP_LIST_CURSOR; /* size: 0x0018 */

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
  /* 0x0038 */ unsigned short Processor;
  /* 0x003a */ unsigned short TimerType;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _LAZY_WRITER
{
  /* 0x0000 */ struct _KTIMER ScanTimer;
  /* 0x0040 */ unsigned char TimerInitialized;
  /* 0x0041 */ unsigned char ScanActive;
  /* 0x0042 */ unsigned char OtherWork;
  /* 0x0043 */ unsigned char PendingTeardownScan;
  /* 0x0044 */ unsigned char PendingPeriodicScan;
  /* 0x0045 */ unsigned char PendingLowMemoryScan;
  /* 0x0046 */ unsigned char PendingPowerScan;
  /* 0x0047 */ unsigned char PendingCoalescingFlushScan;
} LAZY_WRITER, *PLAZY_WRITER; /* size: 0x0048 */

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

typedef enum _CC_LWS_PACKET_TYPE
{
  LWSPacket_Invalid = 0,
  LWSPacket_Partition = 1,
  LWSPacket_PrivateVCM = 2,
  LWSPacket_Max = 3,
} CC_LWS_PACKET_TYPE, *PCC_LWS_PACKET_TYPE;

typedef struct _CC_LWS_PACKET
{
  /* 0x0000 */ enum _CC_LWS_PACKET_TYPE Type;
  /* 0x0004 */ unsigned char Active;
  union
  {
    union
    {
      /* 0x0008 */ struct _CC_PARTITION* Partition;
      /* 0x0008 */ struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Overlay;
} CC_LWS_PACKET, *PCC_LWS_PACKET; /* size: 0x0010 */

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

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _CC_PARTITION
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0008 */ struct _EPARTITION* PartitionObject;
  /* 0x0010 */ struct _LIST_ENTRY NumaNodeList;
  /* 0x0020 */ struct _LIST_ENTRY VolumeList;
  /* 0x0030 */ unsigned long VolumeCount;
  /* 0x0038 */ struct _KEVENT LastVolumeEvent;
  /* 0x0050 */ struct _LIST_ENTRY DeletedVolumeList;
  /* 0x0060 */ struct _LIST_ENTRY DeletePVCMWorkerThreadList;
  /* 0x0070 */ struct _LIST_ENTRY DelayDeleteVolumeList;
  /* 0x0080 */ struct _CC_NUMA_NODE* NumaNodeBlock[64];
  /* 0x0280 */ struct _LIST_ENTRY CleanSharedCacheMapList;
  /* 0x0290 */ struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;
  /* 0x02a0 */ struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;
  /* 0x02b8 */ struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;
  /* 0x02d0 */ struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;
  /* 0x0300 */ unsigned __int64 PrivateLock;
  /* 0x0308 */ unsigned long ConsecutiveWorklessLazyScanCount;
  /* 0x030c */ unsigned char ForcedDisableLazywriteScan;
  /* 0x0380 */ unsigned __int64 WorkQueueLock;
  /* 0x0388 */ unsigned long NumberWorkerThreads;
  /* 0x0390 */ struct _LIST_ENTRY PostTickWorkQueue;
  /* 0x03a0 */ unsigned long MaxExtraWriteBehindThreads;
  /* 0x03a4 */ unsigned long MaxCacheMapUninitThreads;
  /* 0x03a8 */ unsigned long PostTickWorkItemCount;
  /* 0x03b0 */ struct _KEVENT LowMemoryEvent;
  /* 0x03c8 */ struct _KEVENT PowerEvent;
  /* 0x03e0 */ struct _KEVENT WaitingForTeardownEvent;
  /* 0x03f8 */ struct _KEVENT CoalescingFlushEvent;
  /* 0x0410 */ unsigned long PagesYetToWrite;
  /* 0x0418 */ struct _LAZY_WRITER LazyWriter;
  /* 0x0460 */ struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;
  /* 0x0478 */ struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;
  /* 0x04b0 */ struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;
  /* 0x04b8 */ unsigned __int64 AverageAvailablePages;
  /* 0x04c0 */ unsigned __int64 AverageDirtyPages;
  /* 0x04c8 */ unsigned __int64 PagesSkippedDueToHotSpot;
  /* 0x04d0 */ struct _LIST_ENTRY DeferredWrites;
  /* 0x0500 */ unsigned __int64 DeferredWriteSpinLock;
  /* 0x0508 */ struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;
  /* 0x0510 */ struct _LIST_ENTRY VacbFreeHighPriorityList;
  /* 0x0520 */ unsigned long NumberOfFreeHighPriorityVacbs;
  /* 0x0528 */ struct _ETHREAD* LowPriWorkerThread;
  /* 0x0530 */ struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;
  /* 0x0538 */ long LowPriOldCpuPriority;
  /* 0x053c */ enum _IO_PRIORITY_HINT LowPriOldIoPriority;
  /* 0x0540 */ struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;
  /* 0x0548 */ unsigned long MaxNumberOfWriteBehindThreads;
  /* 0x054c */ unsigned char CoalescingState;
  /* 0x054d */ unsigned char ActivePartition;
  /* 0x054e */ unsigned char RundownPhase;
  /* 0x0550 */ __int64 RefCount;
  /* 0x0558 */ struct _KEVENT ExitEvent;
  /* 0x0570 */ struct _KEVENT FinalDereferenceEvent;
  /* 0x0588 */ void* LazyWriteScanThreadHandle;
  /* 0x0590 */ struct _CC_LWS_PACKET LWSPacket;
  /* 0x05a0 */ struct _KTIMER PVCMDelayedDeleteTimer;
  /* 0x05e0 */ struct _KDPC PVCMDelayedDeleteTimerDpc;
  /* 0x0620 */ unsigned char PVCMDelayedDeleteTimerArmed;
  /* 0x0628 */ struct _WORK_QUEUE_ITEM PVCMDelayedDeleteWorkItem;
  /* 0x0648 */ long __PADDING__[14];
} CC_PARTITION, *PCC_PARTITION; /* size: 0x0680 */

