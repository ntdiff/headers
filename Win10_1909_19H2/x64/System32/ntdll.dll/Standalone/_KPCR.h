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

typedef union _KPRCBFLAG
{
  union
  {
    /* 0x0000 */ volatile long PrcbFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BamQosLevel : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingQosUpdate : 2; /* bit position: 2 */
      /* 0x0000 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long PrcbFlagsReserved : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KPRCBFLAG, *PKPRCBFLAG; /* size: 0x0004 */

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
  /* 0x00e0 */ unsigned __int64 MsrFsBase;
  /* 0x00e8 */ unsigned __int64 SpecialPadding0;
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00f0 */

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
  /* 0x00f0 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x05c0 */

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
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
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
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
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
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
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
  /* 0x0089 */ unsigned char CounterDiscardsIdleTime;
  /* 0x008a */ char __PADDING__[6];
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

typedef enum _KHETERO_CPU_QOS
{
  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDynamic = 4,
  KHeteroCpuQosMax = 4,
} KHETERO_CPU_QOS, *PKHETERO_CPU_QOS;

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
  /* 0x0032 */ unsigned char HvTargetState;
  /* 0x0033 */ unsigned char SoftParked;
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
  /* 0x0188 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x0190 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0198 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x01a0 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x01a1 */ unsigned char PerformanceSchedulingClass;
  /* 0x01a2 */ unsigned char EfficiencySchedulingClass;
  /* 0x01a3 */ unsigned char GuaranteedPerformancePercent;
  /* 0x01a4 */ unsigned char Parked;
  /* 0x01a5 */ unsigned char LongPriorQosPeriod;
  /* 0x01a6 */ unsigned short LatestAffinitizedPercent;
  /* 0x01a8 */ unsigned long LatestPerformancePercent;
  /* 0x01ac */ unsigned long AveragePerformancePercent;
  /* 0x01b0 */ unsigned long RelativePerformance;
  /* 0x01b4 */ unsigned long Utility;
  /* 0x01b8 */ unsigned long AffinitizedUtility;
  union
  {
    /* 0x01c0 */ unsigned __int64 SnapTimeLast;
    /* 0x01c0 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01c8 */ unsigned __int64 ActiveTime;
  /* 0x01d0 */ unsigned __int64 TotalTime;
  /* 0x01d8 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x01e0 */ unsigned __int64 LastQosTranstionTsc;
  /* 0x01e8 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x01f0 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x01f4 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x01f8 */ unsigned short QosEquivalencyMask;
  /* 0x01fa */ unsigned short HwFeedbackTableIndex;
  /* 0x01fc */ unsigned char HwFeedbackParkHint;
  /* 0x01fd */ unsigned char HwFeedbackPerformanceClass;
  /* 0x01fe */ unsigned char HwFeedbackEfficiencyClass;
  /* 0x01ff */ unsigned char HeteroCoreType;
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0200 */

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

typedef struct _KSECURE_FAULT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 FaultCode;
  /* 0x0008 */ unsigned __int64 FaultVa;
} KSECURE_FAULT_INFORMATION, *PKSECURE_FAULT_INFORMATION; /* size: 0x0010 */

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
  /* 0x0260 */ unsigned long ReadyThreadCount;
  /* 0x0268 */ unsigned __int64 ReadyQueueExpectedRunTime;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x0270 */

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

typedef struct _MACHINE_FRAME
{
  /* 0x0000 */ unsigned __int64 Rip;
  /* 0x0008 */ unsigned short SegCs;
  /* 0x000a */ unsigned short Fill1[3];
  /* 0x0010 */ unsigned long EFlags;
  /* 0x0014 */ unsigned long Fill2;
  /* 0x0018 */ unsigned __int64 Rsp;
  /* 0x0020 */ unsigned short SegSs;
  /* 0x0022 */ unsigned short Fill3[3];
} MACHINE_FRAME, *PMACHINE_FRAME; /* size: 0x0028 */

typedef struct _MACHINE_CHECK_CONTEXT
{
  /* 0x0000 */ struct _MACHINE_FRAME MachineFrame;
  /* 0x0028 */ unsigned __int64 Rax;
  /* 0x0030 */ unsigned __int64 Rcx;
  /* 0x0038 */ unsigned __int64 Rdx;
  /* 0x0040 */ unsigned __int64 GsBase;
  /* 0x0048 */ unsigned __int64 Cr3;
} MACHINE_CHECK_CONTEXT, *PMACHINE_CHECK_CONTEXT; /* size: 0x0050 */

typedef struct _KLOCK_QUEUE_HANDLE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE LockQueue;
  /* 0x0010 */ unsigned char OldIrql;
  /* 0x0011 */ char __PADDING__[7];
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE; /* size: 0x0018 */

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
  /* 0x0040 */ char CpuType;
  /* 0x0041 */ char CpuID;
  union
  {
    /* 0x0042 */ unsigned short CpuStep;
    struct
    {
      /* 0x0042 */ unsigned char CpuStepping;
      /* 0x0043 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0044 */ unsigned long MHz;
  /* 0x0048 */ unsigned __int64 HalReserved[8];
  /* 0x0088 */ unsigned short MinorVersion;
  /* 0x008a */ unsigned short MajorVersion;
  /* 0x008c */ unsigned char BuildType;
  /* 0x008d */ unsigned char CpuVendor;
  /* 0x008e */ unsigned char CoresPerPhysicalProcessor;
  /* 0x008f */ unsigned char LogicalProcessorsPerCore;
  /* 0x0090 */ unsigned __int64 TscFrequency;
  /* 0x0098 */ unsigned __int64 PrcbPad04[5];
  /* 0x00c0 */ struct _KNODE* ParentNode;
  /* 0x00c8 */ unsigned __int64 GroupSetMember;
  /* 0x00d0 */ unsigned char Group;
  /* 0x00d1 */ unsigned char GroupIndex;
  /* 0x00d2 */ unsigned char PrcbPad05[2];
  /* 0x00d4 */ unsigned long InitialApicId;
  /* 0x00d8 */ unsigned long ScbOffset;
  /* 0x00dc */ unsigned long ApicMask;
  /* 0x00e0 */ void* AcpiReserved;
  /* 0x00e8 */ unsigned long CFlushSize;
  /* 0x00ec */ union _KPRCBFLAG PrcbFlags;
  union
  {
    struct
    {
      /* 0x00f0 */ unsigned __int64 TrappedSecurityDomain;
      union
      {
        /* 0x00f8 */ unsigned char BpbState;
        struct
        {
          struct /* bitfield */
          {
            /* 0x00f8 */ unsigned char BpbCpuIdle : 1; /* bit position: 0 */
            /* 0x00f8 */ unsigned char BpbFlushRsbOnTrap : 1; /* bit position: 1 */
            /* 0x00f8 */ unsigned char BpbIbpbOnReturn : 1; /* bit position: 2 */
            /* 0x00f8 */ unsigned char BpbIbpbOnTrap : 1; /* bit position: 3 */
            /* 0x00f8 */ unsigned char BpbIbpbOnRetpolineExit : 1; /* bit position: 4 */
            /* 0x00f8 */ unsigned char BpbStateReserved : 3; /* bit position: 5 */
          }; /* bitfield */
          union
          {
            /* 0x00f9 */ unsigned char BpbFeatures;
            struct
            {
              struct /* bitfield */
              {
                /* 0x00f9 */ unsigned char BpbClearOnIdle : 1; /* bit position: 0 */
                /* 0x00f9 */ unsigned char BpbEnabled : 1; /* bit position: 1 */
                /* 0x00f9 */ unsigned char BpbSmep : 1; /* bit position: 2 */
                /* 0x00f9 */ unsigned char BpbFeaturesReserved : 5; /* bit position: 3 */
              }; /* bitfield */
              /* 0x00fa */ unsigned char BpbCurrentSpecCtrl;
              /* 0x00fb */ unsigned char BpbKernelSpecCtrl;
              /* 0x00fc */ unsigned char BpbNmiSpecCtrl;
              /* 0x00fd */ unsigned char BpbUserSpecCtrl;
              /* 0x00fe */ volatile short PairRegister;
            }; /* size: 0x0007 */
          }; /* size: 0x0007 */
        }; /* size: 0x0008 */
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    /* 0x00f0 */ unsigned __int64 PrcbPad11[2];
  }; /* size: 0x0010 */
  /* 0x0100 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x06c0 */ struct _XSAVE_AREA_HEADER* ExtendedSupervisorState;
  /* 0x06c8 */ unsigned long ProcessorSignature;
  /* 0x06cc */ unsigned long ProcessorFlags;
  union
  {
    struct
    {
      /* 0x06d0 */ unsigned char BpbRetpolineExitSpecCtrl;
      /* 0x06d1 */ unsigned char BpbTrappedRetpolineExitSpecCtrl;
      union
      {
        /* 0x06d2 */ unsigned char BpbTrappedBpbState;
        struct
        {
          struct /* bitfield */
          {
            /* 0x06d2 */ unsigned char BpbTrappedCpuIdle : 1; /* bit position: 0 */
            /* 0x06d2 */ unsigned char BpbTrappedFlushRsbOnTrap : 1; /* bit position: 1 */
            /* 0x06d2 */ unsigned char BpbTrappedIbpbOnReturn : 1; /* bit position: 2 */
            /* 0x06d2 */ unsigned char BpbTrappedIbpbOnTrap : 1; /* bit position: 3 */
            /* 0x06d2 */ unsigned char BpbTrappedIbpbOnRetpolineExit : 1; /* bit position: 4 */
            /* 0x06d2 */ unsigned char BpbtrappedBpbStateReserved : 3; /* bit position: 5 */
          }; /* bitfield */
          union
          {
            /* 0x06d3 */ unsigned char BpbRetpolineState;
            struct
            {
              struct /* bitfield */
              {
                /* 0x06d3 */ unsigned char BpbRunningNonRetpolineCode : 1; /* bit position: 0 */
                /* 0x06d3 */ unsigned char BpbIndirectCallsSafe : 1; /* bit position: 1 */
                /* 0x06d3 */ unsigned char BpbRetpolineEnabled : 1; /* bit position: 2 */
                /* 0x06d3 */ unsigned char BpbRetpolineStateReserved : 5; /* bit position: 3 */
              }; /* bitfield */
              /* 0x06d4 */ unsigned long PrcbPad12b;
            }; /* size: 0x0005 */
          }; /* size: 0x0005 */
        }; /* size: 0x0006 */
      }; /* size: 0x0006 */
    }; /* size: 0x0008 */
    /* 0x06d0 */ unsigned __int64 PrcbPad12a;
  }; /* size: 0x0008 */
  /* 0x06d8 */ unsigned __int64 PrcbPad12[3];
  /* 0x06f0 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
  /* 0x0800 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x0900 */ struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];
  /* 0x1500 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x2100 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x2d00 */ unsigned __int64 PrcbPad20;
  /* 0x2d08 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x2d10 */ volatile long MmPageFaultCount;
  /* 0x2d14 */ volatile long MmCopyOnWriteCount;
  /* 0x2d18 */ volatile long MmTransitionCount;
  /* 0x2d1c */ volatile long MmDemandZeroCount;
  /* 0x2d20 */ volatile long MmPageReadCount;
  /* 0x2d24 */ volatile long MmPageReadIoCount;
  /* 0x2d28 */ volatile long MmDirtyPagesWriteCount;
  /* 0x2d2c */ volatile long MmDirtyWriteIoCount;
  /* 0x2d30 */ volatile long MmMappedPagesWriteCount;
  /* 0x2d34 */ volatile long MmMappedWriteIoCount;
  /* 0x2d38 */ unsigned long KeSystemCalls;
  /* 0x2d3c */ unsigned long KeContextSwitches;
  /* 0x2d40 */ unsigned long PrcbPad40;
  /* 0x2d44 */ unsigned long CcFastReadNoWait;
  /* 0x2d48 */ unsigned long CcFastReadWait;
  /* 0x2d4c */ unsigned long CcFastReadNotPossible;
  /* 0x2d50 */ unsigned long CcCopyReadNoWait;
  /* 0x2d54 */ unsigned long CcCopyReadWait;
  /* 0x2d58 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x2d5c */ volatile long IoReadOperationCount;
  /* 0x2d60 */ volatile long IoWriteOperationCount;
  /* 0x2d64 */ volatile long IoOtherOperationCount;
  /* 0x2d68 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x2d70 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x2d78 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x2d80 */ volatile long PacketBarrier;
  /* 0x2d84 */ volatile long TargetCount;
  /* 0x2d88 */ volatile unsigned long IpiFrozen;
  /* 0x2d8c */ unsigned long PrcbPad30;
  /* 0x2d90 */ void* IsrDpcStats;
  /* 0x2d98 */ unsigned long DeviceInterrupts;
  /* 0x2d9c */ long LookasideIrpFloat;
  /* 0x2da0 */ unsigned long InterruptLastCount;
  /* 0x2da4 */ unsigned long InterruptRate;
  /* 0x2da8 */ unsigned __int64 LastNonHrTimerExpiration;
  /* 0x2db0 */ struct _KPRCB* PairPrcb;
  /* 0x2db8 */ unsigned __int64 PrcbPad35[1];
  /* 0x2dc0 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x2dd0 */ unsigned __int64 PrcbPad41[6];
  /* 0x2e00 */ struct _KDPC_DATA DpcData[2];
  /* 0x2e50 */ void* DpcStack;
  /* 0x2e58 */ long MaximumDpcQueueDepth;
  /* 0x2e5c */ unsigned long DpcRequestRate;
  /* 0x2e60 */ unsigned long MinimumDpcRate;
  /* 0x2e64 */ unsigned long DpcLastCount;
  /* 0x2e68 */ unsigned char ThreadDpcEnable;
  /* 0x2e69 */ volatile unsigned char QuantumEnd;
  /* 0x2e6a */ volatile unsigned char DpcRoutineActive;
  /* 0x2e6b */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x2e6c */ volatile long DpcRequestSummary;
    /* 0x2e6c */ short DpcRequestSlot[2];
    struct
    {
      /* 0x2e6c */ short NormalDpcState;
      /* 0x2e6e */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x2e6c */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x2e6c */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x2e6c */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x2e6c */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x2e6c */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x2e6c */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x2e6c */ unsigned long DpcNormalSpare : 10; /* bit position: 6 */
      /* 0x2e6c */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x2e6c */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x2e6c */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x2e70 */ unsigned long LastTimerHand;
  /* 0x2e74 */ unsigned long LastTick;
  /* 0x2e78 */ unsigned long ClockInterrupts;
  /* 0x2e7c */ unsigned long ReadyScanTick;
  /* 0x2e80 */ void* InterruptObject[256];
  /* 0x3680 */ struct _KTIMER_TABLE TimerTable;
  /* 0x5880 */ struct _KGATE DpcGate;
  /* 0x5898 */ void* PrcbPad52;
  /* 0x58a0 */ struct _KDPC CallDpc;
  /* 0x58e0 */ long ClockKeepAlive;
  /* 0x58e4 */ unsigned char PrcbPad60[2];
  /* 0x58e6 */ unsigned short NmiActive;
  /* 0x58e8 */ long DpcWatchdogPeriod;
  /* 0x58ec */ long DpcWatchdogCount;
  /* 0x58f0 */ volatile long KeSpinLockOrdering;
  /* 0x58f4 */ unsigned long DpcWatchdogProfileCumulativeDpcThreshold;
  /* 0x58f8 */ void* CachedPtes;
  /* 0x5900 */ struct _LIST_ENTRY WaitListHead;
  /* 0x5910 */ unsigned __int64 WaitLock;
  /* 0x5918 */ unsigned long ReadySummary;
  /* 0x591c */ long AffinitizedSelectionMask;
  /* 0x5920 */ unsigned long QueueIndex;
  /* 0x5924 */ unsigned long PrcbPad75[3];
  /* 0x5930 */ struct _KDPC TimerExpirationDpc;
  /* 0x5970 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x5980 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x5b80 */ unsigned long InterruptCount;
  /* 0x5b84 */ unsigned long KernelTime;
  /* 0x5b88 */ unsigned long UserTime;
  /* 0x5b8c */ unsigned long DpcTime;
  /* 0x5b90 */ unsigned long InterruptTime;
  /* 0x5b94 */ unsigned long AdjustDpcThreshold;
  /* 0x5b98 */ unsigned char DebuggerSavedIRQL;
  /* 0x5b99 */ unsigned char GroupSchedulingOverQuota;
  /* 0x5b9a */ volatile unsigned char DeepSleep;
  /* 0x5b9b */ unsigned char PrcbPad80;
  /* 0x5b9c */ unsigned long DpcTimeCount;
  /* 0x5ba0 */ unsigned long DpcTimeLimit;
  /* 0x5ba4 */ unsigned long PeriodicCount;
  /* 0x5ba8 */ unsigned long PeriodicBias;
  /* 0x5bac */ unsigned long AvailableTime;
  /* 0x5bb0 */ unsigned long KeExceptionDispatchCount;
  /* 0x5bb4 */ unsigned long ReadyThreadCount;
  /* 0x5bb8 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x5bc0 */ unsigned __int64 StartCycles;
  /* 0x5bc8 */ unsigned __int64 TaggedCyclesStart;
  /* 0x5bd0 */ unsigned __int64 TaggedCycles[2];
  /* 0x5be0 */ unsigned __int64 GenerationTarget;
  /* 0x5be8 */ unsigned __int64 AffinitizedCycles;
  /* 0x5bf0 */ unsigned __int64 ImportantCycles;
  /* 0x5bf8 */ unsigned __int64 UnimportantCycles;
  /* 0x5c00 */ unsigned long DpcWatchdogProfileSingleDpcThreshold;
  /* 0x5c04 */ volatile long MmSpinLockOrdering;
  /* 0x5c08 */ void* volatile CachedStack;
  /* 0x5c10 */ unsigned long PageColor;
  /* 0x5c14 */ unsigned long NodeColor;
  /* 0x5c18 */ unsigned long NodeShiftedColor;
  /* 0x5c1c */ unsigned long SecondaryColorMask;
  /* 0x5c20 */ unsigned char PrcbPad81[6];
  /* 0x5c26 */ unsigned char ExceptionStackActive;
  /* 0x5c27 */ unsigned char TbFlushListActive;
  /* 0x5c28 */ void* ExceptionStack;
  /* 0x5c30 */ unsigned __int64 PrcbPad82[1];
  /* 0x5c38 */ unsigned __int64 CycleTime;
  /* 0x5c40 */ unsigned __int64 Cycles[2][4];
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
  /* 0x5cf4 */ unsigned long PrcbPad91;
  /* 0x5cf8 */ void* MmInternal;
  /* 0x5d00 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x5f00 */ void* HyperPte;
  /* 0x5f08 */ struct _LIST_ENTRY ScbList;
  /* 0x5f18 */ struct _KDPC ForceIdleDpc;
  /* 0x5f58 */ struct _KDPC DpcWatchdogDpc;
  /* 0x5f98 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x5fd8 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x6014 */ unsigned long CacheCount;
  /* 0x6018 */ volatile unsigned long CachedCommit;
  /* 0x601c */ volatile unsigned long CachedResidentAvailable;
  /* 0x6020 */ void* WheaInfo;
  /* 0x6028 */ void* EtwSupport;
  /* 0x6030 */ void* ExSaPageArray;
  /* 0x6038 */ unsigned long KeAlignmentFixupCount;
  /* 0x603c */ unsigned long PrcbPad95;
  /* 0x6040 */ union _SLIST_HEADER HypercallPageList;
  /* 0x6050 */ unsigned __int64* StatisticsPage;
  /* 0x6058 */ unsigned __int64 PrcbPad85[5];
  /* 0x6080 */ void* HypercallCachedPages;
  /* 0x6088 */ void* VirtualApicAssist;
  /* 0x6090 */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x6138 */ unsigned long PackageId;
  /* 0x613c */ unsigned long PrcbPad86;
  /* 0x6140 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x6148 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x6150 */ unsigned long SharedQueueScanOwner;
  /* 0x6154 */ unsigned long ScanSiblingIndex;
  /* 0x6158 */ unsigned __int64 CoreProcessorSet;
  /* 0x6160 */ unsigned __int64 ScanSiblingMask;
  /* 0x6168 */ unsigned __int64 LLCMask;
  /* 0x6170 */ unsigned __int64 CacheProcessorMask[5];
  /* 0x6198 */ struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
  /* 0x61a0 */ void* ProfileEventIndexAddress;
  /* 0x61a8 */ void** DpcWatchdogProfile;
  /* 0x61b0 */ void** DpcWatchdogProfileCurrentEmptyCapture;
  /* 0x61b8 */ void* SchedulerAssist;
  /* 0x61c0 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x6278 */ unsigned __int64 PrcbPad94;
  /* 0x6280 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x6290 */ unsigned char VendorString[13];
  /* 0x629d */ unsigned char PrcbPad100[3];
  /* 0x62a0 */ unsigned __int64 FeatureBits;
  /* 0x62a8 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x62b0 */ unsigned __int64 PteBitCache;
  /* 0x62b8 */ unsigned long PteBitOffset;
  /* 0x62bc */ unsigned long PrcbPad105;
  /* 0x62c0 */ struct _CONTEXT* Context;
  /* 0x62c8 */ unsigned long ContextFlagsInit;
  /* 0x62cc */ unsigned long PrcbPad115;
  /* 0x62d0 */ struct _XSAVE_AREA* ExtendedState;
  /* 0x62d8 */ void* IsrStack;
  /* 0x62e0 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  /* 0x6430 */ unsigned __int64 PrcbPad110;
  struct
  {
    /* 0x6438 */ unsigned long UpdateCycle;
    union
    {
      /* 0x643c */ short PairLocal;
      struct
      {
        /* 0x643c */ unsigned char PairLocalLow;
        struct /* bitfield */
        {
          /* 0x643d */ unsigned char PairLocalForceStibp : 1; /* bit position: 0 */
          /* 0x643d */ unsigned char Reserved : 4; /* bit position: 1 */
          /* 0x643d */ unsigned char Frozen : 1; /* bit position: 5 */
          /* 0x643d */ unsigned char ForceUntrusted : 1; /* bit position: 6 */
          /* 0x643d */ unsigned char SynchIpi : 1; /* bit position: 7 */
        }; /* bitfield */
      }; /* size: 0x0002 */
    }; /* size: 0x0002 */
    union
    {
      /* 0x643e */ short PairRemote;
      struct
      {
        /* 0x643e */ unsigned char PairRemoteLow;
        /* 0x643f */ unsigned char Reserved2;
      }; /* size: 0x0002 */
    }; /* size: 0x0002 */
    /* 0x6440 */ unsigned char Trace[24];
    /* 0x6458 */ unsigned __int64 LocalDomain;
    /* 0x6460 */ unsigned __int64 RemoteDomain;
    /* 0x6468 */ struct _KTHREAD* Thread;
  } /* size: 0x0038 */ StibpPairingTrace;
  /* 0x6470 */ struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
  /* 0x6478 */ struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;
  /* 0x6480 */ struct _KDPC AbDpc;
  /* 0x64c0 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
  /* 0x6514 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
  /* 0x6568 */ struct _KSECURE_FAULT_INFORMATION SecureFault;
  /* 0x6578 */ unsigned __int64 PrcbPad120;
  /* 0x6580 */ struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;
  /* 0x67f0 */ unsigned __int64 PrcbPad125[2];
  /* 0x6800 */ unsigned long TimerExpirationTraceCount;
  /* 0x6804 */ unsigned long PrcbPad127;
  /* 0x6808 */ struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];
  /* 0x6908 */ unsigned __int64 PrcbPad128[7];
  /* 0x6940 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x6948 */ unsigned __int64 PrcbPad130[7];
  /* 0x6980 */ struct _MACHINE_CHECK_CONTEXT McheckContext[2];
  /* 0x6a20 */ unsigned __int64 PrcbPad134[4];
  /* 0x6a40 */ struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];
  /* 0x6aa0 */ unsigned __int64 PrcbPad134a[4];
  /* 0x6ac0 */ unsigned char PrcbPad138[896];
  /* 0x6e40 */ unsigned char PrcbPad138a[64];
  /* 0x6e80 */ unsigned __int64 KernelDirectoryTableBase;
  /* 0x6e88 */ unsigned __int64 RspBaseShadow;
  /* 0x6e90 */ unsigned __int64 UserRspShadow;
  /* 0x6e98 */ unsigned long ShadowFlags;
  /* 0x6e9c */ unsigned long PrcbPad138b;
  /* 0x6ea0 */ unsigned __int64 PrcbPad138c;
  /* 0x6ea8 */ unsigned short PrcbPad138d;
  /* 0x6eaa */ unsigned short VerwSelector;
  /* 0x6eac */ unsigned long PrcbPad139;
  /* 0x6eb0 */ unsigned long DbgMceNestingLevel;
  /* 0x6eb4 */ unsigned long DbgMceFlags;
  /* 0x6eb8 */ unsigned __int64 PrcbPad140[505];
  /* 0x7e80 */ unsigned __int64 PrcbPad140a[8];
  /* 0x7ec0 */ unsigned __int64 PrcbPad141[504];
  /* 0x8e80 */ unsigned char PrcbPad141a[64];
  /* 0x8ec0 */ struct _REQUEST_MAILBOX RequestMailbox[1];
} KPRCB, *PKPRCB; /* size: 0x8f00 */

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
} KPCR, *PKPCR; /* size: 0x9080 */

