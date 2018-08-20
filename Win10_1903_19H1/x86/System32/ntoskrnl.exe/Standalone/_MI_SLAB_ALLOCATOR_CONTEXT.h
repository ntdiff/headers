typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef enum _MI_SLAB_ALLOCATOR_PROTECTION
{
  MiSlabAllocatorProtectionReadExecute = 0,
  MiSlabAllocatorProtectionReadOnly = 1,
  MiSlabAllocatorProtectionNoAccess = 2,
  MiSlabAllocatorProtectionMax = 3,
} MI_SLAB_ALLOCATOR_PROTECTION, *PMI_SLAB_ALLOCATOR_PROTECTION;

typedef struct _MI_SLAB_ALLOCATOR_CONTEXT
{
  /* 0x0000 */ struct _RTL_RB_TREE AllocationsTree;
  /* 0x0008 */ volatile long Lock;
  /* 0x000c */ struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryHint;
  /* 0x0010 */ unsigned long FreePageCount;
  /* 0x0014 */ unsigned long SlabEntryCount;
  /* 0x0018 */ enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;
  union // _TAG_UNNAMED_63
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x001c */ unsigned long EntryBecameEmpty : 1; /* bit position: 0 */
        /* 0x001c */ unsigned long Spare : 31; /* bit position: 1 */
      }; /* bitfield */
      /* 0x001c */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0020 */ unsigned __int64 LastReplenishTime;
  /* 0x0028 */ unsigned __int64 LastFailureTime;
} MI_SLAB_ALLOCATOR_CONTEXT, *PMI_SLAB_ALLOCATOR_CONTEXT; /* size: 0x0030 */

