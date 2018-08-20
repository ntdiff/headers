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
    struct // _TAG_UNNAMED_11
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
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0018 */ void* Object;
  /* 0x0020 */ struct _KWAIT_BLOCK* NextWaitBlock;
  /* 0x0028 */ unsigned short WaitKey;
  /* 0x002a */ unsigned char WaitType;
  /* 0x002b */ volatile unsigned char BlockState;
  /* 0x002c */ long SpareLong;
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
  /* 0x0020 */ void* KernelRoutine /* function */;
  /* 0x0028 */ void* RundownRoutine /* function */;
  /* 0x0030 */ void* NormalRoutine /* function */;
  /* 0x0038 */ void* NormalContext;
  /* 0x0040 */ void* SystemArgument1;
  /* 0x0048 */ void* SystemArgument2;
  /* 0x0050 */ char ApcStateIndex;
  /* 0x0051 */ char ApcMode;
  /* 0x0052 */ unsigned char Inserted;
  /* 0x0053 */ char __PADDING__[5];
} KAPC, *PKAPC; /* size: 0x0058 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ long Limit;
  /* 0x001c */ long __PADDING__[1];
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0020 */

typedef struct _KTHREAD
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ volatile unsigned __int64 CycleTime;
  /* 0x0020 */ unsigned __int64 QuantumTarget;
  /* 0x0028 */ void* InitialStack;
  /* 0x0030 */ void* volatile StackLimit;
  /* 0x0038 */ void* KernelStack;
  /* 0x0040 */ unsigned __int64 ThreadLock;
  /* 0x0048 */ union _KWAIT_STATUS_REGISTER WaitRegister;
  /* 0x0049 */ volatile unsigned char Running;
  /* 0x004a */ unsigned char Alerted[2];
  union
  {
    struct /* bitfield */
    {
      /* 0x004c */ unsigned long KernelStackResident : 1; /* bit position: 0 */
      /* 0x004c */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x004c */ unsigned long ProcessReadyQueue : 1; /* bit position: 2 */
      /* 0x004c */ unsigned long WaitNext : 1; /* bit position: 3 */
      /* 0x004c */ unsigned long SystemAffinityActive : 1; /* bit position: 4 */
      /* 0x004c */ unsigned long Alertable : 1; /* bit position: 5 */
      /* 0x004c */ unsigned long GdiFlushActive : 1; /* bit position: 6 */
      /* 0x004c */ unsigned long UserStackWalkActive : 1; /* bit position: 7 */
      /* 0x004c */ unsigned long ApcInterruptRequest : 1; /* bit position: 8 */
      /* 0x004c */ unsigned long ForceDeferSchedule : 1; /* bit position: 9 */
      /* 0x004c */ unsigned long QuantumEndMigrate : 1; /* bit position: 10 */
      /* 0x004c */ unsigned long UmsDirectedSwitchEnable : 1; /* bit position: 11 */
      /* 0x004c */ unsigned long TimerActive : 1; /* bit position: 12 */
      /* 0x004c */ unsigned long Reserved : 19; /* bit position: 13 */
    }; /* bitfield */
    /* 0x004c */ long MiscFlags;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0050 */ struct _KAPC_STATE ApcState;
    struct
    {
      /* 0x0050 */ unsigned char ApcStateFill[43];
      /* 0x007b */ char Priority;
      /* 0x007c */ volatile unsigned long NextProcessor;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x0080 */ volatile unsigned long DeferredProcessor;
  /* 0x0088 */ unsigned __int64 ApcQueueLock;
  /* 0x0090 */ volatile __int64 WaitStatus;
  /* 0x0098 */ struct _KWAIT_BLOCK* WaitBlockList;
  union
  {
    /* 0x00a0 */ struct _LIST_ENTRY WaitListEntry;
    /* 0x00a0 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0010 */
  /* 0x00b0 */ struct _KQUEUE* volatile Queue;
  /* 0x00b8 */ void* Teb;
  /* 0x00c0 */ struct _KTIMER Timer;
  union
  {
    struct /* bitfield */
    {
      /* 0x0100 */ volatile unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x0100 */ volatile unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x0100 */ volatile unsigned long EtwStackTraceApc1Inserted : 1; /* bit position: 2 */
      /* 0x0100 */ volatile unsigned long EtwStackTraceApc2Inserted : 1; /* bit position: 3 */
      /* 0x0100 */ volatile unsigned long CalloutActive : 1; /* bit position: 4 */
      /* 0x0100 */ volatile unsigned long ApcQueueable : 1; /* bit position: 5 */
      /* 0x0100 */ volatile unsigned long EnableStackSwap : 1; /* bit position: 6 */
      /* 0x0100 */ volatile unsigned long GuiThread : 1; /* bit position: 7 */
      /* 0x0100 */ volatile unsigned long UmsPerformingSyscall : 1; /* bit position: 8 */
      /* 0x0100 */ volatile unsigned long ReservedFlags : 23; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0100 */ volatile long ThreadFlags;
  }; /* size: 0x0004 */
  /* 0x0104 */ unsigned long Spare0;
  union
  {
    /* 0x0108 */ struct _KWAIT_BLOCK WaitBlock[4];
    struct
    {
      /* 0x0108 */ unsigned char WaitBlockFill4[44];
      /* 0x0134 */ unsigned long ContextSwitches;
    }; /* size: 0x0030 */
    struct
    {
      /* 0x0108 */ unsigned char WaitBlockFill5[92];
      /* 0x0164 */ volatile unsigned char State;
      /* 0x0165 */ char NpxState;
      /* 0x0166 */ unsigned char WaitIrql;
      /* 0x0167 */ char WaitMode;
    }; /* size: 0x0060 */
    struct
    {
      /* 0x0108 */ unsigned char WaitBlockFill6[140];
      /* 0x0194 */ unsigned long WaitTime;
    }; /* size: 0x0090 */
    struct
    {
      /* 0x0108 */ unsigned char WaitBlockFill7[168];
      /* 0x01b0 */ void* TebMappedLowVa;
      /* 0x01b8 */ struct _UMS_CONTROL_BLOCK* Ucb;
    }; /* size: 0x00b8 */
    struct
    {
      /* 0x0108 */ unsigned char WaitBlockFill8[188];
      union
      {
        struct
        {
          /* 0x01c4 */ short KernelApcDisable;
          /* 0x01c6 */ short SpecialApcDisable;
        }; /* size: 0x0004 */
        /* 0x01c4 */ unsigned long CombinedApcDisable;
      }; /* size: 0x0004 */
    }; /* size: 0x00c0 */
  }; /* size: 0x00c0 */
  /* 0x01c8 */ struct _LIST_ENTRY QueueListEntry;
  /* 0x01d8 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x01e0 */ void* FirstArgument;
  union
  {
    /* 0x01e8 */ void* CallbackStack;
    /* 0x01e8 */ unsigned __int64 CallbackDepth;
  }; /* size: 0x0008 */
  /* 0x01f0 */ unsigned char ApcStateIndex;
  /* 0x01f1 */ char BasePriority;
  union
  {
    /* 0x01f2 */ char PriorityDecrement;
    struct /* bitfield */
    {
      /* 0x01f2 */ unsigned char ForegroundBoost : 4; /* bit position: 0 */
      /* 0x01f2 */ unsigned char UnusualBoost : 4; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x01f3 */ unsigned char Preempted;
  /* 0x01f4 */ unsigned char AdjustReason;
  /* 0x01f5 */ char AdjustIncrement;
  /* 0x01f6 */ char PreviousMode;
  /* 0x01f7 */ char Saturation;
  /* 0x01f8 */ unsigned long SystemCallNumber;
  /* 0x01fc */ unsigned long FreezeCount;
  /* 0x0200 */ volatile struct _GROUP_AFFINITY UserAffinity;
  /* 0x0210 */ struct _KPROCESS* Process;
  /* 0x0218 */ volatile struct _GROUP_AFFINITY Affinity;
  /* 0x0228 */ unsigned long IdealProcessor;
  /* 0x022c */ unsigned long UserIdealProcessor;
  /* 0x0230 */ struct _KAPC_STATE* ApcStatePointer[2];
  union
  {
    /* 0x0240 */ struct _KAPC_STATE SavedApcState;
    struct
    {
      /* 0x0240 */ unsigned char SavedApcStateFill[43];
      /* 0x026b */ unsigned char WaitReason;
      /* 0x026c */ char SuspendCount;
      /* 0x026d */ char Spare1;
      /* 0x026e */ unsigned char CodePatchInProgress;
    }; /* size: 0x002f */
  }; /* size: 0x0030 */
  /* 0x0270 */ void* volatile Win32Thread;
  /* 0x0278 */ void* StackBase;
  union
  {
    /* 0x0280 */ struct _KAPC SuspendApc;
    struct
    {
      /* 0x0280 */ unsigned char SuspendApcFill0[1];
      /* 0x0281 */ unsigned char ResourceIndex;
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0280 */ unsigned char SuspendApcFill1[3];
      /* 0x0283 */ unsigned char QuantumReset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0280 */ unsigned char SuspendApcFill2[4];
      /* 0x0284 */ unsigned long KernelTime;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0280 */ unsigned char SuspendApcFill3[64];
      /* 0x02c0 */ struct _KPRCB* volatile WaitPrcb;
    }; /* size: 0x0048 */
    struct
    {
      /* 0x0280 */ unsigned char SuspendApcFill4[72];
      /* 0x02c8 */ void* LegoData;
    }; /* size: 0x0050 */
    struct
    {
      /* 0x0280 */ unsigned char SuspendApcFill5[83];
      /* 0x02d3 */ unsigned char LargeStack;
      /* 0x02d4 */ unsigned long UserTime;
    }; /* size: 0x0058 */
  }; /* size: 0x0058 */
  union
  {
    /* 0x02d8 */ struct _KSEMAPHORE SuspendSemaphore;
    struct
    {
      /* 0x02d8 */ unsigned char SuspendSemaphorefill[28];
      /* 0x02f4 */ unsigned long SListFaultCount;
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
  /* 0x02f8 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0308 */ struct _LIST_ENTRY MutantListHead;
  /* 0x0318 */ void* SListFaultAddress;
  /* 0x0320 */ __int64 ReadOperationCount;
  /* 0x0328 */ __int64 WriteOperationCount;
  /* 0x0330 */ __int64 OtherOperationCount;
  /* 0x0338 */ __int64 ReadTransferCount;
  /* 0x0340 */ __int64 WriteTransferCount;
  /* 0x0348 */ __int64 OtherTransferCount;
  /* 0x0350 */ struct _KTHREAD_COUNTERS* ThreadCounters;
  /* 0x0358 */ struct _XSTATE_SAVE* XStateSave;
} KTHREAD, *PKTHREAD; /* size: 0x0360 */

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

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

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

typedef struct _ETHREAD
{
  /* 0x0000 */ struct _KTHREAD Tcb;
  /* 0x0360 */ union _LARGE_INTEGER CreateTime;
  union
  {
    /* 0x0368 */ union _LARGE_INTEGER ExitTime;
    /* 0x0368 */ struct _LIST_ENTRY KeyedWaitChain;
  }; /* size: 0x0010 */
  /* 0x0378 */ long ExitStatus;
  union
  {
    /* 0x0380 */ struct _LIST_ENTRY PostBlockList;
    struct
    {
      /* 0x0380 */ void* ForwardLinkShadow;
      /* 0x0388 */ void* StartAddress;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0390 */ struct _TERMINATION_PORT* TerminationPort;
    /* 0x0390 */ struct _ETHREAD* ReaperLink;
    /* 0x0390 */ void* KeyedWaitValue;
  }; /* size: 0x0008 */
  /* 0x0398 */ unsigned __int64 ActiveTimerListLock;
  /* 0x03a0 */ struct _LIST_ENTRY ActiveTimerListHead;
  /* 0x03b0 */ struct _CLIENT_ID Cid;
  union
  {
    /* 0x03c0 */ struct _KSEMAPHORE KeyedWaitSemaphore;
    /* 0x03c0 */ struct _KSEMAPHORE AlpcWaitSemaphore;
  }; /* size: 0x0020 */
  /* 0x03e0 */ union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
  /* 0x03e8 */ struct _LIST_ENTRY IrpList;
  /* 0x03f8 */ unsigned __int64 TopLevelIrp;
  /* 0x0400 */ struct _DEVICE_OBJECT* DeviceToVerify;
  /* 0x0408 */ union _PSP_CPU_QUOTA_APC* CpuQuotaApc;
  /* 0x0410 */ void* Win32StartAddress;
  /* 0x0418 */ void* LegacyPowerObject;
  /* 0x0420 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0430 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x0438 */ struct _EX_PUSH_LOCK ThreadLock;
  /* 0x0440 */ unsigned long ReadClusterSize;
  /* 0x0444 */ volatile long MmLockOrdering;
  union
  {
    /* 0x0448 */ unsigned long CrossThreadFlags;
    struct /* bitfield */
    {
      /* 0x0448 */ unsigned long Terminated : 1; /* bit position: 0 */
      /* 0x0448 */ unsigned long ThreadInserted : 1; /* bit position: 1 */
      /* 0x0448 */ unsigned long HideFromDebugger : 1; /* bit position: 2 */
      /* 0x0448 */ unsigned long ActiveImpersonationInfo : 1; /* bit position: 3 */
      /* 0x0448 */ unsigned long SystemThread : 1; /* bit position: 4 */
      /* 0x0448 */ unsigned long HardErrorsAreDisabled : 1; /* bit position: 5 */
      /* 0x0448 */ unsigned long BreakOnTermination : 1; /* bit position: 6 */
      /* 0x0448 */ unsigned long SkipCreationMsg : 1; /* bit position: 7 */
      /* 0x0448 */ unsigned long SkipTerminationMsg : 1; /* bit position: 8 */
      /* 0x0448 */ unsigned long CopyTokenOnOpen : 1; /* bit position: 9 */
      /* 0x0448 */ unsigned long ThreadIoPriority : 3; /* bit position: 10 */
      /* 0x0448 */ unsigned long ThreadPagePriority : 3; /* bit position: 13 */
      /* 0x0448 */ unsigned long RundownFail : 1; /* bit position: 16 */
      /* 0x0448 */ unsigned long NeedsWorkingSetAging : 1; /* bit position: 17 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x044c */ unsigned long SameThreadPassiveFlags;
    struct /* bitfield */
    {
      /* 0x044c */ unsigned long ActiveExWorker : 1; /* bit position: 0 */
      /* 0x044c */ unsigned long ExWorkerCanWaitUser : 1; /* bit position: 1 */
      /* 0x044c */ unsigned long MemoryMaker : 1; /* bit position: 2 */
      /* 0x044c */ unsigned long ClonedThread : 1; /* bit position: 3 */
      /* 0x044c */ unsigned long KeyedEventInUse : 1; /* bit position: 4 */
      /* 0x044c */ unsigned long RateApcState : 2; /* bit position: 5 */
      /* 0x044c */ unsigned long SelfTerminate : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0450 */ unsigned long SameThreadApcFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0450 */ unsigned char Spare : 1; /* bit position: 0 */
        /* 0x0450 */ volatile unsigned char StartAddressInvalid : 1; /* bit position: 1 */
        /* 0x0450 */ unsigned char EtwPageFaultCalloutActive : 1; /* bit position: 2 */
        /* 0x0450 */ unsigned char OwnsProcessWorkingSetExclusive : 1; /* bit position: 3 */
        /* 0x0450 */ unsigned char OwnsProcessWorkingSetShared : 1; /* bit position: 4 */
        /* 0x0450 */ unsigned char OwnsSystemCacheWorkingSetExclusive : 1; /* bit position: 5 */
        /* 0x0450 */ unsigned char OwnsSystemCacheWorkingSetShared : 1; /* bit position: 6 */
        /* 0x0450 */ unsigned char OwnsSessionWorkingSetExclusive : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0451 */ unsigned char OwnsSessionWorkingSetShared : 1; /* bit position: 0 */
        /* 0x0451 */ unsigned char OwnsProcessAddressSpaceExclusive : 1; /* bit position: 1 */
        /* 0x0451 */ unsigned char OwnsProcessAddressSpaceShared : 1; /* bit position: 2 */
        /* 0x0451 */ unsigned char SuppressSymbolLoad : 1; /* bit position: 3 */
        /* 0x0451 */ unsigned char Prefetching : 1; /* bit position: 4 */
        /* 0x0451 */ unsigned char OwnsDynamicMemoryShared : 1; /* bit position: 5 */
        /* 0x0451 */ unsigned char OwnsChangeControlAreaExclusive : 1; /* bit position: 6 */
        /* 0x0451 */ unsigned char OwnsChangeControlAreaShared : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0452 */ unsigned char OwnsPagedPoolWorkingSetExclusive : 1; /* bit position: 0 */
        /* 0x0452 */ unsigned char OwnsPagedPoolWorkingSetShared : 1; /* bit position: 1 */
        /* 0x0452 */ unsigned char OwnsSystemPtesWorkingSetExclusive : 1; /* bit position: 2 */
        /* 0x0452 */ unsigned char OwnsSystemPtesWorkingSetShared : 1; /* bit position: 3 */
        /* 0x0452 */ unsigned char TrimTrigger : 2; /* bit position: 4 */
        /* 0x0452 */ unsigned char Spare1 : 2; /* bit position: 6 */
      }; /* bitfield */
      /* 0x0453 */ unsigned char PriorityRegionActive;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0454 */ unsigned char CacheManagerActive;
  /* 0x0455 */ unsigned char DisablePageFaultClustering;
  /* 0x0456 */ unsigned char ActiveFaultCount;
  /* 0x0457 */ unsigned char LockOrderState;
  /* 0x0458 */ unsigned __int64 AlpcMessageId;
  union
  {
    /* 0x0460 */ void* AlpcMessage;
    /* 0x0460 */ unsigned long AlpcReceiveAttributeSet;
  }; /* size: 0x0008 */
  /* 0x0468 */ struct _LIST_ENTRY AlpcWaitListEntry;
  /* 0x0478 */ unsigned long CacheManagerCount;
  /* 0x047c */ unsigned long IoBoostCount;
  /* 0x0480 */ unsigned __int64 IrpListLock;
  /* 0x0488 */ void* ReservedForSynchTracking;
  /* 0x0490 */ struct _SINGLE_LIST_ENTRY CmCallbackListHead;
} ETHREAD, *PETHREAD; /* size: 0x0498 */

