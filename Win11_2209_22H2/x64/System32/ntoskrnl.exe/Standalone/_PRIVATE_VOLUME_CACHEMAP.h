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

typedef struct _PRIVATE_VOLUME_CACHEMAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0004 */ unsigned long UseCount;
  /* 0x0008 */ __int64 RefCount;
  /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0018 */ unsigned long VolumeId;
  /* 0x0020 */ struct _CC_PARTITION* Partition;
  /* 0x0028 */ struct _VOLUME_CACHE_MAP* VolumeCacheMap;
  /* 0x0030 */ struct _LIST_ENTRY NumaNodeList;
  /* 0x0040 */ struct _CC_NUMA_NODE* NumaNodeBlock[64];
  /* 0x0240 */ struct _LIST_ENTRY PartitionVolumeLinks;
  /* 0x0250 */ struct _LIST_ENTRY VolumeCacheMapLinks;
  /* 0x0260 */ struct _LIST_ENTRY CleanSharedCacheMapList;
  /* 0x0270 */ struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;
  /* 0x0280 */ struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;
  /* 0x0298 */ struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;
  /* 0x02b0 */ struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;
  /* 0x02c0 */ unsigned long ConsecutiveWorklessLazyScanCount;
  /* 0x02c4 */ unsigned char ForcedDisableLazywriteScan;
  /* 0x0300 */ unsigned __int64 WorkQueueLock;
  /* 0x0308 */ unsigned long NumberWorkerThreads;
  /* 0x0310 */ struct _LIST_ENTRY PostTickWorkQueue;
  /* 0x0320 */ unsigned long MaxExtraWriteBehindThreads;
  /* 0x0324 */ unsigned long MaxCacheMapUninitThreads;
  /* 0x0328 */ unsigned char QueueThrottle;
  /* 0x032c */ unsigned long PostTickWorkItemCount;
  /* 0x0330 */ struct _KEVENT LowMemoryEvent;
  /* 0x0348 */ struct _KEVENT PowerEvent;
  /* 0x0360 */ struct _KEVENT WaitingForTeardownEvent;
  /* 0x0378 */ struct _KEVENT CoalescingFlushEvent;
  /* 0x0390 */ unsigned long PagesYetToWrite;
  /* 0x0398 */ struct _LAZY_WRITER LazyWriter;
  /* 0x03e0 */ struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;
  /* 0x03f8 */ struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;
  /* 0x0430 */ struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;
  /* 0x0438 */ unsigned __int64 AverageAvailablePages;
  /* 0x0440 */ unsigned __int64 AverageDirtyPages;
  /* 0x0448 */ unsigned __int64 PagesSkippedDueToHotSpot;
  /* 0x0450 */ struct _LIST_ENTRY DeferredWrites;
  /* 0x0480 */ unsigned __int64 DeferredWriteSpinLock;
  /* 0x0488 */ struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;
  /* 0x0490 */ unsigned long MaxNumberOfWriteBehindThreads;
  /* 0x0494 */ unsigned char CoalescingState;
  /* 0x0495 */ unsigned char InitComplete;
  /* 0x0498 */ struct _KEVENT ExitEvent;
  /* 0x04b0 */ struct _KEVENT FinalDereferenceEvent;
  /* 0x04c8 */ void* LazyWriteScanThreadHandle;
  /* 0x04d0 */ struct _CC_LWS_PACKET LWSPacket;
  /* 0x04e0 */ struct _LIST_ENTRY ExternalCacheList;
  /* 0x04f0 */ unsigned long ThroughputIdx;
  /* 0x04f8 */ unsigned __int64 AvgPagesPerSecond;
  /* 0x0500 */ unsigned __int64 ThroughputHistory[32];
  /* 0x0600 */ unsigned long DirtyThresholdInSeconds;
  /* 0x0604 */ unsigned long DirtyPageTargetInSeconds;
  /* 0x0608 */ struct _LIST_ENTRY QuickLWSThreadList;
  /* 0x0618 */ struct _KEVENT QuickLazyScanEvent;
  /* 0x0630 */ union _LARGE_INTEGER PrevLazyWriteScanTime;
  /* 0x0638 */ unsigned long AsyncLazywriteQueueDepth;
  /* 0x063c */ unsigned long MaxAsyncLazywriteCompletionWorkers;
  /* 0x0640 */ unsigned long Flags;
  /* 0x0644 */ long __PADDING__[15];
} PRIVATE_VOLUME_CACHEMAP, *PPRIVATE_VOLUME_CACHEMAP; /* size: 0x0680 */

