typedef union _KPRCBFLAG
{
  union
  {
    /* 0x0000 */ volatile long PrcbFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BamQosLevel : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingQosUpdate : 2; /* bit position: 8 */
      /* 0x0000 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long TracepointActive : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long LongDpcRunning : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long PrcbFlagsReserved : 19; /* bit position: 13 */
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

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _KSTATIC_AFFINITY_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushTbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushWbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeSyncContextAffinity;
  }; /* size: 0x0108 */
  /* 0x0108 */ struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;
  /* 0x0210 */ struct _KAFFINITY_EX KeIpiSendAffinity;
  /* 0x0318 */ struct _KAFFINITY_EX KeIpiSendIpiSet;
} KSTATIC_AFFINITY_BLOCK, *PKSTATIC_AFFINITY_BLOCK; /* size: 0x0420 */

typedef struct _KSOFTWARE_INTERRUPT_BATCH
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char TargetType;
  /* 0x0002 */ unsigned char ReservedBatchInProgress;
  /* 0x0003 */ unsigned char Spare;
  /* 0x0004 */ unsigned long SingleTargetIndex;
  /* 0x0008 */ struct _KAFFINITY_EX MultipleTargetAffinity;
} KSOFTWARE_INTERRUPT_BATCH, *PKSOFTWARE_INTERRUPT_BATCH; /* size: 0x0110 */

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
  /* 0x0028 */ unsigned long LongDpcPresent;
  /* 0x002c */ unsigned long Padding;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0030 */

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

typedef struct _KTIMER_TABLE_STATE
{
  /* 0x0000 */ unsigned __int64 LastTimerExpiration[2];
  /* 0x0010 */ unsigned long LastTimerHand[2];
} KTIMER_TABLE_STATE, *PKTIMER_TABLE_STATE; /* size: 0x0018 */

typedef struct _KTIMER_TABLE
{
  /* 0x0000 */ struct _KTIMER* TimerExpiry[64];
  /* 0x0200 */ struct _KTIMER_TABLE_ENTRY TimerEntries[256][2];
  /* 0x4200 */ struct _KTIMER_TABLE_STATE TableState;
} KTIMER_TABLE, *PKTIMER_TABLE; /* size: 0x4218 */

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
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
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
  /* 0x008a */ unsigned char CounterReadOptimize;
  /* 0x008b */ char __PADDING__[5];
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

typedef struct _PROC_PERF_CHECK_CONTEXT
{
  /* 0x0000 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0008 */ struct _PROC_PERF_CONSTRAINT* Constraint;
  /* 0x0010 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0018 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0020 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0028 */ unsigned long Utility;
  /* 0x002c */ unsigned long AffinitizedUtility;
  /* 0x0030 */ unsigned long MediaUtility;
  /* 0x0034 */ unsigned long ImportantUtility;
  /* 0x0038 */ unsigned short LatestAffinitizedPercent;
  /* 0x003a */ unsigned short AveragePerformancePercent;
  /* 0x003c */ unsigned long RelativePerformance;
  /* 0x0040 */ unsigned char NtProcessor;
  /* 0x0041 */ char __PADDING__[7];
} PROC_PERF_CHECK_CONTEXT, *PPROC_PERF_CHECK_CONTEXT; /* size: 0x0048 */

typedef enum _KHETERO_CPU_QOS
{
  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDeadline = 4,
  KHeteroCpuQosEco = 5,
  KHeteroCpuQosDynamic = 6,
  KHeteroCpuQosMax = 6,
} KHETERO_CPU_QOS, *PKHETERO_CPU_QOS;

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ volatile unsigned __int64 IdleSequenceNumber;
  /* 0x0028 */ unsigned __int64 IdleTimeEntry;
  /* 0x0030 */ unsigned __int64 IdleTimeExpiration;
  /* 0x0038 */ unsigned char NonInterruptibleTransition;
  /* 0x0039 */ unsigned char PepWokenTransition;
  /* 0x003a */ unsigned char HvTargetState;
  /* 0x003b */ unsigned char SoftParked;
  /* 0x003c */ unsigned long TargetIdleState;
  /* 0x0040 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0048 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0050 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00e0 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00e4 */ unsigned long LastSysTime;
  /* 0x00e8 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00f0 */ long WmiInterfaceEnabled;
  /* 0x00f8 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0118 */ struct _KDPC PerfActionDpc;
  /* 0x0158 */ volatile long PerfActionMask;
  /* 0x0160 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0170 */ struct _PROC_PERF_CHECK_CONTEXT CheckContext;
  /* 0x01b8 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x01c0 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x01c8 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x01c9 */ unsigned char PerformanceSchedulingClass;
  /* 0x01ca */ unsigned char EfficiencySchedulingClass;
  /* 0x01cb */ unsigned char EarlyBootArchitecturalEfficiencyClass;
  /* 0x01cc */ unsigned char Parked;
  /* 0x01cd */ unsigned char LongPriorQosPeriod;
  union
  {
    /* 0x01d0 */ unsigned __int64 SnapTimeLast;
    /* 0x01d0 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01d8 */ unsigned __int64 ActiveTime;
  /* 0x01e0 */ unsigned __int64 TotalTime;
  /* 0x01e8 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x01f0 */ unsigned __int64 LastQosTranstionTsc;
  /* 0x01f8 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x0200 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x0204 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x0208 */ unsigned short QosEquivalencyMask;
  /* 0x020a */ unsigned short HwFeedbackTableOffset;
  /* 0x020c */ unsigned char HwFeedbackParkHint;
  /* 0x020d */ unsigned char HeteroCoreType;
  /* 0x020e */ unsigned short HwFeedbackTableIndex;
  /* 0x0210 */ struct _KHETRO_HWFEEDBACK_TYPE* HwFeedbackClassList;
  /* 0x0218 */ struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* EeCyclesWorkloadClassList;
  /* 0x0220 */ struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* PerfCyclesWorkloadClassList;
  /* 0x0228 */ unsigned char NotUsed;
  /* 0x0229 */ char __PADDING__[7];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0230 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ unsigned short Processor;
  /* 0x003a */ unsigned short TimerType;
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
  /* 0x0150 */ void* ReservedRawDataBuffer;
} KENTROPY_TIMING_STATE, *PKENTROPY_TIMING_STATE; /* size: 0x0158 */

typedef struct _IOP_IRP_STACK_PROFILER
{
  /* 0x0000 */ unsigned long Profile[20];
  /* 0x0050 */ unsigned long TotalIrps;
} IOP_IRP_STACK_PROFILER, *PIOP_IRP_STACK_PROFILER; /* size: 0x0054 */

typedef struct _KSECURE_FAULT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 FaultCode;
  /* 0x0008 */ unsigned __int64 FaultVa;
  /* 0x0010 */ unsigned __int64 FaultPa;
} KSECURE_FAULT_INFORMATION, *PKSECURE_FAULT_INFORMATION; /* size: 0x0018 */

typedef union _KPRIORITY_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Priority : 7; /* bit position: 0 */
      /* 0x0000 */ unsigned char IsolationWidth : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFields;
  }; /* size: 0x0001 */
} KPRIORITY_STATE, *PKPRIORITY_STATE; /* size: 0x0001 */

typedef union _KHETERO_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Qos : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned char WorkloadClass : 3; /* bit position: 3 */
      /* 0x0000 */ unsigned char RunningType : 1; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFields;
  }; /* size: 0x0001 */
} KHETERO_STATE, *PKHETERO_STATE; /* size: 0x0001 */

typedef struct _KSHARED_READY_QUEUE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned long ReadySummary;
  /* 0x0010 */ struct _LIST_ENTRY ReadyListHead[32];
  /* 0x0210 */ union _KPRIORITY_STATE RunningSummary[64];
  /* 0x0250 */ union _KHETERO_STATE HeteroRunningSummary[64];
  /* 0x0290 */ unsigned char Span;
  /* 0x0291 */ unsigned char LowProcIndex;
  /* 0x0292 */ unsigned char QueueIndex;
  /* 0x0293 */ unsigned char NormalPriorityQueueIndex;
  /* 0x0294 */ unsigned char ProcCount;
  /* 0x0295 */ unsigned char ScanOwner;
  /* 0x0296 */ unsigned char Spare[2];
  /* 0x0298 */ unsigned __int64 Affinity;
  /* 0x02a0 */ unsigned long ReadyThreadCount;
  /* 0x02a8 */ unsigned __int64 ReadyQueueExpectedRunTime;
} KSHARED_READY_QUEUE, *PKSHARED_READY_QUEUE; /* size: 0x02b0 */

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

typedef enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
  KClockTimerOneShotUnarmed = 0,
  KClockTimerOneShotArmed = 1,
  KClockTimerOneShotRearmRequired = 2,
  KClockTimerOneShotInvalid = 3,
} KCLOCK_TIMER_ONE_SHOT_STATE, *PKCLOCK_TIMER_ONE_SHOT_STATE;

typedef enum _KCLOCK_TIMER_DEADLINE_TYPE
{
  KClockTimerKTimerExpirationNonHr = 0,
  KClockTimerKTimerExpirationPseudoHr = 1,
  KClockTimerKTimer2ExpirationHr = 2,
  KClockTimerKTimersMax = 2,
  KClockTimerQuantumEnd = 3,
  KClockTimerGroupSchedulingGenerationEnd = 4,
  KClockTimerIdlePromotion = 5,
  KClockTimerBamQosHysteresisEnd = 6,
  KClockTimerMax = 7,
} KCLOCK_TIMER_DEADLINE_TYPE, *PKCLOCK_TIMER_DEADLINE_TYPE;

typedef struct _KCLOCK_TIMER_DEADLINE_ENTRY
{
  /* 0x0000 */ unsigned __int64 DueTime;
  /* 0x0008 */ unsigned long TolerableDelay;
  union
  {
    /* 0x000c */ unsigned char TypeFlags;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned char Valid : 1; /* bit position: 0 */
      /* 0x000c */ unsigned char NoWake : 1; /* bit position: 1 */
      /* 0x000c */ unsigned char Unused : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x000d */ char __PADDING__[3];
} KCLOCK_TIMER_DEADLINE_ENTRY, *PKCLOCK_TIMER_DEADLINE_ENTRY; /* size: 0x0010 */

typedef struct _KCLOCK_TICK_TRACE
{
  /* 0x0000 */ unsigned __int64 PerformanceCounter;
  /* 0x0008 */ unsigned __int64 PreInterruptTime;
  /* 0x0010 */ unsigned __int64 PostInterruptTime;
  /* 0x0018 */ unsigned __int64 TimeStampCounter;
  /* 0x0020 */ unsigned char IsClockOwner;
  /* 0x0021 */ char __PADDING__[7];
} KCLOCK_TICK_TRACE, *PKCLOCK_TICK_TRACE; /* size: 0x0028 */

typedef struct _KCLOCK_INCREMENT_TRACE
{
  /* 0x0000 */ unsigned long ActualIncrement;
  /* 0x0004 */ unsigned long RequestedIncrement;
  /* 0x0008 */ unsigned __int64 InterruptTime;
  /* 0x0010 */ unsigned __int64 PerformanceCounter;
  /* 0x0018 */ unsigned char OneShot;
  /* 0x0019 */ char __PADDING__[7];
} KCLOCK_INCREMENT_TRACE, *PKCLOCK_INCREMENT_TRACE; /* size: 0x0020 */

typedef struct _KCLOCK_TIMER_STATE
{
  /* 0x0000 */ unsigned __int64 NextTickDueTime;
  /* 0x0008 */ unsigned long TimeIncrement;
  /* 0x000c */ unsigned long LastRequestedTimeIncrement;
  /* 0x0010 */ enum _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;
  /* 0x0014 */ enum _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;
  /* 0x0018 */ struct _KCLOCK_TIMER_DEADLINE_ENTRY ClockTimerEntries[7];
  /* 0x0088 */ unsigned char ClockActive;
  /* 0x008c */ unsigned long ClockTickTraceIndex;
  /* 0x0090 */ unsigned long ClockIncrementTraceIndex;
  /* 0x0098 */ struct _KCLOCK_TICK_TRACE ClockTickTraces[16];
  /* 0x0318 */ struct _KCLOCK_INCREMENT_TRACE ClockIncrementTraces[16];
} KCLOCK_TIMER_STATE, *PKCLOCK_TIMER_STATE; /* size: 0x0518 */

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

typedef struct _KCORE_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned char ProcessorCount;
  /* 0x0001 */ unsigned char Spare[7];
  /* 0x0008 */ struct _KPRCB* Prcbs[8];
} KCORE_CONTROL_BLOCK, *PKCORE_CONTROL_BLOCK; /* size: 0x0048 */

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
  /* 0x0030 */ volatile long* SubNodeTargetCountAddr;
  /* 0x0038 */ volatile long SubNodeTargetCount;
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
  /* 0x0038 */ union _KPRIORITY_STATE* PriorityState;
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
  /* 0x00c0 */ struct _KSCHEDULER_SUBNODE* SchedulerSubNode;
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
  /* 0x2da8 */ unsigned __int64 PrcbPad31;
  /* 0x2db0 */ struct _KPRCB* PairPrcb;
  /* 0x2db8 */ struct _KSTATIC_AFFINITY_BLOCK StaticAffinity;
  /* 0x31d8 */ struct _KSOFTWARE_INTERRUPT_BATCH DeferredDispatchInterrupts;
  /* 0x32e8 */ unsigned __int64 PrcbPad35[3];
  /* 0x3300 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x3310 */ struct _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;
  /* 0x3318 */ struct _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;
  /* 0x3320 */ void* CurrentDpcRoutine /* function */;
  /* 0x3328 */ unsigned __int64 CurrentDpcRuntimeHistoryCached;
  /* 0x3330 */ unsigned __int64 CurrentDpcStartTime;
  /* 0x3338 */ struct _KTHREAD* DpcDelegateThread;
  /* 0x3340 */ struct _KDPC_DATA DpcData[2];
  /* 0x33a0 */ void* DpcStack;
  /* 0x33a8 */ long MaximumDpcQueueDepth;
  /* 0x33ac */ unsigned long DpcRequestRate;
  /* 0x33b0 */ unsigned long MinimumDpcRate;
  /* 0x33b4 */ unsigned long DpcLastCount;
  /* 0x33b8 */ unsigned char ThreadDpcEnable;
  /* 0x33b9 */ volatile unsigned char QuantumEnd;
  /* 0x33ba */ volatile unsigned char DpcRoutineActive;
  /* 0x33bb */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x33bc */ volatile long DpcRequestSummary;
    /* 0x33bc */ short DpcRequestSlot[2];
    struct
    {
      /* 0x33bc */ short NormalDpcState;
      /* 0x33be */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x33bc */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x33bc */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x33bc */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x33bc */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x33bc */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x33bc */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x33bc */ unsigned long DpcNormalPriorityAntiStarvation : 1; /* bit position: 6 */
      /* 0x33bc */ unsigned long DpcNormalSwapToDpcDelegate : 1; /* bit position: 7 */
      /* 0x33bc */ unsigned long DpcNormalSpare : 8; /* bit position: 8 */
      /* 0x33bc */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x33bc */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x33bc */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x33c0 */ unsigned long LastTick;
  /* 0x33c4 */ unsigned long ClockInterrupts;
  /* 0x33c8 */ unsigned long ReadyScanTick;
  /* 0x33cc */ unsigned long SingleDpcSoftTimeLimitTicks;
  /* 0x33d0 */ struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO* SingleDpcSoftTimeoutEventInfo;
  /* 0x33d8 */ unsigned long CumulativeDpcSoftTimeLimitTicks;
  /* 0x33dc */ unsigned long PrcbPad93[9];
  /* 0x3400 */ void* InterruptObject[256];
  /* 0x3c00 */ struct _KTIMER_TABLE TimerTable;
  /* 0x7e18 */ unsigned long PrcbPad92[10];
  /* 0x7e40 */ struct _KGATE DpcGate;
  /* 0x7e58 */ void* PrcbPad52;
  /* 0x7e60 */ struct _KDPC CallDpc;
  /* 0x7ea0 */ long ClockKeepAlive;
  /* 0x7ea4 */ unsigned char PrcbPad60[2];
  union
  {
    struct
    {
      /* 0x7ea6 */ unsigned char NmiActive;
      /* 0x7ea7 */ unsigned char MceActive;
    }; /* size: 0x0002 */
    /* 0x7ea6 */ unsigned short CombinedNmiMceActive;
  }; /* size: 0x0002 */
  /* 0x7ea8 */ long DpcWatchdogPeriodTicks;
  /* 0x7eac */ long DpcWatchdogCount;
  /* 0x7eb0 */ volatile long KeSpinLockOrdering;
  /* 0x7eb4 */ unsigned long DpcWatchdogProfileCumulativeDpcThresholdTicks;
  /* 0x7eb8 */ void* CachedPtes;
  /* 0x7ec0 */ struct _LIST_ENTRY WaitListHead;
  /* 0x7ed0 */ unsigned __int64 WaitLock;
  /* 0x7ed8 */ unsigned long ReadySummary;
  /* 0x7edc */ long AffinitizedSelectionMask;
  /* 0x7ee0 */ unsigned long QueueIndex;
  /* 0x7ee4 */ unsigned long NormalPriorityQueueIndex;
  /* 0x7ee8 */ unsigned long NormalPriorityReadyScanTick;
  /* 0x7eec */ unsigned long DpcWatchdogSequenceNumber;
  /* 0x7ef0 */ struct _KDPC TimerExpirationDpc;
  /* 0x7f30 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x7f40 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x8140 */ unsigned long InterruptCount;
  /* 0x8144 */ unsigned long KernelTime;
  /* 0x8148 */ unsigned long UserTime;
  /* 0x814c */ unsigned long DpcTime;
  /* 0x8150 */ unsigned long InterruptTime;
  /* 0x8154 */ unsigned long AdjustDpcThreshold;
  /* 0x8158 */ unsigned char DebuggerSavedIRQL;
  /* 0x8159 */ unsigned char GroupSchedulingOverQuota;
  /* 0x815a */ volatile unsigned char DeepSleep;
  /* 0x815b */ unsigned char PrcbPad80;
  /* 0x815c */ unsigned long DpcTimeCount;
  /* 0x8160 */ unsigned long DpcTimeLimitTicks;
  /* 0x8164 */ unsigned long PeriodicCount;
  /* 0x8168 */ unsigned long PeriodicBias;
  /* 0x816c */ unsigned long AvailableTime;
  /* 0x8170 */ unsigned long KeExceptionDispatchCount;
  /* 0x8174 */ unsigned long ReadyThreadCount;
  /* 0x8178 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x8180 */ unsigned __int64 StartCycles;
  /* 0x8188 */ unsigned __int64 TaggedCycles[4];
  /* 0x81a8 */ unsigned __int64 AffinitizedCycles;
  /* 0x81b0 */ unsigned __int64* CyclesByThreadType;
  /* 0x81b8 */ unsigned long CpuCycleScalingFactor;
  /* 0x81bc */ unsigned short PerformanceScoreByClass[8];
  /* 0x81cc */ unsigned short EfficiencyScoreByClass[8];
  /* 0x81dc */ unsigned long PrcbPad83[25];
  /* 0x8240 */ unsigned long DpcWatchdogProfileSingleDpcThresholdTicks;
  /* 0x8244 */ long PrcbPad82;
  /* 0x8248 */ void* volatile CachedStack;
  /* 0x8250 */ unsigned long PageColor;
  /* 0x8254 */ unsigned long NodeColor;
  /* 0x8258 */ unsigned long NodeShiftedColor;
  /* 0x825c */ unsigned long SecondaryColorMask;
  /* 0x8260 */ unsigned char PrcbPad81[5];
  /* 0x8265 */ unsigned char SystemWorkKickInProgress;
  /* 0x8266 */ unsigned char ExceptionStackActive;
  /* 0x8267 */ unsigned char TbFlushListActive;
  /* 0x8268 */ void* ExceptionStack;
  /* 0x8270 */ volatile __int64 MmSpinLockOrdering;
  /* 0x8278 */ unsigned __int64 CycleTime;
  /* 0x8280 */ unsigned __int64 Cycles[2][4];
  /* 0x82c0 */ unsigned long CcFastMdlReadNoWait;
  /* 0x82c4 */ unsigned long CcFastMdlReadWait;
  /* 0x82c8 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x82cc */ unsigned long CcMapDataNoWait;
  /* 0x82d0 */ unsigned long CcMapDataWait;
  /* 0x82d4 */ unsigned long CcPinMappedDataCount;
  /* 0x82d8 */ unsigned long CcPinReadNoWait;
  /* 0x82dc */ unsigned long CcPinReadWait;
  /* 0x82e0 */ unsigned long CcMdlReadNoWait;
  /* 0x82e4 */ unsigned long CcMdlReadWait;
  /* 0x82e8 */ unsigned long CcLazyWriteHotSpots;
  /* 0x82ec */ unsigned long CcLazyWriteIos;
  /* 0x82f0 */ unsigned long CcLazyWritePages;
  /* 0x82f4 */ unsigned long CcDataFlushes;
  /* 0x82f8 */ unsigned long CcDataPages;
  /* 0x82fc */ unsigned long CcLostDelayedWrites;
  /* 0x8300 */ unsigned long CcFastReadResourceMiss;
  /* 0x8304 */ unsigned long CcCopyReadWaitMiss;
  /* 0x8308 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x830c */ unsigned long CcMapDataNoWaitMiss;
  /* 0x8310 */ unsigned long CcMapDataWaitMiss;
  /* 0x8314 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x8318 */ unsigned long CcPinReadWaitMiss;
  /* 0x831c */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x8320 */ unsigned long CcMdlReadWaitMiss;
  /* 0x8324 */ unsigned long CcReadAheadIos;
  /* 0x8328 */ volatile long MmCacheTransitionCount;
  /* 0x832c */ volatile long MmCacheReadCount;
  /* 0x8330 */ volatile long MmCacheIoCount;
  /* 0x8334 */ unsigned long PrcbPad91;
  /* 0x8338 */ void* MmInternal;
  /* 0x8340 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x8570 */ unsigned __int64 PrcbPad96[2];
  /* 0x8580 */ void* HyperPte;
  /* 0x8588 */ struct _LIST_ENTRY ScbList;
  /* 0x8598 */ struct _KDPC ForceIdleDpc;
  /* 0x85d8 */ struct _KDPC DpcWatchdogDpc;
  /* 0x8618 */ struct _KTIMER DpcWatchdogTimer;
  /* 0x8658 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x8694 */ unsigned long CacheCount;
  /* 0x8698 */ volatile unsigned long CachedCommit;
  /* 0x869c */ volatile unsigned long CachedResidentAvailable;
  /* 0x86a0 */ void* WheaInfo;
  /* 0x86a8 */ void* EtwSupport;
  /* 0x86b0 */ void* ExSaPageArray;
  /* 0x86b8 */ unsigned long KeAlignmentFixupCount;
  /* 0x86bc */ unsigned long PrcbPad95;
  /* 0x86c0 */ union _SLIST_HEADER HypercallPageList;
  /* 0x86d0 */ unsigned __int64* StatisticsPage;
  /* 0x86d8 */ unsigned __int64 GenerationTarget;
  /* 0x86e0 */ unsigned __int64 PrcbPad85[4];
  /* 0x8700 */ void* HypercallCachedPages;
  /* 0x8708 */ void* VirtualApicAssist;
  /* 0x8710 */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x8818 */ unsigned long PackageId;
  /* 0x881c */ unsigned long DieId;
  /* 0x8820 */ unsigned long PrcbPad87[8];
  /* 0x8840 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x8848 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x8850 */ unsigned long SharedQueueScanOwner;
  /* 0x8854 */ unsigned long ScanSiblingIndex;
  /* 0x8858 */ struct _KCORE_CONTROL_BLOCK* CoreControlBlock;
  /* 0x8860 */ unsigned __int64 CoreProcessorSet;
  /* 0x8868 */ unsigned __int64 ScanSiblingMask;
  /* 0x8870 */ unsigned __int64 LLCMask;
  /* 0x8878 */ unsigned __int64 GroupModuleProcessorSet;
  /* 0x8880 */ unsigned __int64 PrcbPad97[3];
  /* 0x8898 */ struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
  /* 0x88a0 */ void* ProfileEventIndexAddress;
  /* 0x88a8 */ void** DpcWatchdogProfile;
  /* 0x88b0 */ void** DpcWatchdogProfileCurrentEmptyCapture;
  /* 0x88b8 */ void* SchedulerAssist;
  /* 0x88c0 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x8978 */ unsigned __int64 PrcbPad94;
  /* 0x8980 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x8990 */ unsigned char VendorString[13];
  /* 0x899d */ unsigned char PrcbPad100[3];
  /* 0x89a0 */ unsigned __int64 FeatureBits;
  /* 0x89a8 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x89b0 */ unsigned __int64 PteBitCache;
  /* 0x89b8 */ unsigned long PteBitOffset;
  /* 0x89bc */ unsigned long PrcbPad105;
  /* 0x89c0 */ struct _CONTEXT* Context;
  /* 0x89c8 */ unsigned long ContextFlagsInit;
  /* 0x89cc */ unsigned long PrcbPad115;
  /* 0x89d0 */ struct _XSAVE_AREA* ExtendedState;
  /* 0x89d8 */ void* IsrStack;
  /* 0x89e0 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  struct
  {
    /* 0x8b38 */ unsigned long UpdateCycle;
    union
    {
      /* 0x8b3c */ short PairLocal;
      struct
      {
        /* 0x8b3c */ unsigned char PairLocalLow;
        struct /* bitfield */
        {
          /* 0x8b3d */ unsigned char PairLocalForceStibp : 1; /* bit position: 0 */
          /* 0x8b3d */ unsigned char Reserved : 4; /* bit position: 1 */
          /* 0x8b3d */ unsigned char Frozen : 1; /* bit position: 5 */
          /* 0x8b3d */ unsigned char ForceUntrusted : 1; /* bit position: 6 */
          /* 0x8b3d */ unsigned char SynchIpi : 1; /* bit position: 7 */
        }; /* bitfield */
      }; /* size: 0x0002 */
    }; /* size: 0x0002 */
    union
    {
      /* 0x8b3e */ short PairRemote;
      struct
      {
        /* 0x8b3e */ unsigned char PairRemoteLow;
        /* 0x8b3f */ unsigned char Reserved2;
      }; /* size: 0x0002 */
    }; /* size: 0x0002 */
    /* 0x8b40 */ unsigned char Trace[24];
    /* 0x8b58 */ unsigned __int64 LocalDomain;
    /* 0x8b60 */ unsigned __int64 RemoteDomain;
    /* 0x8b68 */ struct _KTHREAD* Thread;
  } /* size: 0x0038 */ StibpPairingTrace;
  /* 0x8b70 */ struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
  /* 0x8b78 */ struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;
  /* 0x8b80 */ struct _KDPC AbDpc;
  /* 0x8bc0 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
  /* 0x8c14 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
  /* 0x8c68 */ struct _KSECURE_FAULT_INFORMATION SecureFault;
  /* 0x8c80 */ struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;
  /* 0x8f30 */ unsigned __int64 PrcbPad125[2];
  /* 0x8f40 */ unsigned long TimerExpirationTraceCount;
  /* 0x8f44 */ unsigned long PrcbPad127;
  /* 0x8f48 */ struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];
  /* 0x9048 */ unsigned __int64 PrcbPad128[7];
  /* 0x9080 */ struct _KCLOCK_TIMER_STATE ClockTimerState;
  /* 0x9598 */ unsigned char PrcbPad129[40];
  /* 0x95c0 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x95c8 */ unsigned __int64 PrcbPad130[7];
  /* 0x9600 */ struct _MACHINE_CHECK_CONTEXT McheckContext[2];
  /* 0x96a0 */ unsigned __int64 TransitionShadowStack;
  /* 0x96a8 */ unsigned __int64 KernelShadowStackInitial;
  /* 0x96b0 */ unsigned __int64* IstShadowStacksTable;
  /* 0x96b8 */ void* CachedShadowStack;
  /* 0x96c0 */ struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];
  /* 0x9720 */ unsigned __int64 PrcbPad134a[4];
  /* 0x9740 */ struct _KAFFINITY_EX DieProcessorSet;
  /* 0x9848 */ unsigned char CoresPerPhysicalDie;
  /* 0x9849 */ unsigned char LogicalProcessorsPerModule;
  /* 0x984a */ unsigned char PrcbPad136a[6];
  /* 0x9850 */ unsigned char PrcbPad137[64];
  /* 0x9890 */ struct _KAFFINITY_EX ModuleProcessorSet;
  /* 0x9998 */ struct _KCORE_CONTROL_BLOCK LocalCoreControlBlock;
  /* 0x99e0 */ unsigned char PrcbPad138[1120];
  /* 0x9e40 */ unsigned char PrcbPad138a[64];
  /* 0x9e80 */ unsigned __int64 KernelDirectoryTableBase;
  /* 0x9e88 */ unsigned __int64 RspBaseShadow;
  /* 0x9e90 */ unsigned __int64 UserRspShadow;
  /* 0x9e98 */ unsigned long ShadowFlags;
  /* 0x9e9c */ unsigned long PrcbPad138b;
  /* 0x9ea0 */ unsigned __int64 PrcbPad138c;
  /* 0x9ea8 */ unsigned short PrcbPad138d;
  /* 0x9eaa */ unsigned short PrcbPad138e;
  /* 0x9eac */ unsigned long DbgMceNestingLevel;
  /* 0x9eb0 */ unsigned long DbgMceFlags;
  /* 0x9eb4 */ unsigned long PrcbPad139b;
  /* 0x9eb8 */ struct _KAFFINITY_EX CacheProcessorSet[5];
  /* 0xa3e0 */ unsigned __int64 PrcbPad140[340];
  /* 0xae80 */ unsigned __int64 PrcbPad140a[8];
  /* 0xaec0 */ unsigned __int64 PrcbPad141[504];
  /* 0xbe80 */ unsigned char PrcbPad141a[64];
  /* 0xbec0 */ struct _REQUEST_MAILBOX RequestMailbox[1];
} KPRCB, *PKPRCB; /* size: 0xbf00 */

