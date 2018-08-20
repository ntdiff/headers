typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned __int64 SegmentMask;
  /* 0x0008 */ unsigned char UnitShift;
  /* 0x0009 */ unsigned char PagesPerUnitShift;
  /* 0x000a */ unsigned char FirstDescriptorIndex;
  /* 0x000b */ unsigned char CachedCommitSoftShift;
  /* 0x000c */ unsigned char CachedCommitHighShift;
  /* 0x0010 */ unsigned long MaxAllocationSize;
  /* 0x0018 */ struct _RTL_SRWLOCK SegmentLock;
  /* 0x0020 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x0030 */ unsigned __int64 SegmentCount;
  /* 0x0038 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0048 */ struct _HEAP_RUNTIME_MEMORY_STATS* MemStats;
  /* 0x0050 */ void* LfhContext;
  /* 0x0058 */ void* VsContext;
  /* 0x0060 */ void* Heap;
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x0068 */

