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

typedef struct _NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST; /* size: 0x0080 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef enum _MI_SYSTEM_VA_TYPE
{
  MiVaUnused = 0,
  MiVaProcessSpace = 1,
  MiVaBootLoaded = 2,
  MiVaPfnDatabase = 3,
  MiVaNonPagedPool = 4,
  MiVaPagedPool = 5,
  MiVaNonCachedMappings = 6,
  MiVaSystemCache = 7,
  MiVaSystemPtes = 8,
  MiVaHal = 9,
  MiVaNonCachedMappingsLarge = 10,
  MiVaDriverImages = 11,
  MiVaSystemPtesLarge = 12,
  MiVaKernelStacks = 13,
  MiVaSecureNonPagedPool = 14,
  MiVaKernelShadowStacks = 15,
  MiVaSoftWsles = 16,
  MiVaSystemDataViews = 17,
  MiVaKernelControlFlowGuard = 18,
  MiVaKasan = 19,
  MiVaMaximumType = 20,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ struct _RTL_BITMAP_EX TrackingBitmap;
  /* 0x0020 */ struct _MMPTE* BasePte;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0030 */ unsigned long PteFailures;
  /* 0x0034 */ volatile long SpinLock;
  /* 0x0038 */ volatile unsigned __int64 TotalSystemPtes;
  /* 0x0040 */ unsigned __int64 Hint;
  /* 0x0048 */ volatile unsigned __int64 LowestBitEverAllocated;
  /* 0x0050 */ struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0058 */ volatile unsigned __int64 TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0060 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _MI_PAGE_CHAIN_HEAD
{
  /* 0x0000 */ struct _MMPFN* Head;
  /* 0x0008 */ struct _MMPFN* Tail;
  /* 0x0010 */ unsigned __int64 NumberOfEntries;
} MI_PAGE_CHAIN_HEAD, *PMI_PAGE_CHAIN_HEAD; /* size: 0x0018 */

typedef struct _MI_ULTRA_VA_CONTEXT
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0008 */ void* ZeroMapping;
  /* 0x0010 */ unsigned __int64 AllocationHintBit;
  /* 0x0018 */ struct _RTL_BITMAP_EX Bitmap[2];
  /* 0x0038 */ unsigned long ConcurrencyMaximum;
  /* 0x003c */ volatile long ConcurrencyCount;
} MI_ULTRA_VA_CONTEXT, *PMI_ULTRA_VA_CONTEXT; /* size: 0x0040 */

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

typedef struct _MI_CACHE_LINE
{
  union
  {
    struct
    {
      /* 0x0000 */ void* UniqueCacheLine[8];
    } /* size: 0x0040 */ u1;
    struct
    {
      struct
      {
        /* 0x0000 */ struct _LIST_ENTRY Links;
        /* 0x0010 */ volatile unsigned long Signaled;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0018 */ u2;
      /* 0x0018 */ long __PADDING__[10];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} MI_CACHE_LINE, *PMI_CACHE_LINE; /* size: 0x0040 */

typedef struct _MI_WORKING_SET_LOCK_ARRAY
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ struct _MI_CACHE_LINE CacheLinePadding;
  }; /* size: 0x0040 */
} MI_WORKING_SET_LOCK_ARRAY, *PMI_WORKING_SET_LOCK_ARRAY; /* size: 0x0040 */

typedef struct _MI_HUGE_SYSTEM_VIEW_HEAD
{
  /* 0x0000 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x0008 */ unsigned long ViewCount;
  /* 0x000c */ volatile long Lock;
} MI_HUGE_SYSTEM_VIEW_HEAD, *PMI_HUGE_SYSTEM_VIEW_HEAD; /* size: 0x0010 */

typedef struct _MI_SYSTEM_PTE_STATE
{
  /* 0x0000 */ struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;
  /* 0x0080 */ union _SLIST_HEADER DeadPteTrackerSListHead;
  /* 0x0090 */ volatile long PteTrackerLock;
  /* 0x0098 */ volatile struct _MI_CACHED_PTES* CachedPteHeads;
  /* 0x00a0 */ struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;
  /* 0x0100 */ struct _MI_SYSTEM_PTE_TYPE NonCachedMappingsPteInfo;
  /* 0x0160 */ struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo[2];
  /* 0x0220 */ unsigned long StackGrowthFailures;
  /* 0x0224 */ unsigned char KernelStackPages;
  /* 0x0225 */ unsigned char TrackPtesAborted;
  /* 0x0226 */ unsigned char AdjustCounter;
  /* 0x0228 */ volatile long ReservedMappingLock;
  /* 0x0230 */ struct _RTL_AVL_TREE ReservedMappingTree;
  /* 0x0238 */ struct _MI_PAGE_CHAIN_HEAD ReservedMappingPageTablePfns;
  /* 0x0250 */ struct _RTL_AVL_TREE OutswappedKernelStackRoot;
  /* 0x0258 */ volatile long OutswappedKernelStackLock;
  /* 0x0260 */ struct _MI_ULTRA_VA_CONTEXT UltraSpaceContext;
  /* 0x02a0 */ unsigned long NumberOfUltraMdlMaps;
  /* 0x02a8 */ struct _MI_ULTRA_MDL_NODE* UltraMdlNodeMappings;
  /* 0x02b0 */ struct _MMPTE* UltraSpaceLowPpe;
  /* 0x02b8 */ struct _MMPTE* UltraSpaceHighPpe;
  /* 0x02c0 */ struct _EX_PUSH_LOCK SystemSpaceViewLock;
  /* 0x02c8 */ struct _RTL_AVL_TREE ViewRoot;
  /* 0x02d0 */ unsigned long ViewCount;
  /* 0x0300 */ struct _MI_WORKING_SET_LOCK_ARRAY WorkingSetLockArray[4];
  /* 0x0400 */ struct _MI_WORKING_SET_LOCK_ARRAY SystemDataViewsWorkingSetLockArray[4];
  /* 0x0500 */ struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];
} MI_SYSTEM_PTE_STATE, *PMI_SYSTEM_PTE_STATE; /* size: 0x1500 */

