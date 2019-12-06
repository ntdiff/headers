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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

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

typedef struct _LOGGED_STREAM_CALLBACK_V1
{
  /* 0x0000 */ void* LogHandle;
  /* 0x0008 */ void* FlushToLsnRoutine /* function */;
} LOGGED_STREAM_CALLBACK_V1, *PLOGGED_STREAM_CALLBACK_V1; /* size: 0x0010 */

typedef struct _LOGGED_STREAM_CALLBACK_V2
{
  /* 0x0000 */ struct _LOG_HANDLE_CONTEXT* LogHandleContext;
} LOGGED_STREAM_CALLBACK_V2, *PLOGGED_STREAM_CALLBACK_V2; /* size: 0x0008 */

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

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ long Count;
  /* 0x0008 */ void* Owner;
  /* 0x0010 */ unsigned long Contention;
  /* 0x0018 */ struct _KEVENT Event;
  /* 0x0030 */ unsigned long OldIrql;
  /* 0x0034 */ long __PADDING__[1];
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0038 */

typedef struct _PRIVATE_CACHE_MAP_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long DontUse : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadAheadActive : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long ReadAheadEnabled : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long PagePriority : 3; /* bit position: 18 */
    /* 0x0000 */ unsigned long PipelineReadAheads : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long Available : 10; /* bit position: 22 */
  }; /* bitfield */
} PRIVATE_CACHE_MAP_FLAGS, *PPRIVATE_CACHE_MAP_FLAGS; /* size: 0x0004 */

typedef struct _PRIVATE_CACHE_MAP
{
  union
  {
    /* 0x0000 */ short NodeTypeCode;
    /* 0x0000 */ struct _PRIVATE_CACHE_MAP_FLAGS Flags;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long ReadAheadMask;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x0010 */ union _LARGE_INTEGER FileOffset1;
  /* 0x0018 */ union _LARGE_INTEGER BeyondLastByte1;
  /* 0x0020 */ union _LARGE_INTEGER FileOffset2;
  /* 0x0028 */ union _LARGE_INTEGER BeyondLastByte2;
  /* 0x0030 */ unsigned long SequentialReadCount;
  /* 0x0034 */ unsigned long ReadAheadLength;
  /* 0x0038 */ union _LARGE_INTEGER ReadAheadOffset;
  /* 0x0040 */ union _LARGE_INTEGER ReadAheadBeyondLastByte;
  /* 0x0048 */ unsigned __int64 PrevReadAheadBeyondLastByte;
  /* 0x0050 */ unsigned __int64 ReadAheadSpinLock;
  /* 0x0058 */ unsigned long PipelinedReadAheadRequestSize;
  /* 0x005c */ unsigned long ReadAheadGrowth;
  /* 0x0060 */ struct _LIST_ENTRY PrivateLinks;
  /* 0x0070 */ void* ReadAheadWorkItem;
} PRIVATE_CACHE_MAP, *PPRIVATE_CACHE_MAP; /* size: 0x0078 */

typedef struct _SHARED_CACHE_MAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0004 */ unsigned long OpenCount;
  /* 0x0008 */ union _LARGE_INTEGER FileSize;
  /* 0x0010 */ struct _LIST_ENTRY BcbList;
  /* 0x0020 */ union _LARGE_INTEGER SectionSize;
  /* 0x0028 */ union _LARGE_INTEGER ValidDataLength;
  /* 0x0030 */ union _LARGE_INTEGER ValidDataGoal;
  /* 0x0038 */ struct _VACB* InitialVacbs[4];
  /* 0x0058 */ struct _VACB** Vacbs;
  /* 0x0060 */ struct _EX_FAST_REF FileObjectFastRef;
  /* 0x0068 */ struct _EX_PUSH_LOCK VacbLock;
  /* 0x0070 */ unsigned long DirtyPages;
  /* 0x0078 */ struct _LIST_ENTRY LoggedStreamLinks;
  /* 0x0088 */ struct _LIST_ENTRY SharedCacheMapLinks;
  /* 0x0098 */ unsigned long Flags;
  /* 0x009c */ long Status;
  /* 0x00a0 */ struct _MBCB* Mbcb;
  /* 0x00a8 */ void* Section;
  /* 0x00b0 */ struct _KEVENT* CreateEvent;
  /* 0x00b8 */ struct _KEVENT* WaitOnActiveCount;
  /* 0x00c0 */ unsigned long PagesToWrite;
  /* 0x00c8 */ __int64 BeyondLastFlush;
  /* 0x00d0 */ struct _CACHE_MANAGER_CALLBACKS* Callbacks;
  /* 0x00d8 */ void* LazyWriteContext;
  /* 0x00e0 */ struct _LIST_ENTRY PrivateList;
  union
  {
    /* 0x00f0 */ struct _LOGGED_STREAM_CALLBACK_V1 V1;
    /* 0x00f0 */ struct _LOGGED_STREAM_CALLBACK_V2 V2;
  }; /* size: 0x0010 */
  /* 0x0100 */ union _LARGE_INTEGER LargestLSN;
  /* 0x0108 */ unsigned long DirtyPageThreshold;
  /* 0x010c */ unsigned long LazyWritePassCount;
  /* 0x0110 */ struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;
  /* 0x0118 */ struct _FAST_MUTEX BcbLock;
  /* 0x0150 */ union _LARGE_INTEGER LastUnmapBehindOffset;
  /* 0x0158 */ struct _KEVENT Event;
  /* 0x0170 */ union _LARGE_INTEGER HighWaterMappingOffset;
  /* 0x0178 */ struct _PRIVATE_CACHE_MAP PrivateCacheMap;
  /* 0x01f0 */ void* WriteBehindWorkQueueEntry;
  /* 0x01f8 */ struct _VOLUME_CACHE_MAP* VolumeCacheMap;
  /* 0x0200 */ unsigned long ProcImagePathHash;
  /* 0x0204 */ unsigned long WritesInProgress;
  /* 0x0208 */ unsigned long AsyncReadRequestCount;
  /* 0x0210 */ struct _CC_PARTITION* Partition;
  /* 0x0218 */ unsigned long InternalRefCount;
  /* 0x021c */ unsigned long NumMappedVacb;
  /* 0x0220 */ unsigned long NumActiveVacb;
  /* 0x0224 */ long __PADDING__[1];
} SHARED_CACHE_MAP, *PSHARED_CACHE_MAP; /* size: 0x0228 */

