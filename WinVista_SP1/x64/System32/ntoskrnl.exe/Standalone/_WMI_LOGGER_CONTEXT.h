typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
    struct // _TAG_UNNAMED_26
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
    struct // _TAG_UNNAMED_27
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
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
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

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

typedef struct _WNODE_HEADER
{
  /* 0x0000 */ unsigned long BufferSize;
  /* 0x0004 */ unsigned long ProviderId;
  union
  {
    /* 0x0008 */ unsigned __int64 HistoricalContext;
    struct
    {
      /* 0x0008 */ unsigned long Version;
      /* 0x000c */ unsigned long Linkage;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0010 */ unsigned long CountLost;
    /* 0x0010 */ void* KernelHandle;
    /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
  }; /* size: 0x0008 */
  /* 0x0018 */ struct _GUID Guid;
  /* 0x0028 */ unsigned long ClientContext;
  /* 0x002c */ unsigned long Flags;
} WNODE_HEADER, *PWNODE_HEADER; /* size: 0x0030 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _ETW_BUFFER_CONTEXT
{
  /* 0x0000 */ unsigned char ProcessorNumber;
  /* 0x0001 */ unsigned char Alignment;
  /* 0x0002 */ unsigned short LoggerId;
} ETW_BUFFER_CONTEXT, *PETW_BUFFER_CONTEXT; /* size: 0x0004 */

typedef enum _ETW_BUFFER_STATE
{
  EtwBufferStateFree = 0,
  EtwBufferStateGeneralLogging = 1,
  EtwBufferStateCSwitch = 2,
  EtwBufferStateFlush = 3,
  EtwBufferStateMaximum = 4,
} ETW_BUFFER_STATE, *PETW_BUFFER_STATE;

typedef struct _WMI_BUFFER_HEADER
{
  union
  {
    /* 0x0000 */ struct _WNODE_HEADER Wnode;
    struct
    {
      /* 0x0000 */ unsigned long BufferSize;
      /* 0x0004 */ unsigned long SavedOffset;
      /* 0x0008 */ volatile unsigned long CurrentOffset;
      /* 0x000c */ volatile long ReferenceCount;
      union
      {
        /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
        /* 0x0010 */ union _LARGE_INTEGER StartPerfClock;
      }; /* size: 0x0008 */
      /* 0x0018 */ __int64 SequenceNumber;
      union
      {
        /* 0x0020 */ unsigned long Padding0[2];
        /* 0x0020 */ struct _SINGLE_LIST_ENTRY SlistEntry;
        /* 0x0020 */ struct _WMI_BUFFER_HEADER* NextBuffer;
      }; /* size: 0x0008 */
      /* 0x0028 */ struct _ETW_BUFFER_CONTEXT ClientContext;
      union
      {
        /* 0x002c */ enum _ETW_BUFFER_STATE State;
        /* 0x002c */ unsigned long Flags;
      }; /* size: 0x0004 */
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x0030 */ unsigned long Offset;
  /* 0x0034 */ unsigned short BufferFlag;
  /* 0x0036 */ unsigned short BufferType;
  union
  {
    /* 0x0038 */ unsigned long Padding1[4];
    /* 0x0038 */ union _LARGE_INTEGER StartTime;
    /* 0x0038 */ struct _LIST_ENTRY Entry;
    struct
    {
      /* 0x0038 */ void* Padding2;
      /* 0x0040 */ struct _SINGLE_LIST_ENTRY GlobalEntry;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0038 */ void* Pointer0;
      /* 0x0040 */ void* Pointer1;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} WMI_BUFFER_HEADER, *PWMI_BUFFER_HEADER; /* size: 0x0048 */

typedef struct _WMI_LOGGER_CONTEXT
{
  /* 0x0000 */ union _LARGE_INTEGER StartTime;
  /* 0x0008 */ void* LogFileHandle;
  /* 0x0010 */ struct _ETHREAD* LoggerThread;
  /* 0x0018 */ long LoggerStatus;
  /* 0x001c */ unsigned long LoggerId;
  /* 0x0020 */ void* NBQHead;
  /* 0x0028 */ void* OverflowNBQHead;
  /* 0x0030 */ union _SLIST_HEADER QueueBlockFreeList;
  /* 0x0040 */ union _SLIST_HEADER GlobalList;
  /* 0x0050 */ struct _WMI_BUFFER_HEADER* BatchedBufferList;
  /* 0x0058 */ struct _UNICODE_STRING LoggerName;
  /* 0x0068 */ struct _UNICODE_STRING LogFileName;
  /* 0x0078 */ struct _UNICODE_STRING LogFilePattern;
  /* 0x0088 */ struct _UNICODE_STRING NewLogFileName;
  /* 0x0098 */ unsigned long ClockType;
  /* 0x009c */ long CollectionOn;
  /* 0x00a0 */ unsigned long MaximumFileSize;
  /* 0x00a4 */ unsigned long LoggerMode;
  /* 0x00a8 */ unsigned long LastFlushedBuffer;
  /* 0x00ac */ unsigned long FlushTimer;
  /* 0x00b0 */ unsigned long FlushThreshold;
  /* 0x00b8 */ union _LARGE_INTEGER ByteOffset;
  /* 0x00c0 */ union _LARGE_INTEGER FlushTimeStamp;
  /* 0x00c8 */ unsigned long MinimumBuffers;
  /* 0x00cc */ volatile long BuffersAvailable;
  /* 0x00d0 */ volatile long NumberOfBuffers;
  /* 0x00d4 */ unsigned long MaximumBuffers;
  /* 0x00d8 */ volatile unsigned long EventsLost;
  /* 0x00dc */ unsigned long BuffersWritten;
  /* 0x00e0 */ unsigned long LogBuffersLost;
  /* 0x00e4 */ unsigned long RealTimeBuffersDelivered;
  /* 0x00e8 */ unsigned long RealTimeBuffersLost;
  /* 0x00ec */ unsigned long BufferSize;
  /* 0x00f0 */ unsigned long MaximumEventSize;
  /* 0x00f8 */ long* SequencePtr;
  /* 0x0100 */ unsigned long LocalSequence;
  /* 0x0104 */ struct _GUID InstanceGuid;
  /* 0x0118 */ void* GetCpuClock /* function */;
  /* 0x0120 */ long FileCounter;
  /* 0x0128 */ void* volatile BufferCallback /* function */;
  /* 0x0130 */ enum _POOL_TYPE PoolType;
  /* 0x0138 */ struct _ETW_REF_CLOCK ReferenceTime;
  /* 0x0148 */ unsigned char RealtimeLoggerContextFreed;
  /* 0x0150 */ struct _LIST_ENTRY Consumers;
  /* 0x0160 */ unsigned long NumConsumers;
  /* 0x0168 */ struct _LIST_ENTRY Connecting;
  /* 0x0178 */ unsigned char NewConsumer;
  /* 0x0180 */ void* RealtimeLogfileHandle;
  /* 0x0188 */ struct _UNICODE_STRING RealtimeLogfileName;
  /* 0x0198 */ union _LARGE_INTEGER RealtimeWriteOffset;
  /* 0x01a0 */ union _LARGE_INTEGER RealtimeReadOffset;
  /* 0x01a8 */ union _LARGE_INTEGER RealtimeLogfileSize;
  /* 0x01b0 */ unsigned __int64 RealtimeLogfileUsage;
  /* 0x01b8 */ unsigned __int64 RealtimeMaximumFileSize;
  /* 0x01c0 */ unsigned long RealtimeBuffersSaved;
  /* 0x01c8 */ struct _ETW_REF_CLOCK RealtimeReferenceTime;
  /* 0x01d8 */ unsigned long RealtimeDisconnectProcessId;
  /* 0x01dc */ unsigned long RealtimeDisconnectConsumerId;
  /* 0x01e0 */ enum _ETW_RT_EVENT_LOSS NewRTEventsLost;
  /* 0x01e8 */ struct _KEVENT LoggerEvent;
  /* 0x0200 */ struct _KEVENT FlushEvent;
  /* 0x0218 */ struct _KDPC FlushDpc;
  /* 0x0258 */ struct _KMUTANT LoggerMutex;
  /* 0x0290 */ struct _EX_PUSH_LOCK LoggerLock;
  /* 0x0298 */ struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;
  /* 0x02e0 */ struct _EX_FAST_REF SecurityDescriptor;
  /* 0x02e8 */ struct _WMI_BUFFER_HEADER DummyBufferForMarker;
  /* 0x0330 */ __int64 BufferSequenceNumber;
  /* 0x0338 */ long AcceptNewEvents;
  union
  {
    /* 0x033c */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x033c */ unsigned long Persistent : 1; /* bit position: 0 */
      /* 0x033c */ unsigned long AutoLogger : 1; /* bit position: 1 */
      /* 0x033c */ unsigned long FsReady : 1; /* bit position: 2 */
      /* 0x033c */ unsigned long RealTime : 1; /* bit position: 3 */
      /* 0x033c */ unsigned long Wow : 1; /* bit position: 4 */
      /* 0x033c */ unsigned long KernelTrace : 1; /* bit position: 5 */
      /* 0x033c */ unsigned long NoMoreEnable : 1; /* bit position: 6 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0340 */ unsigned long RequestFlag;
    struct /* bitfield */
    {
      /* 0x0340 */ unsigned long RequestNewFie : 1; /* bit position: 0 */
      /* 0x0340 */ unsigned long RequestUpdateFile : 1; /* bit position: 1 */
      /* 0x0340 */ unsigned long RequestFlush : 1; /* bit position: 2 */
      /* 0x0340 */ unsigned long RequestDisableRealtime : 1; /* bit position: 3 */
      /* 0x0340 */ unsigned long RequestDisconnectConsumer : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0344 */ unsigned short StackTraceFilterHookCount;
  /* 0x0346 */ unsigned short StackTraceFilter[16];
  /* 0x0366 */ char __PADDING__[10];
} WMI_LOGGER_CONTEXT, *PWMI_LOGGER_CONTEXT; /* size: 0x0370 */

