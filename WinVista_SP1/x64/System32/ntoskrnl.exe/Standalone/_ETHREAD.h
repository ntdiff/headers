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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

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
    struct // _TAG_UNNAMED_10
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
  /* 0x0038 */ long Period;
  /* 0x003c */ long __PADDING__[1];
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0018 */ void* Object;
  /* 0x0020 */ struct _KWAIT_BLOCK* NextWaitBlock;
  /* 0x0028 */ unsigned short WaitKey;
  /* 0x002a */ unsigned char WaitType;
  /* 0x002b */ unsigned char SpareByte;
  /* 0x002c */ long SpareLong;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0030 */

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
  union
  {
    /* 0x0048 */ struct _KAPC_STATE ApcState;
    struct
    {
      /* 0x0048 */ unsigned char ApcStateFill[43];
      /* 0x0073 */ char Priority;
      /* 0x0074 */ volatile unsigned short NextProcessor;
      /* 0x0076 */ volatile unsigned short DeferredProcessor;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x0078 */ unsigned __int64 ApcQueueLock;
  /* 0x0080 */ __int64 WaitStatus;
  union
  {
    /* 0x0088 */ struct _KWAIT_BLOCK* WaitBlockList;
    /* 0x0088 */ struct _KGATE* GateObject;
  }; /* size: 0x0008 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0090 */ unsigned long KernelStackResident : 1; /* bit position: 0 */
      /* 0x0090 */ unsigned long ReadyTransition : 1; /* bit position: 1 */
      /* 0x0090 */ unsigned long ProcessReadyQueue : 1; /* bit position: 2 */
      /* 0x0090 */ unsigned long WaitNext : 1; /* bit position: 3 */
      /* 0x0090 */ unsigned long SystemAffinityActive : 1; /* bit position: 4 */
      /* 0x0090 */ unsigned long Alertable : 1; /* bit position: 5 */
      /* 0x0090 */ unsigned long GdiFlushActive : 1; /* bit position: 6 */
      /* 0x0090 */ unsigned long UserStackWalkActive : 1; /* bit position: 7 */
      /* 0x0090 */ unsigned long Reserved : 24; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0090 */ long MiscFlags;
  }; /* size: 0x0004 */
  /* 0x0094 */ unsigned char WaitReason;
  /* 0x0095 */ volatile unsigned char SwapBusy;
  /* 0x0096 */ unsigned char Alerted[2];
  union
  {
    /* 0x0098 */ struct _LIST_ENTRY WaitListEntry;
    /* 0x0098 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  }; /* size: 0x0010 */
  /* 0x00a8 */ struct _KQUEUE* Queue;
  /* 0x00b0 */ void* Teb;
  union
  {
    /* 0x00b8 */ struct _KTIMER Timer;
    struct
    {
      /* 0x00b8 */ unsigned char TimerFill[60];
      union
      {
        struct /* bitfield */
        {
          /* 0x00f4 */ volatile unsigned long AutoAlignment : 1; /* bit position: 0 */
          /* 0x00f4 */ volatile unsigned long DisableBoost : 1; /* bit position: 1 */
          /* 0x00f4 */ volatile unsigned long EtwStackTraceApc1Inserted : 1; /* bit position: 2 */
          /* 0x00f4 */ volatile unsigned long EtwStackTraceApc2Inserted : 1; /* bit position: 3 */
          /* 0x00f4 */ volatile unsigned long CycleChargePending : 1; /* bit position: 4 */
          /* 0x00f4 */ volatile unsigned long CalloutActive : 1; /* bit position: 5 */
          /* 0x00f4 */ volatile unsigned long ApcQueueable : 1; /* bit position: 6 */
          /* 0x00f4 */ volatile unsigned long EnableStackSwap : 1; /* bit position: 7 */
          /* 0x00f4 */ volatile unsigned long GuiThread : 1; /* bit position: 8 */
          /* 0x00f4 */ volatile unsigned long ReservedFlags : 23; /* bit position: 9 */
        }; /* bitfield */
        /* 0x00f4 */ volatile long ThreadFlags;
      }; /* size: 0x0004 */
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
  union
  {
    /* 0x00f8 */ struct _KWAIT_BLOCK WaitBlock[4];
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill0[43];
      /* 0x0123 */ unsigned char IdealProcessor;
    }; /* size: 0x002c */
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill1[91];
      /* 0x0153 */ char PreviousMode;
    }; /* size: 0x005c */
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill2[139];
      /* 0x0183 */ unsigned char ResourceIndex;
    }; /* size: 0x008c */
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill3[187];
      /* 0x01b3 */ unsigned char LargeStack;
    }; /* size: 0x00bc */
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill4[44];
      /* 0x0124 */ unsigned long ContextSwitches;
    }; /* size: 0x0030 */
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill5[92];
      /* 0x0154 */ volatile unsigned char State;
      /* 0x0155 */ unsigned char NpxState;
      /* 0x0156 */ unsigned char WaitIrql;
      /* 0x0157 */ char WaitMode;
    }; /* size: 0x0060 */
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill6[140];
      /* 0x0184 */ unsigned long WaitTime;
    }; /* size: 0x0090 */
    struct
    {
      /* 0x00f8 */ unsigned char WaitBlockFill7[188];
      union
      {
        struct
        {
          /* 0x01b4 */ short KernelApcDisable;
          /* 0x01b6 */ short SpecialApcDisable;
        }; /* size: 0x0004 */
        /* 0x01b4 */ unsigned long CombinedApcDisable;
      }; /* size: 0x0004 */
    }; /* size: 0x00c0 */
  }; /* size: 0x00c0 */
  /* 0x01b8 */ struct _LIST_ENTRY QueueListEntry;
  /* 0x01c8 */ struct _KTRAP_FRAME* TrapFrame;
  /* 0x01d0 */ void* FirstArgument;
  union
  {
    /* 0x01d8 */ void* CallbackStack;
    /* 0x01d8 */ unsigned __int64 CallbackDepth;
  }; /* size: 0x0008 */
  /* 0x01e0 */ unsigned char ApcStateIndex;
  /* 0x01e1 */ char BasePriority;
  /* 0x01e2 */ char PriorityDecrement;
  /* 0x01e3 */ unsigned char Preempted;
  /* 0x01e4 */ unsigned char AdjustReason;
  /* 0x01e5 */ char AdjustIncrement;
  /* 0x01e6 */ unsigned char Spare01;
  /* 0x01e7 */ char Saturation;
  /* 0x01e8 */ unsigned long SystemCallNumber;
  /* 0x01ec */ unsigned long FreezeCount;
  /* 0x01f0 */ unsigned __int64 UserAffinity;
  /* 0x01f8 */ struct _KPROCESS* Process;
  /* 0x0200 */ volatile unsigned __int64 Affinity;
  /* 0x0208 */ struct _KAPC_STATE* ApcStatePointer[2];
  union
  {
    /* 0x0218 */ struct _KAPC_STATE SavedApcState;
    struct
    {
      /* 0x0218 */ unsigned char SavedApcStateFill[43];
      /* 0x0243 */ unsigned char Spare02;
      /* 0x0244 */ char SuspendCount;
      /* 0x0245 */ unsigned char UserIdealProcessor;
      /* 0x0246 */ unsigned char Spare03;
      /* 0x0247 */ unsigned char CodePatchInProgress;
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
  /* 0x0248 */ void* volatile Win32Thread;
  /* 0x0250 */ void* StackBase;
  union
  {
    /* 0x0258 */ struct _KAPC SuspendApc;
    struct
    {
      /* 0x0258 */ unsigned char SuspendApcFill0[1];
      /* 0x0259 */ char Spare04;
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0258 */ unsigned char SuspendApcFill1[3];
      /* 0x025b */ unsigned char QuantumReset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0258 */ unsigned char SuspendApcFill2[4];
      /* 0x025c */ unsigned long KernelTime;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0258 */ unsigned char SuspendApcFill3[64];
      /* 0x0298 */ struct _KPRCB* WaitPrcb;
    }; /* size: 0x0048 */
    struct
    {
      /* 0x0258 */ unsigned char SuspendApcFill4[72];
      /* 0x02a0 */ void* LegoData;
    }; /* size: 0x0050 */
    struct
    {
      /* 0x0258 */ unsigned char SuspendApcFill5[83];
      /* 0x02ab */ unsigned char PowerState;
      /* 0x02ac */ unsigned long UserTime;
    }; /* size: 0x0058 */
  }; /* size: 0x0058 */
  union
  {
    /* 0x02b0 */ struct _KSEMAPHORE SuspendSemaphore;
    struct
    {
      /* 0x02b0 */ unsigned char SuspendSemaphorefill[28];
      /* 0x02cc */ unsigned long SListFaultCount;
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
  /* 0x02d0 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x02e0 */ struct _LIST_ENTRY MutantListHead;
  /* 0x02f0 */ void* SListFaultAddress;
  /* 0x02f8 */ __int64 ReadOperationCount;
  /* 0x0300 */ __int64 WriteOperationCount;
  /* 0x0308 */ __int64 OtherOperationCount;
  /* 0x0310 */ __int64 ReadTransferCount;
  /* 0x0318 */ __int64 WriteTransferCount;
  /* 0x0320 */ __int64 OtherTransferCount;
  /* 0x0328 */ void* volatile MdlForLockedTeb;
} KTHREAD, *PKTHREAD; /* size: 0x0330 */

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
  /* 0x0330 */ union _LARGE_INTEGER CreateTime;
  union
  {
    /* 0x0338 */ union _LARGE_INTEGER ExitTime;
    /* 0x0338 */ struct _LIST_ENTRY KeyedWaitChain;
  }; /* size: 0x0010 */
  union
  {
    /* 0x0348 */ long ExitStatus;
    /* 0x0348 */ void* OfsChain;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0350 */ struct _LIST_ENTRY PostBlockList;
    struct
    {
      /* 0x0350 */ void* ForwardLinkShadow;
      /* 0x0358 */ void* StartAddress;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0360 */ struct _TERMINATION_PORT* TerminationPort;
    /* 0x0360 */ struct _ETHREAD* ReaperLink;
    /* 0x0360 */ void* KeyedWaitValue;
    /* 0x0360 */ void* Win32StartParameter;
  }; /* size: 0x0008 */
  /* 0x0368 */ unsigned __int64 ActiveTimerListLock;
  /* 0x0370 */ struct _LIST_ENTRY ActiveTimerListHead;
  /* 0x0380 */ struct _CLIENT_ID Cid;
  union
  {
    /* 0x0390 */ struct _KSEMAPHORE KeyedWaitSemaphore;
    /* 0x0390 */ struct _KSEMAPHORE AlpcWaitSemaphore;
  }; /* size: 0x0020 */
  /* 0x03b0 */ union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
  /* 0x03b8 */ struct _LIST_ENTRY IrpList;
  /* 0x03c8 */ unsigned __int64 TopLevelIrp;
  /* 0x03d0 */ struct _DEVICE_OBJECT* DeviceToVerify;
  /* 0x03d8 */ union _PSP_RATE_APC* RateControlApc;
  /* 0x03e0 */ void* Win32StartAddress;
  /* 0x03e8 */ void* SparePtr0;
  /* 0x03f0 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0400 */ struct _EX_RUNDOWN_REF RundownProtect;
  /* 0x0408 */ struct _EX_PUSH_LOCK ThreadLock;
  /* 0x0410 */ unsigned long ReadClusterSize;
  /* 0x0414 */ volatile long MmLockOrdering;
  union
  {
    /* 0x0418 */ unsigned long CrossThreadFlags;
    struct /* bitfield */
    {
      /* 0x0418 */ unsigned long Terminated : 1; /* bit position: 0 */
      /* 0x0418 */ unsigned long ThreadInserted : 1; /* bit position: 1 */
      /* 0x0418 */ unsigned long HideFromDebugger : 1; /* bit position: 2 */
      /* 0x0418 */ unsigned long ActiveImpersonationInfo : 1; /* bit position: 3 */
      /* 0x0418 */ unsigned long SystemThread : 1; /* bit position: 4 */
      /* 0x0418 */ unsigned long HardErrorsAreDisabled : 1; /* bit position: 5 */
      /* 0x0418 */ unsigned long BreakOnTermination : 1; /* bit position: 6 */
      /* 0x0418 */ unsigned long SkipCreationMsg : 1; /* bit position: 7 */
      /* 0x0418 */ unsigned long SkipTerminationMsg : 1; /* bit position: 8 */
      /* 0x0418 */ unsigned long CopyTokenOnOpen : 1; /* bit position: 9 */
      /* 0x0418 */ unsigned long ThreadIoPriority : 3; /* bit position: 10 */
      /* 0x0418 */ unsigned long ThreadPagePriority : 3; /* bit position: 13 */
      /* 0x0418 */ unsigned long RundownFail : 1; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x041c */ unsigned long SameThreadPassiveFlags;
    struct /* bitfield */
    {
      /* 0x041c */ unsigned long ActiveExWorker : 1; /* bit position: 0 */
      /* 0x041c */ unsigned long ExWorkerCanWaitUser : 1; /* bit position: 1 */
      /* 0x041c */ unsigned long MemoryMaker : 1; /* bit position: 2 */
      /* 0x041c */ unsigned long ClonedThread : 1; /* bit position: 3 */
      /* 0x041c */ unsigned long KeyedEventInUse : 1; /* bit position: 4 */
      /* 0x041c */ unsigned long RateApcState : 2; /* bit position: 5 */
      /* 0x041c */ unsigned long SelfTerminate : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0420 */ unsigned long SameThreadApcFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0420 */ unsigned char Spare : 1; /* bit position: 0 */
        /* 0x0420 */ volatile unsigned char StartAddressInvalid : 1; /* bit position: 1 */
        /* 0x0420 */ unsigned char EtwPageFaultCalloutActive : 1; /* bit position: 2 */
        /* 0x0420 */ unsigned char OwnsProcessWorkingSetExclusive : 1; /* bit position: 3 */
        /* 0x0420 */ unsigned char OwnsProcessWorkingSetShared : 1; /* bit position: 4 */
        /* 0x0420 */ unsigned char OwnsSystemWorkingSetExclusive : 1; /* bit position: 5 */
        /* 0x0420 */ unsigned char OwnsSystemWorkingSetShared : 1; /* bit position: 6 */
        /* 0x0420 */ unsigned char OwnsSessionWorkingSetExclusive : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0421 */ unsigned char OwnsSessionWorkingSetShared : 1; /* bit position: 0 */
        /* 0x0421 */ unsigned char OwnsProcessAddressSpaceExclusive : 1; /* bit position: 1 */
        /* 0x0421 */ unsigned char OwnsProcessAddressSpaceShared : 1; /* bit position: 2 */
        /* 0x0421 */ unsigned char SuppressSymbolLoad : 1; /* bit position: 3 */
        /* 0x0421 */ unsigned char Prefetching : 1; /* bit position: 4 */
        /* 0x0421 */ unsigned char OwnsDynamicMemoryShared : 1; /* bit position: 5 */
        /* 0x0421 */ unsigned char OwnsChangeControlAreaExclusive : 1; /* bit position: 6 */
        /* 0x0421 */ unsigned char OwnsChangeControlAreaShared : 1; /* bit position: 7 */
      }; /* bitfield */
      /* 0x0422 */ unsigned char Spare1 : 8; /* bit position: 0 */
      /* 0x0423 */ unsigned char PriorityRegionActive;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0424 */ unsigned char CacheManagerActive;
  /* 0x0425 */ unsigned char DisablePageFaultClustering;
  /* 0x0426 */ unsigned char ActiveFaultCount;
  /* 0x0428 */ unsigned __int64 AlpcMessageId;
  union
  {
    /* 0x0430 */ void* AlpcMessage;
    /* 0x0430 */ unsigned long AlpcReceiveAttributeSet;
  }; /* size: 0x0008 */
  /* 0x0438 */ struct _LIST_ENTRY AlpcWaitListEntry;
  /* 0x0448 */ unsigned long CacheManagerCount;
  /* 0x044c */ long __PADDING__[1];
} ETHREAD, *PETHREAD; /* size: 0x0450 */

