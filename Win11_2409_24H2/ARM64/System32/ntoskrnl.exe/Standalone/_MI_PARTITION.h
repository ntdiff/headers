typedef struct _MI_PARTITION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BeingDeleted : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PageListsInitialized : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long StoreReservedPagesCharged : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long UseProtectedSlabAllocators : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long PureHolding : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ZeroPagesOptional : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long BackgroundZeroingDisabled : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long SpecialPurposeMemory : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ long EntireField;
  }; /* size: 0x0004 */
} MI_PARTITION_FLAGS, *PMI_PARTITION_FLAGS; /* size: 0x0004 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

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

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _MI_PARTITION_CORE
{
  /* 0x0000 */ unsigned short PartitionId;
  /* 0x0004 */ struct _MI_PARTITION_FLAGS Flags;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned char MemoryConfigurationChanged;
  /* 0x0010 */ struct _MI_NODE_INFORMATION* NodeInformation;
  /* 0x0018 */ struct _RTL_AVL_TREE PageRoot;
  /* 0x0020 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;
  /* 0x0028 */ struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;
  /* 0x0048 */ unsigned __int64 PfnUnmapCount;
  /* 0x0050 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;
  /* 0x0058 */ struct _KEVENT ExitEvent;
  /* 0x0070 */ struct _KEVENT ConductorNeededEvent;
  /* 0x0088 */ void* SystemThreadHandles[6];
  /* 0x00b8 */ struct _EPARTITION* PartitionObject;
  /* 0x00c0 */ struct _EX_PUSH_LOCK DynamicMemoryPushLock;
  /* 0x00c8 */ volatile long DynamicMemoryLock;
  /* 0x00cc */ unsigned char PfnUnmapActive;
  /* 0x00d0 */ struct _KEVENT TemporaryMemoryEvent;
  /* 0x00e8 */ void* RootDirectory;
  /* 0x00f0 */ void* KernelObjectsDirectory;
  /* 0x00f8 */ struct _KEVENT* MemoryEvents[11];
  /* 0x0150 */ void* MemoryEventHandles[11];
  /* 0x01a8 */ unsigned __int64 TotalHugeIoRanges;
  /* 0x01b0 */ unsigned __int64 NonChargedSecurePages;
  /* 0x01c0 */ union _SLIST_HEADER FreeKernelShadowStackCacheEntries;
  /* 0x01d0 */ unsigned __int64 KernelShadowStackPages;
  /* 0x01d8 */ long __PADDING__[2];
} MI_PARTITION_CORE, *PMI_PARTITION_CORE; /* size: 0x01e0 */

typedef struct _MMPAGE_FILE_EXPANSION_FLAGS
{
  /* 0x0000 */ unsigned char PageFileNumber : 8; /* bit position: 0 */
  /* 0x0001 */ unsigned char Spare1 : 8; /* bit position: 0 */
  /* 0x0002 */ unsigned char Spare2 : 8; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char IgnoreCurrentCommit : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char IncreaseMinimumSize : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char AttemptForCantExtend : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char UnusedSegmentDeletion : 1; /* bit position: 3 */
    /* 0x0003 */ unsigned char PageFileContract : 1; /* bit position: 4 */
    /* 0x0003 */ unsigned char NoWait : 1; /* bit position: 5 */
    /* 0x0003 */ unsigned char BeingProcessed : 1; /* bit position: 6 */
    /* 0x0003 */ unsigned char Spare3 : 1; /* bit position: 7 */
  }; /* bitfield */
} MMPAGE_FILE_EXPANSION_FLAGS, *PMMPAGE_FILE_EXPANSION_FLAGS; /* size: 0x0004 */

typedef struct _MMPAGE_FILE_EXPANSION
{
  /* 0x0000 */ struct _SEGMENT* Segment;
  /* 0x0008 */ struct _LIST_ENTRY DereferenceList;
  /* 0x0018 */ struct _MI_PARTITION* Partition;
  /* 0x0020 */ unsigned __int64 RequestedExpansionSize;
  /* 0x0028 */ unsigned __int64 ActualExpansion;
  /* 0x0030 */ struct _KEVENT Event;
  /* 0x0048 */ volatile long InProgress;
  union
  {
    union
    {
      /* 0x004c */ unsigned long LongFlags;
      /* 0x004c */ struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0050 */ void* volatile ActiveEntry;
} MMPAGE_FILE_EXPANSION, *PMMPAGE_FILE_EXPANSION; /* size: 0x0058 */

typedef struct _MMMOD_WRITER_LISTHEAD
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ struct _KEVENT Event;
} MMMOD_WRITER_LISTHEAD, *PMMMOD_WRITER_LISTHEAD; /* size: 0x0028 */

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
  /* 0x0000 */ __int64 PagesLoad;
  /* 0x0008 */ unsigned __int64 PagesAverage;
  /* 0x0010 */ unsigned __int64 AverageAvailablePages;
  /* 0x0018 */ unsigned __int64 PagesWritten;
  /* 0x0020 */ unsigned long WritesIssued;
  /* 0x0024 */ unsigned long IgnoredReservationsCount;
  /* 0x0028 */ unsigned long FreedReservationsCount;
  /* 0x002c */ unsigned long WriteBurstCount;
  /* 0x0030 */ unsigned __int64 IgnoreReservationsStartTime;
  /* 0x0038 */ volatile union _MI_RESERVATION_CLUSTER_INFO ReservationClusterInfo;
  struct /* bitfield */
  {
    /* 0x003c */ unsigned short IgnoreReservations : 1; /* bit position: 0 */
    /* 0x003c */ unsigned short Spare : 15; /* bit position: 1 */
  }; /* bitfield */
  /* 0x003e */ unsigned short Spare1;
} MI_MODWRITE_DATA, *PMI_MODWRITE_DATA; /* size: 0x0040 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _MI_RESTRICTED_MODWRITES
{
  /* 0x0000 */ unsigned char MaximumClusterPages;
  /* 0x0001 */ unsigned char ReducedClusterWrites;
  /* 0x0002 */ unsigned char ImposeDelay;
} MI_RESTRICTED_MODWRITES, *PMI_RESTRICTED_MODWRITES; /* size: 0x0003 */

typedef struct _MI_PARTITION_MODWRITES
{
  /* 0x0000 */ struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;
  /* 0x0058 */ struct _MMPAGE_FILE_EXPANSION PageFileContract;
  /* 0x00b0 */ struct _EX_PUSH_LOCK MappedWriterChargesLock;
  /* 0x00b8 */ unsigned long NumberOfMappedMdls;
  /* 0x00bc */ unsigned long NumberOfForwardProgressMappedMdls;
  /* 0x00c0 */ volatile long NumberOfMappedMdlsInUse;
  /* 0x00c4 */ unsigned long NumberOfMappedMdlsInUsePeak;
  /* 0x00c8 */ struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;
  /* 0x00f0 */ unsigned char NeedMappedMdl;
  /* 0x00f1 */ unsigned char NeedPageFileMdl;
  /* 0x00f2 */ unsigned char ModwriterActive;
  /* 0x00f3 */ unsigned char TransitionInserted;
  /* 0x00f4 */ long LastModifiedWriteError;
  /* 0x00f8 */ long LastMappedWriteError;
  /* 0x00fc */ volatile unsigned long MappedFileWriteSucceeded;
  /* 0x0100 */ unsigned long MappedWriteBurstCount;
  /* 0x0104 */ unsigned long LowPriorityModWritesOutstanding;
  /* 0x0108 */ struct _KEVENT BoostModWriteIoPriorityEvent;
  /* 0x0120 */ long ModifiedWriterThreadPriority;
  /* 0x0128 */ unsigned __int64 ModifiedPagesLowPriorityGoal;
  /* 0x0130 */ struct _KEVENT ModifiedPageWriterEvent;
  /* 0x0148 */ struct _KEVENT ModifiedWriterExitedEvent;
  /* 0x0160 */ volatile long WriteAllPagefilePages;
  /* 0x0164 */ volatile long WriteAllMappedPages;
  /* 0x0168 */ struct _KEVENT MappedPageWriterEvent;
  /* 0x0180 */ struct _MI_MODWRITE_DATA ModWriteData;
  /* 0x01c0 */ struct _KEVENT RescanPageFilesEvent;
  /* 0x01d8 */ struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;
  /* 0x0200 */ struct _ETHREAD* ModifiedPageWriterThread;
  /* 0x0208 */ struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;
  /* 0x0210 */ struct _WORK_QUEUE_ITEM PagefileScanWorkItem;
  /* 0x0230 */ unsigned long PagefileScanCount;
  /* 0x0234 */ volatile long ClusterRestrictionLock;
  /* 0x0238 */ struct _MI_RESTRICTED_MODWRITES ClusterRestrictions[2];
  /* 0x0240 */ struct _KEVENT NotifyStoreMemoryConditions;
  /* 0x0258 */ volatile unsigned char DelayMappedWrite;
  /* 0x025c */ volatile unsigned long PagefileReservationsEnabled;
  /* 0x0260 */ struct _EX_PUSH_LOCK PageFileCreationLock;
  /* 0x0268 */ struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;
  /* 0x0288 */ unsigned __int64 LastTrimPagefileTime;
  /* 0x0290 */ struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;
  /* 0x02b0 */ volatile long WsSwapPageFileContractionInProgress;
  /* 0x02b8 */ struct _EX_PUSH_LOCK WorkingSetSwapLock;
  /* 0x02c0 */ volatile long WorkingSetInswapLock;
  /* 0x02c4 */ long __PADDING__[1];
} MI_PARTITION_MODWRITES, *PMI_PARTITION_MODWRITES; /* size: 0x02c8 */

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

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _MI_PARTITION_STORES
{
  union
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
  } /* size: 0x0004 */ WriteAllStoreSwapPages;
  /* 0x0004 */ volatile unsigned long VirtualPageFileNumber;
  /* 0x0008 */ unsigned long ReadClusterSizeMax;
  /* 0x000c */ unsigned long MaximumPagefileSize;
  /* 0x0010 */ unsigned long EvictFlushRequestCount;
  /* 0x0014 */ unsigned long ModifiedWriteDisableCount;
  /* 0x0018 */ unsigned long WriteIssueFailures;
  /* 0x001c */ unsigned long WritesOutstanding;
  /* 0x0020 */ unsigned long VirtualPagefileMaximumIncreaseFailed;
  /* 0x0028 */ struct _KTIMER VirtualPagefileIncreaseRetryTimer;
  /* 0x0068 */ struct _KEVENT* RundownWrites;
  /* 0x0070 */ volatile long EvictFlushLock;
  /* 0x0078 */ struct _ETHREAD* EvictionThread;
  /* 0x0080 */ struct _KEVENT EvictEvent;
  /* 0x0098 */ struct _KEVENT EvictThreadExitEvent;
  /* 0x00b0 */ union _SLIST_HEADER WriteSupportSListHead;
  /* 0x00c0 */ struct _KEVENT EvictFlushCompleteEvent;
  /* 0x00d8 */ struct _RTL_BITMAP* WriteIssueFailedBitmap;
  /* 0x00e0 */ struct _MM_STORE_WRITE_PAGE_INFORMATION* WritePageInformation;
  /* 0x00e8 */ struct _KAFFINITY_EX AffinityEx;
  /* 0x01f0 */ struct _EPROCESS* StoreProcess;
  /* 0x01f8 */ volatile long MemoryConditionsLock;
  struct /* bitfield */
  {
    /* 0x01fc */ unsigned long DeleteStoredPages : 1; /* bit position: 0 */
    /* 0x01fc */ unsigned long DiscardPoisonedPages : 1; /* bit position: 1 */
    /* 0x01fc */ unsigned long Spare : 30; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0200 */ unsigned long DiscardedPoisonedPages;
  /* 0x0208 */ unsigned __int64 LastDiscardedPage;
} MI_PARTITION_STORES, *PMI_PARTITION_STORES; /* size: 0x0210 */

typedef struct _MMDEREFERENCE_SEGMENT_HEADER
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0018 */ struct _LIST_ENTRY ControlAreaDeleteListHead;
  /* 0x0028 */ struct _LIST_ENTRY UnusedSegmentDeleteListHead;
  /* 0x0038 */ struct _LIST_ENTRY PagefileExtensionListHead;
} MMDEREFERENCE_SEGMENT_HEADER, *PMMDEREFERENCE_SEGMENT_HEADER; /* size: 0x0048 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_DEFERRED_PFNS_TO_FREE
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ unsigned __int64 NumberOfPages;
  /* 0x0018 */ unsigned long TbFlushStamp;
  /* 0x001c */ long __PADDING__[1];
} MI_DEFERRED_PFNS_TO_FREE, *PMI_DEFERRED_PFNS_TO_FREE; /* size: 0x0020 */

typedef struct _MI_CROSS_PARTITION_CHARGES
{
  /* 0x0000 */ unsigned __int64 CurrentCharges;
  /* 0x0008 */ unsigned __int64 ChargeFailures;
  /* 0x0010 */ unsigned __int64 ChargePeak;
  /* 0x0018 */ unsigned __int64 MaximumAllowed;
} MI_CROSS_PARTITION_CHARGES, *PMI_CROSS_PARTITION_CHARGES; /* size: 0x0020 */

typedef struct _MI_PARTITION_SEGMENTS
{
  /* 0x0000 */ volatile long SegmentListLock;
  /* 0x0004 */ unsigned long DeleteOnCloseCount;
  /* 0x0008 */ __int64 FsControlAreaCount;
  /* 0x0010 */ __int64 PfControlAreaCount;
  /* 0x0018 */ __int64 CloneHeaderCount;
  /* 0x0020 */ struct _KEVENT DeleteSubsectionCleanup;
  /* 0x0038 */ struct _KEVENT UnusedSegmentCleanup;
  /* 0x0050 */ unsigned __int64 SubsectionDeletePtes;
  /* 0x0058 */ struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;
  /* 0x00b0 */ struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;
  /* 0x00f8 */ struct _LIST_ENTRY DeleteOnCloseList;
  /* 0x0108 */ struct _LIST_ENTRY DeleteOnCloseSubsectionList;
  /* 0x0118 */ struct _KTIMER DeleteOnCloseTimer;
  /* 0x0158 */ unsigned char DeleteOnCloseTimerActive;
  /* 0x0159 */ unsigned char SegmentDereferenceThreadExists;
  /* 0x0160 */ void* SegmentDereferenceMailboxHeader;
  /* 0x0168 */ unsigned __int64 UnusedSegmentPagedPool;
  /* 0x0170 */ struct _LIST_ENTRY UnusedSegmentList;
  /* 0x0180 */ struct _LIST_ENTRY DeleteSubsectionList;
  /* 0x0190 */ struct _KEVENT ControlAreaDeleteEvent;
  /* 0x01a8 */ struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;
  /* 0x01b0 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViews[4];
  /* 0x0230 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViewsReady;
  /* 0x0250 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCachePdesReady;
  /* 0x0270 */ struct _KEVENT CloneDereferenceEvent;
  /* 0x0290 */ union _SLIST_HEADER CloneProtosSListHead;
  /* 0x02a0 */ struct _EX_PUSH_LOCK SystemCacheInitLock;
  /* 0x02a8 */ volatile unsigned long SystemCacheViewPageTables;
  /* 0x02b0 */ struct _KEVENT FreeSystemCacheVa;
  /* 0x02c8 */ unsigned long PagefileExtensionWaiters;
  /* 0x02cc */ unsigned long PagefileExtensionRequests;
  /* 0x02d0 */ struct _KEVENT PagefileExtensionWaitEvent;
  /* 0x02e8 */ struct _MI_CROSS_PARTITION_CHARGES SharedCharges[9];
  /* 0x0408 */ struct _KEVENT* SharedChargesDrainEvent;
  /* 0x0410 */ struct _KEVENT* ControlAreasDrainEvent;
  /* 0x0418 */ struct _KEVENT* CloneHeaderDrainEvent;
  /* 0x0420 */ struct _EX_RUNDOWN_REF_CACHE_AWARE* ProbeRundownReference;
  /* 0x0428 */ unsigned __int64 RemoveUnusedSegmentsCommitNeeded;
  /* 0x0430 */ unsigned long SegmentDereferenceCalibrationActive;
  /* 0x0438 */ struct _WORK_QUEUE_ITEM SegmentDereferenceCalibration;
  /* 0x0458 */ unsigned long NumberSegmentDereferenceThreads;
  /* 0x045c */ unsigned long OptimalNumberSegmentDereferenceThreadsComputed;
  /* 0x0460 */ long __PADDING__[8];
} MI_PARTITION_SEGMENTS, *PMI_PARTITION_SEGMENTS; /* size: 0x0480 */

typedef struct _MI_COLOR
{
  union
  {
    /* 0x0000 */ unsigned long EntireField;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Cache : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long Channel : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long Node : 6; /* bit position: 9 */
      /* 0x0000 */ unsigned long HighLow : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long LargePageIndex : 2; /* bit position: 16 */
      /* 0x0000 */ unsigned long CacheAttribute : 2; /* bit position: 18 */
      /* 0x0000 */ unsigned long ListName : 1; /* bit position: 20 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MI_COLOR, *PMI_COLOR; /* size: 0x0004 */

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

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _MI_ACTIVE_PFN
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 43; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 Spare : 20; /* bit position: 44 */
      }; /* bitfield */
    } /* size: 0x0008 */ Leaf;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 31; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 32 */
        /* 0x0000 */ unsigned __int64 WsleAge : 3; /* bit position: 42 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafEntries : 10; /* bit position: 45 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafAge : 3; /* bit position: 55 */
        /* 0x0000 */ unsigned __int64 Spare : 6; /* bit position: 58 */
      }; /* bitfield */
    } /* size: 0x0008 */ PageTable;
    /* 0x0000 */ unsigned __int64 EntireActiveField;
  }; /* size: 0x0008 */
} MI_ACTIVE_PFN, *PMI_ACTIVE_PFN; /* size: 0x0008 */

typedef struct _MIPFNFLINK
{
  union
  {
    /* 0x0000 */ struct _SLIST_ENTRY* NextSlistPfn;
    /* 0x0000 */ void* Next;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Flink : 36; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeFlinkLow : 28; /* bit position: 36 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
    /* 0x0000 */ struct _MI_ACTIVE_PFN Active;
  }; /* size: 0x0008 */
} MIPFNFLINK, *PMIPFNFLINK; /* size: 0x0008 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NotLargePage : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 CacheType : 2; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 OsAvailable2 : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 NonSecure : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 NotDirty : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Sharability : 2; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 NonGlobal : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 ContiguousBit : 1; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 PrivilegedNoExecute : 1; /* bit position: 53 */
    /* 0x0000 */ unsigned __int64 UserNoExecute : 1; /* bit position: 54 */
    /* 0x0000 */ unsigned __int64 Writable : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 WsleProtection : 3; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 WsleAge : 4; /* bit position: 60 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NotLargePage : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 CacheType : 2; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 OsAvailable2 : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 NonSecure : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 NotDirty : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Shareability : 2; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 NonGlobal : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 ContiguousBit : 1; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 PrivilegedNoExecute : 1; /* bit position: 53 */
    /* 0x0000 */ unsigned __int64 UserNoExecute : 1; /* bit position: 54 */
    /* 0x0000 */ unsigned __int64 Writable : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 OsAvailable : 2; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 PxnTable : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 UxnTable : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 ApTable : 2; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 NsTable : 1; /* bit position: 63 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 HiberVerifyConverted : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Unused1 : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Combined : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 DemandFillProto : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 12 */
    /* 0x0000 */ __int64 ProtoAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned __int64 Unused : 6; /* bit position: 26 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Reserved : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 2; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 40; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 12; /* bit position: 52 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 OnStandbyLookaside : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Unused0 : 3; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 ColdPage : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused1 : 4; /* bit position: 12 */
    /* 0x0000 */ __int64 SubsectionAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0008 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 OneEntry : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 filler0 : 3; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 filler1 : 13; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Flink : 36; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 BlinkHigh : 28; /* bit position: 36 */
  }; /* bitfield */
} MMPTE_ACTIVE_PAGE_TABLE_LINKS, *PMMPTE_ACTIVE_PAGE_TABLE_LINKS; /* size: 0x0008 */

typedef struct _MMPTE
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
      /* 0x0000 */ struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS PageTableLinks;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MIPFNBLINK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Blink : 36; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 NodeBlinkLow : 23; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 TbFlushStamp : 3; /* bit position: 59 */
      /* 0x0000 */ unsigned __int64 PageBlinkDeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 PageBlinkLockBit : 1; /* bit position: 63 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ShareCount : 62; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PageShareCountDeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 PageShareCountLockBit : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ __int64 EntireField;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 LockNotUsed : 62; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 DeleteBit : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 LockBit : 1; /* bit position: 63 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} MIPFNBLINK, *PMIPFNBLINK; /* size: 0x0008 */

typedef struct _MMPFNENTRY1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char PageLocation : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Modified : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
  }; /* bitfield */
} MMPFNENTRY1, *PMMPFNENTRY1; /* size: 0x0001 */

typedef struct _MMPFNENTRY3
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Priority : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char OnProtectedStandby : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char InPageError : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char SystemChargedPage : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char ParityError : 1; /* bit position: 7 */
  }; /* bitfield */
} MMPFNENTRY3, *PMMPFNENTRY3; /* size: 0x0001 */

typedef struct _MI_PFN_FLAGS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short ReferenceCount;
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned char PageLocation : 3; /* bit position: 0 */
        /* 0x0002 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
        /* 0x0002 */ unsigned char Modified : 1; /* bit position: 4 */
        /* 0x0002 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
        /* 0x0002 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0003 */ unsigned char Priority : 3; /* bit position: 0 */
        /* 0x0003 */ unsigned char OnProtectedStandby : 1; /* bit position: 3 */
        /* 0x0003 */ unsigned char InPageError : 1; /* bit position: 4 */
        /* 0x0003 */ unsigned char SystemChargedPage : 1; /* bit position: 5 */
        /* 0x0003 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
        /* 0x0003 */ unsigned char ParityError : 1; /* bit position: 7 */
      }; /* bitfield */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EntireField;
  }; /* size: 0x0004 */
} MI_PFN_FLAGS, *PMI_PFN_FLAGS; /* size: 0x0004 */

typedef struct _MI_PFN_FLAGS5
{
  union
  {
    /* 0x0000 */ unsigned long EntireField;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long NodeBlinkHigh : 13; /* bit position: 0 */
        /* 0x0000 */ unsigned long NodeFlinkMiddle : 19; /* bit position: 13 */
      }; /* bitfield */
    } /* size: 0x0004 */ StandbyList;
    struct
    {
      /* 0x0000 */ unsigned char ModifiedListBucketIndex : 4; /* bit position: 0 */
    } /* size: 0x0001 */ MappedPageList;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long PageTableBlinkLow : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned long PageTableBuddyHigh : 10; /* bit position: 16 */
        /* 0x0000 */ unsigned long PageTableLinked : 1; /* bit position: 26 */
        /* 0x0000 */ unsigned long AnchorLargePageSize : 2; /* bit position: 27 */
        /* 0x0000 */ unsigned long Spare1 : 3; /* bit position: 29 */
      }; /* bitfield */
    } /* size: 0x0004 */ Active;
  }; /* size: 0x0004 */
} MI_PFN_FLAGS5, *PMI_PFN_FLAGS5; /* size: 0x0004 */

typedef struct _MI_PFN_FLAGS4
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 PteFrame : 36; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ResidentPage : 1; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 ResidentPageContainsBadPages : 1; /* bit position: 37 */
      /* 0x0000 */ unsigned __int64 Unused1 : 1; /* bit position: 38 */
      /* 0x0000 */ unsigned __int64 Partition : 10; /* bit position: 39 */
      /* 0x0000 */ unsigned __int64 FileOnly : 1; /* bit position: 49 */
      /* 0x0000 */ unsigned __int64 PfnExists : 1; /* bit position: 50 */
      /* 0x0000 */ unsigned __int64 PageIdentity : 3; /* bit position: 51 */
      /* 0x0000 */ unsigned __int64 PrototypePte : 1; /* bit position: 54 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
  }; /* size: 0x0008 */
} MI_PFN_FLAGS4, *PMI_PFN_FLAGS4; /* size: 0x0008 */

typedef struct _MMPFN
{
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY ListEntry;
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    struct
    {
      /* 0x0000 */ struct _MIPFNFLINK u1;
      union
      {
        /* 0x0008 */ struct _MMPTE* PteAddress;
        /* 0x0008 */ unsigned __int64 PteLong;
      }; /* size: 0x0008 */
      /* 0x0010 */ struct _MMPTE OriginalPte;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ volatile struct _MIPFNBLINK u2;
  union
  {
    union
    {
      struct
      {
        /* 0x0020 */ unsigned short ReferenceCount;
        /* 0x0022 */ struct _MMPFNENTRY1 e1;
        /* 0x0023 */ struct _MMPFNENTRY3 e3;
      }; /* size: 0x0004 */
      struct
      {
        /* 0x0020 */ unsigned short ReferenceCount;
      } /* size: 0x0002 */ e2;
      /* 0x0020 */ volatile struct _MI_PFN_FLAGS e4;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  /* 0x0024 */ struct _MI_PFN_FLAGS5 u5;
  /* 0x0028 */ struct _MI_PFN_FLAGS4 u4;
} MMPFN, *PMMPFN; /* size: 0x0030 */

typedef struct _MMPFNLIST
{
  /* 0x0000 */ volatile unsigned __int64 Total;
  /* 0x0008 */ struct _MI_COLOR Color;
  /* 0x000c */ enum _MMLISTS ListName;
  /* 0x0010 */ volatile unsigned __int64 Flink;
  /* 0x0018 */ volatile unsigned __int64 Blink;
  /* 0x0020 */ volatile long Lock;
  /* 0x0028 */ struct _MMPFN EmbeddedPfn;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0058 */

typedef struct _MI_STANDBY_LOOKASIDE
{
  /* 0x0000 */ unsigned __int64 Array[64];
} MI_STANDBY_LOOKASIDE, *PMI_STANDBY_LOOKASIDE; /* size: 0x0200 */

typedef struct _MI_DECAY_TIMER_LINKAGE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Spare0 : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PreviousDecayPfn : 31; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 TimerRemoved : 1; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 NextDecayPfn : 31; /* bit position: 33 */
  }; /* bitfield */
} MI_DECAY_TIMER_LINKAGE, *PMI_DECAY_TIMER_LINKAGE; /* size: 0x0008 */

typedef struct _MI_DECAY_TIMER_LINK
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ struct _MI_DECAY_TIMER_LINKAGE e1;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_DECAY_TIMER_LINK, *PMI_DECAY_TIMER_LINK; /* size: 0x0008 */

typedef struct _MI_LDW_WORK_CONTEXT
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ struct _FILE_OBJECT* FileObject;
  /* 0x0028 */ long ErrorStatus;
  /* 0x002c */ volatile long Active;
  /* 0x0030 */ unsigned char FreeWhenDone;
  /* 0x0031 */ char __PADDING__[7];
} MI_LDW_WORK_CONTEXT, *PMI_LDW_WORK_CONTEXT; /* size: 0x0038 */

typedef struct _MI_AVAILABLE_PAGE_WAIT_STATES
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0018 */ unsigned long EventSets;
  /* 0x001c */ long __PADDING__[1];
} MI_AVAILABLE_PAGE_WAIT_STATES, *PMI_AVAILABLE_PAGE_WAIT_STATES; /* size: 0x0020 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_LARGE_PAGE_COALESCE_WORKER_CONTEXT
{
  /* 0x0000 */ struct _KEVENT CandidatesExistEvent;
  /* 0x0018 */ unsigned __int64 InProgressBitmapIndex;
  /* 0x0020 */ long DemandCoalesceAttempted;
  /* 0x0024 */ long DemandCoalesceTimedOut;
  /* 0x0028 */ long DemandCoalesceTimedOutCSwitch;
  /* 0x002c */ long DemandCoalesceSucceeded;
} MI_LARGE_PAGE_COALESCE_WORKER_CONTEXT, *PMI_LARGE_PAGE_COALESCE_WORKER_CONTEXT; /* size: 0x0030 */

typedef struct _MI_PARTITION_PAGE_LISTS
{
  /* 0x0000 */ struct _MMPFNLIST ZeroedPageListHead;
  /* 0x0080 */ struct _MMPFNLIST FreePageListHead;
  /* 0x0100 */ struct _MMPFNLIST StandbyPageListHead;
  /* 0x0180 */ struct _MMPFNLIST StandbyPageListByPriority[8];
  /* 0x0480 */ struct _MMPFNLIST ModifiedPageListNoReservation;
  /* 0x0500 */ struct _MMPFNLIST ModifiedPageListNoReservationCompress;
  /* 0x0580 */ struct _MMPFNLIST ModifiedPageListByReservation[16];
  /* 0x0b00 */ struct _MMPFNLIST MappedPageListHead[16];
  /* 0x1080 */ struct _MMPFNLIST BadPageListHead;
  /* 0x10d8 */ unsigned __int64* HotZeroedPagesCountByColor;
  /* 0x10e0 */ struct _MMPFNLIST* PageLocationList[8];
  /* 0x1120 */ volatile unsigned long StandbyRepurposedByPriority[8];
  /* 0x1180 */ volatile unsigned __int64 TransitionSharedPages;
  /* 0x1188 */ unsigned __int64 TransitionSharedPagesPeak[9];
  /* 0x11d0 */ struct _KEVENT MappedPageListHeadEvent[16];
  /* 0x1380 */ struct _MI_STANDBY_LOOKASIDE OldestStandbyPageCache[8];
  /* 0x2380 */ struct _MI_STANDBY_LOOKASIDE NewestStandbyPageCache[8];
  /* 0x3380 */ unsigned __int64 NewestStandbyPageCacheInserts[8][2];
  /* 0x3400 */ struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];
  /* 0x3420 */ unsigned long DecayHand;
  /* 0x3424 */ unsigned char StandbyListDiscard;
  /* 0x3425 */ unsigned char FreeListDiscard;
  /* 0x3426 */ unsigned char PfnBitMapsReady;
  /* 0x3428 */ unsigned __int64 LastDecayHandUpdateTime;
  /* 0x3430 */ struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;
  /* 0x3480 */ volatile long AvailableEventsLock;
  /* 0x3488 */ struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];
  /* 0x3500 */ volatile unsigned __int64 TransitionPrivatePages;
  /* 0x3508 */ struct _RTL_BITMAP_EX LargePfnBitMap[2];
  /* 0x3528 */ struct _MMPFNLIST* FreeZeroListHeads;
  /* 0x3530 */ union _SLIST_HEADER* FreeZeroPageSlists;
  /* 0x3538 */ union _MI_AVAILABLE_PAGES_MEDIUM_GRANULARITY* AvailablePagesAtMediumGranularity;
  /* 0x3540 */ union _MI_AVAILABLE_PAGES_LARGE_GRANULARITY* AvailablePagesAtLargeGranularity;
  /* 0x3548 */ struct _RTL_BITMAP_EX LargePageRebuildCandidateBitmaps[3];
  /* 0x3578 */ union _MI_AVAILABLE_PAGES_HUGE_GRANULARITY* AvailablePagesAtHugeGranularity;
  /* 0x3580 */ volatile long ProcessLargePageCacheLock;
  /* 0x3588 */ struct _LIST_ENTRY ProcessLargePageCacheLinks;
  /* 0x3598 */ unsigned long ProcessLargePageCachePeriodicCount;
  /* 0x35a0 */ struct _MI_LARGE_PAGE_COALESCE_WORKER_CONTEXT LargePageCoalesceWorkerContexts[3];
  /* 0x3630 */ unsigned __int64 LowMemoryConfiguredThreshold;
  /* 0x3638 */ unsigned __int64 HighMemoryConfiguredThreshold;
  /* 0x3640 */ unsigned __int64 LowMemoryThreshold;
  /* 0x3648 */ unsigned __int64 HighMemoryThreshold;
  /* 0x3650 */ void* HugePfnLists;
  /* 0x3658 */ unsigned __int64 AvailableHugeIoRanges;
  /* 0x3660 */ unsigned __int64 DriverPageCount;
  /* 0x3668 */ unsigned __int64 DriverLastPage;
  /* 0x3670 */ unsigned __int64 DriverNonSlabAttempted;
  /* 0x3678 */ unsigned __int64 DriverSlabLastFailTime;
  /* 0x3680 */ unsigned __int64 MdlPagesByListsTotal;
  /* 0x3688 */ unsigned __int64 MdlPagesByListsFromSlab;
  /* 0x3690 */ unsigned __int64 MdlPagesByListsSlabNotEligible;
  /* 0x3698 */ unsigned __int64 MdlPagesPreferContiguousSlabEligible;
  /* 0x36a0 */ unsigned __int64 MdlPagesPreferContiguousFromSlab;
  /* 0x36a8 */ unsigned __int64 MdlSlabPagesFreeZeroedTotal;
  /* 0x36b0 */ unsigned long MdlSlabPagesFreeZeroedBuckets[4];
  /* 0x36c0 */ unsigned __int64 SystemPageTablePagesNoSlab;
  /* 0x36c8 */ long __PADDING__[14];
} MI_PARTITION_PAGE_LISTS, *PMI_PARTITION_PAGE_LISTS; /* size: 0x3700 */

typedef struct _MI_PARTITION_COMMIT
{
  /* 0x0000 */ volatile unsigned __int64 PeakCommitment;
  /* 0x0008 */ volatile unsigned __int64 TotalCommitLimitMaximum;
  /* 0x0010 */ volatile unsigned long Popups[2];
  /* 0x0018 */ volatile unsigned __int64 LowCommitThreshold;
  /* 0x0020 */ volatile unsigned __int64 HighCommitThreshold;
  /* 0x0028 */ volatile unsigned __int64 ExtremelyHighCommitThreshold;
  /* 0x0030 */ unsigned __int64 IdealCommitTarget;
  /* 0x0038 */ volatile long Lock;
  /* 0x0040 */ unsigned __int64 SystemCommitReserve;
  /* 0x0048 */ unsigned __int64 OverCommit;
} MI_PARTITION_COMMIT, *PMI_PARTITION_COMMIT; /* size: 0x0050 */

typedef enum _MI_PROCESSOR_ACTIVITY_TYPE
{
  MiProcessorActivityBackground = 0,
  MiProcessorActivityOnDemand = 1,
  MiProcessorActivityMaximum = 2,
} MI_PROCESSOR_ACTIVITY_TYPE, *PMI_PROCESSOR_ACTIVITY_TYPE;

typedef struct _MI_PARTITION_ZEROING
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;
  /* 0x0020 */ volatile long BackgroundZeroingDisabled;
  /* 0x0024 */ volatile long BootEnginesCalibrating;
  /* 0x0028 */ struct _KEVENT BootEnginesCalibrationWaiters;
  /* 0x0040 */ long ZeroFreePageSlistMinimum;
  /* 0x0044 */ enum _MI_PROCESSOR_ACTIVITY_TYPE BackgroundZeroingPreference;
} MI_PARTITION_ZEROING, *PMI_PARTITION_ZEROING; /* size: 0x0048 */

typedef struct _MI_COMBINE_WORKITEM
{
  /* 0x0000 */ void* NextEntry;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM WorkItem;
} MI_COMBINE_WORKITEM, *PMI_COMBINE_WORKITEM; /* size: 0x0028 */

typedef struct _MI_COMBINE_PAGE_LISTHEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE Table;
  /* 0x0008 */ volatile long Lock;
  /* 0x000c */ long __PADDING__[1];
} MI_COMBINE_PAGE_LISTHEAD, *PMI_COMBINE_PAGE_LISTHEAD; /* size: 0x0010 */

typedef struct _MI_PAGE_COMBINE_STATISTICS
{
  /* 0x0000 */ unsigned __int64 PagesScannedActive;
  /* 0x0008 */ unsigned __int64 PagesScannedStandby;
  /* 0x0010 */ unsigned __int64 PagesCombined;
  /* 0x0018 */ unsigned long CombineScanCount;
  /* 0x001c */ long CombinedBlocksInUse;
  /* 0x0020 */ long SumCombinedBlocksReferenceCount;
  /* 0x0024 */ unsigned long NonSlabPagesUsedForInPage;
} MI_PAGE_COMBINE_STATISTICS, *PMI_PAGE_COMBINE_STATISTICS; /* size: 0x0028 */

typedef struct _MI_PAGE_COMBINING_SUPPORT
{
  /* 0x0000 */ struct _MI_PARTITION* Partition;
  /* 0x0008 */ struct _LIST_ENTRY ArbitraryPfnMapList;
  /* 0x0018 */ struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;
  /* 0x0040 */ unsigned long CombiningThreadCount;
  /* 0x0048 */ struct _LIST_ENTRY CombinePageFreeList;
  /* 0x0058 */ volatile long CombineFreeListLock;
  /* 0x0060 */ struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];
  /* 0x0160 */ unsigned __int64 CommonPageCombineDomain;
  /* 0x0168 */ struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;
} MI_PAGE_COMBINING_SUPPORT, *PMI_PAGE_COMBINING_SUPPORT; /* size: 0x0190 */

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

typedef struct _MI_ACCESS_LOG_STATE
{
  /* 0x0000 */ struct _MM_PAGE_ACCESS_INFO_HEADER* volatile CcAccessLog;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM DisableAccessLoggingWorkItem;
  /* 0x0028 */ unsigned long DisableAccessLoggingState;
  /* 0x002c */ unsigned long Enabled;
  /* 0x0030 */ unsigned long MinLoggingPriority;
  /* 0x0038 */ struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;
  /* 0x0040 */ struct _KDPC AllocatePfnRepurposeDpc;
  /* 0x0080 */ volatile long AccessLoggingLock;
  /* 0x0084 */ long __PADDING__[31];
} MI_ACCESS_LOG_STATE, *PMI_ACCESS_LOG_STATE; /* size: 0x0100 */

typedef struct _MMWORKING_SET_EXPANSION_HEAD
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
} MMWORKING_SET_EXPANSION_HEAD, *PMMWORKING_SET_EXPANSION_HEAD; /* size: 0x0010 */

typedef struct _MI_SPECIAL_PURPOSE_MEMORY_STATE
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY TypesList;
      /* 0x0010 */ struct _LIST_ENTRY CacheEligibleList;
    }; /* size: 0x0020 */
    struct
    {
      /* 0x0000 */ struct _EPARTITION* RegularMemoryParentPartitionObject;
      /* 0x0008 */ void* SpecialPurposeMemoryParentHandle;
      /* 0x0010 */ unsigned __int64 Attributes[4];
      /* 0x0030 */ struct _EX_PUSH_LOCK Lock;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
} MI_SPECIAL_PURPOSE_MEMORY_STATE, *PMI_SPECIAL_PURPOSE_MEMORY_STATE; /* size: 0x0038 */

typedef struct _MI_SLAB_IDENTITY_REFERENCE
{
  /* 0x0000 */ __int64 ReferenceCount;
} MI_SLAB_IDENTITY_REFERENCE, *PMI_SLAB_IDENTITY_REFERENCE; /* size: 0x0008 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_PARTITION_SLABS
{
  /* 0x0000 */ struct _MI_SLAB_TYPE_IDENTIFIER* SlabTypeIdentifiers;
  /* 0x0008 */ unsigned __int64 SlabEntriesDemoted;
  /* 0x0010 */ volatile long SlabDemoteInProgress;
  /* 0x0014 */ unsigned long SlabTypeAcquiresCharges;
  /* 0x0018 */ struct _MI_SLAB_IDENTITY_REFERENCE IdentityRefs[64];
  /* 0x0218 */ struct _RTL_BITMAP InUseIdentitiesBitmap;
  /* 0x0228 */ unsigned long InUseIdentitiesBitmapBuffer[2];
  /* 0x0230 */ volatile long IdentitySlabsInitialized;
  /* 0x0238 */ struct _EX_PUSH_LOCK IdentitiesLock;
  /* 0x0280 */ volatile unsigned __int64 IdentitySlabAvailablePages;
  /* 0x0288 */ struct _MI_AVAILABLE_PAGE_WAIT_STATES IdentitySlabAvailablePagesWaitState[2];
  /* 0x02c8 */ struct _EX_RUNDOWN_REF ReplenishRundownProtection;
  /* 0x02d0 */ unsigned __int64 LowMemoryConditionStartTime;
  /* 0x02d8 */ long __PADDING__[10];
} MI_PARTITION_SLABS, *PMI_PARTITION_SLABS; /* size: 0x0300 */

typedef struct _MMSUPPORT_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char WorkingSetType : 4; /* bit position: 0 */
        /* 0x0000 */ unsigned char Reserved0 : 2; /* bit position: 4 */
        /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char Reserved1 : 1; /* bit position: 0 */
        /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
        /* 0x0001 */ unsigned char LinearAddressProtected : 1; /* bit position: 3 */
        /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0000 */ unsigned short u1;
      /* 0x0002 */ unsigned char MemoryPriority;
      union
      {
        struct /* bitfield */
        {
          /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
          /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
          /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
          /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
          /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 4 */
          /* 0x0003 */ unsigned char Reserved2 : 2; /* bit position: 6 */
        }; /* bitfield */
        /* 0x0003 */ unsigned char u2;
      }; /* size: 0x0001 */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EntireFlags;
  }; /* size: 0x0004 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ volatile unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 TrimmedPageCount;
  /* 0x0010 */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ volatile unsigned __int64 AgeDistribution[8];
  /* 0x0068 */ struct _KGATE* ExitOutswapGate;
  /* 0x0070 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0078 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0080 */ volatile unsigned __int64 WorkingSetLeafSize;
  /* 0x0088 */ volatile unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0090 */ volatile unsigned __int64 WorkingSetSize;
  /* 0x0098 */ volatile unsigned __int64 WorkingSetPrivateSize;
  /* 0x00a0 */ volatile unsigned __int64 PeakWorkingSetSize;
  /* 0x00a8 */ unsigned long HardFaultCount;
  /* 0x00ac */ unsigned short LastTrimStamp;
  /* 0x00ae */ unsigned short PartitionId;
  /* 0x00b0 */ unsigned __int64 SelfmapLock;
  /* 0x00b8 */ volatile struct _MMSUPPORT_FLAGS Flags;
  /* 0x00bc */ volatile unsigned long InterlockedFlags;
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x00c0 */

typedef struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0004 */ unsigned long EntryCount;
  /* 0x0008 */ struct _MMPFN* Flink;
  /* 0x0010 */ struct _MMPFN* Blink;
} MI_WORKING_SET_PAGE_TABLE_AGE_LINKS, *PMI_WORKING_SET_PAGE_TABLE_AGE_LINKS; /* size: 0x0018 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* PteResumePoint[3];
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 LockedEntries;
  /* 0x0080 */ struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];
  /* 0x0140 */ long __PADDING__[16];
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0180 */

typedef struct _MI_PARTITION_WORKING_SET
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE VmInstance;
  /* 0x0100 */ struct _MMWSL_INSTANCE VmWorkingSetList;
} MI_PARTITION_WORKING_SET, *PMI_PARTITION_WORKING_SET; /* size: 0x0280 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x000c */ unsigned short AllocationProcessorNumber;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef struct _MI_PAGEFILE_TRACES
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned char PagefileNumber;
  /* 0x0005 */ unsigned char Priority;
  /* 0x0006 */ unsigned char IrpPriority;
  /* 0x0007 */ unsigned char ReservationWrite;
  /* 0x0008 */ unsigned __int64 CurrentTime;
  /* 0x0010 */ unsigned __int64 AvailablePages;
  /* 0x0018 */ unsigned __int64 ModifiedPagesTotal;
  /* 0x0020 */ unsigned __int64 ModifiedPagefilePages;
  /* 0x0028 */ unsigned __int64 ModifiedNoWritePages;
  /* 0x0030 */ unsigned __int64 ModifiedPagefileNoReservationPages;
  /* 0x0038 */ unsigned __int64 ModifiedPageFileNoReservationCompressPages;
  /* 0x0040 */ unsigned __int64 ModifiedPagefileReservationPages;
  struct
  {
    /* 0x0048 */ struct _MDL Mdl;
    /* 0x0078 */ unsigned __int64 Page[1];
  } /* size: 0x0038 */ LocalMdl;
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0080 */

typedef struct _MI_VISIBLE_PARTITION
{
  /* 0x0000 */ unsigned __int64 LowestPhysicalPage;
  /* 0x0008 */ unsigned __int64 HighestPhysicalPage;
  /* 0x0010 */ unsigned __int64 NumberOfPhysicalPages;
  /* 0x0018 */ volatile unsigned long NumberOfPagingFiles;
  /* 0x001c */ unsigned char SystemCacheInitialized;
  /* 0x0020 */ struct _MMPAGING_FILE* PagingFile[16];
  /* 0x0100 */ volatile unsigned __int64 AvailablePages;
  /* 0x0180 */ volatile unsigned __int64 ResidentAvailablePages;
  /* 0x0200 */ struct _MI_PARTITION_WORKING_SET PartitionWs[1];
  /* 0x0480 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0500 */ volatile unsigned __int64 TotalCommittedPagesExposed;
  /* 0x0580 */ struct _MMPFNLIST ModifiedPageListHead;
  /* 0x0600 */ struct _MMPFNLIST ModifiedNoWritePageListHead;
  /* 0x0658 */ volatile unsigned __int64 TotalCommitLimit;
  /* 0x0660 */ unsigned __int64 TotalPagesForPagingFile;
  /* 0x0668 */ unsigned __int64 VadPhysicalPages;
  /* 0x0670 */ unsigned __int64 ProcessLockedFilePages;
  /* 0x0678 */ volatile unsigned __int64 SharedCommit;
  /* 0x0680 */ volatile unsigned __int64 MdlPagesAllocated;
  /* 0x0688 */ volatile unsigned __int64 ContiguousPagesAllocated;
  /* 0x0690 */ unsigned __int64 SlabAllocatorPages;
  /* 0x0698 */ unsigned __int64 SlabAllocatorPagesUncharged;
  /* 0x06a0 */ unsigned __int64 BootSlabPages;
  /* 0x06a8 */ unsigned __int64 SecureKernelPagesFromNonChargedSlabs;
  /* 0x06b0 */ unsigned long ChargeCommitmentFailures[4];
  /* 0x06c0 */ volatile long PageFileTraceIndex;
  /* 0x06c8 */ struct _MI_PAGEFILE_TRACES PageFileTraces[32];
  /* 0x16c8 */ long __PADDING__[14];
} MI_VISIBLE_PARTITION, *PMI_VISIBLE_PARTITION; /* size: 0x1700 */

typedef struct _MI_PARTITION
{
  /* 0x0000 */ struct _MI_PARTITION_CORE Core;
  /* 0x01e0 */ struct _MI_PARTITION_MODWRITES Modwriter;
  /* 0x04b0 */ struct _MI_PARTITION_STORES Store;
  /* 0x0700 */ struct _MI_PARTITION_SEGMENTS Segments;
  /* 0x0b80 */ struct _MI_PARTITION_PAGE_LISTS PageLists;
  /* 0x4280 */ struct _MI_PARTITION_COMMIT Commit;
  /* 0x42d0 */ struct _MI_PARTITION_ZEROING Zeroing;
  /* 0x4318 */ struct _MI_PAGE_COMBINING_SUPPORT PageCombine;
  /* 0x4500 */ struct _MI_ACCESS_LOG_STATE AccessLog;
  /* 0x4600 */ void* WorkingSetControl;
  /* 0x4608 */ struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;
  /* 0x4618 */ struct _MI_SPECIAL_PURPOSE_MEMORY_STATE SpecialPurposeMemory;
  /* 0x4680 */ struct _MI_PARTITION_SLABS Slabs;
  /* 0x4980 */ unsigned __int64 LastPeriodicTelemetryLogTime;
  /* 0x4a00 */ struct _MI_VISIBLE_PARTITION Vp;
} MI_PARTITION, *PMI_PARTITION; /* size: 0x6100 */

