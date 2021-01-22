typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
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
  /* 0x0004 */ struct _LIST_ENTRY DereferenceList;
  /* 0x000c */ struct _MI_PARTITION* Partition;
  /* 0x0010 */ unsigned long RequestedExpansionSize;
  /* 0x0014 */ unsigned long ActualExpansion;
  /* 0x0018 */ struct _KEVENT Event;
  /* 0x0028 */ volatile long InProgress;
  union
  {
    union
    {
      /* 0x002c */ unsigned long LongFlags;
      /* 0x002c */ struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0030 */ void** volatile ActiveEntry;
} MMPAGE_FILE_EXPANSION, *PMMPAGE_FILE_EXPANSION; /* size: 0x0034 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

typedef struct _MMDEREFERENCE_SEGMENT_HEADER
{
  /* 0x0000 */ struct _KSEMAPHORE Semaphore;
  /* 0x0014 */ struct _LIST_ENTRY ControlAreaDeleteListHead;
  /* 0x001c */ struct _LIST_ENTRY UnusedSegmentDeleteListHead;
  /* 0x0024 */ struct _LIST_ENTRY PagefileExtensionListHead;
} MMDEREFERENCE_SEGMENT_HEADER, *PMMDEREFERENCE_SEGMENT_HEADER; /* size: 0x002c */

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
  /* 0x0010 */ union _ULARGE_INTEGER DueTime;
  /* 0x0018 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0020 */ struct _KDPC* Dpc;
  /* 0x0024 */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MI_DEFERRED_PFNS_TO_FREE
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long NumberOfPages;
  /* 0x000c */ unsigned long TbFlushStamp;
} MI_DEFERRED_PFNS_TO_FREE, *PMI_DEFERRED_PFNS_TO_FREE; /* size: 0x0010 */

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

typedef struct _MI_CROSS_PARTITION_CHARGES
{
  /* 0x0000 */ unsigned long CurrentCharges;
  /* 0x0004 */ unsigned long ChargeFailures;
  /* 0x0008 */ unsigned long ChargePeak;
  /* 0x000c */ unsigned long MaximumAllowed;
} MI_CROSS_PARTITION_CHARGES, *PMI_CROSS_PARTITION_CHARGES; /* size: 0x0010 */

typedef struct _MI_PARTITION_SEGMENTS
{
  /* 0x0000 */ volatile long SegmentListLock;
  /* 0x0004 */ unsigned long DeleteOnCloseCount;
  /* 0x0008 */ volatile __int64 FsControlAreaCount;
  /* 0x0010 */ volatile __int64 PfControlAreaCount;
  /* 0x0018 */ volatile __int64 CloneHeaderCount;
  /* 0x0020 */ struct _KEVENT DeleteSubsectionCleanup;
  /* 0x0030 */ struct _KEVENT UnusedSegmentCleanup;
  /* 0x0040 */ unsigned long SubsectionDeletePtes;
  /* 0x0044 */ struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;
  /* 0x0078 */ struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;
  /* 0x00a4 */ struct _LIST_ENTRY DeleteOnCloseList;
  /* 0x00b0 */ struct _KTIMER DeleteOnCloseTimer;
  /* 0x00d8 */ unsigned char DeleteOnCloseTimerActive;
  /* 0x00d9 */ unsigned char SegmentDereferenceThreadExists;
  /* 0x00dc */ void* SegmentDereferenceActiveControlArea;
  /* 0x00e0 */ unsigned long UnusedSegmentPagedPool;
  /* 0x00e4 */ struct _LIST_ENTRY UnusedSegmentList;
  /* 0x00ec */ struct _LIST_ENTRY UnusedSubsectionList;
  /* 0x00f4 */ struct _LIST_ENTRY DeleteSubsectionList;
  /* 0x00fc */ struct _KEVENT ControlAreaDeleteEvent;
  /* 0x010c */ struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;
  /* 0x0110 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViews[4];
  /* 0x0150 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViewsReady;
  /* 0x0160 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCachePdesReady;
  /* 0x0170 */ struct _KEVENT CloneDereferenceEvent;
  /* 0x0180 */ union _SLIST_HEADER CloneProtosSListHead;
  /* 0x0188 */ struct _EX_PUSH_LOCK SystemCacheInitLock;
  /* 0x018c */ unsigned long PagefileExtensionWaiters;
  /* 0x0190 */ unsigned long PagefileExtensionRequests;
  /* 0x0194 */ struct _KEVENT PagefileExtensionWaitEvent;
  /* 0x01a4 */ struct _MI_CROSS_PARTITION_CHARGES SharedCharges[9];
  /* 0x0234 */ struct _KEVENT* SharedChargesDrainEvent;
  /* 0x0238 */ struct _KEVENT* ControlAreasDrainEvent;
  /* 0x023c */ struct _KEVENT* CloneHeaderDrainEvent;
  /* 0x0240 */ struct _EX_RUNDOWN_REF_CACHE_AWARE* ProbeRundownReference;
  /* 0x0244 */ long __PADDING__[15];
} MI_PARTITION_SEGMENTS, *PMI_PARTITION_SEGMENTS; /* size: 0x0280 */

