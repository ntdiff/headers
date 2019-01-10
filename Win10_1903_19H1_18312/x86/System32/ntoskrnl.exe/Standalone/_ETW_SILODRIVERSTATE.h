typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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

typedef struct _ETW_LAST_ENABLE_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER EnableFlags;
  /* 0x0008 */ unsigned short LoggerId;
  /* 0x000a */ unsigned char Level;
  struct /* bitfield */
  {
    /* 0x000b */ unsigned char Enabled : 1; /* bit position: 0 */
    /* 0x000b */ unsigned char InternalFlag : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x000c */ long __PADDING__[1];
} ETW_LAST_ENABLE_INFO, *PETW_LAST_ENABLE_INFO; /* size: 0x0010 */

typedef struct _TRACE_ENABLE_INFO
{
  /* 0x0000 */ unsigned long IsEnabled;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short LoggerId;
  /* 0x0008 */ unsigned long EnableProperty;
  /* 0x000c */ unsigned long Reserved2;
  /* 0x0010 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0018 */ unsigned __int64 MatchAllKeyword;
} TRACE_ENABLE_INFO, *PTRACE_ENABLE_INFO; /* size: 0x0020 */

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

typedef struct _ETW_GUID_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY GuidList;
  /* 0x0008 */ volatile long RefCount;
  /* 0x000c */ struct _GUID Guid;
  /* 0x001c */ struct _LIST_ENTRY RegListHead;
  /* 0x0024 */ void* SecurityDescriptor;
  union
  {
    /* 0x0028 */ struct _ETW_LAST_ENABLE_INFO LastEnable;
    /* 0x0028 */ unsigned __int64 MatchId;
  }; /* size: 0x0010 */
  /* 0x0038 */ struct _TRACE_ENABLE_INFO ProviderEnableInfo;
  /* 0x0058 */ struct _TRACE_ENABLE_INFO EnableInfo[8];
  /* 0x0158 */ struct _ETW_FILTER_HEADER* FilterData;
  /* 0x015c */ struct _ETW_SILODRIVERSTATE* SiloState;
  /* 0x0160 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0164 */ struct _ETHREAD* LockOwner;
} ETW_GUID_ENTRY, *PETW_GUID_ENTRY; /* size: 0x0168 */

typedef struct _ETW_HASH_BUCKET
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead[3];
  /* 0x0018 */ struct _EX_PUSH_LOCK BucketLock;
} ETW_HASH_BUCKET, *PETW_HASH_BUCKET; /* size: 0x001c */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _ETW_PRIV_HANDLE_DEMUX_TABLE
{
  /* 0x0000 */ struct _RTL_RB_TREE Tree;
  /* 0x0008 */ struct _EX_PUSH_LOCK Lock;
  /* 0x000c */ unsigned short SequenceNumber;
  /* 0x000e */ char __PADDING__[2];
} ETW_PRIV_HANDLE_DEMUX_TABLE, *PETW_PRIV_HANDLE_DEMUX_TABLE; /* size: 0x0010 */

typedef struct _ETW_COUNTERS
{
  /* 0x0000 */ long GuidCount;
  /* 0x0004 */ long PoolUsage[2];
  /* 0x000c */ long SessionCount;
} ETW_COUNTERS, *PETW_COUNTERS; /* size: 0x0010 */

typedef struct _ETW_SYSTEM_LOGGER
{
  /* 0x0000 */ unsigned char LoggerId;
  /* 0x0001 */ unsigned char ClockType;
} ETW_SYSTEM_LOGGER, *PETW_SYSTEM_LOGGER; /* size: 0x0002 */

typedef struct _PERFINFO_GROUPMASK
{
  /* 0x0000 */ unsigned long Masks[8];
} PERFINFO_GROUPMASK, *PPERFINFO_GROUPMASK; /* size: 0x0020 */

typedef struct _ETW_SYSTEM_LOGGER_SETTINGS
{
  /* 0x0000 */ struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];
  /* 0x0010 */ volatile unsigned long EtwpActiveSystemLoggers;
  /* 0x0014 */ struct _PERFINFO_GROUPMASK SiloGlobalGroupMask;
  /* 0x0034 */ struct _PERFINFO_GROUPMASK EtwpGroupMasks[10];
} ETW_SYSTEM_LOGGER_SETTINGS, *PETW_SYSTEM_LOGGER_SETTINGS; /* size: 0x0174 */

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

typedef struct _ETW_SILODRIVERSTATE
{
  /* 0x0000 */ struct _EJOB* Silo;
  /* 0x0004 */ struct _ESERVERSILO_GLOBALS* SiloGlobals;
  /* 0x0008 */ unsigned long MaxLoggers;
  /* 0x0010 */ struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;
  /* 0x0178 */ struct _EX_RUNDOWN_REF_CACHE_AWARE** EtwpLoggerRundown;
  /* 0x017c */ struct _WMI_LOGGER_CONTEXT** EtwpLoggerContext;
  /* 0x0180 */ struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];
  /* 0x0880 */ unsigned short EtwpSecurityLoggers[8];
  /* 0x0890 */ unsigned char EtwpSecurityProviderEnableMask;
  /* 0x0894 */ long EtwpShutdownInProgress;
  /* 0x0898 */ unsigned long EtwpSecurityProviderPID;
  /* 0x089c */ struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;
  /* 0x08ac */ struct _ETW_COUNTERS EtwpCounters;
  /* 0x08c0 */ union _LARGE_INTEGER LogfileBytesWritten;
  /* 0x08c8 */ struct _ETW_SILO_TRACING_BLOCK* ProcessorBlocks;
  /* 0x08cc */ struct _EX_WNF_SUBSCRIPTION* ContainerRestoreWnfSubscription;
  /* 0x08d0 */ struct _GUID PartitionId;
  /* 0x08e0 */ struct _GUID ParentId;
  /* 0x08f0 */ union _LARGE_INTEGER QpcOffsetFromRoot;
  /* 0x08f8 */ unsigned long PartitionType;
  /* 0x08fc */ struct _ETW_SYSTEM_LOGGER_SETTINGS SystemLoggerSettings;
  /* 0x0a70 */ struct _KMUTANT EtwpStartTraceMutex;
} ETW_SILODRIVERSTATE, *PETW_SILODRIVERSTATE; /* size: 0x0a90 */

