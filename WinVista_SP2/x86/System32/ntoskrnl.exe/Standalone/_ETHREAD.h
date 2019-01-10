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
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
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
  /* 0x0024 */ long Period;
} KTIMER, *PKTIMER; /* size: 0x0028 */

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ void* Object;
  /* 0x0010 */ struct _KWAIT_BLOCK* NextWaitBlock;
  /* 0x0014 */ unsigned short WaitKey;
  /* 0x0016 */ unsigned char WaitType;
  /* 0x0017 */ unsigned char SpareByte;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0018 */

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
  union
  {
    /* 0x0038 */ struct _KAPC_STATE ApcState;
    struct
    {
      /* 0x0038 */ unsigned char ApcStateFill[23];
      /* 0x004f */ char Priority;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0050 */ volatile unsigned short NextProcessor;
  /* 0x0052 */ volatile unsigned short DeferredProcessor;
  /* 0x0054 */ unsigned long ApcQueueLock;
  /* 0x0058 */ unsigned long ContextSwitches;
  /* 0x005c */ volatile unsigned char State;
  /* 0x005d */ unsigned char NpxState;
  /* 0x005e */ unsigned char WaitIrql;
  /* 0x005f */ char WaitMode;
  /* 0x0060 */ long WaitStatus;
  union
  {
    /* 0x0064 */ struct _KWAIT_BLOCK* WaitBlockList;
    /* 0x0064 */ struct _KGATE* GateObject;
  }; /* size: 0x0004 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0068 */ unsigned long KernelStackResident : 1; /* bit position: 0 */
      /* 0x0068 */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x0068 */ unsigned long ProcessReadyQueue : 1; /* bit position: 2 */
      /* 0x0068 */ unsigned long WaitNext : 1; /* bit position: 3 */
      /* 0x0068 */ unsigned long SystemAffinityActive : 1; /* bit position: 4 */
      /* 0x0068 */ unsigned long Alertable : 1; /* bit position: 5 */
      /* 0x0068 */ unsigned long GdiFlushActive : 1; /* bit position: 6 */
      /* 0x0068 */ unsigned long UserStackWalkActive : 1; /* bit position: 7 */
      /* 0x0068 */ unsigned long Reserved : 24; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0068 */ long MiscFlags;
  }; /* size: 0x0004 */
  /* 0x006c */ unsigned char WaitReason;
  /* 0x006d */ volatile unsigned char SwapBusy;
  /* 0x006e */ unsigned char Alerted[2];
  union
  {
    /* 0x0070 */ struct _LIST_ENTRY WaitListEntry;
    /* 0x0070 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0008 */
  /* 0x0078 */ struct _KQUEUE* Queue;
  /* 0x007c */ unsigned long WaitTime;
  union
  {
    struct
    {
      /* 0x0080 */ short KernelApcDisable;
      /* 0x0082 */ short SpecialApcDisable;
    }; /* size: 0x0004 */
    /* 0x0080 */ unsigned long CombinedApcDisable;
  }; /* size: 0x0004 */
  /* 0x0084 */ void* Teb;
  union
  {
    /* 0x0088 */ struct _KTIMER Timer;
    /* 0x0088 */ unsigned char TimerFill[40];
  }; /* size: 0x0028 */
  union
  {
    struct /* bitfield */
    {
      /* 0x00b0 */ volatile unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x00b0 */ volatile unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x00b0 */ volatile unsigned long EtwStackTraceApc1Inserted : 1; /* bit position: 2 */
      /* 0x00b0 */ volatile unsigned long EtwStackTraceApc2Inserted : 1; /* bit position: 3 */
      /* 0x00b0 */ volatile unsigned long CycleChargePending : 1; /* bit position: 4 */
      /* 0x00b0 */ volatile unsigned long CalloutActive : 1; /* bit position: 5 */
      /* 0x00b0 */ volatile unsigned long ApcQueueable : 1; /* bit position: 6 */
      /* 0x00b0 */ volatile unsigned long EnableStackSwap : 1; /* bit position: 7 */
      /* 0x00b0 */ volatile unsigned long GuiThread : 1; /* bit position: 8 */
      /* 0x00b0 */ volatile unsigned long ReservedFlags : 23; /* bit position: 9 */
    }; /* bitfield */
    /* 0x00b0 */ volatile long ThreadFlags;
  }; /* size: 0x0004 */
  union
  {
    /* 0x00b8 */ struct _KWAIT_BLOCK WaitBlock[4];
    struct
    {
      /* 0x00b8 */ unsigned char WaitBlockFill0[23];
      /* 0x00cf */ unsigned char IdealProcessor;
    }; /* size: 0x0018 */
    struct
    {
      /* 0x00b8 */ unsigned char WaitBlockFill1[47];
      /* 0x00e7 */ char PreviousMode;
    }; /* size: 0x0030 */
    struct
    {
      /* 0x00b8 */ unsigned char WaitBlockFill2[71];
      /* 0x00ff */ unsigned char ResourceIndex;
    }; /* size: 0x0048 */
    struct
    {
      /* 0x00b8 */ unsigned char WaitBlockFill3[95];
      /* 0x0117 */ unsigned char LargeStack;
    }; /* size: 0x0060 */
  }; /* size: 0x0060 */
  /* 0x0118 */ struct _LIST_ENTRY QueueListEntry;
  /* 0x0120 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x0124 */ void* FirstArgument;
  union
  {
    /* 0x0128 */ void* CallbackStack;
    /* 0x0128 */ unsigned long CallbackDepth;
  }; /* size: 0x0004 */
  /* 0x012c */ void* ServiceTable;
  /* 0x0130 */ unsigned char ApcStateIndex;
  /* 0x0131 */ char BasePriority;
  /* 0x0132 */ char PriorityDecrement;
  /* 0x0133 */ unsigned char Preempted;
  /* 0x0134 */ unsigned char AdjustReason;
  /* 0x0135 */ char AdjustIncrement;
  /* 0x0136 */ unsigned char Spare01;
  /* 0x0137 */ char Saturation;
  /* 0x0138 */ unsigned long SystemCallNumber;
  /* 0x013c */ unsigned long FreezeCount;
  /* 0x0140 */ unsigned long UserAffinity;
  /* 0x0144 */ struct _KPROCESS* Process;
  /* 0x0148 */ volatile unsigned long Affinity;
  /* 0x014c */ struct _KAPC_STATE* ApcStatePointer[2];
  union
  {
    /* 0x0154 */ struct _KAPC_STATE SavedApcState;
    struct
    {
      /* 0x0154 */ unsigned char SavedApcStateFill[23];
      /* 0x016b */ unsigned char Spare02;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x016c */ char SuspendCount;
  /* 0x016d */ unsigned char UserIdealProcessor;
  /* 0x016e */ unsigned char Spare03;
  /* 0x016f */ unsigned char OtherPlatformFill;
  /* 0x0170 */ void* volatile Win32Thread;
  /* 0x0174 */ void* StackBase;
  union
  {
    /* 0x0178 */ struct _KAPC SuspendApc;
    struct
    {
      /* 0x0178 */ unsigned char SuspendApcFill0[1];
      /* 0x0179 */ char Spare04;
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0178 */ unsigned char SuspendApcFill1[3];
      /* 0x017b */ unsigned char QuantumReset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0178 */ unsigned char SuspendApcFill2[4];
      /* 0x017c */ unsigned long KernelTime;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0178 */ unsigned char SuspendApcFill3[36];
      /* 0x019c */ struct _KPRCB* WaitPrcb;
    }; /* size: 0x0028 */
    struct
    {
      /* 0x0178 */ unsigned char SuspendApcFill4[40];
      /* 0x01a0 */ void* LegoData;
    }; /* size: 0x002c */
    struct
    {
      /* 0x0178 */ unsigned char SuspendApcFill5[47];
      /* 0x01a7 */ unsigned char PowerState;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x01a8 */ unsigned long UserTime;
  union
  {
    /* 0x01ac */ struct _KSEMAPHORE SuspendSemaphore;
    /* 0x01ac */ unsigned char SuspendSemaphorefill[20];
  }; /* size: 0x0014 */
  /* 0x01c0 */ unsigned long SListFaultCount;
  /* 0x01c4 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x01cc */ struct _LIST_ENTRY MutantListHead;
  /* 0x01d4 */ void* SListFaultAddress;
  /* 0x01d8 */ void* volatile MdlForLockedTeb;
  /* 0x01dc */ long __PADDING__[1];
} KTHREAD, *PKTHREAD; /* size: 0x01e0 */

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
  /* 0x01e0 */ union _LARGE_INTEGER CreateTime;
  union
  {
    /* 0x01e8 */ union _LARGE_INTEGER ExitTime;
    /* 0x01e8 */ struct _LIST_ENTRY KeyedWaitChain;
  }; /* size: 0x0008 */
  union
  {
    /* 0x01f0 */ long ExitStatus;
    /* 0x01f0 */ void* OfsChain;
  }; /* size: 0x0004 */
  union
  {
    /* 0x01f4 */ struct _LIST_ENTRY PostBlockList;
    struct
    {
      /* 0x01f4 */ void* ForwardLinkShadow;
      /* 0x01f8 */ void* StartAddress;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x01fc */ struct _TERMINATION_PORT* TerminationPort;
    /* 0x01fc */ struct _ETHREAD* ReaperLink;
    /* 0x01fc */ void* KeyedWaitValue;
    /* 0x01fc */ void* Win32StartParameter;
  }; /* size: 0x0004 */
  /* 0x0200 */ unsigned long ActiveTimerListLock;
  /* 0x0204 */ struct _LIST_ENTRY ActiveTimerListHead;
  /* 0x020c */ struct _CLIENT_ID Cid;
  union
  {
    /* 0x0214 */ struct _KSEMAPHORE KeyedWaitSemaphore;
    /* 0x0214 */ struct _KSEMAPHORE AlpcWaitSemaphore;
  }; /* size: 0x0014 */
  /* 0x0228 */ union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
  /* 0x022c */ struct _LIST_ENTRY IrpList;
  /* 0x0234 */ unsigned long TopLevelIrp;
  /* 0x0238 */ struct _DEVICE_OBJECT* DeviceToVerify;
  /* 0x023c */ union _PSP_RATE_APC* RateControlApc;
  /* 0x0240 */ void* Win32StartAddress;
  /* 0x0244 */ void* SparePtr0;
  /* 0x0248 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0250 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x0254 */ struct _EX_PUSH_LOCK ThreadLock;
  /* 0x0258 */ unsigned long ReadClusterSize;
  /* 0x025c */ volatile long MmLockOrdering;
  union
  {
    /* 0x0260 */ unsigned long CrossThreadFlags;
    struct /* bitfield */
    {
      /* 0x0260 */ unsigned long Terminated : 1; /* bit position: 0 */
      /* 0x0260 */ unsigned long ThreadInserted : 1; /* bit position: 1 */
      /* 0x0260 */ unsigned long HideFromDebugger : 1; /* bit position: 2 */
      /* 0x0260 */ unsigned long ActiveImpersonationInfo : 1; /* bit position: 3 */
      /* 0x0260 */ unsigned long SystemThread : 1; /* bit position: 4 */
      /* 0x0260 */ unsigned long HardErrorsAreDisabled : 1; /* bit position: 5 */
      /* 0x0260 */ unsigned long BreakOnTermination : 1; /* bit position: 6 */
      /* 0x0260 */ unsigned long SkipCreationMsg : 1; /* bit position: 7 */
      /* 0x0260 */ unsigned long SkipTerminationMsg : 1; /* bit position: 8 */
      /* 0x0260 */ unsigned long CopyTokenOnOpen : 1; /* bit position: 9 */
      /* 0x0260 */ unsigned long ThreadIoPriority : 3; /* bit position: 10 */
      /* 0x0260 */ unsigned long ThreadPagePriority : 3; /* bit position: 13 */
      /* 0x0260 */ unsigned long RundownFail : 1; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0264 */ unsigned long SameThreadPassiveFlags;
    struct /* bitfield */
    {
      /* 0x0264 */ unsigned long ActiveExWorker : 1; /* bit position: 0 */
      /* 0x0264 */ unsigned long ExWorkerCanWaitUser : 1; /* bit position: 1 */
      /* 0x0264 */ unsigned long MemoryMaker : 1; /* bit position: 2 */
      /* 0x0264 */ unsigned long ClonedThread : 1; /* bit position: 3 */
      /* 0x0264 */ unsigned long KeyedEventInUse : 1; /* bit position: 4 */
      /* 0x0264 */ unsigned long RateApcState : 2; /* bit position: 5 */
      /* 0x0264 */ unsigned long SelfTerminate : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0268 */ unsigned long SameThreadApcFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0268 */ unsigned char Spare : 1; /* bit position: 0 */
        /* 0x0268 */ volatile unsigned char StartAddressInvalid : 1; /* bit position: 1 */
        /* 0x0268 */ unsigned char EtwPageFaultCalloutActive : 1; /* bit position: 2 */
        /* 0x0268 */ unsigned char OwnsProcessWorkingSetExclusive : 1; /* bit position: 3 */
        /* 0x0268 */ unsigned char OwnsProcessWorkingSetShared : 1; /* bit position: 4 */
        /* 0x0268 */ unsigned char OwnsSystemWorkingSetExclusive : 1; /* bit position: 5 */
        /* 0x0268 */ unsigned char OwnsSystemWorkingSetShared : 1; /* bit position: 6 */
        /* 0x0268 */ unsigned char OwnsSessionWorkingSetExclusive : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0269 */ unsigned char OwnsSessionWorkingSetShared : 1; /* bit position: 0 */
        /* 0x0269 */ unsigned char OwnsProcessAddressSpaceExclusive : 1; /* bit position: 1 */
        /* 0x0269 */ unsigned char OwnsProcessAddressSpaceShared : 1; /* bit position: 2 */
        /* 0x0269 */ unsigned char SuppressSymbolLoad : 1; /* bit position: 3 */
        /* 0x0269 */ unsigned char Prefetching : 1; /* bit position: 4 */
        /* 0x0269 */ unsigned char OwnsDynamicMemoryShared : 1; /* bit position: 5 */
        /* 0x0269 */ unsigned char OwnsChangeControlAreaExclusive : 1; /* bit position: 6 */
        /* 0x0269 */ unsigned char OwnsChangeControlAreaShared : 1; /* bit position: 7 */
      }; /* bitfield */
      /* 0x026a */ unsigned char Spare1 : 8; /* bit position: 0 */
      /* 0x026b */ unsigned char PriorityRegionActive;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x026c */ unsigned char CacheManagerActive;
  /* 0x026d */ unsigned char DisablePageFaultClustering;
  /* 0x026e */ unsigned char ActiveFaultCount;
  /* 0x0270 */ unsigned long AlpcMessageId;
  union
  {
    /* 0x0274 */ void* AlpcMessage;
    /* 0x0274 */ unsigned long AlpcReceiveAttributeSet;
  }; /* size: 0x0004 */
  /* 0x0278 */ struct _LIST_ENTRY AlpcWaitListEntry;
  /* 0x0280 */ unsigned long CacheManagerCount;
  /* 0x0284 */ long __PADDING__[1];
} ETHREAD, *PETHREAD; /* size: 0x0288 */

