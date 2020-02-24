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

typedef union _KWAIT_STATUS_REGISTER
{
  union
  {
    /* 0x0000 */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char State : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned char Affinity : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char Priority : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned char Apc : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned char UserApc : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned char Alert : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} KWAIT_STATUS_REGISTER, *PKWAIT_STATUS_REGISTER; /* size: 0x0001 */

typedef struct _KAPC_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY ApcListHead[2];
  /* 0x0010 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0014 */ unsigned char InProgressFlags;
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned char KernelApcInProgress : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned char SpecialApcInProgress : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0015 */ unsigned char KernelApcPending;
  union
  {
    /* 0x0016 */ unsigned char UserApcPendingAll;
    struct /* bitfield */
    {
      /* 0x0016 */ unsigned char SpecialUserApcPending : 1; /* bit position: 0 */
      /* 0x0016 */ unsigned char UserApcPending : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0017 */ char __PADDING__[1];
} KAPC_STATE, *PKAPC_STATE; /* size: 0x0018 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0008 */ unsigned char WaitType;
  /* 0x0009 */ volatile unsigned char BlockState;
  /* 0x000a */ unsigned short WaitKey;
  union
  {
    /* 0x000c */ struct _KTHREAD* Thread;
    /* 0x000c */ struct _KQUEUE* NotificationQueue;
  }; /* size: 0x0004 */
  /* 0x0010 */ void* Object;
  /* 0x0014 */ void* SparePtr;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0018 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ struct _LIST_ENTRY ApcListEntry;
  union
  {
    struct
    {
      /* 0x0014 */ void* KernelRoutine /* function */;
      /* 0x0018 */ void* RundownRoutine /* function */;
      /* 0x001c */ void* NormalRoutine /* function */;
    }; /* size: 0x000c */
    /* 0x0014 */ void* Reserved[3];
  }; /* size: 0x000c */
  /* 0x0020 */ void* NormalContext;
  /* 0x0024 */ void* SystemArgument1;
  /* 0x0028 */ void* SystemArgument2;
  /* 0x002c */ char ApcStateIndex;
  /* 0x002d */ char ApcMode;
  /* 0x002e */ unsigned char Inserted;
  /* 0x002f */ char __PADDING__[1];
} KAPC, *PKAPC; /* size: 0x0030 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _KTHREAD
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ void* SListFaultAddress;
  /* 0x0018 */ unsigned __int64 QuantumTarget;
  /* 0x0020 */ void* InitialStack;
  /* 0x0024 */ void* volatile StackLimit;
  /* 0x0028 */ void* StackBase;
  /* 0x002c */ unsigned long ThreadLock;
  /* 0x0030 */ volatile unsigned __int64 CycleTime;
  /* 0x0038 */ volatile unsigned long HighCycleTime;
  /* 0x003c */ void* ServiceTable;
  /* 0x0040 */ unsigned long CurrentRunTime;
  /* 0x0044 */ unsigned long ExpectedRunTime;
  /* 0x0048 */ void* KernelStack;
  /* 0x004c */ struct _XSAVE_FORMAT* StateSaveArea;
  /* 0x0050 */ struct _KSCHEDULING_GROUP* volatile SchedulingGroup;
  /* 0x0054 */ union _KWAIT_STATUS_REGISTER WaitRegister;
  /* 0x0055 */ volatile unsigned char Running;
  /* 0x0056 */ unsigned char Alerted[2];
  union
  {
    struct /* bitfield */
    {
      /* 0x0058 */ unsigned long AutoBoostActive : 1; /* bit position: 0 */
      /* 0x0058 */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x0058 */ unsigned long WaitNext : 1; /* bit position: 2 */
      /* 0x0058 */ unsigned long SystemAffinityActive : 1; /* bit position: 3 */
      /* 0x0058 */ unsigned long Alertable : 1; /* bit position: 4 */
      /* 0x0058 */ unsigned long UserStackWalkActive : 1; /* bit position: 5 */
      /* 0x0058 */ unsigned long ApcInterruptRequest : 1; /* bit position: 6 */
      /* 0x0058 */ unsigned long QuantumEndMigrate : 1; /* bit position: 7 */
      /* 0x0058 */ unsigned long UmsDirectedSwitchEnable : 1; /* bit position: 8 */
      /* 0x0058 */ unsigned long TimerActive : 1; /* bit position: 9 */
      /* 0x0058 */ unsigned long SystemThread : 1; /* bit position: 10 */
      /* 0x0058 */ unsigned long ProcessDetachActive : 1; /* bit position: 11 */
      /* 0x0058 */ unsigned long CalloutActive : 1; /* bit position: 12 */
      /* 0x0058 */ unsigned long ScbReadyQueue : 1; /* bit position: 13 */
      /* 0x0058 */ unsigned long ApcQueueable : 1; /* bit position: 14 */
      /* 0x0058 */ unsigned long ReservedStackInUse : 1; /* bit position: 15 */
      /* 0x0058 */ unsigned long UmsPerformingSyscall : 1; /* bit position: 16 */
      /* 0x0058 */ unsigned long TimerSuspended : 1; /* bit position: 17 */
      /* 0x0058 */ unsigned long SuspendedWaitMode : 1; /* bit position: 18 */
      /* 0x0058 */ unsigned long SuspendSchedulerApcWait : 1; /* bit position: 19 */
      /* 0x0058 */ unsigned long CetUserShadowStack : 1; /* bit position: 20 */
      /* 0x0058 */ unsigned long BypassProcessFreeze : 1; /* bit position: 21 */
      /* 0x0058 */ unsigned long Reserved : 10; /* bit position: 22 */
    }; /* bitfield */
    /* 0x0058 */ long MiscFlags;
  }; /* size: 0x0004 */
  union
  {
    struct /* bitfield */
    {
      /* 0x005c */ unsigned long UserIdealProcessorFixed : 1; /* bit position: 0 */
      /* 0x005c */ unsigned long ThreadFlagsSpare : 1; /* bit position: 1 */
      /* 0x005c */ unsigned long AutoAlignment : 1; /* bit position: 2 */
      /* 0x005c */ unsigned long DisableBoost : 1; /* bit position: 3 */
      /* 0x005c */ unsigned long AlertedByThreadId : 1; /* bit position: 4 */
      /* 0x005c */ unsigned long QuantumDonation : 1; /* bit position: 5 */
      /* 0x005c */ unsigned long EnableStackSwap : 1; /* bit position: 6 */
      /* 0x005c */ unsigned long GuiThread : 1; /* bit position: 7 */
      /* 0x005c */ unsigned long DisableQuantum : 1; /* bit position: 8 */
      /* 0x005c */ unsigned long ChargeOnlySchedulingGroup : 1; /* bit position: 9 */
      /* 0x005c */ unsigned long DeferPreemption : 1; /* bit position: 10 */
      /* 0x005c */ unsigned long QueueDeferPreemption : 1; /* bit position: 11 */
      /* 0x005c */ unsigned long ForceDeferSchedule : 1; /* bit position: 12 */
      /* 0x005c */ unsigned long SharedReadyQueueAffinity : 1; /* bit position: 13 */
      /* 0x005c */ unsigned long FreezeCount : 1; /* bit position: 14 */
      /* 0x005c */ unsigned long TerminationApcRequest : 1; /* bit position: 15 */
      /* 0x005c */ unsigned long AutoBoostEntriesExhausted : 1; /* bit position: 16 */
      /* 0x005c */ unsigned long KernelStackResident : 1; /* bit position: 17 */
      /* 0x005c */ unsigned long TerminateRequestReason : 2; /* bit position: 18 */
      /* 0x005c */ unsigned long ProcessStackCountDecremented : 1; /* bit position: 20 */
      /* 0x005c */ unsigned long RestrictedGuiThread : 1; /* bit position: 21 */
      /* 0x005c */ unsigned long VpBackingThread : 1; /* bit position: 22 */
      /* 0x005c */ unsigned long ThreadFlagsSpare2 : 1; /* bit position: 23 */
      /* 0x005c */ unsigned long EtwStackTraceApcInserted : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x005c */ volatile long ThreadFlags;
  }; /* size: 0x0004 */
  /* 0x0060 */ volatile unsigned char Tag;
  /* 0x0061 */ unsigned char SystemHeteroCpuPolicy;
  struct /* bitfield */
  {
    /* 0x0062 */ unsigned char UserHeteroCpuPolicy : 7; /* bit position: 0 */
    /* 0x0062 */ unsigned char ExplicitSystemHeteroCpuPolicy : 1; /* bit position: 7 */
  }; /* bitfield */
  /* 0x0063 */ unsigned char Spare0;
  /* 0x0064 */ unsigned long SystemCallNumber;
  /* 0x0068 */ void* FirstArgument;
  /* 0x006c */ struct _KTRAP_FRAME* TrapFrame;
  union
  {
    /* 0x0070 */ struct _KAPC_STATE ApcState;
    struct
    {
      /* 0x0070 */ unsigned char ApcStateFill[23];
      /* 0x0087 */ char Priority;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0088 */ unsigned long UserIdealProcessor;
  /* 0x008c */ unsigned long ContextSwitches;
  /* 0x0090 */ volatile unsigned char State;
  /* 0x0091 */ char Spare12;
  /* 0x0092 */ unsigned char WaitIrql;
  /* 0x0093 */ char WaitMode;
  /* 0x0094 */ volatile long WaitStatus;
  /* 0x0098 */ struct _KWAIT_BLOCK* WaitBlockList;
  union
  {
    /* 0x009c */ struct _LIST_ENTRY WaitListEntry;
    /* 0x009c */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0008 */
  /* 0x00a4 */ struct _DISPATCHER_HEADER* volatile Queue;
  /* 0x00a8 */ void* Teb;
  /* 0x00b0 */ unsigned __int64 RelativeTimerBias;
  /* 0x00b8 */ struct _KTIMER Timer;
  union
  {
    /* 0x00e0 */ struct _KWAIT_BLOCK WaitBlock[4];
    struct
    {
      /* 0x00e0 */ unsigned char WaitBlockFill8[20];
      /* 0x00f4 */ struct _KTHREAD_COUNTERS* ThreadCounters;
    }; /* size: 0x0018 */
    struct
    {
      /* 0x00e0 */ unsigned char WaitBlockFill9[44];
      /* 0x010c */ struct _XSTATE_SAVE* XStateSave;
    }; /* size: 0x0030 */
    struct
    {
      /* 0x00e0 */ unsigned char WaitBlockFill10[68];
      /* 0x0124 */ void* volatile Win32Thread;
    }; /* size: 0x0048 */
    struct
    {
      /* 0x00e0 */ unsigned char WaitBlockFill11[88];
      /* 0x0138 */ unsigned long WaitTime;
      union
      {
        struct
        {
          /* 0x013c */ short KernelApcDisable;
          /* 0x013e */ short SpecialApcDisable;
        }; /* size: 0x0004 */
        /* 0x013c */ unsigned long CombinedApcDisable;
      }; /* size: 0x0004 */
    }; /* size: 0x0060 */
  }; /* size: 0x0060 */
  /* 0x0140 */ struct _LIST_ENTRY QueueListEntry;
  union
  {
    /* 0x0148 */ volatile unsigned long NextProcessor;
    struct /* bitfield */
    {
      /* 0x0148 */ unsigned long NextProcessorNumber : 31; /* bit position: 0 */
      /* 0x0148 */ unsigned long SharedReadyQueue : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x014c */ long QueuePriority;
  /* 0x0150 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0154 */ struct _GROUP_AFFINITY UserAffinity;
    struct
    {
      /* 0x0154 */ unsigned char UserAffinityFill[6];
      /* 0x015a */ char PreviousMode;
      /* 0x015b */ char BasePriority;
      union
      {
        /* 0x015c */ char PriorityDecrement;
        struct /* bitfield */
        {
          /* 0x015c */ unsigned char ForegroundBoost : 4; /* bit position: 0 */
          /* 0x015c */ unsigned char UnusualBoost : 4; /* bit position: 4 */
        }; /* bitfield */
      }; /* size: 0x0001 */
      /* 0x015d */ unsigned char Preempted;
      /* 0x015e */ unsigned char AdjustReason;
      /* 0x015f */ char AdjustIncrement;
    }; /* size: 0x000c */
  }; /* size: 0x000c */
  /* 0x0160 */ unsigned long AffinityVersion;
  union
  {
    /* 0x0164 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0164 */ unsigned char AffinityFill[6];
      /* 0x016a */ unsigned char ApcStateIndex;
      /* 0x016b */ unsigned char WaitBlockCount;
      /* 0x016c */ unsigned long IdealProcessor;
    }; /* size: 0x000c */
  }; /* size: 0x000c */
  /* 0x0170 */ unsigned long ReadyTime;
  union
  {
    /* 0x0174 */ struct _KAPC_STATE SavedApcState;
    struct
    {
      /* 0x0174 */ unsigned char SavedApcStateFill[23];
      /* 0x018b */ unsigned char WaitReason;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x018c */ char SuspendCount;
  /* 0x018d */ char Saturation;
  /* 0x018e */ unsigned short SListFaultCount;
  union
  {
    /* 0x0190 */ struct _KAPC SchedulerApc;
    struct
    {
      /* 0x0190 */ unsigned char SchedulerApcFill0[1];
      /* 0x0191 */ unsigned char ResourceIndex;
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0190 */ unsigned char SchedulerApcFill1[3];
      /* 0x0193 */ unsigned char QuantumReset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0190 */ unsigned char SchedulerApcFill2[4];
      /* 0x0194 */ unsigned long KernelTime;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0190 */ unsigned char SchedulerApcFill3[36];
      /* 0x01b4 */ struct _KPRCB* volatile WaitPrcb;
    }; /* size: 0x0028 */
    struct
    {
      /* 0x0190 */ unsigned char SchedulerApcFill4[40];
      /* 0x01b8 */ void* LegoData;
    }; /* size: 0x002c */
    struct
    {
      /* 0x0190 */ unsigned char SchedulerApcFill5[47];
      /* 0x01bf */ unsigned char CallbackNestingLevel;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x01c0 */ unsigned long UserTime;
  /* 0x01c4 */ struct _KEVENT SuspendEvent;
  /* 0x01d4 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x01dc */ struct _LIST_ENTRY MutantListHead;
  /* 0x01e4 */ unsigned char AbEntrySummary;
  /* 0x01e5 */ unsigned char AbWaitEntryCount;
  /* 0x01e6 */ unsigned char AbAllocationRegionCount;
  /* 0x01e7 */ char SystemPriority;
  /* 0x01e8 */ struct _KLOCK_ENTRY* LockEntries;
  /* 0x01ec */ struct _SINGLE_LIST_ENTRY PropagateBoostsEntry;
  /* 0x01f0 */ struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;
  /* 0x01f4 */ unsigned char PriorityFloorCounts[16];
  /* 0x0204 */ unsigned char PriorityFloorCountsReserved[16];
  /* 0x0214 */ unsigned long PriorityFloorSummary;
  /* 0x0218 */ volatile long AbCompletedIoBoostCount;
  /* 0x021c */ volatile long AbCompletedIoQoSBoostCount;
  /* 0x0220 */ volatile short KeReferenceCount;
  /* 0x0222 */ unsigned char AbOrphanedEntrySummary;
  /* 0x0223 */ unsigned char AbOwnedEntryCount;
  /* 0x0224 */ unsigned long ForegroundLossTime;
  union
  {
    /* 0x0228 */ struct _LIST_ENTRY GlobalForegroundListEntry;
    struct
    {
      /* 0x0228 */ struct _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;
      /* 0x022c */ unsigned long InGlobalForegroundList;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x0230 */ struct _KSCB* QueuedScb;
  /* 0x0238 */ unsigned __int64 NpxState;
  /* 0x0240 */ volatile unsigned long ThreadTimerDelay;
  union
  {
    /* 0x0244 */ volatile long ThreadFlags3;
    struct /* bitfield */
    {
      /* 0x0244 */ unsigned long BamQosLevel : 8; /* bit position: 0 */
      /* 0x0244 */ unsigned long PpmPolicy : 2; /* bit position: 8 */
      /* 0x0244 */ unsigned long ThreadFlags3Reserved2 : 22; /* bit position: 10 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0248 */ void* volatile AbWaitObject;
  /* 0x024c */ unsigned long ReservedPreviousReadyTimeValue;
  /* 0x0250 */ unsigned __int64 KernelWaitTime;
  /* 0x0258 */ unsigned __int64 UserWaitTime;
  /* 0x0260 */ unsigned long Spare29[3];
  /* 0x026c */ unsigned long EndPadding[5];
} KTHREAD, *PKTHREAD; /* size: 0x0280 */

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

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

typedef union _PS_CLIENT_SECURITY_CONTEXT
{
  union
  {
    /* 0x0000 */ unsigned long ImpersonationData;
    /* 0x0000 */ void* ImpersonationToken;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ImpersonationLevel : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long EffectiveOnly : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PS_CLIENT_SECURITY_CONTEXT, *PPS_CLIENT_SECURITY_CONTEXT; /* size: 0x0004 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

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

typedef struct _PS_PROPERTY_SET
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long Lock;
} PS_PROPERTY_SET, *PPS_PROPERTY_SET; /* size: 0x000c */

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

typedef struct _KLOCK_ENTRY_LOCK_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long CrossThreadReleasable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Busy : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 2 */
      /* 0x0000 */ unsigned long InTree : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x0000 */ void* LockState;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ void* SessionState;
    /* 0x0004 */ unsigned long SessionId;
  }; /* size: 0x0004 */
} KLOCK_ENTRY_LOCK_STATE, *PKLOCK_ENTRY_LOCK_STATE; /* size: 0x0008 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef union _KLOCK_ENTRY_BOOST_BITMAP
{
  union
  {
    /* 0x0000 */ unsigned long AllFields;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AllBoosts : 17; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 15; /* bit position: 17 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned short CpuBoostsBitmap : 15; /* bit position: 0 */
        /* 0x0000 */ unsigned short IoBoost : 1; /* bit position: 15 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned short IoQoSBoost : 1; /* bit position: 0 */
        /* 0x0002 */ unsigned short IoNormalPriorityWaiterCount : 8; /* bit position: 1 */
        /* 0x0002 */ unsigned short IoQoSWaiterCount : 7; /* bit position: 9 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} KLOCK_ENTRY_BOOST_BITMAP, *PKLOCK_ENTRY_BOOST_BITMAP; /* size: 0x0004 */

typedef struct _KLOCK_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE TreeNode;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeListEntry;
  }; /* size: 0x000c */
  union
  {
    /* 0x000c */ unsigned long EntryFlags;
    struct
    {
      /* 0x000c */ unsigned char EntryOffset;
      union
      {
        /* 0x000d */ unsigned char ThreadLocalFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x000d */ unsigned char WaitingBit : 1; /* bit position: 0 */
            /* 0x000d */ unsigned char Spare0 : 7; /* bit position: 1 */
          }; /* bitfield */
          union
          {
            /* 0x000e */ unsigned char AcquiredByte;
            struct
            {
              /* 0x000e */ unsigned char AcquiredBit : 1; /* bit position: 0 */
              union
              {
                /* 0x000f */ unsigned char CrossThreadFlags;
                struct /* bitfield */
                {
                  /* 0x000f */ unsigned char HeadNodeBit : 1; /* bit position: 0 */
                  /* 0x000f */ unsigned char IoPriorityBit : 1; /* bit position: 1 */
                  /* 0x000f */ unsigned char IoQoSWaiter : 1; /* bit position: 2 */
                  /* 0x000f */ unsigned char Spare1 : 5; /* bit position: 3 */
                }; /* bitfield */
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long StaticState : 8; /* bit position: 0 */
      /* 0x000c */ unsigned long AllFlags : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0010 */ struct _KLOCK_ENTRY_LOCK_STATE LockState;
    /* 0x0010 */ void* volatile LockUnsafe;
    struct
    {
      /* 0x0010 */ volatile unsigned char CrossThreadReleasableAndBusyByte;
      /* 0x0011 */ unsigned char Reserved[2];
      /* 0x0013 */ volatile unsigned char InTreeByte;
      union
      {
        /* 0x0014 */ void* SessionState;
        /* 0x0014 */ unsigned long SessionId;
      }; /* size: 0x0004 */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    struct
    {
      /* 0x0018 */ struct _RTL_RB_TREE OwnerTree;
      /* 0x0020 */ struct _RTL_RB_TREE WaiterTree;
    }; /* size: 0x0010 */
    /* 0x0018 */ char CpuPriorityKey;
  }; /* size: 0x0010 */
  /* 0x0028 */ unsigned long EntryLock;
  /* 0x002c */ union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;
} KLOCK_ENTRY, *PKLOCK_ENTRY; /* size: 0x0030 */

typedef struct _ETHREAD
{
  /* 0x0000 */ struct _KTHREAD Tcb;
  /* 0x0280 */ union _LARGE_INTEGER CreateTime;
  union
  {
    /* 0x0288 */ union _LARGE_INTEGER ExitTime;
    /* 0x0288 */ struct _LIST_ENTRY KeyedWaitChain;
  }; /* size: 0x0008 */
  /* 0x0290 */ void* ChargeOnlySession;
  union
  {
    /* 0x0294 */ struct _LIST_ENTRY PostBlockList;
    struct
    {
      /* 0x0294 */ void* ForwardLinkShadow;
      /* 0x0298 */ void* StartAddress;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x029c */ struct _TERMINATION_PORT* TerminationPort;
    /* 0x029c */ struct _ETHREAD* ReaperLink;
    /* 0x029c */ void* KeyedWaitValue;
  }; /* size: 0x0004 */
  /* 0x02a0 */ unsigned long ActiveTimerListLock;
  /* 0x02a4 */ struct _LIST_ENTRY ActiveTimerListHead;
  /* 0x02ac */ struct _CLIENT_ID Cid;
  union
  {
    /* 0x02b4 */ struct _KSEMAPHORE KeyedWaitSemaphore;
    /* 0x02b4 */ struct _KSEMAPHORE AlpcWaitSemaphore;
  }; /* size: 0x0014 */
  /* 0x02c8 */ union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
  /* 0x02cc */ struct _LIST_ENTRY IrpList;
  /* 0x02d4 */ unsigned long TopLevelIrp;
  /* 0x02d8 */ struct _DEVICE_OBJECT* DeviceToVerify;
  /* 0x02dc */ void* Win32StartAddress;
  /* 0x02e0 */ void* LegacyPowerObject;
  /* 0x02e4 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x02ec */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x02f0 */ struct _EX_PUSH_LOCK ThreadLock;
  /* 0x02f4 */ unsigned long ReadClusterSize;
  /* 0x02f8 */ volatile long MmLockOrdering;
  union
  {
    /* 0x02fc */ unsigned long CrossThreadFlags;
    struct /* bitfield */
    {
      /* 0x02fc */ unsigned long Terminated : 1; /* bit position: 0 */
      /* 0x02fc */ unsigned long ThreadInserted : 1; /* bit position: 1 */
      /* 0x02fc */ unsigned long HideFromDebugger : 1; /* bit position: 2 */
      /* 0x02fc */ unsigned long ActiveImpersonationInfo : 1; /* bit position: 3 */
      /* 0x02fc */ unsigned long HardErrorsAreDisabled : 1; /* bit position: 4 */
      /* 0x02fc */ unsigned long BreakOnTermination : 1; /* bit position: 5 */
      /* 0x02fc */ unsigned long SkipCreationMsg : 1; /* bit position: 6 */
      /* 0x02fc */ unsigned long SkipTerminationMsg : 1; /* bit position: 7 */
      /* 0x02fc */ unsigned long CopyTokenOnOpen : 1; /* bit position: 8 */
      /* 0x02fc */ unsigned long ThreadIoPriority : 3; /* bit position: 9 */
      /* 0x02fc */ unsigned long ThreadPagePriority : 3; /* bit position: 12 */
      /* 0x02fc */ unsigned long RundownFail : 1; /* bit position: 15 */
      /* 0x02fc */ unsigned long UmsForceQueueTermination : 1; /* bit position: 16 */
      /* 0x02fc */ unsigned long IndirectCpuSets : 1; /* bit position: 17 */
      /* 0x02fc */ unsigned long DisableDynamicCodeOptOut : 1; /* bit position: 18 */
      /* 0x02fc */ unsigned long ExplicitCaseSensitivity : 1; /* bit position: 19 */
      /* 0x02fc */ unsigned long PicoNotifyExit : 1; /* bit position: 20 */
      /* 0x02fc */ unsigned long DbgWerUserReportActive : 1; /* bit position: 21 */
      /* 0x02fc */ unsigned long ForcedSelfTrimActive : 1; /* bit position: 22 */
      /* 0x02fc */ unsigned long SamplingCoverage : 1; /* bit position: 23 */
      /* 0x02fc */ unsigned long ReservedCrossThreadFlags : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0300 */ unsigned long SameThreadPassiveFlags;
    struct /* bitfield */
    {
      /* 0x0300 */ unsigned long ActiveExWorker : 1; /* bit position: 0 */
      /* 0x0300 */ unsigned long MemoryMaker : 1; /* bit position: 1 */
      /* 0x0300 */ unsigned long StoreLockThread : 2; /* bit position: 2 */
      /* 0x0300 */ unsigned long ClonedThread : 1; /* bit position: 4 */
      /* 0x0300 */ unsigned long KeyedEventInUse : 1; /* bit position: 5 */
      /* 0x0300 */ unsigned long SelfTerminate : 1; /* bit position: 6 */
      /* 0x0300 */ unsigned long RespectIoPriority : 1; /* bit position: 7 */
      /* 0x0300 */ unsigned long ActivePageLists : 1; /* bit position: 8 */
      /* 0x0300 */ unsigned long SecureContext : 1; /* bit position: 9 */
      /* 0x0300 */ unsigned long ZeroPageThread : 1; /* bit position: 10 */
      /* 0x0300 */ unsigned long WorkloadClass : 1; /* bit position: 11 */
      /* 0x0300 */ unsigned long ReservedSameThreadPassiveFlags : 20; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0304 */ unsigned long SameThreadApcFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0304 */ unsigned char OwnsProcessAddressSpaceExclusive : 1; /* bit position: 0 */
        /* 0x0304 */ unsigned char OwnsProcessAddressSpaceShared : 1; /* bit position: 1 */
        /* 0x0304 */ unsigned char HardFaultBehavior : 1; /* bit position: 2 */
        /* 0x0304 */ volatile unsigned char StartAddressInvalid : 1; /* bit position: 3 */
        /* 0x0304 */ unsigned char EtwCalloutActive : 1; /* bit position: 4 */
        /* 0x0304 */ unsigned char SuppressSymbolLoad : 1; /* bit position: 5 */
        /* 0x0304 */ unsigned char Prefetching : 1; /* bit position: 6 */
        /* 0x0304 */ unsigned char OwnsVadExclusive : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0305 */ unsigned char SystemPagePriorityActive : 1; /* bit position: 0 */
        /* 0x0305 */ unsigned char SystemPagePriority : 3; /* bit position: 1 */
        /* 0x0305 */ unsigned char AllowUserWritesToExecutableMemory : 1; /* bit position: 4 */
        /* 0x0305 */ unsigned char AllowKernelWritesToExecutableMemory : 1; /* bit position: 5 */
        /* 0x0305 */ unsigned char OwnsVadShared : 1; /* bit position: 6 */
        /* 0x0305 */ unsigned char SessionAttachActive : 1; /* bit position: 7 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  }; /* size: 0x0004 */
  /* 0x0308 */ unsigned char CacheManagerActive;
  /* 0x0309 */ unsigned char DisablePageFaultClustering;
  /* 0x030a */ unsigned char ActiveFaultCount;
  /* 0x030b */ unsigned char LockOrderState;
  /* 0x030c */ unsigned long PerformanceCountLowReserved;
  /* 0x0310 */ long PerformanceCountHighReserved;
  /* 0x0314 */ unsigned long AlpcMessageId;
  union
  {
    /* 0x0318 */ void* AlpcMessage;
    /* 0x0318 */ unsigned long AlpcReceiveAttributeSet;
  }; /* size: 0x0004 */
  /* 0x031c */ struct _LIST_ENTRY AlpcWaitListEntry;
  /* 0x0324 */ long ExitStatus;
  /* 0x0328 */ unsigned long CacheManagerCount;
  /* 0x032c */ unsigned long IoBoostCount;
  /* 0x0330 */ unsigned long IoQoSBoostCount;
  /* 0x0334 */ unsigned long IoQoSThrottleCount;
  /* 0x0338 */ unsigned long KernelStackReference;
  /* 0x033c */ struct _LIST_ENTRY BoostList;
  /* 0x0344 */ struct _LIST_ENTRY DeboostList;
  /* 0x034c */ unsigned long BoostListLock;
  /* 0x0350 */ unsigned long IrpListLock;
  /* 0x0354 */ void* ReservedForSynchTracking;
  /* 0x0358 */ struct _SINGLE_LIST_ENTRY CmCallbackListHead;
  /* 0x035c */ const struct _GUID* ActivityId;
  /* 0x0360 */ struct _SINGLE_LIST_ENTRY SeLearningModeListHead;
  /* 0x0364 */ void* VerifierContext;
  /* 0x0368 */ void* AdjustedClientToken;
  /* 0x036c */ void* WorkOnBehalfThread;
  /* 0x0370 */ struct _PS_PROPERTY_SET PropertySet;
  /* 0x037c */ void* PicoContext;
  /* 0x0380 */ unsigned long UserFsBase;
  /* 0x0384 */ unsigned long UserGsBase;
  /* 0x0388 */ struct _THREAD_ENERGY_VALUES* EnergyValues;
  union
  {
    /* 0x038c */ unsigned long SelectedCpuSets;
    /* 0x038c */ unsigned long* SelectedCpuSetsIndirect;
  }; /* size: 0x0004 */
  /* 0x0390 */ struct _EJOB* Silo;
  /* 0x0394 */ struct _UNICODE_STRING* ThreadName;
  /* 0x0398 */ void* SparePointer;
  /* 0x039c */ unsigned long LastExpectedRunTime;
  /* 0x03a0 */ unsigned long HeapData;
  /* 0x03a4 */ struct _LIST_ENTRY OwnerEntryListHead;
  /* 0x03ac */ unsigned long DisownedOwnerEntryListLock;
  /* 0x03b0 */ struct _LIST_ENTRY DisownedOwnerEntryListHead;
  /* 0x03b8 */ struct _KLOCK_ENTRY LockEntries[6];
  /* 0x04d8 */ void* CmDbgInfo;
  /* 0x04dc */ long __PADDING__[1];
} ETHREAD, *PETHREAD; /* size: 0x04e0 */

