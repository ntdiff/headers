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

typedef struct _MI_DEFERRED_PFNS_TO_FREE
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ unsigned __int64 NumberOfPages;
  /* 0x0018 */ unsigned long TbFlushStamp;
  /* 0x001c */ long __PADDING__[1];
} MI_DEFERRED_PFNS_TO_FREE, *PMI_DEFERRED_PFNS_TO_FREE; /* size: 0x0020 */

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
  /* 0x01b8 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViews[4];
  /* 0x0238 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViewsReady;
  /* 0x0258 */ struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCachePdesReady;
  /* 0x0278 */ struct _KEVENT CloneDereferenceEvent;
  /* 0x0290 */ union _SLIST_HEADER CloneProtosSListHead;
  /* 0x02a0 */ struct _EX_PUSH_LOCK SystemCacheInitLock;
  /* 0x02a8 */ unsigned long PagefileExtensionWaiters;
  /* 0x02ac */ unsigned long PagefileExtensionRequests;
  /* 0x02b0 */ struct _KEVENT PagefileExtensionWaitEvent;
  /* 0x02c8 */ struct _MI_CROSS_PARTITION_CHARGES SharedCharges[9];
  /* 0x03e8 */ struct _KEVENT* SharedChargesDrainEvent;
  /* 0x03f0 */ struct _KEVENT* ControlAreasDrainEvent;
  /* 0x03f8 */ struct _KEVENT* CloneHeaderDrainEvent;
  /* 0x0400 */ struct _EX_RUNDOWN_REF_CACHE_AWARE* ProbeRundownReference;
  /* 0x0408 */ long __PADDING__[30];
} MI_PARTITION_SEGMENTS, *PMI_PARTITION_SEGMENTS; /* size: 0x0480 */

