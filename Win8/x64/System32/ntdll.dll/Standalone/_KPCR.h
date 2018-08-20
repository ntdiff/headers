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
  /* 0x00d8 */ unsigned __int64 Xcr0;
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00e0 */

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XSAVE_FORMAT
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
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

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
    /* 0x0100 */ struct _XSAVE_FORMAT FltSave;
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
    struct // _TAG_UNNAMED_3
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
    struct // _TAG_UNNAMED_4
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
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

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _LIST_ENTRY DpcListHead;
  /* 0x0010 */ unsigned __int64 DpcLock;
  /* 0x0018 */ volatile long DpcQueueDepth;
  /* 0x001c */ unsigned long DpcCount;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0020 */

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

typedef struct _KTIMER_TABLE_ENTRY
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ struct _LIST_ENTRY Entry;
  /* 0x0018 */ union _ULARGE_INTEGER Time;
} KTIMER_TABLE_ENTRY, *PKTIMER_TABLE_ENTRY; /* size: 0x0020 */

typedef struct _KTIMER_TABLE
{
  /* 0x0000 */ struct _KTIMER* TimerExpiry[64];
  /* 0x0200 */ struct _KTIMER_TABLE_ENTRY TimerEntries[256];
} KTIMER_TABLE, *PKTIMER_TABLE; /* size: 0x2200 */

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

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

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

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _PROC_IDLE_POLICY
{
  /* 0x0000 */ unsigned char PromotePercent;
  /* 0x0001 */ unsigned char DemotePercent;
  /* 0x0002 */ unsigned char PromotePercentBase;
  /* 0x0003 */ unsigned char DemotePercentBase;
  /* 0x0004 */ unsigned char AllowScaling;
} PROC_IDLE_POLICY, *PPROC_IDLE_POLICY; /* size: 0x0005 */

typedef union _PPM_IDLE_SYNCHRONIZATION_STATE
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ long RefCount : 24; /* bit position: 0 */
      /* 0x0000 */ unsigned long State : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_IDLE_SYNCHRONIZATION_STATE, *PPPM_IDLE_SYNCHRONIZATION_STATE; /* size: 0x0004 */

typedef struct _PROC_FEEDBACK
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned __int64 CyclesLast;
  /* 0x0010 */ unsigned __int64 CyclesActive;
  /* 0x0018 */ struct _PROC_FEEDBACK_COUNTER* Counters[2];
  /* 0x0028 */ unsigned __int64 LastUpdateTime;
  /* 0x0030 */ unsigned __int64 UnscaledTime;
  /* 0x0038 */ volatile __int64 UnaccountedTime;
  /* 0x0040 */ unsigned __int64 ScaledTime[2];
  /* 0x0050 */ unsigned __int64 UnaccountedKernelTime;
  /* 0x0058 */ unsigned __int64 PerformanceScaledKernelTime;
  /* 0x0060 */ unsigned long UserTimeLast;
  /* 0x0064 */ unsigned long KernelTimeLast;
  /* 0x0068 */ unsigned char KernelTimesIndex;
  /* 0x0069 */ char __PADDING__[7];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0070 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
} PROC_HYPERVISOR_STATE, *PPROC_HYPERVISOR_STATE;

typedef struct _PPM_FFH_THROTTLE_STATE_INFO
{
  /* 0x0000 */ unsigned char EnableLogging;
  /* 0x0004 */ unsigned long MismatchCount;
  /* 0x0008 */ unsigned char Initialized;
  /* 0x0010 */ unsigned __int64 LastValue;
  /* 0x0018 */ union _LARGE_INTEGER LastLogTickCount;
} PPM_FFH_THROTTLE_STATE_INFO, *PPPM_FFH_THROTTLE_STATE_INFO; /* size: 0x0020 */

typedef struct _PROC_IDLE_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Idle;
} PROC_IDLE_SNAP, *PPROC_IDLE_SNAP; /* size: 0x0010 */

typedef struct _PROC_PERF_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 LastTime;
  /* 0x0010 */ unsigned __int64 Active;
  /* 0x0018 */ unsigned __int64 LastActive;
  /* 0x0020 */ unsigned __int64 FrequencyScaledActive;
  /* 0x0028 */ unsigned __int64 PerformanceScaledActive;
  /* 0x0030 */ unsigned __int64 CyclesActive;
  /* 0x0038 */ unsigned __int64 CyclesAffinitized;
} PROC_PERF_SNAP, *PPROC_PERF_SNAP; /* size: 0x0040 */

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ struct _PLATFORM_IDLE_ACCOUNTING* PlatformIdleAccounting;
  /* 0x0018 */ unsigned __int64 IdleTimeLast;
  /* 0x0020 */ unsigned __int64 IdleTimeTotal;
  /* 0x0028 */ unsigned __int64 IdleTimeEntry;
  /* 0x0030 */ unsigned __int64 Reserved;
  /* 0x0038 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0040 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0048 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00b8 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00bc */ unsigned long LastSysTime;
  /* 0x00c0 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00c8 */ long WmiInterfaceEnabled;
  /* 0x00d0 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x00f0 */ struct _KDPC PerfActionDpc;
  /* 0x0130 */ volatile long PerfActionMask;
  /* 0x0138 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0148 */ struct _PROC_PERF_SNAP PerfCheck;
  /* 0x0188 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0190 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x0198 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x01a0 */ struct _PROC_PERF_LOAD* Load;
  /* 0x01a8 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x01b0 */ unsigned char GuaranteedPerformancePercent;
  /* 0x01b1 */ unsigned char HvTargetState;
  /* 0x01b2 */ unsigned char Parked;
  /* 0x01b3 */ unsigned char OverUtilized;
  /* 0x01b4 */ unsigned long LatestPerformancePercent;
  /* 0x01b8 */ unsigned long AveragePerformancePercent;
  /* 0x01bc */ unsigned long LatestAffinitizedPercent;
  /* 0x01c0 */ unsigned long Utility;
  /* 0x01c4 */ unsigned long AffinitizedUtility;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x01c8 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ unsigned long Processor;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

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

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _SYNCH_COUNTERS
{
  /* 0x0000 */ unsigned long SpinLockAcquireCount;
  /* 0x0004 */ unsigned long SpinLockContentionCount;
  /* 0x0008 */ unsigned long SpinLockSpinCount;
  /* 0x000c */ unsigned long IpiSendRequestBroadcastCount;
  /* 0x0010 */ unsigned long IpiSendRequestRoutineCount;
  /* 0x0014 */ unsigned long IpiSendSoftwareInterruptCount;
  /* 0x0018 */ unsigned long ExInitializeResourceCount;
  /* 0x001c */ unsigned long ExReInitializeResourceCount;
  /* 0x0020 */ unsigned long ExDeleteResourceCount;
  /* 0x0024 */ unsigned long ExecutiveResourceAcquiresCount;
  /* 0x0028 */ unsigned long ExecutiveResourceContentionsCount;
  /* 0x002c */ unsigned long ExecutiveResourceReleaseExclusiveCount;
  /* 0x0030 */ unsigned long ExecutiveResourceReleaseSharedCount;
  /* 0x0034 */ unsigned long ExecutiveResourceConvertsCount;
  /* 0x0038 */ unsigned long ExAcqResExclusiveAttempts;
  /* 0x003c */ unsigned long ExAcqResExclusiveAcquiresExclusive;
  /* 0x0040 */ unsigned long ExAcqResExclusiveAcquiresExclusiveRecursive;
  /* 0x0044 */ unsigned long ExAcqResExclusiveWaits;
  /* 0x0048 */ unsigned long ExAcqResExclusiveNotAcquires;
  /* 0x004c */ unsigned long ExAcqResSharedAttempts;
  /* 0x0050 */ unsigned long ExAcqResSharedAcquiresExclusive;
  /* 0x0054 */ unsigned long ExAcqResSharedAcquiresShared;
  /* 0x0058 */ unsigned long ExAcqResSharedAcquiresSharedRecursive;
  /* 0x005c */ unsigned long ExAcqResSharedWaits;
  /* 0x0060 */ unsigned long ExAcqResSharedNotAcquires;
  /* 0x0064 */ unsigned long ExAcqResSharedStarveExclusiveAttempts;
  /* 0x0068 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresExclusive;
  /* 0x006c */ unsigned long ExAcqResSharedStarveExclusiveAcquiresShared;
  /* 0x0070 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
  /* 0x0074 */ unsigned long ExAcqResSharedStarveExclusiveWaits;
  /* 0x0078 */ unsigned long ExAcqResSharedStarveExclusiveNotAcquires;
  /* 0x007c */ unsigned long ExAcqResSharedWaitForExclusiveAttempts;
  /* 0x0080 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresExclusive;
  /* 0x0084 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresShared;
  /* 0x0088 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
  /* 0x008c */ unsigned long ExAcqResSharedWaitForExclusiveWaits;
  /* 0x0090 */ unsigned long ExAcqResSharedWaitForExclusiveNotAcquires;
  /* 0x0094 */ unsigned long ExSetResOwnerPointerExclusive;
  /* 0x0098 */ unsigned long ExSetResOwnerPointerSharedNew;
  /* 0x009c */ unsigned long ExSetResOwnerPointerSharedOld;
  /* 0x00a0 */ unsigned long ExTryToAcqExclusiveAttempts;
  /* 0x00a4 */ unsigned long ExTryToAcqExclusiveAcquires;
  /* 0x00a8 */ unsigned long ExBoostExclusiveOwner;
  /* 0x00ac */ unsigned long ExBoostSharedOwners;
  /* 0x00b0 */ unsigned long ExEtwSynchTrackingNotificationsCount;
  /* 0x00b4 */ unsigned long ExEtwSynchTrackingNotificationsAccountedCount;
} SYNCH_COUNTERS, *PSYNCH_COUNTERS; /* size: 0x00b8 */

typedef struct _FILESYSTEM_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 FsBytesRead;
  /* 0x0008 */ unsigned __int64 FsBytesWritten;
} FILESYSTEM_DISK_COUNTERS, *PFILESYSTEM_DISK_COUNTERS; /* size: 0x0010 */

typedef struct _KENTROPY_TIMING_STATE
{
  /* 0x0000 */ unsigned long EntropyCount;
  /* 0x0004 */ unsigned long Buffer[64];
  /* 0x0108 */ struct _KDPC Dpc;
  /* 0x0148 */ unsigned long LastDeliveredBuffer;
  /* 0x014c */ long __PADDING__[1];
} KENTROPY_TIMING_STATE, *PKENTROPY_TIMING_STATE; /* size: 0x0150 */

typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x0018 */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0020 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ struct _REQUEST_MAILBOX* Next;
  /* 0x0008 */ __int64 RequestSummary;
  /* 0x0010 */ struct _KREQUEST_PACKET RequestPacket;
  /* 0x0030 */ volatile long* NodeTargetCountAddr;
  /* 0x0038 */ volatile long NodeTargetCount;
  /* 0x003c */ long __PADDING__[1];
} REQUEST_MAILBOX, *PREQUEST_MAILBOX; /* size: 0x0040 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned long MxCsr;
  /* 0x0004 */ unsigned char LegacyNumber;
  /* 0x0005 */ unsigned char ReservedMustBeZero;
  /* 0x0006 */ unsigned char InterruptRequest;
  /* 0x0007 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char ClockOwner;
  /* 0x0022 */ unsigned char PendingTick;
  /* 0x0023 */ unsigned char PrcbPad00[1];
  /* 0x0024 */ unsigned long Number;
  /* 0x0028 */ unsigned __int64 RspBase;
  /* 0x0030 */ unsigned __int64 PrcbLock;
  /* 0x0038 */ unsigned __int64 PrcbPad01;
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
  /* 0x0658 */ unsigned short Group;
  /* 0x0660 */ unsigned __int64 GroupSetMember;
  /* 0x0668 */ unsigned char GroupIndex;
  /* 0x0670 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
  /* 0x0780 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x0880 */ struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];
  /* 0x1480 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x2080 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x2c80 */ unsigned __int64 PrcbPad20;
  /* 0x2c88 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x2c90 */ volatile long MmPageFaultCount;
  /* 0x2c94 */ volatile long MmCopyOnWriteCount;
  /* 0x2c98 */ volatile long MmTransitionCount;
  /* 0x2c9c */ volatile long MmDemandZeroCount;
  /* 0x2ca0 */ volatile long MmPageReadCount;
  /* 0x2ca4 */ volatile long MmPageReadIoCount;
  /* 0x2ca8 */ volatile long MmDirtyPagesWriteCount;
  /* 0x2cac */ volatile long MmDirtyWriteIoCount;
  /* 0x2cb0 */ volatile long MmMappedPagesWriteCount;
  /* 0x2cb4 */ volatile long MmMappedWriteIoCount;
  /* 0x2cb8 */ unsigned long KeSystemCalls;
  /* 0x2cbc */ unsigned long KeContextSwitches;
  /* 0x2cc0 */ unsigned long CcFastReadNoWait;
  /* 0x2cc4 */ unsigned long CcFastReadWait;
  /* 0x2cc8 */ unsigned long CcFastReadNotPossible;
  /* 0x2ccc */ unsigned long CcCopyReadNoWait;
  /* 0x2cd0 */ unsigned long CcCopyReadWait;
  /* 0x2cd4 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x2cd8 */ long LookasideIrpFloat;
  /* 0x2cdc */ volatile long IoReadOperationCount;
  /* 0x2ce0 */ volatile long IoWriteOperationCount;
  /* 0x2ce4 */ volatile long IoOtherOperationCount;
  /* 0x2ce8 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x2cf0 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x2cf8 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x2d00 */ volatile long PacketBarrier;
  /* 0x2d04 */ volatile long TargetCount;
  /* 0x2d08 */ volatile unsigned long IpiFrozen;
  /* 0x2d0c */ unsigned long PrcbPad40[29];
  /* 0x2d80 */ struct _KDPC_DATA DpcData[2];
  /* 0x2dc0 */ void* DpcStack;
  /* 0x2dc8 */ long MaximumDpcQueueDepth;
  /* 0x2dcc */ unsigned long DpcRequestRate;
  /* 0x2dd0 */ unsigned long MinimumDpcRate;
  /* 0x2dd4 */ unsigned long DpcLastCount;
  /* 0x2dd8 */ unsigned char ThreadDpcEnable;
  /* 0x2dd9 */ volatile unsigned char QuantumEnd;
  /* 0x2dda */ volatile unsigned char DpcRoutineActive;
  /* 0x2ddb */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x2ddc */ volatile long DpcRequestSummary;
    /* 0x2ddc */ short DpcRequestSlot[2];
    struct
    {
      /* 0x2ddc */ short NormalDpcState;
      /* 0x2dde */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x2ddc */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x2ddc */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x2ddc */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x2ddc */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x2ddc */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x2ddc */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x2ddc */ unsigned long DpcNormalSpare : 10; /* bit position: 6 */
      /* 0x2ddc */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x2ddc */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x2ddc */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x2de0 */ unsigned long LastTimerHand;
  /* 0x2de4 */ unsigned long LastTick;
  /* 0x2de8 */ unsigned long ClockInterrupts;
  /* 0x2dec */ unsigned long ReadyScanTick;
  /* 0x2df0 */ unsigned char BalanceState;
  /* 0x2df1 */ unsigned char PrcbPad50[7];
  /* 0x2df8 */ unsigned long InterruptLastCount;
  /* 0x2dfc */ unsigned long InterruptRate;
  /* 0x2e00 */ struct _KTIMER_TABLE TimerTable;
  /* 0x5000 */ struct _KGATE DpcGate;
  /* 0x5018 */ void* PrcbPad52;
  /* 0x5020 */ struct _KDPC CallDpc;
  /* 0x5060 */ long ClockKeepAlive;
  /* 0x5064 */ unsigned char PrcbPad60[2];
  /* 0x5066 */ unsigned short NmiActive;
  /* 0x5068 */ long DpcWatchdogPeriod;
  /* 0x506c */ long DpcWatchdogCount;
  /* 0x5070 */ volatile long KeSpinLockOrdering;
  /* 0x5074 */ unsigned long PrcbPad70[1];
  /* 0x5078 */ void* CachedPtes;
  /* 0x5080 */ struct _LIST_ENTRY WaitListHead;
  /* 0x5090 */ unsigned __int64 WaitLock;
  /* 0x5098 */ unsigned long ReadySummary;
  /* 0x509c */ unsigned long QueueIndex;
  /* 0x50a0 */ unsigned long ReadyQueueWeight;
  /* 0x50a4 */ unsigned long PrcbPad75;
  /* 0x50a8 */ struct _KDPC TimerExpirationDpc;
  /* 0x50e8 */ struct _KPRCB* BuddyPrcb;
  /* 0x50f0 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x5100 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x5300 */ unsigned long InterruptCount;
  /* 0x5304 */ unsigned long KernelTime;
  /* 0x5308 */ unsigned long UserTime;
  /* 0x530c */ unsigned long DpcTime;
  /* 0x5310 */ unsigned long InterruptTime;
  /* 0x5314 */ unsigned long AdjustDpcThreshold;
  /* 0x5318 */ unsigned char DebuggerSavedIRQL;
  /* 0x5319 */ unsigned char GroupSchedulingOverQuota;
  /* 0x531a */ volatile unsigned char DeepSleep;
  /* 0x531b */ unsigned char PrcbPad80[1];
  /* 0x531c */ unsigned long ScbOffset;
  /* 0x5320 */ unsigned long DpcTimeCount;
  /* 0x5324 */ unsigned long DpcTimeLimit;
  /* 0x5328 */ unsigned long PeriodicCount;
  /* 0x532c */ unsigned long PeriodicBias;
  /* 0x5330 */ unsigned long AvailableTime;
  /* 0x5334 */ unsigned long KeExceptionDispatchCount;
  /* 0x5338 */ struct _KNODE* ParentNode;
  /* 0x5340 */ unsigned __int64 StartCycles;
  /* 0x5348 */ unsigned __int64 GenerationTarget;
  /* 0x5350 */ unsigned __int64 AffinitizedCycles;
  /* 0x5358 */ unsigned __int64 PrcbPad81;
  /* 0x5360 */ volatile long MmSpinLockOrdering;
  /* 0x5364 */ unsigned long PageColor;
  /* 0x5368 */ unsigned long NodeColor;
  /* 0x536c */ unsigned long NodeShiftedColor;
  /* 0x5370 */ unsigned long SecondaryColorMask;
  /* 0x5374 */ unsigned long PrcbPad83;
  /* 0x5378 */ unsigned __int64 CycleTime;
  /* 0x5380 */ unsigned long CcFastMdlReadNoWait;
  /* 0x5384 */ unsigned long CcFastMdlReadWait;
  /* 0x5388 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x538c */ unsigned long CcMapDataNoWait;
  /* 0x5390 */ unsigned long CcMapDataWait;
  /* 0x5394 */ unsigned long CcPinMappedDataCount;
  /* 0x5398 */ unsigned long CcPinReadNoWait;
  /* 0x539c */ unsigned long CcPinReadWait;
  /* 0x53a0 */ unsigned long CcMdlReadNoWait;
  /* 0x53a4 */ unsigned long CcMdlReadWait;
  /* 0x53a8 */ unsigned long CcLazyWriteHotSpots;
  /* 0x53ac */ unsigned long CcLazyWriteIos;
  /* 0x53b0 */ unsigned long CcLazyWritePages;
  /* 0x53b4 */ unsigned long CcDataFlushes;
  /* 0x53b8 */ unsigned long CcDataPages;
  /* 0x53bc */ unsigned long CcLostDelayedWrites;
  /* 0x53c0 */ unsigned long CcFastReadResourceMiss;
  /* 0x53c4 */ unsigned long CcCopyReadWaitMiss;
  /* 0x53c8 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x53cc */ unsigned long CcMapDataNoWaitMiss;
  /* 0x53d0 */ unsigned long CcMapDataWaitMiss;
  /* 0x53d4 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x53d8 */ unsigned long CcPinReadWaitMiss;
  /* 0x53dc */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x53e0 */ unsigned long CcMdlReadWaitMiss;
  /* 0x53e4 */ unsigned long CcReadAheadIos;
  /* 0x53e8 */ volatile long MmCacheTransitionCount;
  /* 0x53ec */ volatile long MmCacheReadCount;
  /* 0x53f0 */ volatile long MmCacheIoCount;
  /* 0x53f4 */ unsigned long PrcbPad91[3];
  /* 0x5400 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x55c8 */ struct _LIST_ENTRY ScbList;
  /* 0x55d8 */ unsigned long PrcbPad92[22];
  /* 0x5630 */ unsigned long KeAlignmentFixupCount;
  /* 0x5638 */ struct _KDPC DpcWatchdogDpc;
  /* 0x5678 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x56b8 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x56f4 */ unsigned long CacheCount;
  /* 0x56f8 */ volatile unsigned long CachedCommit;
  /* 0x56fc */ volatile unsigned long CachedResidentAvailable;
  /* 0x5700 */ void* HyperPte;
  /* 0x5708 */ void* WheaInfo;
  /* 0x5710 */ void* EtwSupport;
  /* 0x5720 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x5730 */ union _SLIST_HEADER HypercallPageList;
  /* 0x5740 */ void* HypercallPageVirtual;
  /* 0x5748 */ void* VirtualApicAssist;
  /* 0x5750 */ unsigned __int64* StatisticsPage;
  /* 0x5758 */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x5800 */ unsigned __int64 CacheProcessorMask[5];
  /* 0x5828 */ unsigned __int64 ScanSiblingMask;
  /* 0x5830 */ unsigned long ScanSiblingIndex;
  /* 0x5834 */ unsigned long LLCLevel;
  /* 0x5838 */ unsigned __int64 CoreProcessorSet;
  /* 0x5840 */ struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
  /* 0x5848 */ void* ProfileEventIndexAddress;
  /* 0x5850 */ unsigned __int64 PrcbPad94[6];
  /* 0x5880 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x5938 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x5948 */ unsigned char VendorString[13];
  /* 0x5955 */ unsigned char PrcbPad10[3];
  /* 0x5958 */ unsigned long FeatureBits;
  /* 0x5960 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x5968 */ struct _CONTEXT* Context;
  /* 0x5970 */ unsigned long ContextFlagsInit;
  /* 0x5978 */ struct _XSAVE_AREA* ExtendedState;
  /* 0x5980 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  /* 0x5b00 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x5b40 */ struct _REQUEST_MAILBOX RequestMailbox[1];
} KPRCB, *PKPRCB; /* size: 0x5b80 */

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
} KPCR, *PKPCR; /* size: 0x5d00 */

