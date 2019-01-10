struct RTL_HP_ENV_HANDLE
{
  /* 0x0000 */ void* h[2];
}; /* size: 0x0010 */

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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SEG_CONTEXT
{
  /* 0x0000 */ unsigned __int64 SegmentMask;
  /* 0x0008 */ unsigned char UnitShift;
  /* 0x0009 */ unsigned char PagesPerUnitShift;
  /* 0x000a */ unsigned char FirstDescriptorIndex;
  /* 0x000b */ unsigned char CachedCommitSoftShift;
  /* 0x000c */ unsigned char CachedCommitHighShift;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x000d */ unsigned char LargePagePolicy : 3; /* bit position: 0 */
        /* 0x000d */ unsigned char FullDecommit : 1; /* bit position: 3 */
        /* 0x000d */ unsigned char ReleaseEmptySegments : 1; /* bit position: 4 */
      }; /* bitfield */
      /* 0x000d */ unsigned char AllFlags;
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ Flags;
  /* 0x0010 */ unsigned long MaxAllocationSize;
  /* 0x0014 */ short OlpStatsOffset;
  /* 0x0016 */ short MemStatsOffset;
  /* 0x0018 */ void* LfhContext;
  /* 0x0020 */ void* VsContext;
  /* 0x0028 */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0038 */ void* Heap;
  /* 0x0040 */ unsigned __int64 SegmentLock;
  /* 0x0048 */ struct _LIST_ENTRY SegmentListHead;
  /* 0x0058 */ unsigned __int64 SegmentCount;
  /* 0x0060 */ struct _RTL_RB_TREE FreePageRanges;
  /* 0x0070 */ unsigned __int64 FreeSegmentListLock;
  /* 0x0078 */ struct _SINGLE_LIST_ENTRY FreeSegmentList[2];
  /* 0x0088 */ long __PADDING__[14];
} HEAP_SEG_CONTEXT, *PHEAP_SEG_CONTEXT; /* size: 0x00c0 */

