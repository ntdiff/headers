typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
    /* 0x0000 */ long LockNV;
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
  /* 0x0020 */ struct _KPROCESS* Process;
  /* 0x0028 */ unsigned char KernelApcInProgress;
  /* 0x0029 */ unsigned char KernelApcPending;
  /* 0x002a */ unsigned char UserApcPending;
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
    struct // _TAG_UNNAMED_7
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
      /* 0x0074 */ unsigned long KernelStackResident : 1; /* bit position: 0 */
      /* 0x0074 */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x0074 */ unsigned long ProcessReadyQueue : 1; /* bit position: 2 */
      /* 0x0074 */ unsigned long WaitNext : 1; /* bit position: 3 */
      /* 0x0074 */ unsigned long SystemAffinityActive : 1; /* bit position: 4 */
      /* 0x0074 */ unsigned long Alertable : 1; /* bit position: 5 */
      /* 0x0074 */ unsigned long CodePatchInProgress : 1; /* bit position: 6 */
      /* 0x0074 */ unsigned long UserStackWalkActive : 1; /* bit position: 7 */
      /* 0x0074 */ unsigned long ApcInterruptRequest : 1; /* bit position: 8 */
      /* 0x0074 */ unsigned long QuantumEndMigrate : 1; /* bit position: 9 */
      /* 0x0074 */ unsigned long UmsDirectedSwitchEnable : 1; /* bit position: 10 */
      /* 0x0074 */ unsigned long TimerActive : 1; /* bit position: 11 */
      /* 0x0074 */ unsigned long SystemThread : 1; /* bit position: 12 */
      /* 0x0074 */ unsigned long ProcessDetachActive : 1; /* bit position: 13 */
      /* 0x0074 */ unsigned long CalloutActive : 1; /* bit position: 14 */
      /* 0x0074 */ unsigned long ScbReadyQueue : 1; /* bit position: 15 */
      /* 0x0074 */ unsigned long ApcQueueable : 1; /* bit position: 16 */
      /* 0x0074 */ unsigned long ReservedStackInUse : 1; /* bit position: 17 */
      /* 0x0074 */ unsigned long UmsPerformingSyscall : 1; /* bit position: 18 */
      /* 0x0074 */ unsigned long Reserved : 13; /* bit position: 19 */
    }; /* bitfield */
    /* 0x0074 */ long MiscFlags;
  }; /* size: 0x0004 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0078 */ unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x0078 */ unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x0078 */ unsigned long UserAffinitySet : 1; /* bit position: 2 */
      /* 0x0078 */ unsigned long AlertedByThreadId : 1; /* bit position: 3 */
      /* 0x0078 */ unsigned long QuantumDonation : 1; /* bit position: 4 */
      /* 0x0078 */ unsigned long EnableStackSwap : 1; /* bit position: 5 */
      /* 0x0078 */ unsigned long GuiThread : 1; /* bit position: 6 */
      /* 0x0078 */ unsigned long DisableQuantum : 1; /* bit position: 7 */
      /* 0x0078 */ unsigned long ChargeOnlyGroup : 1; /* bit position: 8 */
      /* 0x0078 */ unsigned long DeferPreemption : 1; /* bit position: 9 */
      /* 0x0078 */ unsigned long QueueDeferPreemption : 1; /* bit position: 10 */
      /* 0x0078 */ unsigned long ForceDeferSchedule : 1; /* bit position: 11 */
      /* 0x0078 */ unsigned long ExplicitIdealProcessor : 1; /* bit position: 12 */
      /* 0x0078 */ unsigned long FreezeCount : 1; /* bit position: 13 */
      /* 0x0078 */ unsigned long EtwStackTraceApcInserted : 8; /* bit position: 14 */
      /* 0x0078 */ unsigned long ReservedFlags : 10; /* bit position: 22 */
    }; /* bitfield */
    /* 0x0078 */ volatile long ThreadFlags;
  }; /* size: 0x0004 */
  /* 0x007c */ unsigned long Spare0;
  /* 0x0080 */ unsigned long SystemCallNumber;
  /* 0x0084 */ unsigned long Spare1;
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
  /* 0x00e8 */ struct _KQUEUE* volatile Queue;
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
      /* 0x0185 */ char NpxState;
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
  /* 0x0200 */ void* TebMappedLowVa;
  /* 0x0208 */ struct _LIST_ENTRY QueueListEntry;
  /* 0x0218 */ volatile unsigned long NextProcessor;
  /* 0x021c */ volatile unsigned long DeferredProcessor;
  /* 0x0220 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0228 */ volatile struct _GROUP_AFFINITY UserAffinity;
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
  union
  {
    /* 0x0238 */ volatile struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0238 */ unsigned char AffinityFill[10];
      /* 0x0242 */ unsigned char ApcStateIndex;
      /* 0x0243 */ unsigned char WaitBlockCount;
      /* 0x0244 */ unsigned long IdealProcessor;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0248 */ struct _KAPC_STATE* ApcStatePointer[2];
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
  /* 0x0318 */ __int64 ReadOperationCount;
  /* 0x0320 */ __int64 WriteOperationCount;
  /* 0x0328 */ __int64 OtherOperationCount;
  /* 0x0330 */ __int64 ReadTransferCount;
  /* 0x0338 */ __int64 WriteTransferCount;
  /* 0x0340 */ __int64 OtherTransferCount;
} KTHREAD, *PKTHREAD; /* size: 0x0348 */

