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
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

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

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
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
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
              union
              {
                /* 0x0003 */ unsigned char TimerMiscFlags;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
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
  /* 0x0038 */ unsigned long Processor;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

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
  /* 0x0010 */ void* ClientToken;
  /* 0x0018 */ unsigned char DirectlyAccessClientToken;
  /* 0x0019 */ unsigned char DirectAccessEffectiveOnly;
  /* 0x001a */ unsigned char ServerIsRemote;
  /* 0x001c */ struct _TOKEN_CONTROL ClientTokenControl;
  /* 0x0044 */ long __PADDING__[1];
} SECURITY_CLIENT_CONTEXT, *PSECURITY_CLIENT_CONTEXT; /* size: 0x0048 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _WMI_LOGGER_CONTEXT
{
  /* 0x0000 */ unsigned long LoggerId;
  /* 0x0004 */ unsigned long BufferSize;
  /* 0x0008 */ unsigned long MaximumEventSize;
  /* 0x000c */ long CollectionOn;
  /* 0x0010 */ unsigned long LoggerMode;
  /* 0x0014 */ long AcceptNewEvents;
  /* 0x0018 */ void* GetCpuClock /* function */;
  /* 0x0020 */ union _LARGE_INTEGER StartTime;
  /* 0x0028 */ void* LogFileHandle;
  /* 0x0030 */ struct _ETHREAD* LoggerThread;
  /* 0x0038 */ long LoggerStatus;
  /* 0x0040 */ void* NBQHead;
  /* 0x0048 */ void* OverflowNBQHead;
  /* 0x0050 */ union _SLIST_HEADER QueueBlockFreeList;
  /* 0x0060 */ struct _LIST_ENTRY GlobalList;
  union
  {
    /* 0x0070 */ struct _WMI_BUFFER_HEADER* BatchedBufferList;
    /* 0x0070 */ struct _EX_FAST_REF CurrentBuffer;
  }; /* size: 0x0008 */
  /* 0x0078 */ struct _UNICODE_STRING LoggerName;
  /* 0x0088 */ struct _UNICODE_STRING LogFileName;
  /* 0x0098 */ struct _UNICODE_STRING LogFilePattern;
  /* 0x00a8 */ struct _UNICODE_STRING NewLogFileName;
  /* 0x00b8 */ unsigned long ClockType;
  /* 0x00bc */ unsigned long MaximumFileSize;
  /* 0x00c0 */ unsigned long LastFlushedBuffer;
  /* 0x00c4 */ unsigned long FlushTimer;
  /* 0x00c8 */ unsigned long FlushThreshold;
  /* 0x00d0 */ union _LARGE_INTEGER ByteOffset;
  /* 0x00d8 */ unsigned long MinimumBuffers;
  /* 0x00dc */ volatile long BuffersAvailable;
  /* 0x00e0 */ volatile long NumberOfBuffers;
  /* 0x00e4 */ unsigned long MaximumBuffers;
  /* 0x00e8 */ volatile unsigned long EventsLost;
  /* 0x00ec */ unsigned long BuffersWritten;
  /* 0x00f0 */ unsigned long LogBuffersLost;
  /* 0x00f4 */ unsigned long RealTimeBuffersDelivered;
  /* 0x00f8 */ unsigned long RealTimeBuffersLost;
  /* 0x0100 */ long* SequencePtr;
  /* 0x0108 */ unsigned long LocalSequence;
  /* 0x010c */ struct _GUID InstanceGuid;
  /* 0x011c */ long FileCounter;
  /* 0x0120 */ void* volatile BufferCallback /* function */;
  /* 0x0128 */ enum _POOL_TYPE PoolType;
  /* 0x0130 */ struct _ETW_REF_CLOCK ReferenceTime;
  /* 0x0140 */ struct _LIST_ENTRY Consumers;
  /* 0x0150 */ unsigned long NumConsumers;
  /* 0x0158 */ struct _ETW_REALTIME_CONSUMER* TransitionConsumer;
  /* 0x0160 */ void* RealtimeLogfileHandle;
  /* 0x0168 */ struct _UNICODE_STRING RealtimeLogfileName;
  /* 0x0178 */ union _LARGE_INTEGER RealtimeWriteOffset;
  /* 0x0180 */ union _LARGE_INTEGER RealtimeReadOffset;
  /* 0x0188 */ union _LARGE_INTEGER RealtimeLogfileSize;
  /* 0x0190 */ unsigned __int64 RealtimeLogfileUsage;
  /* 0x0198 */ unsigned __int64 RealtimeMaximumFileSize;
  /* 0x01a0 */ unsigned long RealtimeBuffersSaved;
  /* 0x01a8 */ struct _ETW_REF_CLOCK RealtimeReferenceTime;
  /* 0x01b8 */ enum _ETW_RT_EVENT_LOSS NewRTEventsLost;
  /* 0x01c0 */ struct _KEVENT LoggerEvent;
  /* 0x01d8 */ struct _KEVENT FlushEvent;
  /* 0x01f0 */ struct _KTIMER FlushTimeOutTimer;
  /* 0x0230 */ struct _KDPC FlushDpc;
  /* 0x0270 */ struct _KMUTANT LoggerMutex;
  /* 0x02a8 */ struct _EX_PUSH_LOCK LoggerLock;
  union
  {
    /* 0x02b0 */ unsigned __int64 BufferListSpinLock;
    /* 0x02b0 */ struct _EX_PUSH_LOCK BufferListPushLock;
  }; /* size: 0x0008 */
  /* 0x02b8 */ struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;
  /* 0x0300 */ struct _EX_FAST_REF SecurityDescriptor;
  /* 0x0308 */ __int64 BufferSequenceNumber;
  union
  {
    /* 0x0310 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0310 */ unsigned long Persistent : 1; /* bit position: 0 */
      /* 0x0310 */ unsigned long AutoLogger : 1; /* bit position: 1 */
      /* 0x0310 */ unsigned long FsReady : 1; /* bit position: 2 */
      /* 0x0310 */ unsigned long RealTime : 1; /* bit position: 3 */
      /* 0x0310 */ unsigned long Wow : 1; /* bit position: 4 */
      /* 0x0310 */ unsigned long KernelTrace : 1; /* bit position: 5 */
      /* 0x0310 */ unsigned long NoMoreEnable : 1; /* bit position: 6 */
      /* 0x0310 */ unsigned long StackTracing : 1; /* bit position: 7 */
      /* 0x0310 */ unsigned long ErrorLogged : 1; /* bit position: 8 */
      /* 0x0310 */ unsigned long RealtimeLoggerContextFreed : 1; /* bit position: 9 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0314 */ unsigned long RequestFlag;
    struct /* bitfield */
    {
      /* 0x0314 */ unsigned long RequestNewFie : 1; /* bit position: 0 */
      /* 0x0314 */ unsigned long RequestUpdateFile : 1; /* bit position: 1 */
      /* 0x0314 */ unsigned long RequestFlush : 1; /* bit position: 2 */
      /* 0x0314 */ unsigned long RequestDisableRealtime : 1; /* bit position: 3 */
      /* 0x0314 */ unsigned long RequestDisconnectConsumer : 1; /* bit position: 4 */
      /* 0x0314 */ unsigned long RequestConnectConsumer : 1; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0318 */ struct _RTL_BITMAP HookIdMap;
  /* 0x0328 */ long __PADDING__[2];
} WMI_LOGGER_CONTEXT, *PWMI_LOGGER_CONTEXT; /* size: 0x0330 */

