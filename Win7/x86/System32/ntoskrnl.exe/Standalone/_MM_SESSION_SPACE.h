typedef struct _MM_SESSION_SPACE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Initialized : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long DeletePending : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long PoolInitialized : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long DynamicVaInitialized : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long WsInitialized : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long PoolDestroyed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long ObjectInitialized : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long Filler : 25; /* bit position: 7 */
  }; /* bitfield */
} MM_SESSION_SPACE_FLAGS, *PMM_SESSION_SPACE_FLAGS; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0010 */

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

typedef struct _GENERAL_LOOKASIDE
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
  /* 0x0048 */ long __PADDING__[14];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0080 */

typedef struct _KGUARDED_MUTEX
{
  /* 0x0000 */ volatile long Count;
  /* 0x0004 */ struct _KTHREAD* Owner;
  /* 0x0008 */ unsigned long Contention;
  /* 0x000c */ struct _KGATE Gate;
  union
  {
    struct
    {
      /* 0x001c */ short KernelApcDisable;
      /* 0x001e */ short SpecialApcDisable;
    }; /* size: 0x0004 */
    /* 0x001c */ unsigned long CombinedApcDisable;
  }; /* size: 0x0004 */
} KGUARDED_MUTEX, *PKGUARDED_MUTEX; /* size: 0x0020 */

typedef struct _MMSESSION
{
  /* 0x0000 */ struct _KGUARDED_MUTEX SystemSpaceViewLock;
  /* 0x0020 */ struct _KGUARDED_MUTEX* SystemSpaceViewLockPointer;
  /* 0x0024 */ struct _MMVIEW* SystemSpaceViewTable;
  /* 0x0028 */ unsigned long SystemSpaceHashSize;
  /* 0x002c */ unsigned long SystemSpaceHashEntries;
  /* 0x0030 */ unsigned long SystemSpaceHashKey;
  /* 0x0034 */ unsigned long BitmapFailures;
} MMSESSION, *PMMSESSION; /* size: 0x0038 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _KGUARDED_MUTEX Mutex;
  /* 0x0020 */ struct _RTL_BITMAP PagedPoolAllocationMap;
  /* 0x0028 */ struct _MMPTE* FirstPteForPagedPool;
  /* 0x002c */ unsigned long PagedPoolHint;
  /* 0x0030 */ volatile unsigned long PagedPoolCommit;
  /* 0x0034 */ volatile unsigned long AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x0038 */

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

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char ModwriterAttached : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char TrimHard : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char ForceTrim : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
    /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char MemoryPriority : 8; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char ExpansionFailed : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char Available : 5; /* bit position: 3 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK WorkingSetMutex;
  /* 0x0004 */ struct _KGATE* ExitGate;
  /* 0x0008 */ void* AccessLog;
  /* 0x000c */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0014 */ unsigned long AgeDistribution[7];
  /* 0x0030 */ unsigned long MinimumWorkingSetSize;
  /* 0x0034 */ unsigned long WorkingSetSize;
  /* 0x0038 */ unsigned long WorkingSetPrivateSize;
  /* 0x003c */ unsigned long MaximumWorkingSetSize;
  /* 0x0040 */ unsigned long ChargedWslePages;
  /* 0x0044 */ unsigned long ActualWslePages;
  /* 0x0048 */ unsigned long WorkingSetSizeOverhead;
  /* 0x004c */ unsigned long PeakWorkingSetSize;
  /* 0x0050 */ unsigned long HardFaultCount;
  /* 0x0054 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0058 */ unsigned short NextPageColor;
  /* 0x005a */ unsigned short LastTrimStamp;
  /* 0x005c */ unsigned long PageFaultCount;
  /* 0x0060 */ unsigned long RepurposeCount;
  /* 0x0064 */ unsigned long Spare[1];
  /* 0x0068 */ struct _MMSUPPORT_FLAGS Flags;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x006c */

typedef struct _POOL_DESCRIPTOR
{
  /* 0x0000 */ enum _POOL_TYPE PoolType;
  union
  {
    /* 0x0004 */ struct _KGUARDED_MUTEX PagedLock;
    /* 0x0004 */ unsigned long NonPagedLock;
  }; /* size: 0x0020 */
  /* 0x0040 */ volatile long RunningAllocs;
  /* 0x0044 */ volatile long RunningDeAllocs;
  /* 0x0048 */ volatile long TotalBigPages;
  /* 0x004c */ volatile long ThreadsProcessingDeferrals;
  /* 0x0050 */ volatile unsigned long TotalBytes;
  /* 0x0080 */ unsigned long PoolIndex;
  /* 0x00c0 */ volatile long TotalPages;
  /* 0x0100 */ void** volatile PendingFrees;
  /* 0x0104 */ volatile long PendingFreeDepth;
  /* 0x0140 */ struct _LIST_ENTRY ListHeads[512];
} POOL_DESCRIPTOR, *PPOOL_DESCRIPTOR; /* size: 0x1140 */

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long reserved : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0004 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Unused : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0004 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ProtoAddressLow : 8; /* bit position: 1 */
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long ProtoAddressHigh : 21; /* bit position: 11 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0004 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFileHigh : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0004 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long GlobalTimeStamp : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0004 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0004 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long SubsectionAddressLow : 9; /* bit position: 1 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long SubsectionAddressHigh : 21; /* bit position: 11 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0004 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long filler0 : 8; /* bit position: 2 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long filler1 : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long NextEntry : 20; /* bit position: 12 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0004 */

typedef struct _MMPTE
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned long Long;
      /* 0x0000 */ volatile unsigned long VolatileLong;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} MMPTE, *PMMPTE; /* size: 0x0004 */

typedef struct _MI_SPECIAL_POOL_PTE_LIST
{
  /* 0x0000 */ struct _MMPTE FreePteHead;
  /* 0x0004 */ struct _MMPTE FreePteTail;
} MI_SPECIAL_POOL_PTE_LIST, *PMI_SPECIAL_POOL_PTE_LIST; /* size: 0x0008 */

typedef struct _MI_SPECIAL_POOL
{
  /* 0x0000 */ struct _MMPTE* PteBase;
  /* 0x0004 */ unsigned long Lock;
  /* 0x0008 */ struct _MI_SPECIAL_POOL_PTE_LIST Paged;
  /* 0x0010 */ struct _MI_SPECIAL_POOL_PTE_LIST NonPaged;
  /* 0x0018 */ volatile long PagesInUse;
  /* 0x001c */ struct _RTL_BITMAP SpecialPoolPdes;
} MI_SPECIAL_POOL, *PMI_SPECIAL_POOL; /* size: 0x0024 */

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP Bitmap;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Hint;
  /* 0x0010 */ struct _MMPTE* BasePte;
  /* 0x0014 */ unsigned long* FailureCount;
  /* 0x0018 */ struct _MMSUPPORT* Vm;
  /* 0x001c */ volatile long TotalSystemPtes;
  /* 0x0020 */ volatile long TotalFreeSystemPtes;
  /* 0x0024 */ volatile long CachedPteCount;
  /* 0x0028 */ unsigned long PteFailures;
  union
  {
    /* 0x002c */ unsigned long SpinLock;
    /* 0x002c */ struct _KGUARDED_MUTEX* GlobalMutex;
  }; /* size: 0x0004 */
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0030 */

typedef enum _IO_SESSION_STATE
{
  IoSessionStateCreated = 1,
  IoSessionStateInitialized = 2,
  IoSessionStateConnected = 3,
  IoSessionStateDisconnected = 4,
  IoSessionStateDisconnectedLoggedOn = 5,
  IoSessionStateLoggedOn = 6,
  IoSessionStateLoggedOff = 7,
  IoSessionStateTerminated = 8,
  IoSessionStateMax = 9,
} IO_SESSION_STATE, *PIO_SESSION_STATE;

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _MM_SESSION_SPACE
{
  /* 0x0000 */ volatile long ReferenceCount;
  union
  {
    union
    {
      /* 0x0004 */ unsigned long LongFlags;
      /* 0x0004 */ struct _MM_SESSION_SPACE_FLAGS Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0008 */ unsigned long SessionId;
  /* 0x000c */ volatile long ProcessReferenceToSession;
  /* 0x0010 */ struct _LIST_ENTRY ProcessList;
  /* 0x0018 */ union _LARGE_INTEGER LastProcessSwappedOutTime;
  /* 0x0020 */ unsigned long SessionPageDirectoryIndex;
  /* 0x0024 */ volatile unsigned long NonPagablePages;
  /* 0x0028 */ volatile unsigned long CommittedPages;
  /* 0x002c */ void* PagedPoolStart;
  /* 0x0030 */ void* PagedPoolEnd;
  /* 0x0034 */ void* SessionObject;
  /* 0x0038 */ void* SessionObjectHandle;
  /* 0x003c */ volatile long ResidentProcessCount;
  /* 0x0040 */ unsigned long SessionPoolAllocationFailures[4];
  /* 0x0050 */ struct _LIST_ENTRY ImageList;
  /* 0x0058 */ unsigned long LocaleId;
  /* 0x005c */ unsigned long AttachCount;
  /* 0x0060 */ struct _KGATE AttachGate;
  /* 0x0070 */ struct _LIST_ENTRY WsListEntry;
  /* 0x0080 */ struct _GENERAL_LOOKASIDE Lookaside[25];
  /* 0x0d00 */ struct _MMSESSION Session;
  /* 0x0d38 */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x0d70 */ struct _MMSUPPORT Vm;
  /* 0x0ddc */ struct _MMWSLE* Wsle;
  /* 0x0de0 */ void* volatile DriverUnload /* function */;
  /* 0x0e00 */ struct _POOL_DESCRIPTOR PagedPool;
  /* 0x1f40 */ struct _MMPTE* PageTables;
  /* 0x1f44 */ struct _MI_SPECIAL_POOL SpecialPool;
  /* 0x1f68 */ struct _KGUARDED_MUTEX SessionPteLock;
  /* 0x1f88 */ long PoolBigEntriesInUse;
  /* 0x1f8c */ unsigned long PagedPoolPdeCount;
  /* 0x1f90 */ unsigned long SpecialPoolPdeCount;
  /* 0x1f94 */ unsigned long DynamicSessionPdeCount;
  /* 0x1f98 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x1fc8 */ void* PoolTrackTableExpansion;
  /* 0x1fcc */ unsigned long PoolTrackTableExpansionSize;
  /* 0x1fd0 */ void* PoolTrackBigPages;
  /* 0x1fd4 */ unsigned long PoolTrackBigPagesSize;
  /* 0x1fd8 */ enum _IO_SESSION_STATE IoState;
  /* 0x1fdc */ unsigned long IoStateSequence;
  /* 0x1fe0 */ struct _KEVENT IoNotificationEvent;
  /* 0x1ff0 */ struct _RTL_BITMAP SessionPoolPdes;
  /* 0x1ff8 */ struct _PS_CPU_QUOTA_BLOCK* CpuQuotaBlock;
  /* 0x1ffc */ long __PADDING__[1];
} MM_SESSION_SPACE, *PMM_SESSION_SPACE; /* size: 0x2000 */

