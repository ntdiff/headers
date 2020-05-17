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

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned long OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long IoQoSPriorityBoosted : 1; /* bit position: 2 */
      /* 0x0004 */ unsigned long OwnerCount : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0004 */ unsigned long TableSize;
  }; /* size: 0x0004 */
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0008 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0008 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x000c */ short ActiveCount;
  union
  {
    /* 0x000e */ unsigned short Flag;
    struct
    {
      /* 0x000e */ unsigned char ReservedLowFlags;
      /* 0x000f */ unsigned char WaiterPriority;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0010 */ void* SharedWaiters;
  /* 0x0014 */ void* ExclusiveWaiters;
  /* 0x0018 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0020 */ unsigned long ActiveEntries;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long NumberOfSharedWaiters;
  /* 0x002c */ unsigned long NumberOfExclusiveWaiters;
  union
  {
    /* 0x0030 */ void* Address;
    /* 0x0030 */ unsigned long CreatorBackTraceIndex;
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0038 */

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

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _PROCESS_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesRead;
  /* 0x0008 */ unsigned __int64 BytesWritten;
  /* 0x0010 */ unsigned __int64 ReadOperationCount;
  /* 0x0018 */ unsigned __int64 WriteOperationCount;
  /* 0x0020 */ unsigned __int64 FlushOperationCount;
} PROCESS_DISK_COUNTERS, *PPROCESS_DISK_COUNTERS; /* size: 0x0028 */

typedef struct _WNF_STATE_NAME
{
  /* 0x0000 */ unsigned long Data[2];
} WNF_STATE_NAME, *PWNF_STATE_NAME; /* size: 0x0008 */

typedef struct _PS_JOB_WAKE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NotificationChannel;
  /* 0x0008 */ unsigned __int64 WakeCounters[7];
  /* 0x0040 */ unsigned __int64 NoWakeCounter;
} PS_JOB_WAKE_INFORMATION, *PPS_JOB_WAKE_INFORMATION; /* size: 0x0048 */

typedef struct _JOBOBJECT_WAKE_FILTER
{
  /* 0x0000 */ unsigned long HighEdgeFilter;
  /* 0x0004 */ unsigned long LowEdgeFilter;
} JOBOBJECT_WAKE_FILTER, *PJOBOBJECT_WAKE_FILTER; /* size: 0x0008 */

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

typedef struct _EPROCESS_VALUES
{
  /* 0x0000 */ unsigned __int64 KernelTime;
  /* 0x0008 */ unsigned __int64 UserTime;
  /* 0x0010 */ unsigned __int64 ReadyTime;
  /* 0x0018 */ unsigned __int64 CycleTime;
  /* 0x0020 */ unsigned __int64 ContextSwitches;
  /* 0x0028 */ __int64 ReadOperationCount;
  /* 0x0030 */ __int64 WriteOperationCount;
  /* 0x0038 */ __int64 OtherOperationCount;
  /* 0x0040 */ __int64 ReadTransferCount;
  /* 0x0048 */ __int64 WriteTransferCount;
  /* 0x0050 */ __int64 OtherTransferCount;
  /* 0x0058 */ unsigned __int64 KernelWaitTime;
  /* 0x0060 */ unsigned __int64 UserWaitTime;
} EPROCESS_VALUES, *PEPROCESS_VALUES; /* size: 0x0068 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PS_PROPERTY_SET
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long Lock;
} PS_PROPERTY_SET, *PPS_PROPERTY_SET; /* size: 0x000c */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _JOB_RATE_CONTROL_HEADER
{
  /* 0x0000 */ void* RateControlQuotaReference;
  /* 0x0004 */ struct _RTL_BITMAP OverQuotaHistory;
  /* 0x000c */ unsigned char* BitMapBuffer;
  /* 0x0010 */ unsigned long BitMapBufferSize;
} JOB_RATE_CONTROL_HEADER, *PJOB_RATE_CONTROL_HEADER; /* size: 0x0014 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef struct _PS_IO_CONTROL_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE VolumeTreeNode;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY FreeListEntry;
      /* 0x0008 */ unsigned long ReservedForParentValue;
    }; /* size: 0x000c */
  }; /* size: 0x000c */
  /* 0x000c */ unsigned long VolumeKey;
  /* 0x0010 */ struct _EX_RUNDOWN_REF Rundown;
  /* 0x0014 */ void* IoControl;
  /* 0x0018 */ void* VolumeIoAttribution;
} PS_IO_CONTROL_ENTRY, *PPS_IO_CONTROL_ENTRY; /* size: 0x001c */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef union _JOBOBJECT_ENERGY_TRACKING_STATE
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      /* 0x0000 */ unsigned long UpdateMask;
      /* 0x0004 */ unsigned long DesiredState;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} JOBOBJECT_ENERGY_TRACKING_STATE, *PJOBOBJECT_ENERGY_TRACKING_STATE; /* size: 0x0008 */

typedef struct _EJOB
{
  /* 0x0000 */ struct _KEVENT Event;
  /* 0x0010 */ struct _LIST_ENTRY JobLinks;
  /* 0x0018 */ struct _LIST_ENTRY ProcessListHead;
  /* 0x0020 */ struct _ERESOURCE JobLock;
  /* 0x0058 */ union _LARGE_INTEGER TotalUserTime;
  /* 0x0060 */ union _LARGE_INTEGER TotalKernelTime;
  /* 0x0068 */ union _LARGE_INTEGER TotalCycleTime;
  /* 0x0070 */ union _LARGE_INTEGER ThisPeriodTotalUserTime;
  /* 0x0078 */ union _LARGE_INTEGER ThisPeriodTotalKernelTime;
  /* 0x0080 */ unsigned __int64 TotalContextSwitches;
  /* 0x0088 */ unsigned long TotalPageFaultCount;
  /* 0x008c */ unsigned long TotalProcesses;
  /* 0x0090 */ unsigned long ActiveProcesses;
  /* 0x0094 */ unsigned long TotalTerminatedProcesses;
  /* 0x0098 */ union _LARGE_INTEGER PerProcessUserTimeLimit;
  /* 0x00a0 */ union _LARGE_INTEGER PerJobUserTimeLimit;
  /* 0x00a8 */ unsigned long MinimumWorkingSetSize;
  /* 0x00ac */ unsigned long MaximumWorkingSetSize;
  /* 0x00b0 */ unsigned long LimitFlags;
  /* 0x00b4 */ unsigned long ActiveProcessLimit;
  /* 0x00b8 */ struct _KAFFINITY_EX Affinity;
  /* 0x00c4 */ struct _JOB_ACCESS_STATE* AccessState;
  /* 0x00c8 */ void* AccessStateQuotaReference;
  /* 0x00cc */ unsigned long UIRestrictionsClass;
  /* 0x00d0 */ unsigned long EndOfJobTimeAction;
  /* 0x00d4 */ void* CompletionPort;
  /* 0x00d8 */ void* CompletionKey;
  /* 0x00e0 */ unsigned __int64 CompletionCount;
  /* 0x00e8 */ unsigned long SessionId;
  /* 0x00ec */ unsigned long SchedulingClass;
  /* 0x00f0 */ unsigned __int64 ReadOperationCount;
  /* 0x00f8 */ unsigned __int64 WriteOperationCount;
  /* 0x0100 */ unsigned __int64 OtherOperationCount;
  /* 0x0108 */ unsigned __int64 ReadTransferCount;
  /* 0x0110 */ unsigned __int64 WriteTransferCount;
  /* 0x0118 */ unsigned __int64 OtherTransferCount;
  /* 0x0120 */ struct _PROCESS_DISK_COUNTERS DiskIoInfo;
  /* 0x0148 */ unsigned long ProcessMemoryLimit;
  /* 0x014c */ unsigned long JobMemoryLimit;
  /* 0x0150 */ unsigned long JobTotalMemoryLimit;
  /* 0x0154 */ unsigned long PeakProcessMemoryUsed;
  /* 0x0158 */ unsigned long PeakJobMemoryUsed;
  /* 0x015c */ struct _KAFFINITY_EX EffectiveAffinity;
  /* 0x0168 */ union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;
  /* 0x0170 */ unsigned long EffectiveMinimumWorkingSetSize;
  /* 0x0174 */ unsigned long EffectiveMaximumWorkingSetSize;
  /* 0x0178 */ unsigned long EffectiveProcessMemoryLimit;
  /* 0x017c */ struct _EJOB* EffectiveProcessMemoryLimitJob;
  /* 0x0180 */ struct _EJOB* EffectivePerProcessUserTimeLimitJob;
  /* 0x0184 */ struct _EJOB* EffectiveNetIoRateLimitJob;
  /* 0x0188 */ struct _EJOB* EffectiveHeapAttributionJob;
  /* 0x018c */ unsigned long EffectiveLimitFlags;
  /* 0x0190 */ unsigned long EffectiveSchedulingClass;
  /* 0x0194 */ unsigned long EffectiveFreezeCount;
  /* 0x0198 */ unsigned long EffectiveBackgroundCount;
  /* 0x019c */ unsigned long EffectiveSwapCount;
  /* 0x01a0 */ unsigned long EffectiveNotificationLimitCount;
  /* 0x01a4 */ unsigned char EffectivePriorityClass;
  /* 0x01a5 */ unsigned char PriorityClass;
  /* 0x01a6 */ unsigned char NestingDepth;
  /* 0x01a7 */ unsigned char Reserved1[1];
  /* 0x01a8 */ unsigned long CompletionFilter;
  union
  {
    /* 0x01b0 */ struct _WNF_STATE_NAME WakeChannel;
    /* 0x01b0 */ struct _PS_JOB_WAKE_INFORMATION WakeInfo;
  }; /* size: 0x0048 */
  /* 0x01f8 */ struct _JOBOBJECT_WAKE_FILTER WakeFilter;
  /* 0x0200 */ unsigned long LowEdgeLatchFilter;
  /* 0x0204 */ struct _EJOB* NotificationLink;
  /* 0x0208 */ unsigned __int64 CurrentJobMemoryUsed;
  /* 0x0210 */ struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;
  /* 0x0214 */ void* NotificationInfoQuotaReference;
  /* 0x0218 */ struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;
  /* 0x021c */ struct _JOB_CPU_RATE_CONTROL* CpuRateControl;
  /* 0x0220 */ void* EffectiveSchedulingGroup;
  /* 0x0228 */ unsigned __int64 ReadyTime;
  /* 0x0230 */ struct _EX_PUSH_LOCK MemoryLimitsLock;
  /* 0x0234 */ struct _LIST_ENTRY SiblingJobLinks;
  /* 0x023c */ struct _LIST_ENTRY ChildJobListHead;
  /* 0x0244 */ struct _EJOB* ParentJob;
  /* 0x0248 */ struct _EJOB* volatile RootJob;
  /* 0x024c */ struct _LIST_ENTRY IteratorListHead;
  /* 0x0254 */ unsigned long AncestorCount;
  union
  {
    /* 0x0258 */ struct _EJOB** Ancestors;
    /* 0x0258 */ void* SessionObject;
  }; /* size: 0x0004 */
  /* 0x0260 */ struct _EPROCESS_VALUES Accounting;
  /* 0x02c8 */ unsigned long ShadowActiveProcessCount;
  /* 0x02cc */ unsigned long ActiveAuxiliaryProcessCount;
  /* 0x02d0 */ unsigned long SequenceNumber;
  /* 0x02d4 */ unsigned long JobId;
  /* 0x02d8 */ struct _GUID ContainerId;
  /* 0x02e8 */ struct _GUID ContainerTelemetryId;
  /* 0x02f8 */ struct _ESERVERSILO_GLOBALS* ServerSiloGlobals;
  /* 0x02fc */ struct _PS_PROPERTY_SET PropertySet;
  /* 0x0308 */ struct _PSP_STORAGE* Storage;
  /* 0x030c */ struct _JOB_NET_RATE_CONTROL* NetRateControl;
  union
  {
    /* 0x0310 */ unsigned long JobFlags;
    struct /* bitfield */
    {
      /* 0x0310 */ unsigned long CloseDone : 1; /* bit position: 0 */
      /* 0x0310 */ unsigned long MultiGroup : 1; /* bit position: 1 */
      /* 0x0310 */ unsigned long OutstandingNotification : 1; /* bit position: 2 */
      /* 0x0310 */ unsigned long NotificationInProgress : 1; /* bit position: 3 */
      /* 0x0310 */ unsigned long UILimits : 1; /* bit position: 4 */
      /* 0x0310 */ unsigned long CpuRateControlActive : 1; /* bit position: 5 */
      /* 0x0310 */ unsigned long OwnCpuRateControl : 1; /* bit position: 6 */
      /* 0x0310 */ unsigned long Terminating : 1; /* bit position: 7 */
      /* 0x0310 */ unsigned long WorkingSetLock : 1; /* bit position: 8 */
      /* 0x0310 */ unsigned long JobFrozen : 1; /* bit position: 9 */
      /* 0x0310 */ unsigned long Background : 1; /* bit position: 10 */
      /* 0x0310 */ unsigned long WakeNotificationAllocated : 1; /* bit position: 11 */
      /* 0x0310 */ unsigned long WakeNotificationEnabled : 1; /* bit position: 12 */
      /* 0x0310 */ unsigned long WakeNotificationPending : 1; /* bit position: 13 */
      /* 0x0310 */ unsigned long LimitNotificationRequired : 1; /* bit position: 14 */
      /* 0x0310 */ unsigned long ZeroCountNotificationRequired : 1; /* bit position: 15 */
      /* 0x0310 */ unsigned long CycleTimeNotificationRequired : 1; /* bit position: 16 */
      /* 0x0310 */ unsigned long CycleTimeNotificationPending : 1; /* bit position: 17 */
      /* 0x0310 */ unsigned long TimersVirtualized : 1; /* bit position: 18 */
      /* 0x0310 */ unsigned long JobSwapped : 1; /* bit position: 19 */
      /* 0x0310 */ unsigned long ViolationDetected : 1; /* bit position: 20 */
      /* 0x0310 */ unsigned long EmptyJobNotified : 1; /* bit position: 21 */
      /* 0x0310 */ unsigned long NoSystemCharge : 1; /* bit position: 22 */
      /* 0x0310 */ unsigned long DropNoWakeCharges : 1; /* bit position: 23 */
      /* 0x0310 */ unsigned long NoWakeChargePolicyDecided : 1; /* bit position: 24 */
      /* 0x0310 */ unsigned long NetRateControlActive : 1; /* bit position: 25 */
      /* 0x0310 */ unsigned long OwnNetRateControl : 1; /* bit position: 26 */
      /* 0x0310 */ unsigned long IoRateControlActive : 1; /* bit position: 27 */
      /* 0x0310 */ unsigned long OwnIoRateControl : 1; /* bit position: 28 */
      /* 0x0310 */ unsigned long DisallowNewProcesses : 1; /* bit position: 29 */
      /* 0x0310 */ unsigned long Silo : 1; /* bit position: 30 */
      /* 0x0310 */ unsigned long ContainerTelemetryIdSet : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0314 */ unsigned long JobFlags2;
    struct /* bitfield */
    {
      /* 0x0314 */ unsigned long ParentLocked : 1; /* bit position: 0 */
      /* 0x0314 */ unsigned long EnableUsermodeSiloThreadImpersonation : 1; /* bit position: 1 */
      /* 0x0314 */ unsigned long DisallowUsermodeSiloThreadImpersonation : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0318 */ struct _PROCESS_EXTENDED_ENERGY_VALUES* EnergyValues;
  /* 0x031c */ volatile unsigned long SharedCommitCharge;
  /* 0x0320 */ unsigned long DiskIoAttributionUserRefCount;
  /* 0x0324 */ unsigned long DiskIoAttributionRefCount;
  union
  {
    /* 0x0328 */ void* DiskIoAttributionContext;
    /* 0x0328 */ struct _EJOB* DiskIoAttributionOwnerJob;
  }; /* size: 0x0004 */
  /* 0x032c */ struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;
  /* 0x0340 */ struct _PS_IO_CONTROL_ENTRY GlobalIoControl;
  /* 0x035c */ volatile long IoControlStateLock;
  /* 0x0360 */ struct _RTL_RB_TREE VolumeIoControlTree;
  /* 0x0368 */ unsigned __int64 IoRateOverQuotaHistory;
  /* 0x0370 */ unsigned long IoRateCurrentGeneration;
  /* 0x0374 */ unsigned long IoRateLastQueryGeneration;
  /* 0x0378 */ unsigned long IoRateGenerationLength;
  /* 0x037c */ unsigned long IoRateOverQuotaNotifySequenceId;
  /* 0x0380 */ unsigned __int64 LastThrottledIoTime;
  /* 0x0388 */ struct _EX_PUSH_LOCK IoControlLock;
  /* 0x038c */ long SiloHardReferenceCount;
  /* 0x0390 */ struct _WORK_QUEUE_ITEM RundownWorkItem;
  /* 0x03a0 */ void* PartitionObject;
  /* 0x03a4 */ struct _EJOB* PartitionOwnerJob;
  /* 0x03a8 */ union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;
  /* 0x03b0 */ unsigned __int64 KernelWaitTime;
  /* 0x03b8 */ unsigned __int64 UserWaitTime;
} EJOB, *PEJOB; /* size: 0x03c0 */

