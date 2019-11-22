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

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  union
  {
    /* 0x0030 */ unsigned char MutantFlags;
    struct /* bitfield */
    {
      /* 0x0030 */ unsigned char Abandoned : 1; /* bit position: 0 */
      /* 0x0030 */ unsigned char Spare1 : 7; /* bit position: 1 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0030 */ unsigned char Abandoned2 : 1; /* bit position: 0 */
      /* 0x0030 */ unsigned char AbEnabled : 1; /* bit position: 1 */
      /* 0x0030 */ unsigned char Spare2 : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

enum KTM_STATE
{
  KKtmUninitialized = 0,
  KKtmInitialized = 1,
  KKtmRecovering = 2,
  KKtmOnline = 3,
  KKtmRecoveryFailed = 4,
  KKtmOffline = 5,
};

typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x0018 */ char Balance;
  /* 0x0019 */ unsigned char Reserved[3];
  /* 0x001c */ long __PADDING__[1];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0020 */

typedef struct _KTMOBJECT_NAMESPACE_LINK
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS Links;
  /* 0x0020 */ unsigned char Expired;
  /* 0x0021 */ char __PADDING__[7];
} KTMOBJECT_NAMESPACE_LINK, *PKTMOBJECT_NAMESPACE_LINK; /* size: 0x0028 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _RTL_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS BalancedRoot;
  /* 0x0020 */ void* OrderedPointer;
  /* 0x0028 */ unsigned long WhichOrderedElement;
  /* 0x002c */ unsigned long NumberGenericTableElements;
  /* 0x0030 */ unsigned long DepthOfTree;
  /* 0x0038 */ struct _RTL_BALANCED_LINKS* RestartKey;
  /* 0x0040 */ unsigned long DeleteCount;
  /* 0x0048 */ void* CompareRoutine /* function */;
  /* 0x0050 */ void* AllocateRoutine /* function */;
  /* 0x0058 */ void* FreeRoutine /* function */;
  /* 0x0060 */ void* TableContext;
} RTL_AVL_TABLE, *PRTL_AVL_TABLE; /* size: 0x0068 */

typedef struct _KTMOBJECT_NAMESPACE
{
  /* 0x0000 */ struct _RTL_AVL_TABLE Table;
  /* 0x0068 */ struct _KMUTANT Mutex;
  /* 0x00a0 */ unsigned short LinksOffset;
  /* 0x00a2 */ unsigned short GuidOffset;
  /* 0x00a4 */ unsigned char Expired;
  /* 0x00a5 */ char __PADDING__[3];
} KTMOBJECT_NAMESPACE, *PKTMOBJECT_NAMESPACE; /* size: 0x00a8 */

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

typedef union _CLS_LSN
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned int idxRecord;
      /* 0x0004 */ unsigned long cidContainer;
    } /* size: 0x0008 */ offset;
    /* 0x0000 */ unsigned __int64 ullOffset;
  }; /* size: 0x0008 */
} CLS_LSN, *PCLS_LSN; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0008 */ unsigned long IoQoSPriorityBoosted : 1; /* bit position: 2 */
      /* 0x0008 */ unsigned long OwnerCount : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x0018 */ short ActiveCount;
  union
  {
    /* 0x001a */ unsigned short Flag;
    struct
    {
      /* 0x001a */ unsigned char ReservedLowFlags;
      /* 0x001b */ unsigned char WaiterPriority;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0020 */ void* SharedWaiters;
  /* 0x0028 */ void* ExclusiveWaiters;
  /* 0x0030 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ void* Reserved2;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

typedef struct _KTM
{
  /* 0x0000 */ unsigned long cookie;
  /* 0x0008 */ struct _KMUTANT Mutex;
  /* 0x0040 */ enum KTM_STATE State;
  /* 0x0048 */ struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;
  /* 0x0070 */ struct _GUID TmIdentity;
  /* 0x0080 */ unsigned long Flags;
  /* 0x0084 */ unsigned long VolatileFlags;
  /* 0x0088 */ struct _UNICODE_STRING LogFileName;
  /* 0x0098 */ struct _FILE_OBJECT* LogFileObject;
  /* 0x00a0 */ void* MarshallingContext;
  /* 0x00a8 */ void* LogManagementContext;
  /* 0x00b0 */ struct _KTMOBJECT_NAMESPACE Transactions;
  /* 0x0158 */ struct _KTMOBJECT_NAMESPACE ResourceManagers;
  /* 0x0200 */ struct _KMUTANT LsnOrderedMutex;
  /* 0x0238 */ struct _LIST_ENTRY LsnOrderedList;
  /* 0x0248 */ union _LARGE_INTEGER CommitVirtualClock;
  /* 0x0250 */ struct _FAST_MUTEX CommitVirtualClockMutex;
  /* 0x0288 */ union _CLS_LSN BaseLsn;
  /* 0x0290 */ union _CLS_LSN CurrentReadLsn;
  /* 0x0298 */ union _CLS_LSN LastRecoveredLsn;
  /* 0x02a0 */ void* TmRmHandle;
  /* 0x02a8 */ struct _KRESOURCEMANAGER* TmRm;
  /* 0x02b0 */ struct _KEVENT LogFullNotifyEvent;
  /* 0x02c8 */ struct _WORK_QUEUE_ITEM CheckpointWorkItem;
  /* 0x02e8 */ union _CLS_LSN CheckpointTargetLsn;
  /* 0x02f0 */ struct _WORK_QUEUE_ITEM LogFullCompletedWorkItem;
  /* 0x0310 */ struct _ERESOURCE LogWriteResource;
  /* 0x0378 */ unsigned long LogFlags;
  /* 0x037c */ long LogFullStatus;
  /* 0x0380 */ long RecoveryStatus;
  /* 0x0388 */ union _CLS_LSN LastCheckBaseLsn;
  /* 0x0390 */ struct _LIST_ENTRY RestartOrderedList;
  /* 0x03a0 */ struct _WORK_QUEUE_ITEM OfflineWorkItem;
} KTM, *PKTM; /* size: 0x03c0 */

