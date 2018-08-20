typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0004 */ void* StackBase;
  /* 0x0008 */ void* StackLimit;
  /* 0x000c */ void* SubSystemTib;
  union
  {
    /* 0x0010 */ void* FiberData;
    /* 0x0010 */ unsigned long Version;
  }; /* size: 0x0004 */
  /* 0x0014 */ void* ArbitraryUserPointer;
  /* 0x0018 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x001c */

typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Cr0NpxState;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _DESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad;
  /* 0x0002 */ unsigned short Limit;
  /* 0x0004 */ unsigned long Base;
} DESCRIPTOR, *PDESCRIPTOR; /* size: 0x0008 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned long Cr0;
  /* 0x0004 */ unsigned long Cr2;
  /* 0x0008 */ unsigned long Cr3;
  /* 0x000c */ unsigned long Cr4;
  /* 0x0010 */ unsigned long KernelDr0;
  /* 0x0014 */ unsigned long KernelDr1;
  /* 0x0018 */ unsigned long KernelDr2;
  /* 0x001c */ unsigned long KernelDr3;
  /* 0x0020 */ unsigned long KernelDr6;
  /* 0x0024 */ unsigned long KernelDr7;
  /* 0x0028 */ struct _DESCRIPTOR Gdtr;
  /* 0x0030 */ struct _DESCRIPTOR Idtr;
  /* 0x0038 */ unsigned short Tr;
  /* 0x003a */ unsigned short Ldtr;
  /* 0x003c */ unsigned long Reserved[6];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x0054 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _CONTEXT ContextFrame;
  /* 0x02cc */ struct _KSPECIAL_REGISTERS SpecialRegisters;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x0320 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0004 */ unsigned long* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0008 */

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

typedef struct _PP_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE* P;
  /* 0x0004 */ struct _GENERAL_LOOKASIDE* L;
} PP_LOOKASIDE_LIST, *PPP_LOOKASIDE_LIST; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0048 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _LIST_ENTRY DpcListHead;
  /* 0x0008 */ unsigned long DpcLock;
  /* 0x000c */ volatile long DpcQueueDepth;
  /* 0x0010 */ unsigned long DpcCount;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0014 */

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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _FNSAVE_FORMAT
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
} FNSAVE_FORMAT, *PFNSAVE_FORMAT; /* size: 0x006c */

typedef struct _FXSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned short TagWord;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned long ErrorSelector;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned long DataSelector;
  /* 0x0018 */ unsigned long MXCsr;
  /* 0x001c */ unsigned long MXCsrMask;
  /* 0x0020 */ unsigned char RegisterArea[128];
  /* 0x00a0 */ unsigned char Reserved3[128];
  /* 0x0120 */ unsigned char Reserved4[224];
  /* 0x0200 */ unsigned char Align16Byte[8];
} FXSAVE_FORMAT, *PFXSAVE_FORMAT; /* size: 0x0208 */

typedef struct _FX_SAVE_AREA
{
  union // _TAG_UNNAMED_10
  {
    union
    {
      /* 0x0000 */ struct _FNSAVE_FORMAT FnArea;
      /* 0x0000 */ struct _FXSAVE_FORMAT FxArea;
    }; /* size: 0x0208 */
  } /* size: 0x0208 */ U;
  /* 0x0208 */ unsigned long NpxSavedCpu;
  /* 0x020c */ unsigned long Cr0NpxState;
} FX_SAVE_AREA, *PFX_SAVE_AREA; /* size: 0x0210 */

struct PROCESSOR_IDLE_TIMES
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 EndTime;
  /* 0x0010 */ unsigned long Reserved[4];
}; /* size: 0x0020 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_2
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

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ void* IdleFunction /* function */;
  /* 0x0004 */ struct PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ unsigned __int64 LastTimeCheck;
  /* 0x0010 */ unsigned __int64 LastIdleTime;
  /* 0x0018 */ struct PROCESSOR_IDLE_TIMES IdleTimes;
  /* 0x0038 */ struct PPM_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x003c */ struct PPM_PERF_STATES* PerfStates;
  /* 0x0040 */ unsigned long LastKernelUserTime;
  /* 0x0044 */ unsigned long LastIdleThreadKTime;
  /* 0x0048 */ unsigned __int64 LastGlobalTimeHv;
  /* 0x0050 */ unsigned __int64 LastProcessorTimeHv;
  /* 0x0058 */ unsigned char ThermalConstraint;
  /* 0x0059 */ unsigned char LastBusyPercentage;
  union // _TAG_UNNAMED_11
  {
    union
    {
      /* 0x005a */ unsigned short AsUSHORT;
      struct /* bitfield */
      {
        /* 0x005a */ unsigned short PStateDomain : 1; /* bit position: 0 */
        /* 0x005a */ unsigned short PStateDomainIdleAccounting : 1; /* bit position: 1 */
        /* 0x005a */ unsigned short Reserved : 14; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Flags;
  /* 0x0060 */ struct _KTIMER PerfTimer;
  /* 0x0088 */ struct _KDPC PerfDpc;
  /* 0x00a8 */ unsigned long LastSysTime;
  /* 0x00ac */ struct _KPRCB* PStateMaster;
  /* 0x00b0 */ unsigned long PStateSet;
  /* 0x00b4 */ unsigned long CurrentPState;
  /* 0x00b8 */ unsigned long Reserved0;
  /* 0x00bc */ unsigned long DesiredPState;
  /* 0x00c0 */ unsigned long Reserved1;
  /* 0x00c4 */ volatile unsigned long PStateIdleStartTime;
  /* 0x00c8 */ unsigned long PStateIdleTime;
  /* 0x00cc */ unsigned long LastPStateIdleTime;
  /* 0x00d0 */ unsigned long PStateStartTime;
  /* 0x00d4 */ unsigned long WmiDispatchPtr;
  /* 0x00d8 */ long WmiInterfaceEnabled;
  /* 0x00dc */ long __PADDING__[1];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x00e0 */

typedef enum _PROCESSOR_CACHE_TYPE
{
  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3,
} PROCESSOR_CACHE_TYPE, *PPROCESSOR_CACHE_TYPE;

typedef struct _CACHE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char Associativity;
  /* 0x0002 */ unsigned short LineSize;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR; /* size: 0x000c */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned short MinorVersion;
  /* 0x0002 */ unsigned short MajorVersion;
  /* 0x0004 */ struct _KTHREAD* CurrentThread;
  /* 0x0008 */ struct _KTHREAD* NextThread;
  /* 0x000c */ struct _KTHREAD* IdleThread;
  /* 0x0010 */ unsigned char Number;
  /* 0x0011 */ unsigned char NestingLevel;
  /* 0x0012 */ unsigned short BuildType;
  /* 0x0014 */ unsigned long SetMember;
  /* 0x0018 */ char CpuType;
  /* 0x0019 */ char CpuID;
  union
  {
    /* 0x001a */ unsigned short CpuStep;
    struct
    {
      /* 0x001a */ unsigned char CpuStepping;
      /* 0x001b */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x001c */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x033c */ unsigned long KernelReserved[16];
  /* 0x037c */ unsigned long HalReserved[16];
  /* 0x03bc */ unsigned long CFlushSize;
  /* 0x03c0 */ unsigned char PrcbPad0[88];
  /* 0x0418 */ struct _KSPIN_LOCK_QUEUE LockQueue[33];
  /* 0x0520 */ struct _KTHREAD* NpxThread;
  /* 0x0524 */ unsigned long InterruptCount;
  /* 0x0528 */ unsigned long KernelTime;
  /* 0x052c */ unsigned long UserTime;
  /* 0x0530 */ unsigned long DpcTime;
  /* 0x0534 */ unsigned long DpcTimeCount;
  /* 0x0538 */ unsigned long InterruptTime;
  /* 0x053c */ unsigned long AdjustDpcThreshold;
  /* 0x0540 */ unsigned long PageColor;
  /* 0x0544 */ unsigned char SkipTick;
  /* 0x0545 */ unsigned char DebuggerSavedIRQL;
  /* 0x0546 */ unsigned char NodeColor;
  /* 0x0547 */ unsigned char PollSlot;
  /* 0x0548 */ unsigned long NodeShiftedColor;
  /* 0x054c */ struct _KNODE* ParentNode;
  /* 0x0550 */ unsigned long MultiThreadProcessorSet;
  /* 0x0554 */ struct _KPRCB* MultiThreadSetMaster;
  /* 0x0558 */ unsigned long SecondaryColorMask;
  /* 0x055c */ unsigned long DpcTimeLimit;
  /* 0x0560 */ unsigned long CcFastReadNoWait;
  /* 0x0564 */ unsigned long CcFastReadWait;
  /* 0x0568 */ unsigned long CcFastReadNotPossible;
  /* 0x056c */ unsigned long CcCopyReadNoWait;
  /* 0x0570 */ unsigned long CcCopyReadWait;
  /* 0x0574 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x0578 */ volatile long MmSpinLockOrdering;
  /* 0x057c */ volatile long IoReadOperationCount;
  /* 0x0580 */ volatile long IoWriteOperationCount;
  /* 0x0584 */ volatile long IoOtherOperationCount;
  /* 0x0588 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x0590 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x0598 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x05a0 */ unsigned long CcFastMdlReadNoWait;
  /* 0x05a4 */ unsigned long CcFastMdlReadWait;
  /* 0x05a8 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x05ac */ unsigned long CcMapDataNoWait;
  /* 0x05b0 */ unsigned long CcMapDataWait;
  /* 0x05b4 */ unsigned long CcPinMappedDataCount;
  /* 0x05b8 */ unsigned long CcPinReadNoWait;
  /* 0x05bc */ unsigned long CcPinReadWait;
  /* 0x05c0 */ unsigned long CcMdlReadNoWait;
  /* 0x05c4 */ unsigned long CcMdlReadWait;
  /* 0x05c8 */ unsigned long CcLazyWriteHotSpots;
  /* 0x05cc */ unsigned long CcLazyWriteIos;
  /* 0x05d0 */ unsigned long CcLazyWritePages;
  /* 0x05d4 */ unsigned long CcDataFlushes;
  /* 0x05d8 */ unsigned long CcDataPages;
  /* 0x05dc */ unsigned long CcLostDelayedWrites;
  /* 0x05e0 */ unsigned long CcFastReadResourceMiss;
  /* 0x05e4 */ unsigned long CcCopyReadWaitMiss;
  /* 0x05e8 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x05ec */ unsigned long CcMapDataNoWaitMiss;
  /* 0x05f0 */ unsigned long CcMapDataWaitMiss;
  /* 0x05f4 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x05f8 */ unsigned long CcPinReadWaitMiss;
  /* 0x05fc */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x0600 */ unsigned long CcMdlReadWaitMiss;
  /* 0x0604 */ unsigned long CcReadAheadIos;
  /* 0x0608 */ unsigned long KeAlignmentFixupCount;
  /* 0x060c */ unsigned long KeExceptionDispatchCount;
  /* 0x0610 */ unsigned long KeSystemCalls;
  /* 0x0614 */ unsigned long PrcbPad1[3];
  /* 0x0620 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x06a0 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x0fa0 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x18a0 */ volatile unsigned long PacketBarrier;
  /* 0x18a4 */ volatile long ReverseStall;
  /* 0x18a8 */ void* IpiFrame;
  /* 0x18ac */ unsigned char PrcbPad2[52];
  /* 0x18e0 */ void* volatile CurrentPacket[3];
  /* 0x18ec */ volatile unsigned long TargetSet;
  /* 0x18f0 */ void* volatile WorkerRoutine /* function */;
  /* 0x18f4 */ volatile unsigned long IpiFrozen;
  /* 0x18f8 */ unsigned char PrcbPad3[40];
  /* 0x1920 */ volatile unsigned long RequestSummary;
  /* 0x1924 */ struct _KPRCB* volatile SignalDone;
  /* 0x1928 */ unsigned char PrcbPad4[56];
  /* 0x1960 */ struct _KDPC_DATA DpcData[2];
  /* 0x1988 */ void* DpcStack;
  /* 0x198c */ long MaximumDpcQueueDepth;
  /* 0x1990 */ unsigned long DpcRequestRate;
  /* 0x1994 */ unsigned long MinimumDpcRate;
  /* 0x1998 */ volatile unsigned char DpcInterruptRequested;
  /* 0x1999 */ volatile unsigned char DpcThreadRequested;
  /* 0x199a */ volatile unsigned char DpcRoutineActive;
  /* 0x199b */ volatile unsigned char DpcThreadActive;
  /* 0x199c */ unsigned long PrcbLock;
  /* 0x19a0 */ unsigned long DpcLastCount;
  /* 0x19a4 */ volatile unsigned long TimerHand;
  /* 0x19a8 */ volatile unsigned long TimerRequest;
  /* 0x19ac */ void* PrcbPad41;
  /* 0x19b0 */ struct _KEVENT DpcEvent;
  /* 0x19c0 */ unsigned char ThreadDpcEnable;
  /* 0x19c1 */ volatile unsigned char QuantumEnd;
  /* 0x19c2 */ unsigned char PrcbPad50;
  /* 0x19c3 */ volatile unsigned char IdleSchedule;
  /* 0x19c4 */ long DpcSetEventRequest;
  /* 0x19c8 */ long Sleeping;
  /* 0x19cc */ unsigned long PeriodicCount;
  /* 0x19d0 */ unsigned long PeriodicBias;
  /* 0x19d4 */ unsigned char PrcbPad5[6];
  /* 0x19dc */ long TickOffset;
  /* 0x19e0 */ struct _KDPC CallDpc;
  /* 0x1a00 */ long ClockKeepAlive;
  /* 0x1a04 */ unsigned char ClockCheckSlot;
  /* 0x1a05 */ unsigned char ClockPollCycle;
  /* 0x1a06 */ unsigned char PrcbPad6[2];
  /* 0x1a08 */ long DpcWatchdogPeriod;
  /* 0x1a0c */ long DpcWatchdogCount;
  /* 0x1a10 */ long ThreadWatchdogPeriod;
  /* 0x1a14 */ long ThreadWatchdogCount;
  /* 0x1a18 */ unsigned long PrcbPad70[2];
  /* 0x1a20 */ struct _LIST_ENTRY WaitListHead;
  /* 0x1a28 */ unsigned long WaitLock;
  /* 0x1a2c */ unsigned long ReadySummary;
  /* 0x1a30 */ unsigned long QueueIndex;
  /* 0x1a34 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x1a38 */ unsigned __int64 StartCycles;
  /* 0x1a40 */ unsigned __int64 CycleTime;
  /* 0x1a48 */ unsigned __int64 PrcbPad71[3];
  /* 0x1a60 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x1b60 */ void* ChainedInterruptList;
  /* 0x1b64 */ long LookasideIrpFloat;
  /* 0x1b68 */ volatile long MmPageFaultCount;
  /* 0x1b6c */ volatile long MmCopyOnWriteCount;
  /* 0x1b70 */ volatile long MmTransitionCount;
  /* 0x1b74 */ volatile long MmCacheTransitionCount;
  /* 0x1b78 */ volatile long MmDemandZeroCount;
  /* 0x1b7c */ volatile long MmPageReadCount;
  /* 0x1b80 */ volatile long MmPageReadIoCount;
  /* 0x1b84 */ volatile long MmCacheReadCount;
  /* 0x1b88 */ volatile long MmCacheIoCount;
  /* 0x1b8c */ volatile long MmDirtyPagesWriteCount;
  /* 0x1b90 */ volatile long MmDirtyWriteIoCount;
  /* 0x1b94 */ volatile long MmMappedPagesWriteCount;
  /* 0x1b98 */ volatile long MmMappedWriteIoCount;
  /* 0x1b9c */ volatile unsigned long CachedCommit;
  /* 0x1ba0 */ volatile unsigned long CachedResidentAvailable;
  /* 0x1ba4 */ void* HyperPte;
  /* 0x1ba8 */ unsigned char CpuVendor;
  /* 0x1ba9 */ unsigned char PrcbPad9[3];
  /* 0x1bac */ unsigned char VendorString[13];
  /* 0x1bb9 */ unsigned char InitialApicId;
  /* 0x1bba */ unsigned char CoresPerPhysicalProcessor;
  /* 0x1bbb */ unsigned char LogicalProcessorsPerPhysicalProcessor;
  /* 0x1bbc */ unsigned long MHz;
  /* 0x1bc0 */ unsigned long FeatureBits;
  /* 0x1bc8 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x1bd0 */ volatile unsigned __int64 IsrTime;
  /* 0x1bd8 */ unsigned __int64 SpareField1;
  /* 0x1be0 */ struct _FX_SAVE_AREA NpxSaveArea;
  /* 0x1df0 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x1ed0 */ struct _KDPC DpcWatchdogDpc;
  /* 0x1ef0 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x1f18 */ void* WheaInfo;
  /* 0x1f1c */ void* EtwSupport;
  /* 0x1f20 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x1f28 */ union _LARGE_INTEGER HypercallPagePhysical;
  /* 0x1f30 */ void* HypercallPageVirtual;
  /* 0x1f34 */ void* RateControl;
  /* 0x1f38 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x1f74 */ unsigned long CacheCount;
  /* 0x1f78 */ unsigned long CacheProcessorMask[5];
  /* 0x1f8c */ unsigned char LogicalProcessorsPerCore;
  /* 0x1f8d */ unsigned char PrcbPad8[3];
  /* 0x1f90 */ unsigned long PackageProcessorSet;
  /* 0x1f94 */ unsigned long CoreProcessorSet;
} KPRCB, *PKPRCB; /* size: 0x1f98 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Used_ExceptionList;
      /* 0x0004 */ void* Used_StackBase;
      /* 0x0008 */ void* Spare2;
      /* 0x000c */ void* TssCopy;
      /* 0x0010 */ unsigned long ContextSwitches;
      /* 0x0014 */ unsigned long SetMemberCopy;
      /* 0x0018 */ void* Used_Self;
    }; /* size: 0x001c */
  }; /* size: 0x001c */
  /* 0x001c */ struct _KPCR* SelfPcr;
  /* 0x0020 */ struct _KPRCB* Prcb;
  /* 0x0024 */ unsigned char Irql;
  /* 0x0028 */ unsigned long IRR;
  /* 0x002c */ unsigned long IrrActive;
  /* 0x0030 */ unsigned long IDR;
  /* 0x0034 */ void* KdVersionBlock;
  /* 0x0038 */ struct _KIDTENTRY* IDT;
  /* 0x003c */ struct _KGDTENTRY* GDT;
  /* 0x0040 */ struct _KTSS* TSS;
  /* 0x0044 */ unsigned short MajorVersion;
  /* 0x0046 */ unsigned short MinorVersion;
  /* 0x0048 */ unsigned long SetMember;
  /* 0x004c */ unsigned long StallScaleFactor;
  /* 0x0050 */ unsigned char SpareUnused;
  /* 0x0051 */ unsigned char Number;
  /* 0x0052 */ unsigned char Spare0;
  /* 0x0053 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x0054 */ unsigned long VdmAlert;
  /* 0x0058 */ unsigned long KernelReserved[14];
  /* 0x0090 */ unsigned long SecondLevelCacheSize;
  /* 0x0094 */ unsigned long HalReserved[16];
  /* 0x00d4 */ unsigned long InterruptMode;
  /* 0x00d8 */ unsigned char Spare1;
  /* 0x00dc */ unsigned long KernelReserved2[17];
  /* 0x0120 */ struct _KPRCB PrcbData;
} KPCR, *PKPCR; /* size: 0x20b8 */

