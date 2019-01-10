struct RTL_HP_ENV_HANDLE
{
  /* 0x0000 */ void* h[2];
}; /* size: 0x0008 */

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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned long SegmentMask;
  /* 0x0004 */ unsigned char UnitShift;
  /* 0x0005 */ unsigned char PagesPerUnitShift;
  /* 0x0006 */ unsigned char FirstDescriptorIndex;
  /* 0x0007 */ unsigned char CachedCommitSoftShift;
  /* 0x0008 */ unsigned char CachedCommitHighShift;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0009 */ unsigned char LargePagePolicy : 3; /* bit position: 0 */
        /* 0x0009 */ unsigned char FullDecommit : 1; /* bit position: 3 */
        /* 0x0009 */ unsigned char ReleaseEmptySegments : 1; /* bit position: 4 */
      }; /* bitfield */
      /* 0x0009 */ unsigned char AllFlags;
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ Flags;
  /* 0x000c */ unsigned long MaxAllocationSize;
  /* 0x0010 */ short OlpStatsOffset;
  /* 0x0012 */ short MemStatsOffset;
  /* 0x0014 */ void* LfhContext;
  /* 0x0018 */ void* VsContext;
  /* 0x001c */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0024 */ void* Heap;
  /* 0x0040 */ unsigned long SegmentLock;
  /* 0x0044 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x004c */ unsigned long SegmentCount;
  /* 0x0050 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0058 */ unsigned long FreeSegmentListLock;
  /* 0x005c */ struct _SINGLE_LIST_ENTRY FreeSegmentList[2];
  /* 0x0064 */ long __PADDING__[7];
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x0080 */

