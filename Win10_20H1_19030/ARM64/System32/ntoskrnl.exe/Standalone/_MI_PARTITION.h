typedef struct _MI_PARTITION_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long BeingDeleted : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PageListsInitialized : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long StoreReservedPagesCharged : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long UseProtectedSlabAllocators : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long UseUnprotectedSlabAllocators : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long PureHoldingPartition : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long ZeroPagesOptional : 1; /* bit position: 6 */
  }; /* bitfield */
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

typedef struct _MI_PARTITION_CORE
{
  /* 0x0000 */ unsigned short PartitionId;
  union
  {
    union
    {
      /* 0x0004 */ unsigned long LongFlags;
      /* 0x0004 */ struct _MI_PARTITION_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned char MemoryConfigurationChanged;
  /* 0x0010 */ struct _MI_NODE_INFORMATION* NodeInformation;
  /* 0x0018 */ struct _RTL_AVL_TREE PageRoot;
  /* 0x0020 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;
  /* 0x0028 */ unsigned __int64 MemoryBlockReferences;
  /* 0x0030 */ struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;
  /* 0x0050 */ unsigned __int64 PfnUnmapCount;
  /* 0x0058 */ void* PfnUnmapWaitList;
  /* 0x0060 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;
  /* 0x0068 */ struct _KEVENT ExitEvent;
  /* 0x0080 */ void* SystemThreadHandles[6];
  /* 0x00b0 */ struct _EPARTITION* PartitionObject;
  /* 0x00b8 */ struct _EX_PUSH_LOCK PartitionSystemThreadsLock;
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
} MI_PARTITION_CORE, *PMI_PARTITION_CORE; /* size: 0x01b8 */

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
    /* 0x0003 */ unsigned char Spare3 : 2; /* bit position: 6 */
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
  /* 0x0050 */ void** volatile ActiveEntry;
} MMPAGE_FILE_EXPANSION, *PMMPAGE_FILE_EXPANSION; /* size: 0x0058 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

typedef struct _MMMOD_WRITER_LISTHEAD
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  union
  {
    /* 0x0010 */ struct _KGATE Gate;
    /* 0x0010 */ struct _KEVENT Event;
  }; /* size: 0x0018 */
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
  /* 0x00b0 */ unsigned __int64 NumberOfMappedMdls;
  /* 0x00b8 */ volatile long NumberOfMappedMdlsInUse;
  /* 0x00bc */ unsigned long NumberOfMappedMdlsInUsePeak;
  /* 0x00c0 */ struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;
  /* 0x00e8 */ unsigned char NeedMappedMdl;
  /* 0x00e9 */ unsigned char NeedPageFileMdl;
  /* 0x00ea */ unsigned char ModwriterActive;
  /* 0x00eb */ unsigned char TransitionInserted;
  /* 0x00ec */ long LastModifiedWriteError;
  /* 0x00f0 */ long LastMappedWriteError;
  /* 0x00f4 */ volatile unsigned long MappedFileWriteSucceeded;
  /* 0x00f8 */ unsigned long MappedWriteBurstCount;
  /* 0x00fc */ unsigned long LowPriorityModWritesOutstanding;
  /* 0x0100 */ struct _KEVENT BoostModWriteIoPriorityEvent;
  /* 0x0118 */ long ModifiedWriterThreadPriority;
  /* 0x0120 */ unsigned __int64 ModifiedPagesLowPriorityGoal;
  /* 0x0128 */ struct _KEVENT ModifiedPageWriterEvent;
  /* 0x0140 */ struct _KEVENT ModifiedWriterExitedEvent;
  /* 0x0158 */ volatile long WriteAllPagefilePages;
  /* 0x015c */ volatile long WriteAllMappedPages;
  /* 0x0160 */ struct _KEVENT MappedPageWriterEvent;
  /* 0x0178 */ struct _MI_MODWRITE_DATA ModWriteData;
  /* 0x01b8 */ struct _KEVENT RescanPageFilesEvent;
  /* 0x01d0 */ struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;
  /* 0x01f8 */ struct _ETHREAD* ModifiedPageWriterThread;
  /* 0x0200 */ struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;
  /* 0x0208 */ struct _WORK_QUEUE_ITEM PagefileScanWorkItem;
  /* 0x0228 */ unsigned long PagefileScanCount;
  /* 0x022c */ volatile long ClusterRestrictionLock;
  /* 0x0230 */ struct _MI_RESTRICTED_MODWRITES ClusterRestrictions[2];
  /* 0x0238 */ struct _KEVENT NotifyStoreMemoryConditions;
  /* 0x0250 */ volatile unsigned char DelayMappedWrite;
  /* 0x0254 */ volatile unsigned long PagefileReservationsEnabled;
  /* 0x0258 */ struct _EX_PUSH_LOCK PageFileCreationLock;
  /* 0x0260 */ struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;
  /* 0x0280 */ unsigned __int64 LastTrimPagefileTime;
  /* 0x0288 */ struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;
  /* 0x02a8 */ volatile long WsSwapPageFileContractionInProgress;
  /* 0x02b0 */ struct _EX_PUSH_LOCK WorkingSetSwapLock;
  /* 0x02b8 */ volatile long WorkingSetInswapLock;
  /* 0x02bc */ long __PADDING__[1];
} MI_PARTITION_MODWRITES, *PMI_PARTITION_MODWRITES; /* size: 0x02c0 */

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
  } /* size: 0x0004 */ WriteAllStoreHintedPages;
  /* 0x0004 */ unsigned long VirtualPageFileNumber;
  /* 0x0008 */ unsigned long Registered;
  /* 0x000c */ unsigned long ReadClusterSizeMax;
  /* 0x0010 */ unsigned long EvictFlushRequestCount;
  /* 0x0014 */ unsigned long ModifiedWriteDisableCount;
  /* 0x0018 */ unsigned long WriteIssueFailures;
  /* 0x001c */ unsigned long WritesOutstanding;
  /* 0x0020 */ volatile long EvictFlushLock;
  /* 0x0028 */ struct _ETHREAD* EvictionThread;
  /* 0x0030 */ struct _KEVENT EvictEvent;
  /* 0x0050 */ union _SLIST_HEADER WriteSupportSListHead;
  /* 0x0060 */ struct _KEVENT EvictFlushCompleteEvent;
  /* 0x0078 */ struct _RTL_BITMAP* ModifiedWriteFailedBitmap;
  /* 0x0080 */ struct _EPROCESS* StoreProcess;
  /* 0x0088 */ unsigned long DeleteStoredPages;
  /* 0x008c */ long __PADDING__[1];
} MI_PARTITION_STORES, *PMI_PARTITION_STORES; /* size: 0x0090 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ long Limit;
  /* 0x001c */ long __PADDING__[1];
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0020 */

typedef struct _MMDEREFERENCE_SEGMENT_HEADER
{
  /* 0x0000 */ struct _KSEMAPHORE Semaphore;
  /* 0x0020 */ struct _LIST_ENTRY ControlAreaDeleteListHead;
  /* 0x0030 */ struct _LIST_ENTRY UnusedSegmentDeleteListHead;
  /* 0x0040 */ struct _LIST_ENTRY PagefileExtensionListHead;
} MMDEREFERENCE_SEGMENT_HEADER, *PMMDEREFERENCE_SEGMENT_HEADER; /* size: 0x0050 */

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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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
    /* 0x0000 */ unsigned __int64 PdeLocked : 1; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 PdeContended : 1; /* bit position: 58 */
    /* 0x0000 */ unsigned __int64 PxnTable : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 UxnTable : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 ApTable : 2; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 NsTable : 1; /* bit position: 63 */
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
    /* 0x0000 */ unsigned __int64 Unused : 7; /* bit position: 25 */
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
    /* 0x0000 */ unsigned __int64 Spare : 3; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 16; /* bit position: 48 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 6 */
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
    /* 0x0000 */ unsigned __int64 filler1 : 16; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 36; /* bit position: 28 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ volatile unsigned __int64 VolatileLong;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MI_PTE_CHAIN_HEAD
{
  /* 0x0000 */ struct _MMPTE Flink;
  /* 0x0008 */ struct _MMPTE Blink;
  /* 0x0010 */ struct _MMPTE* PteBase;
} MI_PTE_CHAIN_HEAD, *PMI_PTE_CHAIN_HEAD; /* size: 0x0018 */

typedef struct _MI_CROSS_PARTITION_CHARGES
{
  /* 0x0000 */ unsigned __int64 CurrentCharges;
  /* 0x0008 */ unsigned __int64 ChargeFailures;
  /* 0x0010 */ unsigned __int64 ChargePeak;
  /* 0x0018 */ unsigned __int64 ChargeMinimum;
} MI_CROSS_PARTITION_CHARGES, *PMI_CROSS_PARTITION_CHARGES; /* size: 0x0020 */

typedef struct _MI_PARTITION_SEGMENTS
{
  /* 0x0000 */ volatile long SegmentListLock;
  /* 0x0004 */ unsigned long DeleteOnCloseCount;
  /* 0x0008 */ volatile __int64 FsControlAreaCount;
  /* 0x0010 */ volatile __int64 PfControlAreaCount;
  /* 0x0018 */ volatile __int64 CloneHeaderCount;
  /* 0x0020 */ struct _KEVENT DeleteSubsectionCleanup;
  /* 0x0038 */ struct _KEVENT UnusedSegmentCleanup;
  /* 0x0050 */ unsigned __int64 SubsectionDeletePtes;
  /* 0x0058 */ struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;
  /* 0x00b0 */ struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;
  /* 0x0100 */ struct _LIST_ENTRY DeleteOnCloseList;
  /* 0x0110 */ struct _KTIMER DeleteOnCloseTimer;
  /* 0x0150 */ unsigned char DeleteOnCloseTimerActive;
  /* 0x0151 */ unsigned char SegmentDereferenceThreadExists;
  /* 0x0158 */ void* SegmentDereferenceActiveControlArea;
  /* 0x0160 */ unsigned __int64 UnusedSegmentPagedPool;
  /* 0x0168 */ struct _LIST_ENTRY UnusedSegmentList;
  /* 0x0178 */ struct _LIST_ENTRY UnusedSubsectionList;
  /* 0x0188 */ struct _LIST_ENTRY DeleteSubsectionList;
  /* 0x0198 */ struct _KEVENT ControlAreaDeleteEvent;
  /* 0x01b0 */ struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;
  /* 0x01b8 */ struct _MI_PTE_CHAIN_HEAD FreeSystemCache;
  /* 0x01d0 */ struct _KEVENT CloneDereferenceEvent;
  /* 0x01f0 */ union _SLIST_HEADER CloneProtosSListHead;
  /* 0x0200 */ struct _EX_PUSH_LOCK SystemCacheInitLock;
  /* 0x0208 */ unsigned long PagefileExtensionWaiters;
  /* 0x020c */ unsigned long PagefileExtensionRequests;
  /* 0x0210 */ struct _KEVENT PagefileExtensionWaitEvent;
  /* 0x0228 */ struct _MI_CROSS_PARTITION_CHARGES SharedCharges[7];
  /* 0x0308 */ struct _KEVENT* SharedChargesDrainEvent;
  /* 0x0310 */ struct _KEVENT* ControlAreasDrainEvent;
  /* 0x0318 */ struct _KEVENT* CloneHeaderDrainEvent;
  /* 0x0320 */ struct _EX_RUNDOWN_REF_CACHE_AWARE* ProbeRundownReference;
  /* 0x0328 */ long __PADDING__[22];
} MI_PARTITION_SEGMENTS, *PMI_PARTITION_SEGMENTS; /* size: 0x0380 */

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
  /* 0x0000 */ unsigned __int64 Total;
  /* 0x0008 */ enum _MMLISTS ListName;
  /* 0x0010 */ unsigned __int64 Flink;
  /* 0x0018 */ unsigned __int64 Blink;
  /* 0x0020 */ unsigned __int64 Lock;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0028 */

typedef struct _MI_DECAY_TIMER_LINKAGE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Spare0 : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PreviousDecayPfn : 31; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare1 : 1; /* bit position: 32 */
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

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef enum _MI_SLAB_ALLOCATOR_TYPE
{
  MiSlabAllocatorTypeSlatProtected = 0,
  MiSlabAllocatorTypeUnprotected = 1,
  MiSlabAllocatorTypeMax = 2,
} MI_SLAB_ALLOCATOR_TYPE, *PMI_SLAB_ALLOCATOR_TYPE;

typedef enum _MI_SLAB_ALLOCATOR_PROTECTION
{
  MiSlabAllocatorProtectionReadExecute = 0,
  MiSlabAllocatorProtectionReadOnly = 1,
  MiSlabAllocatorProtectionNoAccess = 2,
  MiSlabAllocatorProtectionReadWrite = 3,
  MiSlabAllocatorProtectionMax = 4,
} MI_SLAB_ALLOCATOR_PROTECTION, *PMI_SLAB_ALLOCATOR_PROTECTION;

typedef struct _MI_SLAB_ALLOCATOR_CONTEXT
{
  /* 0x0000 */ struct _RTL_RB_TREE AllocationsTree;
  /* 0x0010 */ volatile long Lock;
  /* 0x0018 */ struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryHint;
  /* 0x0020 */ unsigned __int64 FreePageCount;
  /* 0x0028 */ unsigned __int64 SlabEntryCount;
  /* 0x0030 */ enum _MI_SLAB_ALLOCATOR_TYPE Type;
  /* 0x0034 */ enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0038 */ unsigned long EntryBecameEmpty : 1; /* bit position: 0 */
        /* 0x0038 */ unsigned long Spare : 31; /* bit position: 1 */
      }; /* bitfield */
      /* 0x0038 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0040 */ struct _MMPFNLIST StandbyList;
  /* 0x0068 */ unsigned __int64 LastReplenishTime;
  /* 0x0070 */ unsigned __int64 LastFailureTime;
} MI_SLAB_ALLOCATOR_CONTEXT, *PMI_SLAB_ALLOCATOR_CONTEXT; /* size: 0x0078 */

typedef struct _MI_PARTITION_PAGE_LISTS
{
  /* 0x0000 */ struct _MMPFNLIST* FreePagesByColor[2];
  /* 0x0080 */ struct _MMPFNLIST ZeroedPageListHead;
  /* 0x0100 */ struct _MMPFNLIST FreePageListHead;
  /* 0x0180 */ struct _MMPFNLIST StandbyPageListHead;
  /* 0x0200 */ struct _MMPFNLIST StandbyPageListByPriority[8];
  /* 0x0380 */ struct _MMPFNLIST ModifiedPageListNoReservation;
  /* 0x0400 */ struct _MMPFNLIST ModifiedPageListByReservation[16];
  /* 0x0680 */ struct _MMPFNLIST MappedPageListHead[16];
  /* 0x0900 */ struct _MMPFNLIST BadPageListHead;
  /* 0x0928 */ union _SLIST_HEADER* FreePageSlist[2];
  /* 0x0938 */ struct _MMPFNLIST* PageLocationList[8];
  /* 0x0978 */ volatile unsigned long StandbyRepurposedByPriority[8];
  /* 0x0a00 */ volatile unsigned __int64 TransitionSharedPages;
  /* 0x0a08 */ unsigned __int64 TransitionSharedPagesPeak[6];
  /* 0x0a38 */ struct _KEVENT MappedPageListHeadEvent[16];
  /* 0x0bb8 */ struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];
  /* 0x0bd8 */ unsigned long DecayHand;
  /* 0x0bdc */ unsigned char StandbyListDiscard;
  /* 0x0bdd */ unsigned char FreeListDiscard;
  /* 0x0bde */ unsigned char PfnBitMapsReady;
  /* 0x0be0 */ unsigned __int64 LastDecayHandUpdateTime;
  /* 0x0be8 */ struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;
  /* 0x0c80 */ unsigned __int64 AvailableEventsLock;
  /* 0x0c88 */ struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];
  /* 0x0ce8 */ void* MirrorListLocks;
  /* 0x0d00 */ volatile unsigned __int64 TransitionPrivatePages;
  /* 0x0d08 */ struct _RTL_BITMAP_EX LargePfnBitMap[2];
  /* 0x0d28 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;
  /* 0x0d30 */ unsigned char* MediumPagesOnFreeZeroList;
  /* 0x0d38 */ struct _RTL_BITMAP_EX LargePageRebuildCandidates;
  /* 0x0d48 */ wchar_t* LargePagesOnFreeZeroList;
  /* 0x0d50 */ volatile long HugePageRebuildCandidatesExist;
  /* 0x0d58 */ struct _KEVENT LargePageCandidatesExistEvent;
  /* 0x0d70 */ unsigned __int64 LowMemoryThreshold;
  /* 0x0d78 */ unsigned __int64 HighMemoryThreshold;
  /* 0x0d80 */ struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[4][2];
  /* 0x1140 */ struct _RTL_BITMAP_EX SlabPfnBitMap;
  /* 0x1150 */ void* HugePfnLists;
  /* 0x1158 */ unsigned __int64 AvailableHugeIoRanges;
  /* 0x1160 */ long __PADDING__[8];
} MI_PARTITION_PAGE_LISTS, *PMI_PARTITION_PAGE_LISTS; /* size: 0x1180 */

typedef struct _MI_PARTITION_COMMIT
{
  /* 0x0000 */ unsigned __int64 PeakCommitment;
  /* 0x0008 */ unsigned __int64 TotalCommitLimitMaximum;
  /* 0x0010 */ volatile long Popups[2];
  /* 0x0018 */ unsigned __int64 LowCommitThreshold;
  /* 0x0020 */ unsigned __int64 HighCommitThreshold;
  /* 0x0028 */ unsigned __int64 EventLock;
  /* 0x0030 */ unsigned __int64 SystemCommitReserve;
  /* 0x0038 */ unsigned __int64 OverCommit;
} MI_PARTITION_COMMIT, *PMI_PARTITION_COMMIT; /* size: 0x0040 */

typedef enum _MI_WRITE_TYPES
{
  WriteTypeCached = 0,
  WriteTypeNonTemporal = 1,
  WriteTypeMaximum = 2,
} MI_WRITE_TYPES, *PMI_WRITE_TYPES;

typedef struct _MI_WRITE_CALIBRATION
{
  /* 0x0000 */ unsigned long MaximumNumberProcessors;
  /* 0x0004 */ enum _MI_WRITE_TYPES OptimalWriteType;
  /* 0x0008 */ unsigned __int64 PerProcessorNumberOfBytes;
  /* 0x0010 */ unsigned long OptimalWriteProcessors[2];
  /* 0x0018 */ struct _MI_WRITE_MODES* RawTimeStamps;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0020 */

typedef struct _MI_PARTITION_ZEROING
{
  /* 0x0000 */ struct _KEVENT PageEvent;
  /* 0x0018 */ unsigned char ThreadPriorityStatic;
  /* 0x0019 */ unsigned char AdaptiveZeroingEnabled;
  /* 0x001c */ long ZeroFreePageSlistMinimum;
  /* 0x0020 */ struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;
  /* 0x0040 */ volatile long NodeCount;
  /* 0x0048 */ struct _KGATE LargeBootZeroingComplete;
  /* 0x0060 */ struct _MI_WRITE_CALIBRATION WriteCalibration;
  /* 0x0080 */ unsigned char IpiCalibrationFailed;
  /* 0x0084 */ volatile long ActiveProcessorsForIpiCalibration;
  /* 0x0088 */ volatile long NodesReadyForIpiCalibration;
  /* 0x0090 */ struct _KEVENT ReleaseNodeZeroingThreads;
  /* 0x00a8 */ struct _MI_ZERO_THREAD_CONTEXT* ThreadContext;
} MI_PARTITION_ZEROING, *PMI_PARTITION_ZEROING; /* size: 0x00b0 */

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
  /* 0x0024 */ long __PADDING__[1];
} MI_PAGE_COMBINE_STATISTICS, *PMI_PAGE_COMBINE_STATISTICS; /* size: 0x0028 */

typedef struct _MI_PAGE_COMBINING_SUPPORT
{
  /* 0x0000 */ struct _MI_PARTITION* Partition;
  /* 0x0008 */ struct _LIST_ENTRY ArbitraryPfnMapList;
  /* 0x0018 */ struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;
  /* 0x0040 */ unsigned long CombiningThreadCount;
  /* 0x0048 */ struct _LIST_ENTRY CombinePageFreeList;
  /* 0x0058 */ unsigned __int64 CombineFreeListLock;
  /* 0x0060 */ struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];
  /* 0x0160 */ unsigned __int64 CommonPageCombineDomain;
  /* 0x0168 */ struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;
} MI_PAGE_COMBINING_SUPPORT, *PMI_PAGE_COMBINING_SUPPORT; /* size: 0x0190 */

typedef struct _MMWORKING_SET_EXPANSION_HEAD
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
} MMWORKING_SET_EXPANSION_HEAD, *PMMWORKING_SET_EXPANSION_HEAD; /* size: 0x0010 */

typedef struct _MMSUPPORT_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned char Reserved0 : 3; /* bit position: 3 */
        /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
        /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
        /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
        /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short u1;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned char MemoryPriority;
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
      /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
      /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
      /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 4 */
      /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0003 */ unsigned char u2;
  }; /* size: 0x0001 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 TrimmedPageCount;
  /* 0x0010 */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ unsigned __int64 AgeDistribution[8];
  /* 0x0068 */ struct _KGATE* ExitOutswapGate;
  /* 0x0070 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0078 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0080 */ unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0088 */ unsigned __int64 WorkingSetSize;
  /* 0x0090 */ unsigned __int64 WorkingSetPrivateSize;
  /* 0x0098 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x00a0 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x00a8 */ unsigned long HardFaultCount;
  /* 0x00ac */ unsigned short LastTrimStamp;
  /* 0x00ae */ unsigned short PartitionId;
  /* 0x00b0 */ unsigned __int64 SelfmapLock;
  /* 0x00b8 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x00bc */ long __PADDING__[1];
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x00c0 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* NextPteToTrim;
  /* 0x0008 */ struct _MMPTE* NextPteToAge;
  /* 0x0010 */ struct _MMPTE* NextPteToAccessClear;
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 LockedEntries;
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0028 */

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
  /* 0x0004 */ unsigned short PartitionId;
  /* 0x0006 */ unsigned char Priority;
  /* 0x0007 */ unsigned char IrpPriority;
  /* 0x0008 */ unsigned char ReservationWrite;
  /* 0x0010 */ union _LARGE_INTEGER CurrentTime;
  /* 0x0018 */ unsigned __int64 AvailablePages;
  /* 0x0020 */ unsigned __int64 ModifiedPagesTotal;
  /* 0x0028 */ unsigned __int64 ModifiedPagefilePages;
  /* 0x0030 */ unsigned __int64 ModifiedNoWritePages;
  /* 0x0038 */ unsigned __int64 ModifiedPagefileNoReservationPages;
  struct
  {
    /* 0x0040 */ struct _MDL Mdl;
    /* 0x0070 */ unsigned __int64 Page[1];
  } /* size: 0x0038 */ MdlHack;
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0078 */

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
  /* 0x0200 */ struct _MMSUPPORT_INSTANCE PartitionWs[1];
  /* 0x02c0 */ struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];
  /* 0x02e8 */ volatile unsigned __int64 TotalCommittedPages;
  /* 0x0300 */ struct _MMPFNLIST ModifiedPageListHead;
  /* 0x0380 */ struct _MMPFNLIST ModifiedNoWritePageListHead;
  /* 0x03a8 */ unsigned __int64 TotalCommitLimit;
  /* 0x03b0 */ unsigned __int64 TotalPagesForPagingFile;
  /* 0x03b8 */ unsigned __int64 VadPhysicalPages;
  /* 0x03c0 */ unsigned __int64 ProcessLockedFilePages;
  /* 0x03c8 */ volatile unsigned __int64 SharedCommit;
  /* 0x03d0 */ unsigned __int64 SlabAllocatorPages;
  /* 0x03d8 */ unsigned long ChargeCommitmentFailures[4];
  /* 0x03e8 */ volatile long PageFileTraceIndex;
  /* 0x03f0 */ struct _MI_PAGEFILE_TRACES PageFileTraces[32];
  /* 0x12f0 */ long __PADDING__[4];
} MI_VISIBLE_PARTITION, *PMI_VISIBLE_PARTITION; /* size: 0x1300 */

typedef struct _MI_PARTITION
{
  /* 0x0000 */ struct _MI_PARTITION_CORE Core;
  /* 0x01b8 */ struct _MI_PARTITION_MODWRITES Modwriter;
  /* 0x0480 */ struct _MI_PARTITION_STORES Store;
  /* 0x0580 */ struct _MI_PARTITION_SEGMENTS Segments;
  /* 0x0900 */ struct _MI_PARTITION_PAGE_LISTS PageLists;
  /* 0x1a80 */ struct _MI_PARTITION_COMMIT Commit;
  /* 0x1ac0 */ struct _MI_PARTITION_ZEROING Zeroing;
  /* 0x1b70 */ struct _MI_PAGE_COMBINING_SUPPORT PageCombine;
  /* 0x1d00 */ void* WorkingSetControl;
  /* 0x1d08 */ struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;
  /* 0x1d18 */ unsigned long SessionDetachTimeStamp;
  /* 0x1d80 */ struct _MI_VISIBLE_PARTITION Vp;
} MI_PARTITION, *PMI_PARTITION; /* size: 0x3080 */

