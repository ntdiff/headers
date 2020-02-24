typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _ETW_BUFFER_QUEUE
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* QueueTail;
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY QueueEntry;
} ETW_BUFFER_QUEUE, *PETW_BUFFER_QUEUE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long RefCnt : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0004 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _ETW_REF_CLOCK
{
  /* 0x0000 */ union _LARGE_INTEGER StartTime;
  /* 0x0008 */ union _LARGE_INTEGER StartPerfClock;
} ETW_REF_CLOCK, *PETW_REF_CLOCK; /* size: 0x0010 */

typedef enum _ETW_RT_EVENT_LOSS
{
  EtwRtEventNoLoss = 0,
  EtwRtEventLost = 1,
  EtwRtBufferLost = 2,
  EtwRtBackupLost = 3,
  EtwRtEventLossMax = 4,
} ETW_RT_EVENT_LOSS, *PETW_RT_EVENT_LOSS;

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
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0018 */ struct _KTHREAD* OwnerThread;
  union
  {
    /* 0x001c */ unsigned char MutantFlags;
    struct /* bitfield */
    {
      /* 0x001c */ unsigned char Abandoned : 1; /* bit position: 0 */
      /* 0x001c */ unsigned char Spare1 : 7; /* bit position: 1 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x001c */ unsigned char Abandoned2 : 1; /* bit position: 0 */
      /* 0x001c */ unsigned char AbEnabled : 1; /* bit position: 1 */
      /* 0x001c */ unsigned char Spare2 : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x001d */ unsigned char ApcDisable;
  /* 0x001e */ char __PADDING__[2];
} KMUTANT, *PKMUTANT; /* size: 0x0020 */

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

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _TOKEN_SOURCE
{
  /* 0x0000 */ char SourceName[8];
  /* 0x0008 */ struct _LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE; /* size: 0x0010 */

typedef struct _TOKEN_CONTROL
{
  /* 0x0000 */ struct _LUID TokenId;
  /* 0x0008 */ struct _LUID AuthenticationId;
  /* 0x0010 */ struct _LUID ModifiedId;
  /* 0x0018 */ struct _TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL; /* size: 0x0028 */

typedef struct _SECURITY_CLIENT_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;
  /* 0x000c */ void* ClientToken;
  /* 0x0010 */ unsigned char DirectlyAccessClientToken;
  /* 0x0011 */ unsigned char DirectAccessEffectiveOnly;
  /* 0x0012 */ unsigned char ServerIsRemote;
  /* 0x0014 */ struct _TOKEN_CONTROL ClientTokenControl;
} SECURITY_CLIENT_CONTEXT, *PSECURITY_CLIENT_CONTEXT; /* size: 0x003c */

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

typedef struct _ETW_STACK_TRACE_BLOCK
{
  /* 0x0000 */ union _LARGE_INTEGER RelatedTimestamp;
  /* 0x0008 */ struct _ETHREAD* Thread;
  /* 0x000c */ struct _KDPC StackWalkDpc;
  /* 0x0030 */ union _SLIST_HEADER ApcListHead;
  /* 0x0038 */ struct _ETW_APC_ENTRY* ApcEntry;
  /* 0x003c */ unsigned long ApcEntryCount;
  /* 0x0040 */ long Flags;
  /* 0x0044 */ long ApcCount;
  /* 0x0048 */ long MaxApcCount;
  /* 0x004c */ long __PADDING__[1];
} ETW_STACK_TRACE_BLOCK, *PETW_STACK_TRACE_BLOCK; /* size: 0x0050 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _DISALLOWED_GUIDS
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0004 */ struct _GUID* Guids;
} DISALLOWED_GUIDS, *PDISALLOWED_GUIDS; /* size: 0x0008 */

typedef struct _PERIODIC_CAPTURE_STATE_GUIDS
{
  /* 0x0000 */ unsigned short ProviderCount;
  /* 0x0004 */ struct _GUID* Providers;
} PERIODIC_CAPTURE_STATE_GUIDS, *PPERIODIC_CAPTURE_STATE_GUIDS; /* size: 0x0008 */

typedef enum _ETW_PERIODIC_TIMER_STATE
{
  EtwpPeriodicTimerUnset = 0,
  EtwpPeriodicTimerSet = 1,
} ETW_PERIODIC_TIMER_STATE, *PETW_PERIODIC_TIMER_STATE;

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

enum ETW_COMPRESSION_RESUMPTION_MODE
{
  EtwCompressionModeRestart = 0,
  EtwCompressionModeNoDisable = 1,
  EtwCompressionModeNoRestart = 2,
};

typedef struct _ETW_PARTITION_CONTEXT
{
  /* 0x0000 */ struct _EPARTITION* Partition;
} ETW_PARTITION_CONTEXT, *PETW_PARTITION_CONTEXT; /* size: 0x0004 */

typedef struct _WMI_LOGGER_CONTEXT
{
  /* 0x0000 */ unsigned long LoggerId;
  /* 0x0004 */ unsigned long BufferSize;
  /* 0x0008 */ unsigned long MaximumEventSize;
  /* 0x000c */ unsigned long LoggerMode;
  /* 0x0010 */ long AcceptNewEvents;
  /* 0x0014 */ unsigned long EventMarker[1];
  /* 0x0018 */ unsigned long ErrorMarker;
  /* 0x001c */ unsigned long SizeMask;
  /* 0x0020 */ unsigned long GetCpuClock;
  /* 0x0024 */ struct _ETHREAD* LoggerThread;
  /* 0x0028 */ long LoggerStatus;
  /* 0x002c */ unsigned long FailureReason;
  /* 0x0030 */ struct _ETW_BUFFER_QUEUE BufferQueue;
  /* 0x0038 */ struct _ETW_BUFFER_QUEUE OverflowQueue;
  /* 0x0040 */ struct _LIST_ENTRY GlobalList;
  /* 0x0048 */ struct _LIST_ENTRY DebugIdTrackingList;
  /* 0x0050 */ struct _ETW_DECODE_CONTROL_ENTRY* DecodeControlList;
  /* 0x0054 */ unsigned long DecodeControlCount;
  union
  {
    /* 0x0058 */ struct _WMI_BUFFER_HEADER* BatchedBufferList;
    /* 0x0058 */ struct _EX_FAST_REF CurrentBuffer;
  }; /* size: 0x0004 */
  /* 0x005c */ struct _UNICODE_STRING LoggerName;
  /* 0x0064 */ struct _UNICODE_STRING LogFileName;
  /* 0x006c */ struct _UNICODE_STRING LogFilePattern;
  /* 0x0074 */ struct _UNICODE_STRING NewLogFileName;
  /* 0x007c */ unsigned long ClockType;
  /* 0x0080 */ unsigned long LastFlushedBuffer;
  /* 0x0084 */ unsigned long FlushTimer;
  /* 0x0088 */ unsigned long FlushThreshold;
  /* 0x0090 */ union _LARGE_INTEGER ByteOffset;
  /* 0x0098 */ unsigned long MinimumBuffers;
  /* 0x009c */ volatile long BuffersAvailable;
  /* 0x00a0 */ volatile long NumberOfBuffers;
  /* 0x00a4 */ unsigned long MaximumBuffers;
  /* 0x00a8 */ volatile unsigned long EventsLost;
  /* 0x00ac */ volatile long PeakBuffersCount;
  /* 0x00b0 */ unsigned long BuffersWritten;
  /* 0x00b4 */ unsigned long LogBuffersLost;
  /* 0x00b8 */ unsigned long RealTimeBuffersDelivered;
  /* 0x00bc */ unsigned long RealTimeBuffersLost;
  /* 0x00c0 */ long* SequencePtr;
  /* 0x00c4 */ unsigned long LocalSequence;
  /* 0x00c8 */ struct _GUID InstanceGuid;
  /* 0x00d8 */ unsigned long MaximumFileSize;
  /* 0x00dc */ long FileCounter;
  /* 0x00e0 */ enum _POOL_TYPE PoolType;
  /* 0x00e8 */ struct _ETW_REF_CLOCK ReferenceTime;
  /* 0x00f8 */ long CollectionOn;
  /* 0x00fc */ unsigned long ProviderInfoSize;
  /* 0x0100 */ struct _LIST_ENTRY Consumers;
  /* 0x0108 */ unsigned long NumConsumers;
  /* 0x010c */ struct _ETW_REALTIME_CONSUMER* TransitionConsumer;
  /* 0x0110 */ void* RealtimeLogfileHandle;
  /* 0x0114 */ struct _UNICODE_STRING RealtimeLogfileName;
  /* 0x0120 */ union _LARGE_INTEGER RealtimeWriteOffset;
  /* 0x0128 */ union _LARGE_INTEGER RealtimeReadOffset;
  /* 0x0130 */ union _LARGE_INTEGER RealtimeLogfileSize;
  /* 0x0138 */ unsigned __int64 RealtimeLogfileUsage;
  /* 0x0140 */ unsigned __int64 RealtimeMaximumFileSize;
  /* 0x0148 */ unsigned long RealtimeBuffersSaved;
  /* 0x0150 */ struct _ETW_REF_CLOCK RealtimeReferenceTime;
  /* 0x0160 */ enum _ETW_RT_EVENT_LOSS NewRTEventsLost;
  /* 0x0164 */ struct _KEVENT LoggerEvent;
  /* 0x0174 */ struct _KEVENT FlushEvent;
  /* 0x0188 */ struct _KTIMER FlushTimeOutTimer;
  /* 0x01b0 */ struct _KDPC LoggerDpc;
  /* 0x01d0 */ struct _KMUTANT LoggerMutex;
  /* 0x01f0 */ struct _EX_PUSH_LOCK LoggerLock;
  union
  {
    /* 0x01f4 */ unsigned long BufferListSpinLock;
    /* 0x01f4 */ struct _EX_PUSH_LOCK BufferListPushLock;
  }; /* size: 0x0004 */
  /* 0x01f8 */ struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;
  /* 0x0234 */ struct _TOKEN_ACCESS_INFORMATION* TokenAccessInformation;
  /* 0x0238 */ struct _EX_FAST_REF SecurityDescriptor;
  /* 0x0240 */ union _LARGE_INTEGER StartTime;
  /* 0x0248 */ void* LogFileHandle;
  /* 0x0250 */ __int64 BufferSequenceNumber;
  union
  {
    /* 0x0258 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0258 */ unsigned long Persistent : 1; /* bit position: 0 */
      /* 0x0258 */ unsigned long AutoLogger : 1; /* bit position: 1 */
      /* 0x0258 */ unsigned long FsReady : 1; /* bit position: 2 */
      /* 0x0258 */ unsigned long RealTime : 1; /* bit position: 3 */
      /* 0x0258 */ unsigned long Wow : 1; /* bit position: 4 */
      /* 0x0258 */ unsigned long KernelTrace : 1; /* bit position: 5 */
      /* 0x0258 */ unsigned long NoMoreEnable : 1; /* bit position: 6 */
      /* 0x0258 */ unsigned long StackTracing : 1; /* bit position: 7 */
      /* 0x0258 */ unsigned long ErrorLogged : 1; /* bit position: 8 */
      /* 0x0258 */ unsigned long RealtimeLoggerContextFreed : 1; /* bit position: 9 */
      /* 0x0258 */ unsigned long PebsTracing : 1; /* bit position: 10 */
      /* 0x0258 */ unsigned long PmcCounters : 1; /* bit position: 11 */
      /* 0x0258 */ unsigned long PageAlignBuffers : 1; /* bit position: 12 */
      /* 0x0258 */ unsigned long StackLookasideListAllocated : 1; /* bit position: 13 */
      /* 0x0258 */ unsigned long SecurityTrace : 1; /* bit position: 14 */
      /* 0x0258 */ unsigned long LastBranchTracing : 1; /* bit position: 15 */
      /* 0x0258 */ unsigned long SystemLoggerIndex : 8; /* bit position: 16 */
      /* 0x0258 */ unsigned long StackCaching : 1; /* bit position: 24 */
      /* 0x0258 */ unsigned long ProviderTracking : 1; /* bit position: 25 */
      /* 0x0258 */ unsigned long ProcessorTrace : 1; /* bit position: 26 */
      /* 0x0258 */ unsigned long QpcDeltaTracking : 1; /* bit position: 27 */
      /* 0x0258 */ unsigned long MarkerBufferSaved : 1; /* bit position: 28 */
      /* 0x0258 */ unsigned long LargeMdlPages : 1; /* bit position: 29 */
      /* 0x0258 */ unsigned long ExcludeKernelStack : 1; /* bit position: 30 */
      /* 0x0258 */ unsigned long BootLogger : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x025c */ volatile unsigned long RequestFlag;
    struct /* bitfield */
    {
      /* 0x025c */ unsigned long DbgRequestNewFile : 1; /* bit position: 0 */
      /* 0x025c */ unsigned long DbgRequestUpdateFile : 1; /* bit position: 1 */
      /* 0x025c */ unsigned long DbgRequestFlush : 1; /* bit position: 2 */
      /* 0x025c */ unsigned long DbgRequestDisableRealtime : 1; /* bit position: 3 */
      /* 0x025c */ unsigned long DbgRequestDisconnectConsumer : 1; /* bit position: 4 */
      /* 0x025c */ unsigned long DbgRequestConnectConsumer : 1; /* bit position: 5 */
      /* 0x025c */ unsigned long DbgRequestNotifyConsumer : 1; /* bit position: 6 */
      /* 0x025c */ unsigned long DbgRequestUpdateHeader : 1; /* bit position: 7 */
      /* 0x025c */ unsigned long DbgRequestDeferredFlush : 1; /* bit position: 8 */
      /* 0x025c */ unsigned long DbgRequestDeferredFlushTimer : 1; /* bit position: 9 */
      /* 0x025c */ unsigned long DbgRequestFlushTimer : 1; /* bit position: 10 */
      /* 0x025c */ unsigned long DbgRequestUpdateDebugger : 1; /* bit position: 11 */
      /* 0x025c */ unsigned long DbgSpareRequestFlags : 20; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0260 */ struct _ETW_STACK_TRACE_BLOCK StackTraceBlock;
  /* 0x02b0 */ struct _RTL_BITMAP HookIdMap;
  /* 0x02b8 */ struct _ETW_STACK_CACHE* StackCache;
  /* 0x02bc */ struct _ETW_PMC_SUPPORT* PmcData;
  /* 0x02c0 */ struct _ETW_LBR_SUPPORT* LbrData;
  /* 0x02c4 */ struct _ETW_IPT_SUPPORT* IptData;
  /* 0x02c8 */ struct _LIST_ENTRY BinaryTrackingList;
  /* 0x02d0 */ struct _WMI_BUFFER_HEADER** ScratchArray;
  /* 0x02d4 */ struct _DISALLOWED_GUIDS DisallowedGuids;
  /* 0x02e0 */ __int64 RelativeTimerDueTime;
  /* 0x02e8 */ struct _PERIODIC_CAPTURE_STATE_GUIDS PeriodicCaptureStateGuids;
  /* 0x02f0 */ struct _EX_TIMER* PeriodicCaptureStateTimer;
  /* 0x02f4 */ enum _ETW_PERIODIC_TIMER_STATE PeriodicCaptureStateTimerState;
  /* 0x02f8 */ struct _ETW_SOFT_RESTART_CONTEXT* SoftRestartContext;
  /* 0x02fc */ struct _ETW_SILODRIVERSTATE* SiloState;
  /* 0x0300 */ struct _WORK_QUEUE_ITEM CompressionWorkItem;
  /* 0x0310 */ long CompressionWorkItemState;
  /* 0x0314 */ struct _EX_PUSH_LOCK CompressionLock;
  /* 0x0318 */ struct _WMI_BUFFER_HEADER* CompressionTarget;
  /* 0x031c */ void* CompressionWorkspace;
  /* 0x0320 */ long CompressionOn;
  /* 0x0324 */ unsigned long CompressionRatioGuess;
  /* 0x0328 */ unsigned long PartialBufferCompressionLevel;
  /* 0x032c */ enum ETW_COMPRESSION_RESUMPTION_MODE CompressionResumptionMode;
  /* 0x0330 */ struct _SINGLE_LIST_ENTRY PlaceholderList;
  /* 0x0334 */ struct _KDPC CompressionDpc;
  /* 0x0358 */ union _LARGE_INTEGER LastBufferSwitchTime;
  /* 0x0360 */ union _LARGE_INTEGER BufferWriteDuration;
  /* 0x0368 */ union _LARGE_INTEGER BufferCompressDuration;
  /* 0x0370 */ __int64 ReferenceQpcDelta;
  /* 0x0378 */ struct _ETW_EVENT_CALLBACK_CONTEXT* CallbackContext;
  /* 0x037c */ union _LARGE_INTEGER* LastDroppedTime;
  /* 0x0380 */ union _LARGE_INTEGER* FlushingLastDroppedTime;
  /* 0x0388 */ __int64 FlushingSequenceNumber;
  /* 0x0390 */ struct _ETW_PARTITION_CONTEXT PartitionContext;
  /* 0x0394 */ struct _MDL* BufferMdl;
} WMI_LOGGER_CONTEXT, *PWMI_LOGGER_CONTEXT; /* size: 0x0398 */

