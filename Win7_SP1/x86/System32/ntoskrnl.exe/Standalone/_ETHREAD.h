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
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
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
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ void* Object;
  /* 0x0010 */ struct _KWAIT_BLOCK* NextWaitBlock;
  /* 0x0014 */ unsigned short WaitKey;
  /* 0x0016 */ unsigned char WaitType;
  /* 0x0017 */ volatile unsigned char BlockState;
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
  /* 0x0014 */ void* KernelRoutine /* function */;
  /* 0x0018 */ void* RundownRoutine /* function */;
  /* 0x001c */ void* NormalRoutine /* function */;
  /* 0x0020 */ void* NormalContext;
  /* 0x0024 */ void* SystemArgument1;
  /* 0x0028 */ void* SystemArgument2;
  /* 0x002c */ char ApcStateIndex;
  /* 0x002d */ char ApcMode;
  /* 0x002e */ unsigned char Inserted;
  /* 0x002f */ char __PADDING__[1];
} KAPC, *PKAPC; /* size: 0x0030 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

typedef struct _KTHREAD
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ volatile unsigned __int64 CycleTime;
  /* 0x0018 */ volatile unsigned long HighCycleTime;
  /* 0x0020 */ unsigned __int64 QuantumTarget;
  /* 0x0028 */ void* InitialStack;
  /* 0x002c */ void* volatile StackLimit;
  /* 0x0030 */ void* KernelStack;
  /* 0x0034 */ unsigned long ThreadLock;
  /* 0x0038 */ union _KWAIT_STATUS_REGISTER WaitRegister;
  /* 0x0039 */ volatile unsigned char Running;
  /* 0x003a */ unsigned char Alerted[2];
  union
  {
    struct /* bitfield */
    {
      /* 0x003c */ unsigned long KernelStackResident : 1; /* bit position: 0 */
      /* 0x003c */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x003c */ unsigned long ProcessReadyQueue : 1; /* bit position: 2 */
      /* 0x003c */ unsigned long WaitNext : 1; /* bit position: 3 */
      /* 0x003c */ unsigned long SystemAffinityActive : 1; /* bit position: 4 */
      /* 0x003c */ unsigned long Alertable : 1; /* bit position: 5 */
      /* 0x003c */ unsigned long GdiFlushActive : 1; /* bit position: 6 */
      /* 0x003c */ unsigned long UserStackWalkActive : 1; /* bit position: 7 */
      /* 0x003c */ unsigned long ApcInterruptRequest : 1; /* bit position: 8 */
      /* 0x003c */ unsigned long ForceDeferSchedule : 1; /* bit position: 9 */
      /* 0x003c */ unsigned long QuantumEndMigrate : 1; /* bit position: 10 */
      /* 0x003c */ unsigned long UmsDirectedSwitchEnable : 1; /* bit position: 11 */
      /* 0x003c */ unsigned long TimerActive : 1; /* bit position: 12 */
      /* 0x003c */ unsigned long SystemThread : 1; /* bit position: 13 */
      /* 0x003c */ unsigned long Reserved : 18; /* bit position: 14 */
    }; /* bitfield */
    /* 0x003c */ long MiscFlags;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0040 */ struct _KAPC_STATE ApcState;
    struct
    {
      /* 0x0040 */ unsigned char ApcStateFill[23];
      /* 0x0057 */ char Priority;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0058 */ volatile unsigned long NextProcessor;
  /* 0x005c */ volatile unsigned long DeferredProcessor;
  /* 0x0060 */ unsigned long ApcQueueLock;
  /* 0x0064 */ unsigned long ContextSwitches;
  /* 0x0068 */ volatile unsigned char State;
  /* 0x0069 */ char NpxState;
  /* 0x006a */ unsigned char WaitIrql;
  /* 0x006b */ char WaitMode;
  /* 0x006c */ volatile long WaitStatus;
  /* 0x0070 */ struct _KWAIT_BLOCK* WaitBlockList;
  union
  {
    /* 0x0074 */ struct _LIST_ENTRY WaitListEntry;
    /* 0x0074 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0008 */
  /* 0x007c */ struct _KQUEUE* volatile Queue;
  /* 0x0080 */ unsigned long WaitTime;
  union
  {
    struct
    {
      /* 0x0084 */ short KernelApcDisable;
      /* 0x0086 */ short SpecialApcDisable;
    }; /* size: 0x0004 */
    /* 0x0084 */ unsigned long CombinedApcDisable;
  }; /* size: 0x0004 */
  /* 0x0088 */ void* Teb;
  /* 0x0090 */ struct _KTIMER Timer;
  union
  {
    struct /* bitfield */
    {
      /* 0x00b8 */ volatile unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x00b8 */ volatile unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x00b8 */ volatile unsigned long EtwStackTraceApc1Inserted : 1; /* bit position: 2 */
      /* 0x00b8 */ volatile unsigned long EtwStackTraceApc2Inserted : 1; /* bit position: 3 */
      /* 0x00b8 */ volatile unsigned long CalloutActive : 1; /* bit position: 4 */
      /* 0x00b8 */ volatile unsigned long ApcQueueable : 1; /* bit position: 5 */
      /* 0x00b8 */ volatile unsigned long EnableStackSwap : 1; /* bit position: 6 */
      /* 0x00b8 */ volatile unsigned long GuiThread : 1; /* bit position: 7 */
      /* 0x00b8 */ volatile unsigned long UmsPerformingSyscall : 1; /* bit position: 8 */
      /* 0x00b8 */ volatile unsigned long VdmSafe : 1; /* bit position: 9 */
      /* 0x00b8 */ volatile unsigned long UmsDispatched : 1; /* bit position: 10 */
      /* 0x00b8 */ volatile unsigned long ReservedFlags : 21; /* bit position: 11 */
    }; /* bitfield */
    /* 0x00b8 */ volatile long ThreadFlags;
  }; /* size: 0x0004 */
  /* 0x00bc */ void* ServiceTable;
  /* 0x00c0 */ struct _KWAIT_BLOCK WaitBlock[4];
  /* 0x0120 */ struct _LIST_ENTRY QueueListEntry;
  /* 0x0128 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x012c */ void* FirstArgument;
  union
  {
    /* 0x0130 */ void* CallbackStack;
    /* 0x0130 */ unsigned long CallbackDepth;
  }; /* size: 0x0004 */
  /* 0x0134 */ unsigned char ApcStateIndex;
  /* 0x0135 */ char BasePriority;
  union
  {
    /* 0x0136 */ char PriorityDecrement;
    struct /* bitfield */
    {
      /* 0x0136 */ unsigned char ForegroundBoost : 4; /* bit position: 0 */
      /* 0x0136 */ unsigned char UnusualBoost : 4; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0137 */ unsigned char Preempted;
  /* 0x0138 */ unsigned char AdjustReason;
  /* 0x0139 */ char AdjustIncrement;
  /* 0x013a */ char PreviousMode;
  /* 0x013b */ char Saturation;
  /* 0x013c */ unsigned long SystemCallNumber;
  /* 0x0140 */ unsigned long FreezeCount;
  /* 0x0144 */ volatile struct _GROUP_AFFINITY UserAffinity;
  /* 0x0150 */ struct _KPROCESS* Process;
  /* 0x0154 */ volatile struct _GROUP_AFFINITY Affinity;
  /* 0x0160 */ unsigned long IdealProcessor;
  /* 0x0164 */ unsigned long UserIdealProcessor;
  /* 0x0168 */ struct _KAPC_STATE* ApcStatePointer[2];
  union
  {
    /* 0x0170 */ struct _KAPC_STATE SavedApcState;
    struct
    {
      /* 0x0170 */ unsigned char SavedApcStateFill[23];
      /* 0x0187 */ unsigned char WaitReason;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0188 */ char SuspendCount;
  /* 0x0189 */ char Spare1;
  /* 0x018a */ unsigned char OtherPlatformFill;
  /* 0x018c */ void* volatile Win32Thread;
  /* 0x0190 */ void* StackBase;
  union
  {
    /* 0x0194 */ struct _KAPC SuspendApc;
    struct
    {
      /* 0x0194 */ unsigned char SuspendApcFill0[1];
      /* 0x0195 */ unsigned char ResourceIndex;
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0194 */ unsigned char SuspendApcFill1[3];
      /* 0x0197 */ unsigned char QuantumReset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0194 */ unsigned char SuspendApcFill2[4];
      /* 0x0198 */ unsigned long KernelTime;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0194 */ unsigned char SuspendApcFill3[36];
      /* 0x01b8 */ struct _KPRCB* volatile WaitPrcb;
    }; /* size: 0x0028 */
    struct
    {
      /* 0x0194 */ unsigned char SuspendApcFill4[40];
      /* 0x01bc */ void* LegoData;
    }; /* size: 0x002c */
    struct
    {
      /* 0x0194 */ unsigned char SuspendApcFill5[47];
      /* 0x01c3 */ unsigned char LargeStack;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x01c4 */ unsigned long UserTime;
  union
  {
    /* 0x01c8 */ struct _KSEMAPHORE SuspendSemaphore;
    /* 0x01c8 */ unsigned char SuspendSemaphorefill[20];
  }; /* size: 0x0014 */
  /* 0x01dc */ unsigned long SListFaultCount;
  /* 0x01e0 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x01e8 */ struct _LIST_ENTRY MutantListHead;
  /* 0x01f0 */ void* SListFaultAddress;
  /* 0x01f4 */ struct _KTHREAD_COUNTERS* ThreadCounters;
  /* 0x01f8 */ struct _XSTATE_SAVE* XStateSave;
  /* 0x01fc */ long __PADDING__[1];
} KTHREAD, *PKTHREAD; /* size: 0x0200 */

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

typedef struct _ETHREAD
{
  /* 0x0000 */ struct _KTHREAD Tcb;
  /* 0x0200 */ union _LARGE_INTEGER CreateTime;
  union
  {
    /* 0x0208 */ union _LARGE_INTEGER ExitTime;
    /* 0x0208 */ struct _LIST_ENTRY KeyedWaitChain;
  }; /* size: 0x0008 */
  /* 0x0210 */ long ExitStatus;
  union
  {
    /* 0x0214 */ struct _LIST_ENTRY PostBlockList;
    struct
    {
      /* 0x0214 */ void* ForwardLinkShadow;
      /* 0x0218 */ void* StartAddress;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x021c */ struct _TERMINATION_PORT* TerminationPort;
    /* 0x021c */ struct _ETHREAD* ReaperLink;
    /* 0x021c */ void* KeyedWaitValue;
  }; /* size: 0x0004 */
  /* 0x0220 */ unsigned long ActiveTimerListLock;
  /* 0x0224 */ struct _LIST_ENTRY ActiveTimerListHead;
  /* 0x022c */ struct _CLIENT_ID Cid;
  union
  {
    /* 0x0234 */ struct _KSEMAPHORE KeyedWaitSemaphore;
    /* 0x0234 */ struct _KSEMAPHORE AlpcWaitSemaphore;
  }; /* size: 0x0014 */
  /* 0x0248 */ union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
  /* 0x024c */ struct _LIST_ENTRY IrpList;
  /* 0x0254 */ unsigned long TopLevelIrp;
  /* 0x0258 */ struct _DEVICE_OBJECT* DeviceToVerify;
  /* 0x025c */ union _PSP_CPU_QUOTA_APC* CpuQuotaApc;
  /* 0x0260 */ void* Win32StartAddress;
  /* 0x0264 */ void* LegacyPowerObject;
  /* 0x0268 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0270 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x0274 */ struct _EX_PUSH_LOCK ThreadLock;
  /* 0x0278 */ unsigned long ReadClusterSize;
  /* 0x027c */ volatile long MmLockOrdering;
  union
  {
    /* 0x0280 */ unsigned long CrossThreadFlags;
    struct /* bitfield */
    {
      /* 0x0280 */ unsigned long Terminated : 1; /* bit position: 0 */
      /* 0x0280 */ unsigned long ThreadInserted : 1; /* bit position: 1 */
      /* 0x0280 */ unsigned long HideFromDebugger : 1; /* bit position: 2 */
      /* 0x0280 */ unsigned long ActiveImpersonationInfo : 1; /* bit position: 3 */
      /* 0x0280 */ unsigned long Reserved : 1; /* bit position: 4 */
      /* 0x0280 */ unsigned long HardErrorsAreDisabled : 1; /* bit position: 5 */
      /* 0x0280 */ unsigned long BreakOnTermination : 1; /* bit position: 6 */
      /* 0x0280 */ unsigned long SkipCreationMsg : 1; /* bit position: 7 */
      /* 0x0280 */ unsigned long SkipTerminationMsg : 1; /* bit position: 8 */
      /* 0x0280 */ unsigned long CopyTokenOnOpen : 1; /* bit position: 9 */
      /* 0x0280 */ unsigned long ThreadIoPriority : 3; /* bit position: 10 */
      /* 0x0280 */ unsigned long ThreadPagePriority : 3; /* bit position: 13 */
      /* 0x0280 */ unsigned long RundownFail : 1; /* bit position: 16 */
      /* 0x0280 */ unsigned long NeedsWorkingSetAging : 1; /* bit position: 17 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0284 */ unsigned long SameThreadPassiveFlags;
    struct /* bitfield */
    {
      /* 0x0284 */ unsigned long ActiveExWorker : 1; /* bit position: 0 */
      /* 0x0284 */ unsigned long ExWorkerCanWaitUser : 1; /* bit position: 1 */
      /* 0x0284 */ unsigned long MemoryMaker : 1; /* bit position: 2 */
      /* 0x0284 */ unsigned long ClonedThread : 1; /* bit position: 3 */
      /* 0x0284 */ unsigned long KeyedEventInUse : 1; /* bit position: 4 */
      /* 0x0284 */ unsigned long RateApcState : 2; /* bit position: 5 */
      /* 0x0284 */ unsigned long SelfTerminate : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0288 */ unsigned long SameThreadApcFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0288 */ unsigned char Spare : 1; /* bit position: 0 */
        /* 0x0288 */ volatile unsigned char StartAddressInvalid : 1; /* bit position: 1 */
        /* 0x0288 */ unsigned char EtwPageFaultCalloutActive : 1; /* bit position: 2 */
        /* 0x0288 */ unsigned char OwnsProcessWorkingSetExclusive : 1; /* bit position: 3 */
        /* 0x0288 */ unsigned char OwnsProcessWorkingSetShared : 1; /* bit position: 4 */
        /* 0x0288 */ unsigned char OwnsSystemCacheWorkingSetExclusive : 1; /* bit position: 5 */
        /* 0x0288 */ unsigned char OwnsSystemCacheWorkingSetShared : 1; /* bit position: 6 */
        /* 0x0288 */ unsigned char OwnsSessionWorkingSetExclusive : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0289 */ unsigned char OwnsSessionWorkingSetShared : 1; /* bit position: 0 */
        /* 0x0289 */ unsigned char OwnsProcessAddressSpaceExclusive : 1; /* bit position: 1 */
        /* 0x0289 */ unsigned char OwnsProcessAddressSpaceShared : 1; /* bit position: 2 */
        /* 0x0289 */ unsigned char SuppressSymbolLoad : 1; /* bit position: 3 */
        /* 0x0289 */ unsigned char Prefetching : 1; /* bit position: 4 */
        /* 0x0289 */ unsigned char OwnsDynamicMemoryShared : 1; /* bit position: 5 */
        /* 0x0289 */ unsigned char OwnsChangeControlAreaExclusive : 1; /* bit position: 6 */
        /* 0x0289 */ unsigned char OwnsChangeControlAreaShared : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x028a */ unsigned char OwnsPagedPoolWorkingSetExclusive : 1; /* bit position: 0 */
        /* 0x028a */ unsigned char OwnsPagedPoolWorkingSetShared : 1; /* bit position: 1 */
        /* 0x028a */ unsigned char OwnsSystemPtesWorkingSetExclusive : 1; /* bit position: 2 */
        /* 0x028a */ unsigned char OwnsSystemPtesWorkingSetShared : 1; /* bit position: 3 */
        /* 0x028a */ unsigned char TrimTrigger : 2; /* bit position: 4 */
        /* 0x028a */ unsigned char Spare1 : 2; /* bit position: 6 */
      }; /* bitfield */
      /* 0x028b */ unsigned char PriorityRegionActive;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x028c */ unsigned char CacheManagerActive;
  /* 0x028d */ unsigned char DisablePageFaultClustering;
  /* 0x028e */ unsigned char ActiveFaultCount;
  /* 0x028f */ unsigned char LockOrderState;
  /* 0x0290 */ unsigned long AlpcMessageId;
  union
  {
    /* 0x0294 */ void* AlpcMessage;
    /* 0x0294 */ unsigned long AlpcReceiveAttributeSet;
  }; /* size: 0x0004 */
  /* 0x0298 */ struct _LIST_ENTRY AlpcWaitListEntry;
  /* 0x02a0 */ unsigned long CacheManagerCount;
  /* 0x02a4 */ unsigned long IoBoostCount;
  /* 0x02a8 */ unsigned long IrpListLock;
  /* 0x02ac */ void* ReservedForSynchTracking;
  /* 0x02b0 */ struct _SINGLE_LIST_ENTRY CmCallbackListHead;
  /* 0x02b4 */ long __PADDING__[1];
} ETHREAD, *PETHREAD; /* size: 0x02b8 */

