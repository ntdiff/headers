typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned long SegmentMask;
  /* 0x0004 */ unsigned char UnitShift;
  /* 0x0005 */ unsigned char PagesPerUnitShift;
  /* 0x0006 */ unsigned char FirstDescriptorIndex;
  /* 0x0007 */ unsigned char CachedCommitSoftShift;
  /* 0x0008 */ unsigned char CachedCommitHighShift;
  /* 0x000c */ unsigned long MaxAllocationSize;
  /* 0x0010 */ struct _RTL_SRWLOCK SegmentLock;
  /* 0x0014 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x001c */ unsigned long SegmentCount;
  /* 0x0020 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0028 */ struct _HEAP_RUNTIME_MEMORY_STATS* MemStats;
  /* 0x002c */ void* LfhContext;
  /* 0x0030 */ void* VsContext;
  /* 0x0034 */ void* Heap;
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x0038 */

