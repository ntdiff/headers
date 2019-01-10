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
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
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
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _KDPC_LIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListHead;
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY* LastEntry;
} KDPC_LIST, *PKDPC_LIST; /* size: 0x0010 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _KDPC_LIST DpcList;
  /* 0x0010 */ unsigned __int64 DpcLock;
  /* 0x0018 */ volatile long DpcQueueDepth;
  /* 0x001c */ unsigned long DpcCount;
  /* 0x0020 */ struct _KDPC* volatile ActiveDpc;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0028 */

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
          /* 0x0002 */ unsigned char Timer2Reserved1;
          /* 0x0003 */ unsigned char Timer2Reserved2;
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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
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

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
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
  /* 0x0005 */ unsigned char ForceLightIdle;
} PROC_IDLE_POLICY, *PPROC_IDLE_POLICY; /* size: 0x0006 */

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
  /* 0x0068 */ unsigned __int64 IdleGenerationNumberLast;
  /* 0x0070 */ unsigned __int64 HvActiveTimeLast;
  /* 0x0078 */ unsigned __int64 StallCyclesLast;
  /* 0x0080 */ unsigned __int64 StallTime;
  /* 0x0088 */ unsigned char KernelTimesIndex;
  /* 0x0089 */ char __PADDING__[7];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0090 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
  ProcHypervisorHvCounters = 3,
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

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ volatile unsigned __int64 IdleTimeEntry;
  /* 0x0028 */ unsigned __int64 IdleTimeExpiration;
  /* 0x0030 */ unsigned char NonInterruptibleTransition;
  /* 0x0031 */ unsigned char PepWokenTransition;
  /* 0x0032 */ unsigned char EfficiencyClass;
  /* 0x0033 */ unsigned char SchedulingClass;
  /* 0x0034 */ unsigned long TargetIdleState;
  /* 0x0038 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0040 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0048 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00d8 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00dc */ unsigned long LastSysTime;
  /* 0x00e0 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00e8 */ long WmiInterfaceEnabled;
  /* 0x00f0 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0110 */ struct _KDPC PerfActionDpc;
  /* 0x0150 */ volatile long PerfActionMask;
  /* 0x0158 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0168 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0170 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0178 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x0180 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x0188 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0190 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0198 */ unsigned char GuaranteedPerformancePercent;
  /* 0x0199 */ unsigned char HvTargetState;
  /* 0x019a */ unsigned char Parked;
  /* 0x019c */ unsigned long LatestPerformancePercent;
  /* 0x01a0 */ unsigned long AveragePerformancePercent;
  /* 0x01a4 */ unsigned long LatestAffinitizedPercent;
  /* 0x01a8 */ unsigned long RelativePerformance;
  /* 0x01ac */ unsigned long Utility;
  /* 0x01b0 */ unsigned long AffinitizedUtility;
  union
  {
    /* 0x01b8 */ unsigned __int64 SnapTimeLast;
    /* 0x01b8 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01c0 */ unsigned __int64 ActiveTime;
  /* 0x01c8 */ unsigned __int64 TotalTime;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x01d0 */

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

typedef struct _IOP_IRP_STACK_PROFILER
{
  /* 0x0000 */ unsigned long Profile[20];
  /* 0x0050 */ unsigned long TotalIrps;
} IOP_IRP_STACK_PROFILER, *PIOP_IRP_STACK_PROFILER; /* size: 0x0054 */

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned long ReadySummary;
  /* 0x0010 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0210 */ char RunningSummary[64];
  /* 0x0250 */ unsigned char Span;
  /* 0x0251 */ unsigned char LowProcIndex;
  /* 0x0252 */ unsigned char QueueIndex;
  /* 0x0253 */ unsigned char ProcCount;
  /* 0x0254 */ unsigned char ScanOwner;
  /* 0x0255 */ unsigned char Spare[3];
  /* 0x0258 */ unsigned __int64 Affinity;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0260 */

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x0018 */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0020 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ struct _REQUEST_MAILBOX* Next;
  /* 0x0008 */ unsigned __int64 RequestSummary;
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
  union
  {
    /* 0x0022 */ unsigned char PendingTickFlags;
    struct /* bitfield */
    {
      /* 0x0022 */ unsigned char PendingTick : 1; /* bit position: 0 */
      /* 0x0022 */ unsigned char PendingBackupTick : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0023 */ unsigned char IdleState;
  /* 0x0024 */ unsigned long Number;
  /* 0x0028 */ unsigned __int64 RspBase;
  /* 0x0030 */ unsigned __int64 PrcbLock;
  /* 0x0038 */ char* PriorityState;
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
  /* 0x0640 */ struct _KNODE* ParentNode;
  /* 0x0648 */ unsigned __int64 GroupSetMember;
  /* 0x0650 */ unsigned char Group;
  /* 0x0651 */ unsigned char GroupIndex;
  /* 0x0652 */ unsigned char PrcbPad05[2];
  /* 0x0654 */ unsigned long InitialApicId;
  /* 0x0658 */ unsigned long ScbOffset;
  /* 0x065c */ unsigned long ApicMask;
  /* 0x0660 */ void* AcpiReserved;
  /* 0x0668 */ unsigned long CFlushSize;
  /* 0x066c */ unsigned long PrcbPad10;
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
  /* 0x2cc0 */ unsigned short LdtSelector;
  /* 0x2cc2 */ unsigned short PrcbPad40;
  /* 0x2cc4 */ unsigned long CcFastReadNoWait;
  /* 0x2cc8 */ unsigned long CcFastReadWait;
  /* 0x2ccc */ unsigned long CcFastReadNotPossible;
  /* 0x2cd0 */ unsigned long CcCopyReadNoWait;
  /* 0x2cd4 */ unsigned long CcCopyReadWait;
  /* 0x2cd8 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x2cdc */ volatile long IoReadOperationCount;
  /* 0x2ce0 */ volatile long IoWriteOperationCount;
  /* 0x2ce4 */ volatile long IoOtherOperationCount;
  /* 0x2ce8 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x2cf0 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x2cf8 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x2d00 */ volatile long PacketBarrier;
  /* 0x2d04 */ volatile long TargetCount;
  /* 0x2d08 */ volatile unsigned long IpiFrozen;
  /* 0x2d10 */ void* IsrDpcStats;
  /* 0x2d18 */ unsigned long DeviceInterrupts;
  /* 0x2d1c */ long LookasideIrpFloat;
  /* 0x2d20 */ unsigned long InterruptLastCount;
  /* 0x2d24 */ unsigned long InterruptRate;
  /* 0x2d28 */ unsigned __int64 LastNonHrTimerExpiration;
  /* 0x2d30 */ unsigned long PrcbPad41[20];
  /* 0x2d80 */ struct _KDPC_DATA DpcData[2];
  /* 0x2dd0 */ void* DpcStack;
  /* 0x2dd8 */ long MaximumDpcQueueDepth;
  /* 0x2ddc */ unsigned long DpcRequestRate;
  /* 0x2de0 */ unsigned long MinimumDpcRate;
  /* 0x2de4 */ unsigned long DpcLastCount;
  /* 0x2de8 */ unsigned char ThreadDpcEnable;
  /* 0x2de9 */ volatile unsigned char QuantumEnd;
  /* 0x2dea */ volatile unsigned char DpcRoutineActive;
  /* 0x2deb */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x2dec */ volatile long DpcRequestSummary;
    /* 0x2dec */ short DpcRequestSlot[2];
    struct
    {
      /* 0x2dec */ short NormalDpcState;
      /* 0x2dee */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x2dec */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x2dec */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x2dec */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x2dec */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x2dec */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x2dec */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x2dec */ unsigned long DpcNormalSpare : 10; /* bit position: 6 */
      /* 0x2dec */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x2dec */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x2dec */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x2df0 */ unsigned long LastTimerHand;
  /* 0x2df4 */ unsigned long LastTick;
  /* 0x2df8 */ unsigned long ClockInterrupts;
  /* 0x2dfc */ unsigned long ReadyScanTick;
  /* 0x2e00 */ void* InterruptObject[256];
  /* 0x3600 */ struct _KTIMER_TABLE TimerTable;
  /* 0x5800 */ struct _KGATE DpcGate;
  /* 0x5818 */ void* PrcbPad52;
  /* 0x5820 */ struct _KDPC CallDpc;
  /* 0x5860 */ long ClockKeepAlive;
  /* 0x5864 */ unsigned char PrcbPad60[2];
  /* 0x5866 */ unsigned short NmiActive;
  /* 0x5868 */ long DpcWatchdogPeriod;
  /* 0x586c */ long DpcWatchdogCount;
  /* 0x5870 */ volatile long KeSpinLockOrdering;
  /* 0x5874 */ unsigned long PrcbPad70[1];
  /* 0x5878 */ void* CachedPtes;
  /* 0x5880 */ struct _LIST_ENTRY WaitListHead;
  /* 0x5890 */ unsigned __int64 WaitLock;
  /* 0x5898 */ unsigned long ReadySummary;
  /* 0x589c */ long AffinitizedSelectionMask;
  /* 0x58a0 */ unsigned long QueueIndex;
  /* 0x58a4 */ unsigned long PrcbPad75[3];
  /* 0x58b0 */ struct _KDPC TimerExpirationDpc;
  /* 0x58f0 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x5900 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x5b00 */ unsigned long InterruptCount;
  /* 0x5b04 */ unsigned long KernelTime;
  /* 0x5b08 */ unsigned long UserTime;
  /* 0x5b0c */ unsigned long DpcTime;
  /* 0x5b10 */ unsigned long InterruptTime;
  /* 0x5b14 */ unsigned long AdjustDpcThreshold;
  /* 0x5b18 */ unsigned char DebuggerSavedIRQL;
  /* 0x5b19 */ unsigned char GroupSchedulingOverQuota;
  /* 0x5b1a */ volatile unsigned char DeepSleep;
  /* 0x5b1b */ unsigned char PrcbPad80[5];
  /* 0x5b20 */ unsigned long DpcTimeCount;
  /* 0x5b24 */ unsigned long DpcTimeLimit;
  /* 0x5b28 */ unsigned long PeriodicCount;
  /* 0x5b2c */ unsigned long PeriodicBias;
  /* 0x5b30 */ unsigned long AvailableTime;
  /* 0x5b34 */ unsigned long KeExceptionDispatchCount;
  /* 0x5b38 */ unsigned __int64 StartCycles;
  /* 0x5b40 */ unsigned __int64 TaggedCyclesStart;
  /* 0x5b48 */ unsigned __int64 TaggedCycles[2];
  /* 0x5b58 */ unsigned __int64 GenerationTarget;
  /* 0x5b60 */ unsigned __int64 AffinitizedCycles;
  /* 0x5b68 */ unsigned long PrcbPad81[29];
  /* 0x5bdc */ volatile long MmSpinLockOrdering;
  /* 0x5be0 */ unsigned long PageColor;
  /* 0x5be4 */ unsigned long NodeColor;
  /* 0x5be8 */ unsigned long NodeShiftedColor;
  /* 0x5bec */ unsigned long SecondaryColorMask;
  /* 0x5bf0 */ unsigned long PrcbPad83;
  /* 0x5bf8 */ unsigned __int64 CycleTime;
  /* 0x5c00 */ unsigned __int64 Cycles[2][4];
  /* 0x5c40 */ unsigned long PrcbPad84[16];
  /* 0x5c80 */ unsigned long CcFastMdlReadNoWait;
  /* 0x5c84 */ unsigned long CcFastMdlReadWait;
  /* 0x5c88 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x5c8c */ unsigned long CcMapDataNoWait;
  /* 0x5c90 */ unsigned long CcMapDataWait;
  /* 0x5c94 */ unsigned long CcPinMappedDataCount;
  /* 0x5c98 */ unsigned long CcPinReadNoWait;
  /* 0x5c9c */ unsigned long CcPinReadWait;
  /* 0x5ca0 */ unsigned long CcMdlReadNoWait;
  /* 0x5ca4 */ unsigned long CcMdlReadWait;
  /* 0x5ca8 */ unsigned long CcLazyWriteHotSpots;
  /* 0x5cac */ unsigned long CcLazyWriteIos;
  /* 0x5cb0 */ unsigned long CcLazyWritePages;
  /* 0x5cb4 */ unsigned long CcDataFlushes;
  /* 0x5cb8 */ unsigned long CcDataPages;
  /* 0x5cbc */ unsigned long CcLostDelayedWrites;
  /* 0x5cc0 */ unsigned long CcFastReadResourceMiss;
  /* 0x5cc4 */ unsigned long CcCopyReadWaitMiss;
  /* 0x5cc8 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x5ccc */ unsigned long CcMapDataNoWaitMiss;
  /* 0x5cd0 */ unsigned long CcMapDataWaitMiss;
  /* 0x5cd4 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x5cd8 */ unsigned long CcPinReadWaitMiss;
  /* 0x5cdc */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x5ce0 */ unsigned long CcMdlReadWaitMiss;
  /* 0x5ce4 */ unsigned long CcReadAheadIos;
  /* 0x5ce8 */ volatile long MmCacheTransitionCount;
  /* 0x5cec */ volatile long MmCacheReadCount;
  /* 0x5cf0 */ volatile long MmCacheIoCount;
  /* 0x5cf4 */ unsigned long PrcbPad91[3];
  /* 0x5d00 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x5ed0 */ struct _LIST_ENTRY ScbList;
  /* 0x5ee0 */ unsigned long PrcbPad92[7];
  /* 0x5efc */ unsigned long KeAlignmentFixupCount;
  /* 0x5f00 */ struct _KDPC DpcWatchdogDpc;
  /* 0x5f40 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x5f80 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x5fbc */ unsigned long CacheCount;
  /* 0x5fc0 */ volatile unsigned long CachedCommit;
  /* 0x5fc4 */ volatile unsigned long CachedResidentAvailable;
  /* 0x5fc8 */ void* HyperPte;
  /* 0x5fd0 */ void* WheaInfo;
  /* 0x5fd8 */ void* EtwSupport;
  /* 0x5fe0 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x5ff0 */ union _SLIST_HEADER HypercallPageList;
  /* 0x6000 */ void* HypercallCachedPages;
  /* 0x6008 */ void* VirtualApicAssist;
  /* 0x6010 */ unsigned __int64* StatisticsPage;
  /* 0x6018 */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x60c0 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x60c8 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x60d0 */ unsigned long SharedQueueScanOwner;
  /* 0x60d4 */ unsigned long ScanSiblingIndex;
  /* 0x60d8 */ unsigned __int64 CoreProcessorSet;
  /* 0x60e0 */ unsigned __int64 ScanSiblingMask;
  /* 0x60e8 */ unsigned __int64 LLCMask;
  /* 0x60f0 */ unsigned __int64 CacheProcessorMask[5];
  /* 0x6118 */ struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
  /* 0x6120 */ void* ProfileEventIndexAddress;
  /* 0x6128 */ unsigned __int64 PrcbPad94[11];
  /* 0x6180 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x6238 */ unsigned __int64 PteBitCache;
  /* 0x6240 */ unsigned long PteBitOffset;
  /* 0x6248 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x6258 */ unsigned char VendorString[13];
  /* 0x6265 */ unsigned char PrcbPad100[3];
  /* 0x6268 */ unsigned __int64 FeatureBits;
  /* 0x6270 */ unsigned long PrcbPad110;
  /* 0x6278 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x6280 */ struct _CONTEXT* Context;
  /* 0x6288 */ unsigned long ContextFlagsInit;
  /* 0x6290 */ struct _XSAVE_AREA* ExtendedState;
  /* 0x6298 */ void* IsrStack;
  /* 0x62a0 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  /* 0x63f0 */ struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
  /* 0x63f8 */ struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;
  /* 0x6400 */ struct _KDPC AbDpc;
  /* 0x6440 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
  /* 0x6494 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
  /* 0x6500 */ struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;
  /* 0x6760 */ struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];
  /* 0x6860 */ unsigned long TimerExpirationTraceCount;
  /* 0x6868 */ void* ExSaPageArray;
  /* 0x6880 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x68c0 */ struct _REQUEST_MAILBOX RequestMailbox[1];
} KPRCB, *PKPRCB; /* size: 0x6900 */

