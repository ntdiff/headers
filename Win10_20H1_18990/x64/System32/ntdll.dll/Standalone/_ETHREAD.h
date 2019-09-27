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
  /* 0x0020 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0028 */ unsigned char InProgressFlags;
    struct /* bitfield */
    {
      /* 0x0028 */ unsigned char KernelApcInProgress : 1; /* bit position: 0 */
      /* 0x0028 */ unsigned char SpecialApcInProgress : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0029 */ unsigned char KernelApcPending;
  union
  {
    /* 0x002a */ unsigned char UserApcPendingAll;
    struct /* bitfield */
    {
      /* 0x002a */ unsigned char SpecialUserApcPending : 1; /* bit position: 0 */
      /* 0x002a */ unsigned char UserApcPending : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x002b */ char __PADDING__[5];
} KAPC_STATE, *PKAPC_STATE; /* size: 0x0030 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0010 */ unsigned char WaitType;
  /* 0x0011 */ volatile unsigned char BlockState;
  /* 0x0012 */ unsigned short WaitKey;
  /* 0x0014 */ long SpareLong;
  union
  {
    /* 0x0018 */ struct _KTHREAD* Thread;
    /* 0x0018 */ struct _KQUEUE* NotificationQueue;
  }; /* size: 0x0008 */
  /* 0x0020 */ void* Object;
  /* 0x0028 */ void* SparePtr;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0030 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x0010 */ struct _LIST_ENTRY ApcListEntry;
  union
  {
    struct
    {
      /* 0x0020 */ void* KernelRoutine /* function */;
      /* 0x0028 */ void* RundownRoutine /* function */;
      /* 0x0030 */ void* NormalRoutine /* function */;
    }; /* size: 0x0018 */
    /* 0x0020 */ void* Reserved[3];
  }; /* size: 0x0018 */
  /* 0x0038 */ void* NormalContext;
  /* 0x0040 */ void* SystemArgument1;
  /* 0x0048 */ void* SystemArgument2;
  /* 0x0050 */ char ApcStateIndex;
  /* 0x0051 */ char ApcMode;
  /* 0x0052 */ unsigned char Inserted;
  /* 0x0053 */ char __PADDING__[5];
} KAPC, *PKAPC; /* size: 0x0058 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _KTHREAD
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ void* SListFaultAddress;
  /* 0x0020 */ unsigned __int64 QuantumTarget;
  /* 0x0028 */ void* InitialStack;
  /* 0x0030 */ void* volatile StackLimit;
  /* 0x0038 */ void* StackBase;
  /* 0x0040 */ unsigned __int64 ThreadLock;
  /* 0x0048 */ volatile unsigned __int64 CycleTime;
  /* 0x0050 */ unsigned long CurrentRunTime;
  /* 0x0054 */ unsigned long ExpectedRunTime;
  /* 0x0058 */ void* KernelStack;
  /* 0x0060 */ struct _XSAVE_FORMAT* StateSaveArea;
  /* 0x0068 */ struct _KSCHEDULING_GROUP* volatile SchedulingGroup;
  /* 0x0070 */ union _KWAIT_STATUS_REGISTER WaitRegister;
  /* 0x0071 */ volatile unsigned char Running;
  /* 0x0072 */ unsigned char Alerted[2];
  union
  {
    struct /* bitfield */
    {
      /* 0x0074 */ unsigned long AutoBoostActive : 1; /* bit position: 0 */
      /* 0x0074 */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x0074 */ unsigned long WaitNext : 1; /* bit position: 2 */
      /* 0x0074 */ unsigned long SystemAffinityActive : 1; /* bit position: 3 */
      /* 0x0074 */ unsigned long Alertable : 1; /* bit position: 4 */
      /* 0x0074 */ unsigned long UserStackWalkActive : 1; /* bit position: 5 */
      /* 0x0074 */ unsigned long ApcInterruptRequest : 1; /* bit position: 6 */
      /* 0x0074 */ unsigned long QuantumEndMigrate : 1; /* bit position: 7 */
      /* 0x0074 */ unsigned long UmsDirectedSwitchEnable : 1; /* bit position: 8 */
      /* 0x0074 */ unsigned long TimerActive : 1; /* bit position: 9 */
      /* 0x0074 */ unsigned long SystemThread : 1; /* bit position: 10 */
      /* 0x0074 */ unsigned long ProcessDetachActive : 1; /* bit position: 11 */
      /* 0x0074 */ unsigned long CalloutActive : 1; /* bit position: 12 */
      /* 0x0074 */ unsigned long ScbReadyQueue : 1; /* bit position: 13 */
      /* 0x0074 */ unsigned long ApcQueueable : 1; /* bit position: 14 */
      /* 0x0074 */ unsigned long ReservedStackInUse : 1; /* bit position: 15 */
      /* 0x0074 */ unsigned long UmsPerformingSyscall : 1; /* bit position: 16 */
      /* 0x0074 */ unsigned long TimerSuspended : 1; /* bit position: 17 */
      /* 0x0074 */ unsigned long SuspendedWaitMode : 1; /* bit position: 18 */
      /* 0x0074 */ unsigned long SuspendSchedulerApcWait : 1; /* bit position: 19 */
      /* 0x0074 */ unsigned long CetUserShadowStack : 1; /* bit position: 20 */
      /* 0x0074 */ unsigned long BypassProcessFreeze : 1; /* bit position: 21 */
      /* 0x0074 */ unsigned long Reserved : 10; /* bit position: 22 */
    }; /* bitfield */
    /* 0x0074 */ long MiscFlags;
  }; /* size: 0x0004 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0078 */ unsigned long ThreadFlagsSpare : 2; /* bit position: 0 */
      /* 0x0078 */ unsigned long AutoAlignment : 1; /* bit position: 2 */
      /* 0x0078 */ unsigned long DisableBoost : 1; /* bit position: 3 */
      /* 0x0078 */ unsigned long AlertedByThreadId : 1; /* bit position: 4 */
      /* 0x0078 */ unsigned long QuantumDonation : 1; /* bit position: 5 */
      /* 0x0078 */ unsigned long EnableStackSwap : 1; /* bit position: 6 */
      /* 0x0078 */ unsigned long GuiThread : 1; /* bit position: 7 */
      /* 0x0078 */ unsigned long DisableQuantum : 1; /* bit position: 8 */
      /* 0x0078 */ unsigned long ChargeOnlySchedulingGroup : 1; /* bit position: 9 */
      /* 0x0078 */ unsigned long DeferPreemption : 1; /* bit position: 10 */
      /* 0x0078 */ unsigned long QueueDeferPreemption : 1; /* bit position: 11 */
      /* 0x0078 */ unsigned long ForceDeferSchedule : 1; /* bit position: 12 */
      /* 0x0078 */ unsigned long SharedReadyQueueAffinity : 1; /* bit position: 13 */
      /* 0x0078 */ unsigned long FreezeCount : 1; /* bit position: 14 */
      /* 0x0078 */ unsigned long TerminationApcRequest : 1; /* bit position: 15 */
      /* 0x0078 */ unsigned long AutoBoostEntriesExhausted : 1; /* bit position: 16 */
      /* 0x0078 */ unsigned long KernelStackResident : 1; /* bit position: 17 */
      /* 0x0078 */ unsigned long TerminateRequestReason : 2; /* bit position: 18 */
      /* 0x0078 */ unsigned long ProcessStackCountDecremented : 1; /* bit position: 20 */
      /* 0x0078 */ unsigned long RestrictedGuiThread : 1; /* bit position: 21 */
      /* 0x0078 */ unsigned long VpBackingThread : 1; /* bit position: 22 */
      /* 0x0078 */ unsigned long ThreadFlagsSpare2 : 1; /* bit position: 23 */
      /* 0x0078 */ unsigned long EtwStackTraceApcInserted : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x0078 */ volatile long ThreadFlags;
  }; /* size: 0x0004 */
  /* 0x007c */ volatile unsigned char Tag;
  /* 0x007d */ unsigned char SystemHeteroCpuPolicy;
  struct /* bitfield */
  {
    /* 0x007e */ unsigned char UserHeteroCpuPolicy : 7; /* bit position: 0 */
    /* 0x007e */ unsigned char ExplicitSystemHeteroCpuPolicy : 1; /* bit position: 7 */
  }; /* bitfield */
  /* 0x007f */ unsigned char Spare0;
  /* 0x0080 */ unsigned long SystemCallNumber;
  /* 0x0084 */ unsigned long ReadyTime;
  /* 0x0088 */ void* FirstArgument;
  /* 0x0090 */ struct _KTRAP_FRAME* TrapFrame;
  union
  {
    /* 0x0098 */ struct _KAPC_STATE ApcState;
    struct
    {
      /* 0x0098 */ unsigned char ApcStateFill[43];
      /* 0x00c3 */ char Priority;
      /* 0x00c4 */ unsigned long UserIdealProcessor;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x00c8 */ volatile __int64 WaitStatus;
  /* 0x00d0 */ struct _KWAIT_BLOCK* WaitBlockList;
  union
  {
    /* 0x00d8 */ struct _LIST_ENTRY WaitListEntry;
    /* 0x00d8 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0010 */
  /* 0x00e8 */ struct _DISPATCHER_HEADER* volatile Queue;
  /* 0x00f0 */ void* Teb;
  /* 0x00f8 */ unsigned __int64 RelativeTimerBias;
  /* 0x0100 */ struct _KTIMER Timer;
  union
  {
    /* 0x0140 */ struct _KWAIT_BLOCK WaitBlock[4];
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill4[20];
      /* 0x0154 */ unsigned long ContextSwitches;
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill5[68];
      /* 0x0184 */ volatile unsigned char State;
      /* 0x0185 */ char Spare13;
      /* 0x0186 */ unsigned char WaitIrql;
      /* 0x0187 */ char WaitMode;
    }; /* size: 0x0048 */
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill6[116];
      /* 0x01b4 */ unsigned long WaitTime;
    }; /* size: 0x0078 */
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill7[164];
      union
      {
        struct
        {
          /* 0x01e4 */ short KernelApcDisable;
          /* 0x01e6 */ short SpecialApcDisable;
        }; /* size: 0x0004 */
        /* 0x01e4 */ unsigned long CombinedApcDisable;
      }; /* size: 0x0004 */
    }; /* size: 0x00a8 */
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill8[40];
      /* 0x0168 */ struct _KTHREAD_COUNTERS* ThreadCounters;
    }; /* size: 0x0030 */
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill9[88];
      /* 0x0198 */ struct _XSTATE_SAVE* XStateSave;
    }; /* size: 0x0060 */
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill10[136];
      /* 0x01c8 */ void* volatile Win32Thread;
    }; /* size: 0x0090 */
    struct
    {
      /* 0x0140 */ unsigned char WaitBlockFill11[176];
      /* 0x01f0 */ struct _UMS_CONTROL_BLOCK* Ucb;
      /* 0x01f8 */ struct _KUMS_CONTEXT_HEADER* volatile Uch;
    }; /* size: 0x00c0 */
  }; /* size: 0x00c0 */
  union
  {
    /* 0x0200 */ volatile long ThreadFlags2;
    struct /* bitfield */
    {
      /* 0x0200 */ unsigned long BamQosLevel : 8; /* bit position: 0 */
      /* 0x0200 */ unsigned long ThreadFlags2Reserved : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0204 */ unsigned long Spare21;
  /* 0x0208 */ struct _LIST_ENTRY QueueListEntry;
  union
  {
    /* 0x0218 */ volatile unsigned long NextProcessor;
    struct /* bitfield */
    {
      /* 0x0218 */ unsigned long NextProcessorNumber : 31; /* bit position: 0 */
      /* 0x0218 */ unsigned long SharedReadyQueue : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x021c */ long QueuePriority;
  /* 0x0220 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0228 */ struct _GROUP_AFFINITY UserAffinity;
    struct
    {
      /* 0x0228 */ unsigned char UserAffinityFill[10];
      /* 0x0232 */ char PreviousMode;
      /* 0x0233 */ char BasePriority;
      union
      {
        /* 0x0234 */ char PriorityDecrement;
        struct /* bitfield */
        {
          /* 0x0234 */ unsigned char ForegroundBoost : 4; /* bit position: 0 */
          /* 0x0234 */ unsigned char UnusualBoost : 4; /* bit position: 4 */
        }; /* bitfield */
      }; /* size: 0x0001 */
      /* 0x0235 */ unsigned char Preempted;
      /* 0x0236 */ unsigned char AdjustReason;
      /* 0x0237 */ char AdjustIncrement;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0238 */ unsigned __int64 AffinityVersion;
  union
  {
    /* 0x0240 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0240 */ unsigned char AffinityFill[10];
      /* 0x024a */ unsigned char ApcStateIndex;
      /* 0x024b */ unsigned char WaitBlockCount;
      /* 0x024c */ unsigned long IdealProcessor;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0250 */ unsigned __int64 NpxState;
  union
  {
    /* 0x0258 */ struct _KAPC_STATE SavedApcState;
    struct
    {
      /* 0x0258 */ unsigned char SavedApcStateFill[43];
      /* 0x0283 */ unsigned char WaitReason;
      /* 0x0284 */ char SuspendCount;
      /* 0x0285 */ char Saturation;
      /* 0x0286 */ unsigned short SListFaultCount;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  union
  {
    /* 0x0288 */ struct _KAPC SchedulerApc;
    struct
    {
      /* 0x0288 */ unsigned char SchedulerApcFill0[1];
      /* 0x0289 */ unsigned char ResourceIndex;
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0288 */ unsigned char SchedulerApcFill1[3];
      /* 0x028b */ unsigned char QuantumReset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0288 */ unsigned char SchedulerApcFill2[4];
      /* 0x028c */ unsigned long KernelTime;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0288 */ unsigned char SchedulerApcFill3[64];
      /* 0x02c8 */ struct _KPRCB* volatile WaitPrcb;
    }; /* size: 0x0048 */
    struct
    {
      /* 0x0288 */ unsigned char SchedulerApcFill4[72];
      /* 0x02d0 */ void* LegoData;
    }; /* size: 0x0050 */
    struct
    {
      /* 0x0288 */ unsigned char SchedulerApcFill5[83];
      /* 0x02db */ unsigned char CallbackNestingLevel;
      /* 0x02dc */ unsigned long UserTime;
    }; /* size: 0x0058 */
  }; /* size: 0x0058 */
  /* 0x02e0 */ struct _KEVENT SuspendEvent;
  /* 0x02f8 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0308 */ struct _LIST_ENTRY MutantListHead;
  /* 0x0318 */ unsigned char AbEntrySummary;
  /* 0x0319 */ unsigned char AbWaitEntryCount;
  /* 0x031a */ unsigned char AbAllocationRegionCount;
  /* 0x031b */ char SystemPriority;
  /* 0x031c */ unsigned long SecureThreadCookie;
  /* 0x0320 */ struct _KLOCK_ENTRY* LockEntries;
  /* 0x0328 */ struct _SINGLE_LIST_ENTRY PropagateBoostsEntry;
  /* 0x0330 */ struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;
  /* 0x0338 */ unsigned char PriorityFloorCounts[16];
  /* 0x0348 */ unsigned char PriorityFloorCountsReserved[16];
  /* 0x0358 */ unsigned long PriorityFloorSummary;
  /* 0x035c */ volatile long AbCompletedIoBoostCount;
  /* 0x0360 */ volatile long AbCompletedIoQoSBoostCount;
  /* 0x0364 */ volatile short KeReferenceCount;
  /* 0x0366 */ unsigned char AbOrphanedEntrySummary;
  /* 0x0367 */ unsigned char AbOwnedEntryCount;
  /* 0x0368 */ unsigned long ForegroundLossTime;
  union
  {
    /* 0x0370 */ struct _LIST_ENTRY GlobalForegroundListEntry;
    struct
    {
      /* 0x0370 */ struct _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;
      /* 0x0378 */ unsigned __int64 InGlobalForegroundList;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0380 */ __int64 ReadOperationCount;
  /* 0x0388 */ __int64 WriteOperationCount;
  /* 0x0390 */ __int64 OtherOperationCount;
  /* 0x0398 */ __int64 ReadTransferCount;
  /* 0x03a0 */ __int64 WriteTransferCount;
  /* 0x03a8 */ __int64 OtherTransferCount;
  /* 0x03b0 */ struct _KSCB* QueuedScb;
  /* 0x03b8 */ volatile unsigned long ThreadTimerDelay;
  union
  {
    /* 0x03bc */ volatile long ThreadFlags3;
    struct /* bitfield */
    {
      /* 0x03bc */ unsigned long ThreadFlags3Reserved : 8; /* bit position: 0 */
      /* 0x03bc */ unsigned long PpmPolicy : 2; /* bit position: 8 */
      /* 0x03bc */ unsigned long ThreadFlags3Reserved2 : 22; /* bit position: 10 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x03c0 */ unsigned __int64 TracingPrivate[1];
  /* 0x03c8 */ void* SchedulerAssist;
  /* 0x03d0 */ void* volatile AbWaitObject;
  /* 0x03d8 */ unsigned long ReservedPreviousReadyTimeValue;
  /* 0x03e0 */ unsigned __int64 KernelWaitTime;
  /* 0x03e8 */ unsigned __int64 UserWaitTime;
  union
  {
    /* 0x03f0 */ struct _LIST_ENTRY GlobalUpdateVpThreadPriorityListEntry;
    struct
    {
      /* 0x03f0 */ struct _SINGLE_LIST_ENTRY UpdateVpThreadPriorityDpcStackListEntry;
      /* 0x03f8 */ unsigned __int64 InGlobalUpdateVpThreadPriorityList;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0400 */ long SchedulerAssistPriorityFloor;
  /* 0x0404 */ unsigned long Spare28;
  /* 0x0408 */ unsigned __int64 EndPadding[5];
} KTHREAD, *PKTHREAD; /* size: 0x0430 */

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
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ long Limit;
  /* 0x001c */ long __PADDING__[1];
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0020 */

typedef union _PS_CLIENT_SECURITY_CONTEXT
{
  union
  {
    /* 0x0000 */ unsigned __int64 ImpersonationData;
    /* 0x0000 */ void* ImpersonationToken;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ImpersonationLevel : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 EffectiveOnly : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} PS_CLIENT_SECURITY_CONTEXT, *PPS_CLIENT_SECURITY_CONTEXT; /* size: 0x0008 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

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

typedef struct _PS_PROPERTY_SET
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ unsigned __int64 Lock;
} PS_PROPERTY_SET, *PPS_PROPERTY_SET; /* size: 0x0018 */

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

typedef struct _KLOCK_ENTRY_LOCK_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 CrossThreadReleasable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Busy : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Reserved : 61; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 InTree : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ void* LockState;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ void* SessionState;
    struct
    {
      /* 0x0008 */ unsigned long SessionId;
      /* 0x000c */ unsigned long SessionPad;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} KLOCK_ENTRY_LOCK_STATE, *PKLOCK_ENTRY_LOCK_STATE; /* size: 0x0010 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

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
  }; /* size: 0x0018 */
  union
  {
    /* 0x0018 */ unsigned long EntryFlags;
    struct
    {
      /* 0x0018 */ unsigned char EntryOffset;
      union
      {
        /* 0x0019 */ unsigned char ThreadLocalFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0019 */ unsigned char WaitingBit : 1; /* bit position: 0 */
            /* 0x0019 */ unsigned char Spare0 : 7; /* bit position: 1 */
          }; /* bitfield */
          union
          {
            /* 0x001a */ unsigned char AcquiredByte;
            struct
            {
              /* 0x001a */ unsigned char AcquiredBit : 1; /* bit position: 0 */
              union
              {
                /* 0x001b */ unsigned char CrossThreadFlags;
                struct /* bitfield */
                {
                  /* 0x001b */ unsigned char HeadNodeBit : 1; /* bit position: 0 */
                  /* 0x001b */ unsigned char IoPriorityBit : 1; /* bit position: 1 */
                  /* 0x001b */ unsigned char IoQoSWaiter : 1; /* bit position: 2 */
                  /* 0x001b */ unsigned char Spare1 : 5; /* bit position: 3 */
                }; /* bitfield */
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x0018 */ unsigned long StaticState : 8; /* bit position: 0 */
      /* 0x0018 */ unsigned long AllFlags : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long SpareFlags;
  union
  {
    /* 0x0020 */ struct _KLOCK_ENTRY_LOCK_STATE LockState;
    /* 0x0020 */ void* volatile LockUnsafe;
    struct
    {
      /* 0x0020 */ volatile unsigned char CrossThreadReleasableAndBusyByte;
      /* 0x0021 */ unsigned char Reserved[6];
      /* 0x0027 */ volatile unsigned char InTreeByte;
      union
      {
        /* 0x0028 */ void* SessionState;
        struct
        {
          /* 0x0028 */ unsigned long SessionId;
          /* 0x002c */ unsigned long SessionPad;
        }; /* size: 0x0008 */
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    struct
    {
      /* 0x0030 */ struct _RTL_RB_TREE OwnerTree;
      /* 0x0040 */ struct _RTL_RB_TREE WaiterTree;
    }; /* size: 0x0020 */
    /* 0x0030 */ char CpuPriorityKey;
  }; /* size: 0x0020 */
  /* 0x0050 */ unsigned __int64 EntryLock;
  /* 0x0058 */ union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;
  /* 0x005c */ unsigned long SparePad;
} KLOCK_ENTRY, *PKLOCK_ENTRY; /* size: 0x0060 */

typedef struct _ETHREAD
{
  /* 0x0000 */ struct _KTHREAD Tcb;
  /* 0x0430 */ union _LARGE_INTEGER CreateTime;
  union
  {
    /* 0x0438 */ union _LARGE_INTEGER ExitTime;
    /* 0x0438 */ struct _LIST_ENTRY KeyedWaitChain;
  }; /* size: 0x0010 */
  union
  {
    /* 0x0448 */ struct _LIST_ENTRY PostBlockList;
    struct
    {
      /* 0x0448 */ void* ForwardLinkShadow;
      /* 0x0450 */ void* StartAddress;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0458 */ struct _TERMINATION_PORT* TerminationPort;
    /* 0x0458 */ struct _ETHREAD* ReaperLink;
    /* 0x0458 */ void* KeyedWaitValue;
  }; /* size: 0x0008 */
  /* 0x0460 */ unsigned __int64 ActiveTimerListLock;
  /* 0x0468 */ struct _LIST_ENTRY ActiveTimerListHead;
  /* 0x0478 */ struct _CLIENT_ID Cid;
  union
  {
    /* 0x0488 */ struct _KSEMAPHORE KeyedWaitSemaphore;
    /* 0x0488 */ struct _KSEMAPHORE AlpcWaitSemaphore;
  }; /* size: 0x0020 */
  /* 0x04a8 */ union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
  /* 0x04b0 */ struct _LIST_ENTRY IrpList;
  /* 0x04c0 */ unsigned __int64 TopLevelIrp;
  /* 0x04c8 */ struct _DEVICE_OBJECT* DeviceToVerify;
  /* 0x04d0 */ void* Win32StartAddress;
  /* 0x04d8 */ void* ChargeOnlySession;
  /* 0x04e0 */ void* LegacyPowerObject;
  /* 0x04e8 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x04f8 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x0500 */ struct _EX_PUSH_LOCK ThreadLock;
  /* 0x0508 */ unsigned long ReadClusterSize;
  /* 0x050c */ volatile long MmLockOrdering;
  union
  {
    /* 0x0510 */ unsigned long CrossThreadFlags;
    struct /* bitfield */
    {
      /* 0x0510 */ unsigned long Terminated : 1; /* bit position: 0 */
      /* 0x0510 */ unsigned long ThreadInserted : 1; /* bit position: 1 */
      /* 0x0510 */ unsigned long HideFromDebugger : 1; /* bit position: 2 */
      /* 0x0510 */ unsigned long ActiveImpersonationInfo : 1; /* bit position: 3 */
      /* 0x0510 */ unsigned long HardErrorsAreDisabled : 1; /* bit position: 4 */
      /* 0x0510 */ unsigned long BreakOnTermination : 1; /* bit position: 5 */
      /* 0x0510 */ unsigned long SkipCreationMsg : 1; /* bit position: 6 */
      /* 0x0510 */ unsigned long SkipTerminationMsg : 1; /* bit position: 7 */
      /* 0x0510 */ unsigned long CopyTokenOnOpen : 1; /* bit position: 8 */
      /* 0x0510 */ unsigned long ThreadIoPriority : 3; /* bit position: 9 */
      /* 0x0510 */ unsigned long ThreadPagePriority : 3; /* bit position: 12 */
      /* 0x0510 */ unsigned long RundownFail : 1; /* bit position: 15 */
      /* 0x0510 */ unsigned long UmsForceQueueTermination : 1; /* bit position: 16 */
      /* 0x0510 */ unsigned long IndirectCpuSets : 1; /* bit position: 17 */
      /* 0x0510 */ unsigned long DisableDynamicCodeOptOut : 1; /* bit position: 18 */
      /* 0x0510 */ unsigned long ExplicitCaseSensitivity : 1; /* bit position: 19 */
      /* 0x0510 */ unsigned long PicoNotifyExit : 1; /* bit position: 20 */
      /* 0x0510 */ unsigned long DbgWerUserReportActive : 1; /* bit position: 21 */
      /* 0x0510 */ unsigned long ForcedSelfTrimActive : 1; /* bit position: 22 */
      /* 0x0510 */ unsigned long SamplingCoverage : 1; /* bit position: 23 */
      /* 0x0510 */ unsigned long ReservedCrossThreadFlags : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0514 */ unsigned long SameThreadPassiveFlags;
    struct /* bitfield */
    {
      /* 0x0514 */ unsigned long ActiveExWorker : 1; /* bit position: 0 */
      /* 0x0514 */ unsigned long MemoryMaker : 1; /* bit position: 1 */
      /* 0x0514 */ unsigned long StoreLockThread : 2; /* bit position: 2 */
      /* 0x0514 */ unsigned long ClonedThread : 1; /* bit position: 4 */
      /* 0x0514 */ unsigned long KeyedEventInUse : 1; /* bit position: 5 */
      /* 0x0514 */ unsigned long SelfTerminate : 1; /* bit position: 6 */
      /* 0x0514 */ unsigned long RespectIoPriority : 1; /* bit position: 7 */
      /* 0x0514 */ unsigned long ActivePageLists : 1; /* bit position: 8 */
      /* 0x0514 */ unsigned long SecureContext : 1; /* bit position: 9 */
      /* 0x0514 */ unsigned long ZeroPageThread : 1; /* bit position: 10 */
      /* 0x0514 */ unsigned long WorkloadClass : 1; /* bit position: 11 */
      /* 0x0514 */ unsigned long ReservedSameThreadPassiveFlags : 20; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0518 */ unsigned long SameThreadApcFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0518 */ unsigned char OwnsProcessAddressSpaceExclusive : 1; /* bit position: 0 */
        /* 0x0518 */ unsigned char OwnsProcessAddressSpaceShared : 1; /* bit position: 1 */
        /* 0x0518 */ unsigned char HardFaultBehavior : 1; /* bit position: 2 */
        /* 0x0518 */ volatile unsigned char StartAddressInvalid : 1; /* bit position: 3 */
        /* 0x0518 */ unsigned char EtwCalloutActive : 1; /* bit position: 4 */
        /* 0x0518 */ unsigned char SuppressSymbolLoad : 1; /* bit position: 5 */
        /* 0x0518 */ unsigned char Prefetching : 1; /* bit position: 6 */
        /* 0x0518 */ unsigned char OwnsVadExclusive : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0519 */ unsigned char SystemPagePriorityActive : 1; /* bit position: 0 */
        /* 0x0519 */ unsigned char SystemPagePriority : 3; /* bit position: 1 */
        /* 0x0519 */ unsigned char AllowUserWritesToExecutableMemory : 1; /* bit position: 4 */
        /* 0x0519 */ unsigned char AllowKernelWritesToExecutableMemory : 1; /* bit position: 5 */
        /* 0x0519 */ unsigned char OwnsVadShared : 1; /* bit position: 6 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  }; /* size: 0x0004 */
  /* 0x051c */ unsigned char CacheManagerActive;
  /* 0x051d */ unsigned char DisablePageFaultClustering;
  /* 0x051e */ unsigned char ActiveFaultCount;
  /* 0x051f */ unsigned char LockOrderState;
  /* 0x0520 */ unsigned long PerformanceCountLowReserved;
  /* 0x0524 */ long PerformanceCountHighReserved;
  /* 0x0528 */ unsigned __int64 AlpcMessageId;
  union
  {
    /* 0x0530 */ void* AlpcMessage;
    /* 0x0530 */ unsigned long AlpcReceiveAttributeSet;
  }; /* size: 0x0008 */
  /* 0x0538 */ struct _LIST_ENTRY AlpcWaitListEntry;
  /* 0x0548 */ long ExitStatus;
  /* 0x054c */ unsigned long CacheManagerCount;
  /* 0x0550 */ unsigned long IoBoostCount;
  /* 0x0554 */ unsigned long IoQoSBoostCount;
  /* 0x0558 */ unsigned long IoQoSThrottleCount;
  /* 0x055c */ unsigned long KernelStackReference;
  /* 0x0560 */ struct _LIST_ENTRY BoostList;
  /* 0x0570 */ struct _LIST_ENTRY DeboostList;
  /* 0x0580 */ unsigned __int64 BoostListLock;
  /* 0x0588 */ unsigned __int64 IrpListLock;
  /* 0x0590 */ void* ReservedForSynchTracking;
  /* 0x0598 */ struct _SINGLE_LIST_ENTRY CmCallbackListHead;
  /* 0x05a0 */ const struct _GUID* ActivityId;
  /* 0x05a8 */ struct _SINGLE_LIST_ENTRY SeLearningModeListHead;
  /* 0x05b0 */ void* VerifierContext;
  /* 0x05b8 */ void* AdjustedClientToken;
  /* 0x05c0 */ void* WorkOnBehalfThread;
  /* 0x05c8 */ struct _PS_PROPERTY_SET PropertySet;
  /* 0x05e0 */ void* PicoContext;
  /* 0x05e8 */ unsigned __int64 UserFsBase;
  /* 0x05f0 */ unsigned __int64 UserGsBase;
  /* 0x05f8 */ struct _THREAD_ENERGY_VALUES* EnergyValues;
  union
  {
    /* 0x0600 */ unsigned __int64 SelectedCpuSets;
    /* 0x0600 */ unsigned __int64* SelectedCpuSetsIndirect;
  }; /* size: 0x0008 */
  /* 0x0608 */ struct _EJOB* Silo;
  /* 0x0610 */ struct _UNICODE_STRING* ThreadName;
  /* 0x0618 */ struct _CONTEXT* SetContextState;
  /* 0x0620 */ unsigned long LastExpectedRunTime;
  /* 0x0624 */ unsigned long HeapData;
  /* 0x0628 */ struct _LIST_ENTRY OwnerEntryListHead;
  /* 0x0638 */ unsigned __int64 DisownedOwnerEntryListLock;
  /* 0x0640 */ struct _LIST_ENTRY DisownedOwnerEntryListHead;
  /* 0x0650 */ struct _KLOCK_ENTRY LockEntries[6];
  /* 0x0890 */ void* CmDbgInfo;
} ETHREAD, *PETHREAD; /* size: 0x0898 */

