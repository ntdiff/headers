typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef struct _KDESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad[3];
  /* 0x0006 */ unsigned short Limit;
  /* 0x0008 */ void* Base;
} KDESCRIPTOR, *PKDESCRIPTOR; /* size: 0x0010 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Cr0;
  /* 0x0008 */ unsigned __int64 Cr2;
  /* 0x0010 */ unsigned __int64 Cr3;
  /* 0x0018 */ unsigned __int64 Cr4;
  /* 0x0020 */ unsigned __int64 KernelDr0;
  /* 0x0028 */ unsigned __int64 KernelDr1;
  /* 0x0030 */ unsigned __int64 KernelDr2;
  /* 0x0038 */ unsigned __int64 KernelDr3;
  /* 0x0040 */ unsigned __int64 KernelDr6;
  /* 0x0048 */ unsigned __int64 KernelDr7;
  /* 0x0050 */ struct _KDESCRIPTOR Gdtr;
  /* 0x0060 */ struct _KDESCRIPTOR Idtr;
  /* 0x0070 */ unsigned short Tr;
  /* 0x0072 */ unsigned short Ldtr;
  /* 0x0074 */ unsigned long MxCsr;
  /* 0x0078 */ unsigned __int64 DebugControl;
  /* 0x0080 */ unsigned __int64 LastBranchToRip;
  /* 0x0088 */ unsigned __int64 LastBranchFromRip;
  /* 0x0090 */ unsigned __int64 LastExceptionToRip;
  /* 0x0098 */ unsigned __int64 LastExceptionFromRip;
  /* 0x00a0 */ unsigned __int64 Cr8;
  /* 0x00a8 */ unsigned __int64 MsrGsBase;
  /* 0x00b0 */ unsigned __int64 MsrGsSwap;
  /* 0x00b8 */ unsigned __int64 MsrStar;
  /* 0x00c0 */ unsigned __int64 MsrLStar;
  /* 0x00c8 */ unsigned __int64 MsrCStar;
  /* 0x00d0 */ unsigned __int64 MsrSyscallMask;
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00d8 */

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XMM_SAVE_AREA32
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XMM_SAVE_AREA32, *PXMM_SAVE_AREA32; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XMM_SAVE_AREA32 FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00e0 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x05b0 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0008 */ unsigned __int64* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0010 */

typedef struct _PP_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE* P;
  /* 0x0008 */ struct _GENERAL_LOOKASIDE* L;
} PP_LOOKASIDE_LIST, *PPP_LOOKASIDE_LIST; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_26
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct // _TAG_UNNAMED_27
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0060 */

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

typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x0018 */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0020 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ __int64 RequestSummary;
  union
  {
    /* 0x0008 */ struct _KREQUEST_PACKET RequestPacket;
    /* 0x0008 */ void* Virtual[7];
  }; /* size: 0x0038 */
} REQUEST_MAILBOX, *PREQUEST_MAILBOX; /* size: 0x0040 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _LIST_ENTRY DpcListHead;
  /* 0x0010 */ unsigned __int64 DpcLock;
  /* 0x0018 */ volatile long DpcQueueDepth;
  /* 0x001c */ unsigned long DpcCount;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0020 */

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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

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

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ unsigned __int64 LastTimeCheck;
  /* 0x0010 */ unsigned __int64 IdleTimeAccumulated;
  union
  {
    struct // _TAG_UNNAMED_32
    {
      /* 0x0018 */ unsigned __int64 IdleTransitionTime;
    } /* size: 0x0008 */ Native;
    struct // _TAG_UNNAMED_33
    {
      /* 0x0018 */ unsigned __int64 LastIdleCheck;
    } /* size: 0x0008 */ Hv;
  }; /* size: 0x0008 */
  /* 0x0020 */ struct PPM_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0028 */ struct _PPM_PERF_STATES* PerfStates;
  /* 0x0030 */ unsigned long LastKernelUserTime;
  /* 0x0034 */ unsigned long LastIdleThreadKTime;
  /* 0x0038 */ unsigned __int64 LastGlobalTimeHv;
  /* 0x0040 */ unsigned __int64 LastProcessorTimeHv;
  /* 0x0048 */ unsigned char ThermalConstraint;
  /* 0x0049 */ unsigned char LastBusyPercentage;
  union // _TAG_UNNAMED_34
  {
    union
    {
      /* 0x004a */ unsigned short AsUSHORT;
      struct /* bitfield */
      {
        /* 0x004a */ unsigned short PStateDomain : 1; /* bit position: 0 */
        /* 0x004a */ unsigned short PStateDomainIdleAccounting : 1; /* bit position: 1 */
        /* 0x004a */ unsigned short Reserved : 14; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Flags;
  /* 0x0050 */ struct _KTIMER PerfTimer;
  /* 0x0090 */ struct _KDPC PerfDpc;
  /* 0x00d0 */ unsigned long LastSysTime;
  /* 0x00d8 */ struct _KPRCB* PStateMaster;
  /* 0x00e0 */ unsigned __int64 PStateSet;
  /* 0x00e8 */ unsigned long CurrentPState;
  /* 0x00ec */ unsigned long DesiredPState;
  /* 0x00f0 */ volatile unsigned long PStateIdleStartTime;
  /* 0x00f4 */ unsigned long PStateIdleTime;
  /* 0x00f8 */ unsigned long LastPStateIdleTime;
  /* 0x00fc */ unsigned long PStateStartTime;
  /* 0x0100 */ unsigned long DiaIndex;
  /* 0x0104 */ unsigned long Reserved0;
  /* 0x0108 */ unsigned __int64 WmiDispatchPtr;
  /* 0x0110 */ long WmiInterfaceEnabled;
  /* 0x0114 */ long __PADDING__[1];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0118 */

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
  /* 0x0000 */ unsigned long MxCsr;
  /* 0x0004 */ unsigned short Number;
  /* 0x0006 */ unsigned char InterruptRequest;
  /* 0x0007 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char Group;
  /* 0x0022 */ unsigned char PrcbPad00[6];
  /* 0x0028 */ unsigned __int64 RspBase;
  /* 0x0030 */ unsigned __int64 PrcbLock;
  /* 0x0038 */ unsigned __int64 SetMember;
  /* 0x0040 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x05f0 */ char CpuType;
  /* 0x05f1 */ char CpuID;
  union
  {
    /* 0x05f2 */ unsigned short CpuStep;
    struct
    {
      /* 0x05f2 */ unsigned char CpuStepping;
      /* 0x05f3 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x05f4 */ unsigned long MHz;
  /* 0x05f8 */ unsigned __int64 HalReserved[8];
  /* 0x0638 */ unsigned short MinorVersion;
  /* 0x063a */ unsigned short MajorVersion;
  /* 0x063c */ unsigned char BuildType;
  /* 0x063d */ unsigned char CpuVendor;
  /* 0x063e */ unsigned char CoresPerPhysicalProcessor;
  /* 0x063f */ unsigned char LogicalProcessorsPerCore;
  /* 0x0640 */ unsigned long ApicMask;
  /* 0x0644 */ unsigned long CFlushSize;
  /* 0x0648 */ void* AcpiReserved;
  /* 0x0650 */ unsigned long InitialApicId;
  /* 0x0654 */ unsigned long Stride;
  /* 0x0658 */ unsigned __int64 PrcbPad01[3];
  /* 0x0670 */ struct _KSPIN_LOCK_QUEUE LockQueue[49];
  /* 0x0980 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x0a80 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x1680 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x2280 */ volatile unsigned __int64 PacketBarrier;
  /* 0x2288 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x2290 */ volatile long MmPageFaultCount;
  /* 0x2294 */ volatile long MmCopyOnWriteCount;
  /* 0x2298 */ volatile long MmTransitionCount;
  /* 0x229c */ volatile long MmDemandZeroCount;
  /* 0x22a0 */ volatile long MmPageReadCount;
  /* 0x22a4 */ volatile long MmPageReadIoCount;
  /* 0x22a8 */ volatile long MmDirtyPagesWriteCount;
  /* 0x22ac */ volatile long MmDirtyWriteIoCount;
  /* 0x22b0 */ volatile long MmMappedPagesWriteCount;
  /* 0x22b4 */ volatile long MmMappedWriteIoCount;
  /* 0x22b8 */ unsigned long KeSystemCalls;
  /* 0x22bc */ unsigned long KeContextSwitches;
  /* 0x22c0 */ unsigned long CcFastReadNoWait;
  /* 0x22c4 */ unsigned long CcFastReadWait;
  /* 0x22c8 */ unsigned long CcFastReadNotPossible;
  /* 0x22cc */ unsigned long CcCopyReadNoWait;
  /* 0x22d0 */ unsigned long CcCopyReadWait;
  /* 0x22d4 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x22d8 */ long LookasideIrpFloat;
  /* 0x22dc */ volatile long IoReadOperationCount;
  /* 0x22e0 */ volatile long IoWriteOperationCount;
  /* 0x22e4 */ volatile long IoOtherOperationCount;
  /* 0x22e8 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x22f0 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x22f8 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x2300 */ volatile unsigned __int64 TargetSet;
  /* 0x2308 */ volatile unsigned long IpiFrozen;
  /* 0x230c */ unsigned char PrcbPad3[116];
  /* 0x2380 */ struct _REQUEST_MAILBOX RequestMailbox[64];
  /* 0x3380 */ volatile unsigned __int64 SenderSummary;
  /* 0x3388 */ unsigned char PrcbPad4[120];
  /* 0x3400 */ struct _KDPC_DATA DpcData[2];
  /* 0x3440 */ void* DpcStack;
  /* 0x3448 */ void* SparePtr0;
  /* 0x3450 */ long MaximumDpcQueueDepth;
  /* 0x3454 */ unsigned long DpcRequestRate;
  /* 0x3458 */ unsigned long MinimumDpcRate;
  /* 0x345c */ volatile unsigned char DpcInterruptRequested;
  /* 0x345d */ volatile unsigned char DpcThreadRequested;
  /* 0x345e */ volatile unsigned char DpcRoutineActive;
  /* 0x345f */ volatile unsigned char DpcThreadActive;
  union
  {
    /* 0x3460 */ volatile unsigned __int64 TimerHand;
    /* 0x3460 */ volatile unsigned __int64 TimerRequest;
  }; /* size: 0x0008 */
  /* 0x3468 */ long TickOffset;
  /* 0x346c */ long MasterOffset;
  /* 0x3470 */ unsigned long DpcLastCount;
  /* 0x3474 */ unsigned char ThreadDpcEnable;
  /* 0x3475 */ volatile unsigned char QuantumEnd;
  /* 0x3476 */ unsigned char PrcbPad50;
  /* 0x3477 */ volatile unsigned char IdleSchedule;
  /* 0x3478 */ long DpcSetEventRequest;
  /* 0x347c */ unsigned long KeExceptionDispatchCount;
  /* 0x3480 */ struct _KEVENT DpcEvent;
  /* 0x3498 */ void* PrcbPad51;
  /* 0x34a0 */ struct _KDPC CallDpc;
  /* 0x34e0 */ long ClockKeepAlive;
  /* 0x34e4 */ unsigned char ClockCheckSlot;
  /* 0x34e5 */ unsigned char ClockPollCycle;
  /* 0x34e6 */ unsigned char PrcbPad6[2];
  /* 0x34e8 */ long DpcWatchdogPeriod;
  /* 0x34ec */ long DpcWatchdogCount;
  /* 0x34f0 */ unsigned __int64 PrcbPad70[2];
  /* 0x3500 */ struct _LIST_ENTRY WaitListHead;
  /* 0x3510 */ unsigned __int64 WaitLock;
  /* 0x3518 */ unsigned long ReadySummary;
  /* 0x351c */ unsigned long QueueIndex;
  /* 0x3520 */ unsigned __int64 PrcbPad71[12];
  /* 0x3580 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x3780 */ unsigned long InterruptCount;
  /* 0x3784 */ unsigned long KernelTime;
  /* 0x3788 */ unsigned long UserTime;
  /* 0x378c */ unsigned long DpcTime;
  /* 0x3790 */ unsigned long InterruptTime;
  /* 0x3794 */ unsigned long AdjustDpcThreshold;
  /* 0x3798 */ unsigned char SkipTick;
  /* 0x3799 */ unsigned char DebuggerSavedIRQL;
  /* 0x379a */ unsigned char PollSlot;
  /* 0x379b */ unsigned char PrcbPad80[5];
  /* 0x37a0 */ unsigned long DpcTimeCount;
  /* 0x37a4 */ unsigned long DpcTimeLimit;
  /* 0x37a8 */ unsigned long PeriodicCount;
  /* 0x37ac */ unsigned long PeriodicBias;
  /* 0x37b0 */ unsigned __int64 PrcbPad81[2];
  /* 0x37c0 */ struct _KNODE* ParentNode;
  /* 0x37c8 */ unsigned __int64 MultiThreadProcessorSet;
  /* 0x37d0 */ struct _KPRCB* MultiThreadSetMaster;
  /* 0x37d8 */ unsigned __int64 StartCycles;
  /* 0x37e0 */ volatile long MmSpinLockOrdering;
  /* 0x37e4 */ unsigned long PageColor;
  /* 0x37e8 */ unsigned long NodeColor;
  /* 0x37ec */ unsigned long NodeShiftedColor;
  /* 0x37f0 */ unsigned long SecondaryColorMask;
  /* 0x37f4 */ long Sleeping;
  /* 0x37f8 */ unsigned __int64 CycleTime;
  /* 0x3800 */ unsigned long CcFastMdlReadNoWait;
  /* 0x3804 */ unsigned long CcFastMdlReadWait;
  /* 0x3808 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x380c */ unsigned long CcMapDataNoWait;
  /* 0x3810 */ unsigned long CcMapDataWait;
  /* 0x3814 */ unsigned long CcPinMappedDataCount;
  /* 0x3818 */ unsigned long CcPinReadNoWait;
  /* 0x381c */ unsigned long CcPinReadWait;
  /* 0x3820 */ unsigned long CcMdlReadNoWait;
  /* 0x3824 */ unsigned long CcMdlReadWait;
  /* 0x3828 */ unsigned long CcLazyWriteHotSpots;
  /* 0x382c */ unsigned long CcLazyWriteIos;
  /* 0x3830 */ unsigned long CcLazyWritePages;
  /* 0x3834 */ unsigned long CcDataFlushes;
  /* 0x3838 */ unsigned long CcDataPages;
  /* 0x383c */ unsigned long CcLostDelayedWrites;
  /* 0x3840 */ unsigned long CcFastReadResourceMiss;
  /* 0x3844 */ unsigned long CcCopyReadWaitMiss;
  /* 0x3848 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x384c */ unsigned long CcMapDataNoWaitMiss;
  /* 0x3850 */ unsigned long CcMapDataWaitMiss;
  /* 0x3854 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x3858 */ unsigned long CcPinReadWaitMiss;
  /* 0x385c */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x3860 */ unsigned long CcMdlReadWaitMiss;
  /* 0x3864 */ unsigned long CcReadAheadIos;
  /* 0x3868 */ volatile long MmCacheTransitionCount;
  /* 0x386c */ volatile long MmCacheReadCount;
  /* 0x3870 */ volatile long MmCacheIoCount;
  /* 0x3874 */ unsigned long PrcbPad91[3];
  /* 0x3880 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x3998 */ unsigned long KeAlignmentFixupCount;
  /* 0x399c */ unsigned char VendorString[13];
  /* 0x39a9 */ unsigned char PrcbPad10[3];
  /* 0x39ac */ unsigned long FeatureBits;
  /* 0x39b0 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x39b8 */ struct _KDPC DpcWatchdogDpc;
  /* 0x39f8 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x3a38 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x3a74 */ unsigned long CacheCount;
  /* 0x3a78 */ volatile unsigned long CachedCommit;
  /* 0x3a7c */ volatile unsigned long CachedResidentAvailable;
  /* 0x3a80 */ void* HyperPte;
  /* 0x3a88 */ void* WheaInfo;
  /* 0x3a90 */ void* EtwSupport;
  /* 0x3aa0 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x3ab0 */ union _SLIST_HEADER HypercallPageList;
  /* 0x3ac0 */ void* HypercallPageVirtual;
  /* 0x3ac8 */ void* VirtualApicAssist;
  /* 0x3ad0 */ unsigned __int64* StatisticsPage;
  /* 0x3ad8 */ void* RateControl;
  /* 0x3ae0 */ unsigned __int64 CacheProcessorMask[5];
  /* 0x3b08 */ unsigned __int64 PackageProcessorSet;
  /* 0x3b10 */ unsigned __int64 CoreProcessorSet;
  /* 0x3b18 */ long __PADDING__[2];
} KPRCB, *PKPRCB; /* size: 0x3b20 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ union _KGDTENTRY64* GdtBase;
      /* 0x0008 */ struct _KTSS64* TssBase;
      /* 0x0010 */ unsigned __int64 UserRsp;
      /* 0x0018 */ struct _KPCR* Self;
      /* 0x0020 */ struct _KPRCB* CurrentPrcb;
      /* 0x0028 */ struct _KSPIN_LOCK_QUEUE* LockArray;
      /* 0x0030 */ void* Used_Self;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
  /* 0x0038 */ union _KIDTENTRY64* IdtBase;
  /* 0x0040 */ unsigned __int64 Unused[2];
  /* 0x0050 */ unsigned char Irql;
  /* 0x0051 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x0052 */ unsigned char ObsoleteNumber;
  /* 0x0053 */ unsigned char Fill0;
  /* 0x0054 */ unsigned long Unused0[3];
  /* 0x0060 */ unsigned short MajorVersion;
  /* 0x0062 */ unsigned short MinorVersion;
  /* 0x0064 */ unsigned long StallScaleFactor;
  /* 0x0068 */ void* Unused1[3];
  /* 0x0080 */ unsigned long KernelReserved[15];
  /* 0x00bc */ unsigned long SecondLevelCacheSize;
  /* 0x00c0 */ unsigned long HalReserved[16];
  /* 0x0100 */ unsigned long Unused2;
  /* 0x0108 */ void* KdVersionBlock;
  /* 0x0110 */ void* Unused3;
  /* 0x0118 */ unsigned long PcrAlign1[24];
  /* 0x0180 */ struct _KPRCB Prcb;
} KPCR, *PKPCR; /* size: 0x3ca0 */

