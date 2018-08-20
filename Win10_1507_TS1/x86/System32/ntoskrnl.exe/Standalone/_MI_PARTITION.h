typedef struct _MI_PARTITION_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long BeingDeleted : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ObjectInitialized : 1; /* bit position: 1 */
  }; /* bitfield */
} MI_PARTITION_FLAGS, *PMI_PARTITION_FLAGS; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_PARTITION_STATISTICS
{
  /* 0x0000 */ unsigned long DeleteYield;
  /* 0x0004 */ unsigned long DeleteBad;
  /* 0x0008 */ unsigned long DeleteTrulyBad;
  /* 0x000c */ unsigned long DeleteLargePage;
  /* 0x0010 */ unsigned long DeleteLargePageRetry;
  /* 0x0014 */ unsigned long DeleteZeroFree;
  /* 0x0018 */ unsigned long DeleteTransition;
  /* 0x001c */ unsigned long DeleteStandbyReferenced;
  /* 0x0020 */ unsigned long DeleteStandbyRelinkFailed;
  /* 0x0024 */ unsigned long DeleteStandbySharedPagefile;
  /* 0x0028 */ unsigned long DeleteStandbySharedFile;
  /* 0x002c */ unsigned long DeleteModifiedReferenced;
  /* 0x0030 */ unsigned long DeleteModified;
  /* 0x0034 */ unsigned long DeleteModifiedNoWrite;
  /* 0x0038 */ unsigned long DeleteModifiedSharedPagefile;
  /* 0x003c */ unsigned long DeleteModifiedSharedFile;
  /* 0x0040 */ unsigned long DeleteActiveSharedPagefile1;
  /* 0x0044 */ unsigned long DeleteActiveSharedPagefile2;
  /* 0x0048 */ unsigned long DeleteActiveSharedFile;
  /* 0x004c */ unsigned long DeleteWriteDelay;
} MI_PARTITION_STATISTICS, *PMI_PARTITION_STATISTICS; /* size: 0x0050 */

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
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
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
          /* 0x0002 */ unsigned char Timer2Reserved1;
          /* 0x0003 */ unsigned char Timer2Reserved2;
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
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          /* 0x0003 */ unsigned char DebugActive;
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _MI_PARTITION_CORE
{
  /* 0x0000 */ unsigned short PartitionId;
  union // _TAG_UNNAMED_26
  {
    union
    {
      /* 0x0004 */ unsigned long LongFlags;
      /* 0x0004 */ struct _MI_PARTITION_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0008 */ unsigned long ReferenceCount;
  /* 0x000c */ struct _MI_PARTITION* ParentPartition;
  /* 0x0010 */ struct _LIST_ENTRY ListEntry;
  /* 0x0018 */ struct _MI_NODE_INFORMATION* NodeInformation;
  /* 0x001c */ struct _MDL* MdlPhysicalMemoryBlock;
  /* 0x0020 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;
  /* 0x0024 */ struct _MI_PARTITION_STATISTICS Stats;
  /* 0x0074 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;
  /* 0x0078 */ struct _KEVENT ExitEvent;
  /* 0x0088 */ void* SystemThreadHandles[5];
  /* 0x009c */ void* PartitionObject;
  /* 0x00a0 */ void* PartitionObjectHandle;
  /* 0x00a4 */ struct _EX_PUSH_LOCK DynamicMemoryPushLock;
  /* 0x00a8 */ volatile long DynamicMemoryLock;
  /* 0x00ac */ struct _KEVENT TemporaryMemoryEvent;
  /* 0x00bc */ struct _KEVENT* MemoryEvents[11];
} MI_PARTITION_CORE, *PMI_PARTITION_CORE; /* size: 0x00e8 */

typedef struct _MMPAGE_FILE_EXPANSION_FLAGS
{
  /* 0x0000 */ unsigned char PageFileNumber : 8; /* bit position: 0 */
  /* 0x0001 */ unsigned char Spare1 : 8; /* bit position: 0 */
  /* 0x0002 */ unsigned char Spare2 : 8; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char IgnoreCurrentCommit : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char IncreaseMinimumSize : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char Spare3 : 6; /* bit position: 2 */
  }; /* bitfield */
} MMPAGE_FILE_EXPANSION_FLAGS, *PMMPAGE_FILE_EXPANSION_FLAGS; /* size: 0x0004 */

typedef struct _MMPAGE_FILE_EXPANSION
{
  /* 0x0000 */ struct _SEGMENT* Segment;
  /* 0x0004 */ struct _LIST_ENTRY DereferenceList;
  /* 0x000c */ struct _MI_PARTITION* Partition;
  /* 0x0010 */ unsigned long RequestedExpansionSize;
  /* 0x0014 */ unsigned long ActualExpansion;
  /* 0x0018 */ struct _KEVENT Event;
  /* 0x0028 */ volatile long InProgress;
  /* 0x002c */ struct _MMPAGE_FILE_EXPANSION_FLAGS u;
  /* 0x0030 */ void** volatile ActiveEntry;
  /* 0x0034 */ unsigned char AttemptForCantExtend;
  /* 0x0035 */ unsigned char PageFileContract;
  /* 0x0036 */ char __PADDING__[2];
} MMPAGE_FILE_EXPANSION, *PMMPAGE_FILE_EXPANSION; /* size: 0x0038 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0010 */

typedef struct _MMMOD_WRITER_LISTHEAD
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  union
  {
    /* 0x0008 */ struct _KGATE Gate;
    /* 0x0008 */ struct _KEVENT Event;
  }; /* size: 0x0010 */
} MMMOD_WRITER_LISTHEAD, *PMMMOD_WRITER_LISTHEAD; /* size: 0x0018 */

typedef union _MI_RESERVATION_CLUSTER_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ClusterSize : 10; /* bit position: 0 */
      /* 0x0000 */ unsigned long SequenceNumber : 22; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0000 */ long EntireInfo;
  }; /* size: 0x0004 */
} MI_RESERVATION_CLUSTER_INFO, *PMI_RESERVATION_CLUSTER_INFO; /* size: 0x0004 */

typedef struct _MI_MODWRITE_DATA
{
  /* 0x0000 */ long PagesLoad;
  /* 0x0004 */ unsigned long PagesAverage;
  /* 0x0008 */ unsigned long AverageAvailablePages;
  /* 0x000c */ unsigned long PagesWritten;
  /* 0x0010 */ unsigned long WritesIssued;
  /* 0x0014 */ unsigned long IgnoredReservationsCount;
  /* 0x0018 */ unsigned long FreedReservationsCount;
  /* 0x001c */ unsigned long WriteBurstCount;
  /* 0x0020 */ unsigned __int64 IgnoreReservationsStartTime;
  /* 0x0028 */ volatile union _MI_RESERVATION_CLUSTER_INFO ReservationClusterInfo;
  struct /* bitfield */
  {
    /* 0x002c */ unsigned short IgnoreReservations : 1; /* bit position: 0 */
    /* 0x002c */ unsigned short Spare : 15; /* bit position: 1 */
  }; /* bitfield */
  /* 0x002e */ unsigned short Spare1;
} MI_MODWRITE_DATA, *PMI_MODWRITE_DATA; /* size: 0x0030 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _MI_PARTITION_MODWRITES
{
  /* 0x0000 */ struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;
  /* 0x0038 */ struct _MMPAGE_FILE_EXPANSION PageFileContract;
  /* 0x0070 */ unsigned long NumberOfMappedMdls;
  /* 0x0074 */ volatile long NumberOfMappedMdlsInUse;
  /* 0x0078 */ unsigned long NumberOfMappedMdlsInUsePeak;
  /* 0x007c */ struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;
  /* 0x0094 */ unsigned char NeedMappedMdl;
  /* 0x0095 */ unsigned char NeedPageFileMdl;
  /* 0x0096 */ unsigned char TransitionInserted;
  /* 0x0098 */ long LastModifiedWriteError;
  /* 0x009c */ long LastMappedWriteError;
  /* 0x00a0 */ volatile unsigned long MappedFileWriteSucceeded;
  /* 0x00a4 */ unsigned long MappedWriteBurstCount;
  /* 0x00a8 */ unsigned long LowPriorityModWritesOutstanding;
  /* 0x00ac */ struct _KEVENT BoostModWriteIoPriorityEvent;
  /* 0x00bc */ long ModifiedWriterThreadPriority;
  /* 0x00c0 */ unsigned long ModifiedPagesLowPriorityGoal;
  /* 0x00c4 */ struct _KEVENT ModifiedPageWriterEvent;
  /* 0x00d4 */ volatile long WriteAllPagefilePages;
  /* 0x00d8 */ volatile long WriteAllMappedPages;
  /* 0x00dc */ struct _KEVENT MappedPageWriterEvent;
  /* 0x00f0 */ struct _MI_MODWRITE_DATA ModWriteData;
  /* 0x0120 */ struct _KEVENT RescanPageFilesEvent;
  /* 0x0130 */ struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;
  /* 0x0148 */ struct _ETHREAD* ModifiedPageWriterThread;
  /* 0x014c */ struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;
  /* 0x0150 */ struct _WORK_QUEUE_ITEM PagefileScanWorkItem;
  /* 0x0160 */ unsigned long PagefileScanCount;
  /* 0x0164 */ volatile long ClusterWritesDisabled[2];
  /* 0x016c */ volatile unsigned char DelayMappedWrite;
  /* 0x0170 */ volatile unsigned long PagefileReservationsEnabled;
  /* 0x0174 */ struct _EX_PUSH_LOCK PageFileCreationLock;
  /* 0x0178 */ struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;
  /* 0x0188 */ unsigned __int64 LastTrimPagefileTime;
  /* 0x0190 */ struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;
  /* 0x01a0 */ volatile long WsSwapPageFileContractionInProgress;
  /* 0x01a4 */ struct _EX_PUSH_LOCK WorkingSetSwapLock;
  /* 0x01a8 */ volatile long WorkingSetInswapLock;
  /* 0x01ac */ long __PADDING__[1];
} MI_PARTITION_MODWRITES, *PMI_PARTITION_MODWRITES; /* size: 0x01b0 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _MI_PARTITION_STORES
{
  union // _TAG_UNNAMED_27
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0000 */ long FlushCompleting : 1; /* bit position: 0 */
        /* 0x0000 */ long FlushInProgress : 31; /* bit position: 1 */
      }; /* bitfield */
      /* 0x0000 */ volatile long Long;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ WriteAllStoreHintedPages;
  /* 0x0004 */ unsigned long VirtualPageFileNumber;
  /* 0x0008 */ unsigned long Registered;
  /* 0x000c */ unsigned long ReadClusterSizeMax;
  /* 0x0010 */ unsigned long EvictFlushRequestCount;
  /* 0x0014 */ unsigned long ModifiedWriteDisableCount;
  /* 0x0018 */ unsigned long WriteIssueFailures;
  /* 0x001c */ struct _ETHREAD* EvictionThread;
  /* 0x0020 */ struct _KEVENT EvictEvent;
  /* 0x0030 */ struct _KEVENT EvictFlushCompleteEvent;
  /* 0x0040 */ union _SLIST_HEADER WriteSupportSListHead;
  /* 0x0048 */ volatile long EvictFlushLock;
  /* 0x004c */ struct _RTL_BITMAP* ModifiedWriteFailedBitmap;
} MI_PARTITION_STORES, *PMI_PARTITION_STORES; /* size: 0x0050 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

typedef struct _MMDEREFERENCE_SEGMENT_HEADER
{
  /* 0x0000 */ struct _KSEMAPHORE Semaphore;
  /* 0x0014 */ struct _LIST_ENTRY ListHead;
} MMDEREFERENCE_SEGMENT_HEADER, *PMMDEREFERENCE_SEGMENT_HEADER; /* size: 0x001c */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _MI_PARTITION_SEGMENTS
{
  /* 0x0000 */ struct _KEVENT DeleteSubsectionCleanup;
  /* 0x0010 */ struct _KEVENT UnusedSegmentCleanup;
  /* 0x0020 */ unsigned long SubsectionDeletePtes;
  /* 0x0024 */ struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;
  /* 0x0040 */ struct _LIST_ENTRY DeleteOnCloseList;
  /* 0x0048 */ struct _KTIMER DeleteOnCloseTimer;
  /* 0x0070 */ unsigned char DeleteOnCloseTimerActive;
  /* 0x0074 */ unsigned long DeleteOnCloseCount;
  /* 0x0078 */ struct _LIST_ENTRY UnusedSegmentList;
  /* 0x0080 */ struct _LIST_ENTRY UnusedSubsectionList;
  /* 0x0088 */ struct _LIST_ENTRY DeleteSubsectionList;
  /* 0x0090 */ struct _KEVENT ControlAreaDeleteEvent;
  /* 0x00a0 */ struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;
  /* 0x00a4 */ long __PADDING__[1];
} MI_PARTITION_SEGMENTS, *PMI_PARTITION_SEGMENTS; /* size: 0x00a8 */

typedef enum _MMLISTS
{
  ZeroedPageList = 0,
  FreePageList = 1,
  StandbyPageList = 2,
  ModifiedPageList = 3,
  ModifiedNoWritePageList = 4,
  BadPageList = 5,
  ActiveAndValid = 6,
  TransitionPage = 7,
} MMLISTS, *PMMLISTS;

typedef struct _MMPFNLIST
{
  /* 0x0000 */ unsigned long Total;
  /* 0x0004 */ enum _MMLISTS ListName;
  /* 0x0008 */ unsigned long Flink;
  /* 0x000c */ unsigned long Blink;
  /* 0x0010 */ unsigned long Lock;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0014 */

typedef struct _MI_DECAY_TIMER_LINKAGE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Spare0 : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PreviousDecayPfn : 15; /* bit position: 1 */
    /* 0x0000 */ unsigned long Spare1 : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long NextDecayPfn : 15; /* bit position: 17 */
  }; /* bitfield */
} MI_DECAY_TIMER_LINKAGE, *PMI_DECAY_TIMER_LINKAGE; /* size: 0x0004 */

typedef struct _MI_DECAY_TIMER_LINK
{
  union // _TAG_UNNAMED_2
  {
    union
    {
      /* 0x0000 */ unsigned long Long;
      /* 0x0000 */ struct _MI_DECAY_TIMER_LINKAGE e1;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MI_DECAY_TIMER_LINK, *PMI_DECAY_TIMER_LINK; /* size: 0x0004 */

typedef struct _MI_LDW_WORK_CONTEXT
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0010 */ struct _FILE_OBJECT* FileObject;
  /* 0x0014 */ long ErrorStatus;
  /* 0x0018 */ volatile long Active;
  /* 0x001c */ unsigned char FreeWhenDone;
  /* 0x001d */ char __PADDING__[3];
} MI_LDW_WORK_CONTEXT, *PMI_LDW_WORK_CONTEXT; /* size: 0x0020 */

typedef struct _MI_AVAILABLE_PAGE_WAIT_STATES
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0010 */ unsigned long EventSets;
} MI_AVAILABLE_PAGE_WAIT_STATES, *PMI_AVAILABLE_PAGE_WAIT_STATES; /* size: 0x0014 */

typedef struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN
{
  /* 0x0000 */ unsigned char SecondsLeft;
  /* 0x0001 */ unsigned char SecondsAssigned;
} MI_REBUILD_LARGE_PAGE_COUNTDOWN, *PMI_REBUILD_LARGE_PAGE_COUNTDOWN; /* size: 0x0002 */

typedef struct _MI_REBUILD_LARGE_PAGES
{
  /* 0x0000 */ long Active;
  /* 0x0004 */ struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[1][16];
  /* 0x0024 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_REBUILD_LARGE_PAGES, *PMI_REBUILD_LARGE_PAGES; /* size: 0x0034 */

typedef struct _MI_PARTITION_PAGE_LISTS
{
  /* 0x0000 */ struct _MMPFNLIST* FreePagesByColor[2];
  /* 0x0008 */ union _SLIST_HEADER* FreePageSlist[2];
  /* 0x0040 */ struct _MMPFNLIST ZeroedPageListHead;
  /* 0x0080 */ struct _MMPFNLIST FreePageListHead;
  /* 0x00c0 */ struct _MMPFNLIST StandbyPageListHead;
  /* 0x0100 */ struct _MMPFNLIST StandbyPageListByPriority[8];
  /* 0x01c0 */ struct _MMPFNLIST ModifiedPageListNoReservation;
  /* 0x0200 */ struct _MMPFNLIST ModifiedPageListByReservation[16];
  /* 0x0340 */ struct _MMPFNLIST MappedPageListHead[16];
  /* 0x0480 */ struct _MMPFNLIST BadPageListHead;
  /* 0x0494 */ struct _MMPFNLIST* PageLocationList[8];
  /* 0x04b4 */ volatile unsigned long StandbyRepurposedByPriority[8];
  /* 0x04d4 */ struct _KEVENT MappedPageListHeadEvent[16];
  /* 0x05d4 */ struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];
  /* 0x05e4 */ unsigned long DecayHand;
  /* 0x05e8 */ unsigned __int64 LastDecayHandUpdateTime;
  /* 0x05f0 */ struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;
  /* 0x0640 */ unsigned long AvailableEventsLock;
  /* 0x0644 */ struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[2];
  /* 0x066c */ unsigned long LowMemoryThreshold;
  /* 0x0670 */ unsigned long HighMemoryThreshold;
  /* 0x0680 */ volatile unsigned long TransitionPrivatePages;
  /* 0x0684 */ unsigned char RebuildLargePagesInitialized;
  /* 0x0688 */ struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem;
  /* 0x06bc */ long __PADDING__[1];
} MI_PARTITION_PAGE_LISTS, *PMI_PARTITION_PAGE_LISTS; /* size: 0x06c0 */

typedef struct _MI_PARTITION_COMMIT
{
  /* 0x0000 */ unsigned long PeakCommitment;
  /* 0x0004 */ unsigned long TotalCommitLimitMaximum;
  /* 0x0008 */ volatile long Popups[2];
  /* 0x0010 */ unsigned long LowCommitThreshold;
  /* 0x0014 */ unsigned long HighCommitThreshold;
  /* 0x0018 */ unsigned long EventLock;
  /* 0x001c */ unsigned long SystemCommitReserve;
} MI_PARTITION_COMMIT, *PMI_PARTITION_COMMIT; /* size: 0x0020 */

typedef struct _MI_PARTITION_ZEROING
{
  /* 0x0000 */ struct _KEVENT PageEvent;
  /* 0x0010 */ unsigned char ThreadActive;
  /* 0x0014 */ long ZeroFreePageSlistMinimum;
  /* 0x0018 */ struct _MMPTE* FirstReservedZeroingPte;
  /* 0x001c */ struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;
} MI_PARTITION_ZEROING, *PMI_PARTITION_ZEROING; /* size: 0x002c */

typedef struct _MI_COMBINE_WORKITEM
{
  /* 0x0000 */ void* NextEntry;
  /* 0x0004 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_COMBINE_WORKITEM, *PMI_COMBINE_WORKITEM; /* size: 0x0014 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _MI_COMBINE_PAGE_LISTHEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE Table;
  /* 0x0004 */ volatile long Lock;
} MI_COMBINE_PAGE_LISTHEAD, *PMI_COMBINE_PAGE_LISTHEAD; /* size: 0x0008 */

typedef struct _MI_PAGE_COMBINE_STATISTICS
{
  /* 0x0000 */ unsigned __int64 PagesScannedActive;
  /* 0x0008 */ unsigned __int64 PagesScannedStandby;
  /* 0x0010 */ unsigned __int64 PagesCombined;
  /* 0x0018 */ unsigned long CombineScanCount;
  /* 0x001c */ long CombinedBlocksInUse;
  /* 0x0020 */ long SumCombinedBlocksReferenceCount;
  /* 0x0024 */ long __PADDING__[1];
} MI_PAGE_COMBINE_STATISTICS, *PMI_PAGE_COMBINE_STATISTICS; /* size: 0x0028 */

typedef struct _MI_PAGE_COMBINING_SUPPORT
{
  /* 0x0000 */ struct _MI_PARTITION* Partition;
  /* 0x0004 */ struct _LIST_ENTRY ArbitraryPfnMapList;
  /* 0x000c */ struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;
  /* 0x0020 */ unsigned long CombiningThreadCount;
  /* 0x0024 */ struct _LIST_ENTRY CombinePageFreeList;
  /* 0x002c */ unsigned long CombineFreeListLock;
  /* 0x0030 */ struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];
  /* 0x00b0 */ struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;
} MI_PAGE_COMBINING_SUPPORT, *PMI_PAGE_COMBINING_SUPPORT; /* size: 0x00d8 */

typedef struct _MMWORKING_SET_EXPANSION_HEAD
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
} MMWORKING_SET_EXPANSION_HEAD, *PMMWORKING_SET_EXPANSION_HEAD; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0004 */ short Size;
  /* 0x0006 */ short MdlFlags;
  /* 0x0008 */ struct _EPROCESS* Process;
  /* 0x000c */ void* MappedSystemVa;
  /* 0x0010 */ void* StartVa;
  /* 0x0014 */ unsigned long ByteCount;
  /* 0x0018 */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x001c */

typedef struct _MI_PAGEFILE_TRACES
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned short PartitionId;
  /* 0x0006 */ unsigned char Priority;
  /* 0x0007 */ unsigned char IrpPriority;
  /* 0x0008 */ unsigned char ReservationWrite;
  /* 0x0010 */ union _LARGE_INTEGER CurrentTime;
  /* 0x0018 */ unsigned long AvailablePages;
  /* 0x001c */ unsigned long ModifiedPagesTotal;
  /* 0x0020 */ unsigned long ModifiedPagefilePages;
  /* 0x0024 */ unsigned long ModifiedNoWritePages;
  /* 0x0028 */ unsigned long ModifiedPagefileNoReservationPages;
  struct // _TAG_UNNAMED_28
  {
    /* 0x002c */ struct _MDL Mdl;
    /* 0x0048 */ unsigned long Page[1];
  } /* size: 0x0020 */ MdlHack;
  /* 0x004c */ long __PADDING__[1];
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0050 */

typedef struct _MI_VISIBLE_PARTITION
{
  /* 0x0000 */ unsigned long LowestPhysicalPage;
  /* 0x0004 */ unsigned long HighestPhysicalPage;
  /* 0x0008 */ unsigned long NumberOfPhysicalPages;
  /* 0x000c */ volatile unsigned long NumberOfPagingFiles;
  /* 0x0010 */ struct _MMPAGING_FILE* PagingFile[16];
  /* 0x0080 */ volatile unsigned long AvailablePages;
  /* 0x00c0 */ volatile unsigned long ResidentAvailablePages;
  /* 0x00c4 */ volatile unsigned long TotalCommittedPages;
  /* 0x0100 */ struct _MMPFNLIST ModifiedPageListHead;
  /* 0x0140 */ struct _MMPFNLIST ModifiedNoWritePageListHead;
  /* 0x0154 */ unsigned long TotalCommitLimit;
  /* 0x0158 */ unsigned long TotalPagesForPagingFile;
  /* 0x015c */ unsigned long VadPhysicalPages;
  /* 0x0160 */ unsigned long ProcessLockedFilePages;
  /* 0x0164 */ unsigned long ChargeCommitmentFailures[4];
  /* 0x0174 */ volatile long PageFileTraceIndex;
  /* 0x0178 */ struct _MI_PAGEFILE_TRACES PageFileTraces[32];
  /* 0x0b78 */ long __PADDING__[2];
} MI_VISIBLE_PARTITION, *PMI_VISIBLE_PARTITION; /* size: 0x0b80 */

typedef struct _MI_PARTITION
{
  /* 0x0000 */ struct _MI_PARTITION_CORE Core;
  /* 0x00e8 */ struct _MI_PARTITION_MODWRITES Modwriter;
  /* 0x0298 */ struct _MI_PARTITION_STORES Store;
  /* 0x02e8 */ struct _MI_PARTITION_SEGMENTS Segments;
  /* 0x03c0 */ struct _MI_PARTITION_PAGE_LISTS PageLists;
  /* 0x0a80 */ struct _MI_PARTITION_COMMIT Commit;
  /* 0x0aa0 */ struct _MI_PARTITION_ZEROING Zeroing;
  /* 0x0ad0 */ struct _MI_PAGE_COMBINING_SUPPORT PageCombine;
  /* 0x0ba8 */ void* WorkingSetControl;
  /* 0x0bac */ struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;
  /* 0x0bc0 */ struct _MI_VISIBLE_PARTITION Vp;
} MI_PARTITION, *PMI_PARTITION; /* size: 0x1740 */

