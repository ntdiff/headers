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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

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

typedef struct _GENERAL_LOOKASIDE
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
  /* 0x0060 */ long __PADDING__[8];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0080 */

typedef struct _KGUARDED_MUTEX
{
  /* 0x0000 */ volatile long Count;
  /* 0x0008 */ struct _KTHREAD* Owner;
  /* 0x0010 */ unsigned long Contention;
  /* 0x0018 */ struct _KGATE Gate;
  union
  {
    struct
    {
      /* 0x0030 */ short KernelApcDisable;
      /* 0x0032 */ short SpecialApcDisable;
    }; /* size: 0x0004 */
    /* 0x0030 */ unsigned long CombinedApcDisable;
  }; /* size: 0x0004 */
  /* 0x0034 */ long __PADDING__[1];
} KGUARDED_MUTEX, *PKGUARDED_MUTEX; /* size: 0x0038 */

typedef struct _MMSESSION
{
  /* 0x0000 */ struct _KGUARDED_MUTEX SystemSpaceViewLock;
  /* 0x0038 */ struct _KGUARDED_MUTEX* SystemSpaceViewLockPointer;
  /* 0x0040 */ struct _MMVIEW* SystemSpaceViewTable;
  /* 0x0048 */ unsigned long SystemSpaceHashSize;
  /* 0x004c */ unsigned long SystemSpaceHashEntries;
  /* 0x0050 */ unsigned long SystemSpaceHashKey;
  /* 0x0054 */ unsigned long BitmapFailures;
} MMSESSION, *PMMSESSION; /* size: 0x0058 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _KGUARDED_MUTEX Mutex;
  /* 0x0038 */ struct _RTL_BITMAP PagedPoolAllocationMap;
  /* 0x0048 */ struct _MMPTE* FirstPteForPagedPool;
  /* 0x0050 */ unsigned long PagedPoolHint;
  /* 0x0058 */ volatile unsigned __int64 PagedPoolCommit;
  /* 0x0060 */ volatile unsigned __int64 AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x0068 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SessionSpace : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char ModwriterAttached : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char TrimHard : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char ForceTrim : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char SessionMaster : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char TrimmerAttached : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char TrimmerDetaching : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char Reserved : 3; /* bit position: 1 */
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

typedef struct _MMSUPPORT
{
  /* 0x0000 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0010 */ unsigned short LastTrimStamp;
  /* 0x0012 */ unsigned short NextPageColor;
  /* 0x0014 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x0018 */ unsigned long PageFaultCount;
  /* 0x001c */ unsigned long PeakWorkingSetSize;
  /* 0x0020 */ unsigned long ChargedWslePages;
  /* 0x0024 */ unsigned long MinimumWorkingSetSize;
  /* 0x0028 */ unsigned long MaximumWorkingSetSize;
  /* 0x0030 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0038 */ unsigned long Claim;
  /* 0x003c */ unsigned long ActualWslePages;
  /* 0x0040 */ unsigned long WorkingSetPrivateSize;
  /* 0x0044 */ unsigned long WorkingSetSizeOverhead;
  /* 0x0048 */ unsigned long WorkingSetSize;
  /* 0x0050 */ struct _KGATE* ExitGate;
  /* 0x0058 */ struct _EX_PUSH_LOCK WorkingSetMutex;
  /* 0x0060 */ void* AccessLog;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0068 */

typedef struct _POOL_DESCRIPTOR
{
  /* 0x0000 */ enum _POOL_TYPE PoolType;
  /* 0x0004 */ unsigned long PoolIndex;
  /* 0x0008 */ volatile long RunningAllocs;
  /* 0x000c */ volatile long RunningDeAllocs;
  /* 0x0010 */ volatile long TotalPages;
  /* 0x0014 */ volatile long TotalBigPages;
  /* 0x0018 */ unsigned long Threshold;
  /* 0x0020 */ void* LockAddress;
  /* 0x0028 */ void** volatile PendingFrees;
  /* 0x0030 */ volatile long ThreadsProcessingDeferrals;
  /* 0x0034 */ volatile long PendingFreeDepth;
  /* 0x0038 */ volatile unsigned __int64 TotalBytes;
  /* 0x0040 */ unsigned __int64 Spare0;
  /* 0x0048 */ struct _LIST_ENTRY ListHeads[256];
} POOL_DESCRIPTOR, *PPOOL_DESCRIPTOR; /* size: 0x1048 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _MMPTE_HARDWARE_LARGEPAGE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PAT : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 8; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 27; /* bit position: 21 */
    /* 0x0000 */ unsigned __int64 reserved2 : 16; /* bit position: 48 */
  }; /* bitfield */
} MMPTE_HARDWARE_LARGEPAGE, *PMMPTE_HARDWARE_LARGEPAGE; /* size: 0x0008 */

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 28; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 12; /* bit position: 40 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 7; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Unused1 : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 11 */
    /* 0x0000 */ __int64 ProtoAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Reserved : 10; /* bit position: 22 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Reserved : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 16; /* bit position: 48 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Unused1 : 5; /* bit position: 11 */
    /* 0x0000 */ __int64 SubsectionAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0008 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 filler0 : 3; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 filler1 : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE
{
  union // _TAG_UNNAMED_116
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ volatile unsigned __int64 VolatileLong;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _MMPTE_HARDWARE_LARGEPAGE HardLarge;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MI_SPECIAL_POOL
{
  /* 0x0000 */ struct _MMPTE* PteBase;
  /* 0x0008 */ struct _MMPTE FreePteHead;
  /* 0x0010 */ struct _MMPTE FreePteTail;
  /* 0x0018 */ volatile __int64 PagesInUse;
  /* 0x0020 */ struct _RTL_BITMAP SpecialPoolPdes;
} MI_SPECIAL_POOL, *PMI_SPECIAL_POOL; /* size: 0x0030 */

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP Bitmap;
  /* 0x0010 */ unsigned long Hint;
  /* 0x0018 */ struct _MMPTE* BasePte;
  /* 0x0020 */ unsigned long* FailureCount;
  /* 0x0028 */ struct _MMSUPPORT* Vm;
  /* 0x0030 */ volatile long TotalSystemPtes;
  /* 0x0034 */ volatile long TotalFreeSystemPtes;
  /* 0x0038 */ volatile long CachedPteCount;
  /* 0x003c */ unsigned long PteFailures;
  /* 0x0040 */ struct _KGUARDED_MUTEX* GlobalMutex;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0048 */

typedef struct _MM_SESSION_SPACE
{
  /* 0x0000 */ volatile long ReferenceCount;
  union // _TAG_UNNAMED_130
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
  /* 0x0020 */ union _LARGE_INTEGER LastProcessSwappedOutTime;
  /* 0x0028 */ unsigned __int64 SessionPageDirectoryIndex;
  /* 0x0030 */ volatile unsigned __int64 NonPagablePages;
  /* 0x0038 */ volatile unsigned __int64 CommittedPages;
  /* 0x0040 */ void* PagedPoolStart;
  /* 0x0048 */ void* PagedPoolEnd;
  /* 0x0050 */ void* SessionObject;
  /* 0x0058 */ void* SessionObjectHandle;
  /* 0x0060 */ volatile long ResidentProcessCount;
  /* 0x0064 */ volatile long ImageLoadingCount;
  /* 0x0068 */ unsigned long SessionPoolAllocationFailures[4];
  /* 0x0078 */ struct _LIST_ENTRY ImageList;
  /* 0x0088 */ unsigned long LocaleId;
  /* 0x008c */ unsigned long AttachCount;
  /* 0x0090 */ struct _KGATE AttachGate;
  /* 0x00a8 */ struct _LIST_ENTRY WsListEntry;
  /* 0x00c0 */ struct _GENERAL_LOOKASIDE Lookaside[21];
  /* 0x0b40 */ struct _MMSESSION Session;
  /* 0x0b98 */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x0c00 */ struct _MMSUPPORT Vm;
  /* 0x0c68 */ struct _MMWSLE* Wsle;
  /* 0x0c70 */ void* volatile DriverUnload /* function */;
  /* 0x0c78 */ struct _POOL_DESCRIPTOR PagedPool;
  /* 0x1cc0 */ struct _MMPTE PageDirectory;
  /* 0x1cc8 */ struct _KGUARDED_MUTEX SessionVaLock;
  /* 0x1d00 */ struct _RTL_BITMAP DynamicVaBitMap;
  /* 0x1d10 */ unsigned long DynamicVaHint;
  /* 0x1d18 */ struct _MI_SPECIAL_POOL SpecialPool;
  /* 0x1d48 */ struct _KGUARDED_MUTEX SessionPteLock;
  /* 0x1d80 */ long PoolBigEntriesInUse;
  /* 0x1d84 */ unsigned long PagedPoolPdeCount;
  /* 0x1d88 */ unsigned long SpecialPoolPdeCount;
  /* 0x1d8c */ unsigned long DynamicSessionPdeCount;
  /* 0x1d90 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x1dd8 */ void* PoolTrackTableExpansion;
  /* 0x1de0 */ unsigned __int64 PoolTrackTableExpansionSize;
  /* 0x1de8 */ void* PoolTrackBigPages;
  /* 0x1df0 */ unsigned __int64 PoolTrackBigPagesSize;
  /* 0x1df8 */ long __PADDING__[2];
} MM_SESSION_SPACE, *PMM_SESSION_SPACE; /* size: 0x1e00 */

