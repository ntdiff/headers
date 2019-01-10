typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef enum _MI_SLAB_ALLOCATOR_TYPE
{
  MiSlabAllocatorTypeSlatProtected = 0,
  MiSlabAllocatorTypeUnprotected = 1,
  MiSlabAllocatorTypeMax = 2,
} MI_SLAB_ALLOCATOR_TYPE, *PMI_SLAB_ALLOCATOR_TYPE;

typedef enum _MI_SLAB_ALLOCATOR_PROTECTION
{
  MiSlabAllocatorProtectionReadExecute = 0,
  MiSlabAllocatorProtectionReadOnly = 1,
  MiSlabAllocatorProtectionNoAccess = 2,
  MiSlabAllocatorProtectionReadWrite = 3,
  MiSlabAllocatorProtectionMax = 4,
} MI_SLAB_ALLOCATOR_PROTECTION, *PMI_SLAB_ALLOCATOR_PROTECTION;

typedef enum _MMLISTS
{
  ZeroedPageList = 0,
  FreePageList = 1,
  StandbyPageList = 2,
  ModifiedPageList = 3,
  ModifiedNoWritePageList = 4,
  BadPageList = 5,
  ActiveAndValid = 6,
  TransitionPage = 7,
} MMLISTS, *PMMLISTS;

typedef struct _MMPFNLIST
{
  /* 0x0000 */ unsigned long Total;
  /* 0x0004 */ enum _MMLISTS ListName;
  /* 0x0008 */ unsigned long Flink;
  /* 0x000c */ unsigned long Blink;
  /* 0x0010 */ unsigned long Lock;
} MMPFNLIST, *PMMPFNLIST; /* size: 0x0014 */

typedef struct _MI_SLAB_ALLOCATOR_CONTEXT
{
  /* 0x0000 */ struct _RTL_RB_TREE AllocationsTree;
  /* 0x0008 */ volatile long Lock;
  /* 0x000c */ struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryHint;
  /* 0x0010 */ unsigned long FreePageCount;
  /* 0x0014 */ unsigned long SlabEntryCount;
  /* 0x0018 */ enum _MI_SLAB_ALLOCATOR_TYPE Type;
  /* 0x001c */ enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0020 */ unsigned long EntryBecameEmpty : 1; /* bit position: 0 */
        /* 0x0020 */ unsigned long Spare : 31; /* bit position: 1 */
      }; /* bitfield */
      /* 0x0020 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0024 */ struct _MMPFNLIST StandbyList;
  /* 0x0038 */ unsigned __int64 LastReplenishTime;
  /* 0x0040 */ unsigned __int64 LastFailureTime;
} MI_SLAB_ALLOCATOR_CONTEXT, *PMI_SLAB_ALLOCATOR_CONTEXT; /* size: 0x0048 */

