typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
          /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
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
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
              /* 0x0002 */ unsigned char Reserved : 4; /* bit position: 4 */
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
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
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
      /* 0x0000 */ unsigned char State : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned char Affinity : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char Priority : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char Apc : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned char UserApc : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned char Alert : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned char Unused : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} KWAIT_STATUS_REGISTER, *PKWAIT_STATUS_REGISTER; /* size: 0x0001 */

typedef struct _KAPC_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY ApcListHead[2];
  /* 0x0010 */ struct _KPROCESS* Process;
  /* 0x0014 */ unsigned char KernelApcInProgress;
  /* 0x0015 */ unsigned char KernelApcPending;
  /* 0x0016 */ unsigned char UserApcPending;
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
    struct // _TAG_UNNAMED_16
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
      /* 0x0058 */ unsigned long KernelStackResident : 1; /* bit position: 0 */
      /* 0x0058 */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x0058 */ unsigned long ProcessReadyQueue : 1; /* bit position: 2 */
      /* 0x0058 */ unsigned long WaitNext : 1; /* bit position: 3 */
      /* 0x0058 */ unsigned long SystemAffinityActive : 1; /* bit position: 4 */
      /* 0x0058 */ unsigned long Alertable : 1; /* bit position: 5 */
      /* 0x0058 */ unsigned long CodePatchInProgress : 1; /* bit position: 6 */
      /* 0x0058 */ unsigned long UserStackWalkActive : 1; /* bit position: 7 */
      /* 0x0058 */ unsigned long ApcInterruptRequest : 1; /* bit position: 8 */
      /* 0x0058 */ unsigned long QuantumEndMigrate : 1; /* bit position: 9 */
      /* 0x0058 */ unsigned long UmsDirectedSwitchEnable : 1; /* bit position: 10 */
      /* 0x0058 */ unsigned long TimerActive : 1; /* bit position: 11 */
      /* 0x0058 */ unsigned long SystemThread : 1; /* bit position: 12 */
      /* 0x0058 */ unsigned long ProcessDetachActive : 1; /* bit position: 13 */
      /* 0x0058 */ unsigned long CalloutActive : 1; /* bit position: 14 */
      /* 0x0058 */ unsigned long ScbReadyQueue : 1; /* bit position: 15 */
      /* 0x0058 */ unsigned long ApcQueueable : 1; /* bit position: 16 */
      /* 0x0058 */ unsigned long ReservedStackInUse : 1; /* bit position: 17 */
      /* 0x0058 */ unsigned long UmsPerformingSyscall : 1; /* bit position: 18 */
      /* 0x0058 */ unsigned long Reserved : 13; /* bit position: 19 */
    }; /* bitfield */
    /* 0x0058 */ long MiscFlags;
  }; /* size: 0x0004 */
  union
  {
    struct /* bitfield */
    {
      /* 0x005c */ unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x005c */ unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x005c */ unsigned long UserAffinitySet : 1; /* bit position: 2 */
      /* 0x005c */ unsigned long AlertedByThreadId : 1; /* bit position: 3 */
      /* 0x005c */ unsigned long QuantumDonation : 1; /* bit position: 4 */
      /* 0x005c */ unsigned long EnableStackSwap : 1; /* bit position: 5 */
      /* 0x005c */ unsigned long GuiThread : 1; /* bit position: 6 */
      /* 0x005c */ unsigned long DisableQuantum : 1; /* bit position: 7 */
      /* 0x005c */ unsigned long ChargeOnlyGroup : 1; /* bit position: 8 */
      /* 0x005c */ unsigned long DeferPreemption : 1; /* bit position: 9 */
      /* 0x005c */ unsigned long QueueDeferPreemption : 1; /* bit position: 10 */
      /* 0x005c */ unsigned long ForceDeferSchedule : 1; /* bit position: 11 */
      /* 0x005c */ unsigned long ExplicitIdealProcessor : 1; /* bit position: 12 */
      /* 0x005c */ unsigned long FreezeCount : 1; /* bit position: 13 */
      /* 0x005c */ unsigned long EtwStackTraceApcInserted : 8; /* bit position: 14 */
      /* 0x005c */ unsigned long ReservedFlags : 10; /* bit position: 22 */
    }; /* bitfield */
    /* 0x005c */ volatile long ThreadFlags;
  }; /* size: 0x0004 */
  /* 0x0060 */ unsigned long Spare0;
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
  /* 0x0091 */ char NpxState;
  /* 0x0092 */ unsigned char WaitIrql;
  /* 0x0093 */ char WaitMode;
  /* 0x0094 */ volatile long WaitStatus;
  /* 0x0098 */ struct _KWAIT_BLOCK* WaitBlockList;
  union
  {
    /* 0x009c */ struct _LIST_ENTRY WaitListEntry;
    /* 0x009c */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0008 */
  /* 0x00a4 */ struct _KQUEUE* volatile Queue;
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
  /* 0x0148 */ volatile unsigned long NextProcessor;
  /* 0x014c */ volatile unsigned long DeferredProcessor;
  /* 0x0150 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0154 */ volatile struct _GROUP_AFFINITY UserAffinity;
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
  union
  {
    /* 0x0160 */ volatile struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0160 */ unsigned char AffinityFill[6];
      /* 0x0166 */ unsigned char ApcStateIndex;
      /* 0x0167 */ unsigned char WaitBlockCount;
      /* 0x0168 */ unsigned long IdealProcessor;
    }; /* size: 0x000c */
  }; /* size: 0x000c */
  /* 0x016c */ struct _KAPC_STATE* ApcStatePointer[2];
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
  /* 0x01e4 */ long __PADDING__[1];
} KTHREAD, *PKTHREAD; /* size: 0x01e8 */

