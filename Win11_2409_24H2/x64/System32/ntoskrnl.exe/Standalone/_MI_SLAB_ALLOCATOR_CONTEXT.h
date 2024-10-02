typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef enum _MI_SLAB_ALLOCATOR_TYPE
{
  MiSlabAllocatorTypeSlatProtectedStart = 0,
  MiSlabAllocatorTypeExecuteProtected = 0,
  MiSlabAllocatorTypeReadOnlyProtected = 1,
  MiSlabAllocatorTypeNoAccessProtected = 2,
  MiSlabAllocatorTypeKernelShadowStackProtected = 3,
  MiSlabAllocatorTypePagingProtected = 4,
  MiSlabAllocatorTypeSlatProtectedLast = 4,
  MiSlabAllocatorTypeSlatUnprotectedStart = 5,
  MiSlabAllocatorTypeImageUnprotected = 5,
  MiSlabAllocatorTypeGenericUnprotected = 6,
  MiSlabAllocatorTypeNonPagedUnprotected = 7,
  MiSlabAllocatorTypeIdentityUnprotected = 8,
  MiSlabAllocatorTypeSlatUnprotectedLast = 8,
  MiSlabAllocatorTypeMax = 9,
} MI_SLAB_ALLOCATOR_TYPE, *PMI_SLAB_ALLOCATOR_TYPE;

typedef struct _MI_NODE_NUMBER_ZERO_BASED
{
  /* 0x0000 */ unsigned long ZeroBased;
} MI_NODE_NUMBER_ZERO_BASED, *PMI_NODE_NUMBER_ZERO_BASED; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_SLAB_ALLOCATOR_CONTEXT
{
  /* 0x0000 */ struct _RTL_RB_TREE SlabTree;
  /* 0x0010 */ volatile long Lock;
  /* 0x0018 */ struct _MI_PARTITION* Partition;
  struct
  {
    union
    {
      struct
      {
        /* 0x0020 */ struct _MI_SLAB_ALLOCATOR_ENTRY* AllocationHint;
        /* 0x0028 */ struct _MI_SLAB_ALLOCATOR_ENTRY* FreeHint;
      } /* size: 0x0010 */ NonIdentity;
      struct
      {
        /* 0x0020 */ struct _MI_SLAB_ALLOCATOR_ENTRY** AllocationHints;
        /* 0x0028 */ struct _MI_SLAB_ALLOCATOR_ENTRY** FreeHints;
      } /* size: 0x0010 */ Identity;
    }; /* size: 0x0010 */
    /* 0x0030 */ struct _MI_SLAB_ALLOCATOR_ENTRY* DefragSourceEntry;
    /* 0x0038 */ struct _MI_SLAB_ALLOCATOR_ENTRY* DefragTargetEntry;
  } /* size: 0x0020 */ Hints;
  /* 0x0040 */ void* StandbyPageCache;
  /* 0x0048 */ void* StandbyPageList;
  /* 0x0050 */ struct _MMPFNLIST* RepurposedStandbyPageList;
  /* 0x0058 */ struct _LIST_ENTRY* SlabListsByIdentity;
  /* 0x0060 */ unsigned __int64 FreePageCount;
  /* 0x0068 */ unsigned __int64 AvailablePagesGoal;
  /* 0x0070 */ unsigned __int64 ChargedPageCount;
  /* 0x0078 */ unsigned __int64 SlabEntryCount;
  /* 0x0080 */ enum _MI_SLAB_ALLOCATOR_TYPE Type;
  /* 0x0084 */ struct _MI_NODE_NUMBER_ZERO_BASED NumaNodeIndex;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0088 */ unsigned long EntryBecameEmpty : 1; /* bit position: 0 */
        /* 0x0088 */ unsigned long DemoteInProgress : 1; /* bit position: 1 */
        /* 0x0088 */ unsigned long PreferZeroedPages : 1; /* bit position: 2 */
        /* 0x0088 */ unsigned long ZeroOnFree : 1; /* bit position: 3 */
        /* 0x0088 */ unsigned long LargePageIndex : 2; /* bit position: 4 */
        /* 0x0088 */ unsigned long Spare : 26; /* bit position: 6 */
      }; /* bitfield */
      /* 0x0088 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x008c */ volatile long ReEvaluateAllocationHint;
  /* 0x0090 */ unsigned long SlabEntriesAllocated;
  /* 0x0094 */ unsigned long SlabEntriesDemoted;
  /* 0x0098 */ unsigned long SlabEntriesFailedFast;
  /* 0x009c */ unsigned long SlabEntriesFailedSlow;
  /* 0x00a0 */ unsigned long SlabPagesFreedNonZeroed;
  /* 0x00a4 */ unsigned long SlabPagesCrossIdentity;
  /* 0x00a8 */ unsigned __int64 LastReplenishTime;
  /* 0x00b0 */ unsigned __int64 LastFailureTime;
  /* 0x00b8 */ struct _WORK_QUEUE_ITEM ReplenishWorkItem;
  /* 0x00d8 */ struct _LIST_ENTRY ReplenishWaitList;
} MI_SLAB_ALLOCATOR_CONTEXT, *PMI_SLAB_ALLOCATOR_CONTEXT; /* size: 0x00e8 */

