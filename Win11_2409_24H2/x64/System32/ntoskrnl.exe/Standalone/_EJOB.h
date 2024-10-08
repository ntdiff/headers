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
  /* 0x0050 */ volatile char MiscFlags;
  /* 0x0051 */ unsigned char Reserved1[3];
  /* 0x0054 */ unsigned long ResourceTimeoutCount;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

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
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _PROCESS_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesRead;
  /* 0x0008 */ unsigned __int64 BytesWritten;
  /* 0x0010 */ unsigned __int64 ReadOperationCount;
  /* 0x0018 */ unsigned __int64 WriteOperationCount;
  /* 0x0020 */ unsigned __int64 FlushOperationCount;
} PROCESS_DISK_COUNTERS, *PPROCESS_DISK_COUNTERS; /* size: 0x0028 */

typedef struct _PROCESS_NETWORK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesIn;
  /* 0x0008 */ unsigned __int64 BytesOut;
} PROCESS_NETWORK_COUNTERS, *PPROCESS_NETWORK_COUNTERS; /* size: 0x0010 */

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
  /* 0x0010 */ unsigned __int64 Lock;
} PS_PROPERTY_SET, *PPS_PROPERTY_SET; /* size: 0x0018 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _JOB_RATE_CONTROL_HEADER
{
  /* 0x0000 */ void* RateControlQuotaReference;
  /* 0x0008 */ struct _RTL_BITMAP OverQuotaHistory;
  /* 0x0018 */ unsigned char* BitMapBuffer;
  /* 0x0020 */ unsigned __int64 BitMapBufferSize;
} JOB_RATE_CONTROL_HEADER, *PJOB_RATE_CONTROL_HEADER; /* size: 0x0028 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _PS_IO_CONTROL_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE VolumeTreeNode;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY FreeListEntry;
      /* 0x0010 */ unsigned __int64 ReservedForParentValue;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ unsigned __int64 VolumeKey;
  /* 0x0020 */ struct _EX_RUNDOWN_REF Rundown;
  /* 0x0028 */ void* IoControl;
  /* 0x0030 */ void* VolumeIoAttribution;
} PS_IO_CONTROL_ENTRY, *PPS_IO_CONTROL_ENTRY; /* size: 0x0038 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

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
  /* 0x0018 */ struct _LIST_ENTRY JobLinks;
  /* 0x0028 */ struct _LIST_ENTRY ProcessListHead;
  /* 0x0038 */ struct _ERESOURCE JobLock;
  /* 0x00a0 */ union _LARGE_INTEGER TotalUserTime;
  /* 0x00a8 */ union _LARGE_INTEGER TotalKernelTime;
  /* 0x00b0 */ union _LARGE_INTEGER TotalCycleTime;
  /* 0x00b8 */ union _LARGE_INTEGER ThisPeriodTotalUserTime;
  /* 0x00c0 */ union _LARGE_INTEGER ThisPeriodTotalKernelTime;
  /* 0x00c8 */ unsigned __int64 TotalContextSwitches;
  /* 0x00d0 */ unsigned long TotalPageFaultCount;
  /* 0x00d4 */ unsigned long TotalProcesses;
  /* 0x00d8 */ unsigned long ActiveProcesses;
  /* 0x00dc */ unsigned long TotalTerminatedProcesses;
  /* 0x00e0 */ union _LARGE_INTEGER PerProcessUserTimeLimit;
  /* 0x00e8 */ union _LARGE_INTEGER PerJobUserTimeLimit;
  /* 0x00f0 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x00f8 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0100 */ unsigned long LimitFlags;
  /* 0x0104 */ unsigned long ActiveProcessLimit;
  /* 0x0108 */ struct _KAFFINITY_EX Affinity;
  /* 0x0210 */ struct _JOB_ACCESS_STATE* AccessState;
  /* 0x0218 */ void* AccessStateQuotaReference;
  /* 0x0220 */ unsigned long UIRestrictionsClass;
  /* 0x0224 */ unsigned long EndOfJobTimeAction;
  /* 0x0228 */ void* CompletionPort;
  /* 0x0230 */ void* CompletionKey;
  /* 0x0238 */ unsigned __int64 CompletionCount;
  /* 0x0240 */ unsigned long SessionId;
  /* 0x0244 */ unsigned long SchedulingClass;
  /* 0x0248 */ unsigned __int64 ReadOperationCount;
  /* 0x0250 */ unsigned __int64 WriteOperationCount;
  /* 0x0258 */ unsigned __int64 OtherOperationCount;
  /* 0x0260 */ unsigned __int64 ReadTransferCount;
  /* 0x0268 */ unsigned __int64 WriteTransferCount;
  /* 0x0270 */ unsigned __int64 OtherTransferCount;
  /* 0x0278 */ struct _PROCESS_DISK_COUNTERS DiskIoInfo;
  /* 0x02a0 */ struct _PROCESS_NETWORK_COUNTERS NetworkIoInfo;
  /* 0x02b0 */ unsigned __int64 ProcessMemoryLimit;
  /* 0x02b8 */ unsigned __int64 JobMemoryLimit;
  /* 0x02c0 */ unsigned __int64 JobTotalMemoryLimit;
  /* 0x02c8 */ unsigned __int64 PeakProcessMemoryUsed;
  /* 0x02d0 */ unsigned __int64 PeakJobMemoryUsed;
  /* 0x02d8 */ struct _KAFFINITY_EX EffectiveAffinity;
  /* 0x03e0 */ union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;
  /* 0x03e8 */ unsigned __int64 EffectiveMinimumWorkingSetSize;
  /* 0x03f0 */ unsigned __int64 EffectiveMaximumWorkingSetSize;
  /* 0x03f8 */ unsigned __int64 EffectiveProcessMemoryLimit;
  /* 0x0400 */ struct _EJOB* EffectiveProcessMemoryLimitJob;
  /* 0x0408 */ struct _EJOB* EffectivePerProcessUserTimeLimitJob;
  /* 0x0410 */ struct _EJOB* EffectiveNetIoRateLimitJob;
  /* 0x0418 */ struct _EJOB* EffectiveHeapAttributionJob;
  /* 0x0420 */ unsigned long EffectiveLimitFlags;
  /* 0x0424 */ unsigned long EffectiveSchedulingClass;
  /* 0x0428 */ unsigned long EffectiveFreezeCount;
  /* 0x042c */ unsigned long EffectiveGraphicsFreezeCount;
  /* 0x0430 */ unsigned long EffectiveBackgroundCount;
  /* 0x0434 */ unsigned long EffectiveSwapCount;
  /* 0x0438 */ unsigned long EffectiveNotificationLimitCount;
  /* 0x043c */ unsigned long EffectiveIoPriorityLimit;
  /* 0x0440 */ unsigned long IoPriorityLimit;
  /* 0x0444 */ unsigned long EffectivePagePriorityLimit;
  /* 0x0448 */ unsigned long PagePriorityLimit;
  /* 0x044c */ unsigned char EffectivePriorityClass;
  /* 0x044d */ unsigned char PriorityClass;
  /* 0x044e */ unsigned char NestingDepth;
  /* 0x044f */ unsigned char Reserved1[1];
  /* 0x0450 */ unsigned long CompletionFilter;
  union
  {
    /* 0x0458 */ struct _WNF_STATE_NAME WakeChannel;
    /* 0x0458 */ struct _PS_JOB_WAKE_INFORMATION WakeInfo;
  }; /* size: 0x0048 */
  /* 0x04a0 */ struct _JOBOBJECT_WAKE_FILTER WakeFilter;
  /* 0x04a8 */ unsigned long LowEdgeLatchFilter;
  /* 0x04b0 */ struct _EJOB* NotificationLink;
  /* 0x04b8 */ unsigned __int64 CurrentJobMemoryUsed;
  /* 0x04c0 */ struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;
  /* 0x04c8 */ void* NotificationInfoQuotaReference;
  /* 0x04d0 */ struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;
  /* 0x04d8 */ struct _JOB_CPU_RATE_CONTROL* CpuRateControl;
  /* 0x04e0 */ void* EffectiveSchedulingGroup;
  /* 0x04e8 */ unsigned __int64 ReadyTime;
  /* 0x04f0 */ struct _EX_PUSH_LOCK MemoryLimitsLock;
  /* 0x04f8 */ struct _LIST_ENTRY SiblingJobLinks;
  /* 0x0508 */ struct _LIST_ENTRY ChildJobListHead;
  /* 0x0518 */ struct _EJOB* ParentJob;
  /* 0x0520 */ struct _EJOB* volatile RootJob;
  /* 0x0528 */ struct _LIST_ENTRY IteratorListHead;
  /* 0x0538 */ unsigned __int64 AncestorCount;
  union
  {
    /* 0x0540 */ struct _EJOB** Ancestors;
    /* 0x0540 */ void* SessionObject;
  }; /* size: 0x0008 */
  /* 0x0548 */ struct _EPROCESS_VALUES Accounting;
  /* 0x05b0 */ unsigned long ShadowActiveProcessCount;
  /* 0x05b4 */ unsigned long ActiveAuxiliaryProcessCount;
  /* 0x05b8 */ unsigned long SequenceNumber;
  /* 0x05bc */ unsigned long JobId;
  /* 0x05c0 */ struct _GUID ContainerId;
  /* 0x05d0 */ struct _GUID ContainerTelemetryId;
  /* 0x05e0 */ struct _ESERVERSILO_GLOBALS* ServerSiloGlobals;
  /* 0x05e8 */ struct _PS_PROPERTY_SET PropertySet;
  /* 0x0600 */ struct _PSP_STORAGE* Storage;
  /* 0x0608 */ struct _JOB_NET_RATE_CONTROL* NetRateControl;
  union
  {
    /* 0x0610 */ unsigned long JobFlags;
    struct /* bitfield */
    {
      /* 0x0610 */ unsigned long CloseDone : 1; /* bit position: 0 */
      /* 0x0610 */ unsigned long MultiGroup : 1; /* bit position: 1 */
      /* 0x0610 */ unsigned long OutstandingNotification : 1; /* bit position: 2 */
      /* 0x0610 */ unsigned long NotificationInProgress : 1; /* bit position: 3 */
      /* 0x0610 */ unsigned long UILimits : 1; /* bit position: 4 */
      /* 0x0610 */ unsigned long CpuRateControlActive : 1; /* bit position: 5 */
      /* 0x0610 */ unsigned long OwnCpuRateControl : 1; /* bit position: 6 */
      /* 0x0610 */ unsigned long Terminating : 1; /* bit position: 7 */
      /* 0x0610 */ unsigned long WorkingSetLock : 1; /* bit position: 8 */
      /* 0x0610 */ unsigned long JobFrozen : 1; /* bit position: 9 */
      /* 0x0610 */ unsigned long Background : 1; /* bit position: 10 */
      /* 0x0610 */ unsigned long WakeNotificationAllocated : 1; /* bit position: 11 */
      /* 0x0610 */ unsigned long WakeNotificationEnabled : 1; /* bit position: 12 */
      /* 0x0610 */ unsigned long WakeNotificationPending : 1; /* bit position: 13 */
      /* 0x0610 */ unsigned long LimitNotificationRequired : 1; /* bit position: 14 */
      /* 0x0610 */ unsigned long ZeroCountNotificationRequired : 1; /* bit position: 15 */
      /* 0x0610 */ unsigned long CycleTimeNotificationRequired : 1; /* bit position: 16 */
      /* 0x0610 */ unsigned long CycleTimeNotificationPending : 1; /* bit position: 17 */
      /* 0x0610 */ unsigned long TimersVirtualized : 1; /* bit position: 18 */
      /* 0x0610 */ unsigned long JobSwapped : 1; /* bit position: 19 */
      /* 0x0610 */ unsigned long ViolationDetected : 1; /* bit position: 20 */
      /* 0x0610 */ unsigned long EmptyJobNotified : 1; /* bit position: 21 */
      /* 0x0610 */ unsigned long NoSystemCharge : 1; /* bit position: 22 */
      /* 0x0610 */ unsigned long DropNoWakeCharges : 1; /* bit position: 23 */
      /* 0x0610 */ unsigned long NoWakeChargePolicyDecided : 1; /* bit position: 24 */
      /* 0x0610 */ unsigned long NetRateControlActive : 1; /* bit position: 25 */
      /* 0x0610 */ unsigned long OwnNetRateControl : 1; /* bit position: 26 */
      /* 0x0610 */ unsigned long IoRateControlActive : 1; /* bit position: 27 */
      /* 0x0610 */ unsigned long OwnIoRateControl : 1; /* bit position: 28 */
      /* 0x0610 */ unsigned long DisallowNewProcesses : 1; /* bit position: 29 */
      /* 0x0610 */ unsigned long Silo : 1; /* bit position: 30 */
      /* 0x0610 */ unsigned long ContainerTelemetryIdSet : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0614 */ unsigned long JobFlags2;
    struct /* bitfield */
    {
      /* 0x0614 */ unsigned long ParentLocked : 1; /* bit position: 0 */
      /* 0x0614 */ unsigned long EnableUsermodeSiloThreadImpersonation : 1; /* bit position: 1 */
      /* 0x0614 */ unsigned long DisallowUsermodeSiloThreadImpersonation : 1; /* bit position: 2 */
      /* 0x0614 */ unsigned long JobGraphicsFreezeOptimized : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0618 */ struct _PROCESS_EXTENDED_ENERGY_VALUES_V1* EnergyValues;
  /* 0x0620 */ volatile unsigned __int64 SharedCommitCharge;
  /* 0x0628 */ unsigned long DiskIoAttributionUserRefCount;
  /* 0x062c */ unsigned long DiskIoAttributionRefCount;
  union
  {
    /* 0x0630 */ void* DiskIoAttributionContext;
    /* 0x0630 */ struct _EJOB* DiskIoAttributionOwnerJob;
  }; /* size: 0x0008 */
  /* 0x0638 */ struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;
  /* 0x0660 */ struct _PS_IO_CONTROL_ENTRY GlobalIoControl;
  /* 0x0698 */ volatile long IoControlStateLock;
  /* 0x06a0 */ struct _RTL_RB_TREE VolumeIoControlTree;
  /* 0x06b0 */ unsigned __int64 IoRateOverQuotaHistory;
  /* 0x06b8 */ unsigned long IoRateCurrentGeneration;
  /* 0x06bc */ unsigned long IoRateLastQueryGeneration;
  /* 0x06c0 */ unsigned long IoRateGenerationLength;
  /* 0x06c4 */ unsigned long IoRateOverQuotaNotifySequenceId;
  /* 0x06c8 */ unsigned __int64 LastThrottledIoTime;
  /* 0x06d0 */ struct _EX_PUSH_LOCK IoControlLock;
  /* 0x06d8 */ __int64 SiloHardReferenceCount;
  /* 0x06e0 */ struct _WORK_QUEUE_ITEM RundownWorkItem;
  /* 0x0700 */ void* PartitionObject;
  /* 0x0708 */ struct _EJOB* PartitionOwnerJob;
  /* 0x0710 */ union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;
  /* 0x0718 */ unsigned __int64 KernelWaitTime;
  /* 0x0720 */ unsigned __int64 UserWaitTime;
} EJOB, *PEJOB; /* size: 0x0728 */

