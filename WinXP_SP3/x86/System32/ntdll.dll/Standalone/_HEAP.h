typedef struct _HEAP_ENTRY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Size;
      /* 0x0002 */ unsigned short PreviousSize;
    }; /* size: 0x0004 */
    /* 0x0000 */ void* volatile SubSegmentCode;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned char SmallTagIndex;
  /* 0x0005 */ unsigned char Flags;
  /* 0x0006 */ unsigned char UnusedBytes;
  /* 0x0007 */ volatile unsigned char SegmentIndex;
} HEAP_ENTRY, *PHEAP_ENTRY; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP
{
  /* 0x0000 */ struct _HEAP_ENTRY Entry;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long ForceFlags;
  /* 0x0014 */ unsigned long VirtualMemoryThreshold;
  /* 0x0018 */ unsigned long SegmentReserve;
  /* 0x001c */ unsigned long SegmentCommit;
  /* 0x0020 */ unsigned long DeCommitFreeBlockThreshold;
  /* 0x0024 */ unsigned long DeCommitTotalFreeThreshold;
  /* 0x0028 */ unsigned long TotalFreeSize;
  /* 0x002c */ unsigned long MaximumAllocationSize;
  /* 0x0030 */ unsigned short ProcessHeapsListIndex;
  /* 0x0032 */ unsigned short HeaderValidateLength;
  /* 0x0034 */ void* HeaderValidateCopy;
  /* 0x0038 */ unsigned short NextAvailableTagIndex;
  /* 0x003a */ unsigned short MaximumTagIndex;
  /* 0x003c */ struct _HEAP_TAG_ENTRY* TagEntries;
  /* 0x0040 */ struct _HEAP_UCR_SEGMENT* UCRSegments;
  /* 0x0044 */ struct _HEAP_UNCOMMMTTED_RANGE* UnusedUnCommittedRanges;
  /* 0x0048 */ unsigned long AlignRound;
  /* 0x004c */ unsigned long AlignMask;
  /* 0x0050 */ struct _LIST_ENTRY VirtualAllocdBlocks;
  /* 0x0058 */ struct _HEAP_SEGMENT* Segments[64];
  union // _TAG_UNNAMED_67
  {
    union
    {
      /* 0x0158 */ unsigned long FreeListsInUseUlong[4];
      /* 0x0158 */ unsigned char FreeListsInUseBytes[16];
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
  union // _TAG_UNNAMED_68
  {
    union
    {
      /* 0x0168 */ unsigned short FreeListsInUseTerminate;
      /* 0x0168 */ unsigned short DecommitCount;
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ u2;
  /* 0x016a */ unsigned short AllocatorBackTraceIndex;
  /* 0x016c */ unsigned long NonDedicatedListLength;
  /* 0x0170 */ void* LargeBlocksIndex;
  /* 0x0174 */ struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;
  /* 0x0178 */ struct _LIST_ENTRY FreeLists[128];
  /* 0x0578 */ struct _HEAP_LOCK* LockVariable;
  /* 0x057c */ void* CommitRoutine /* function */;
  /* 0x0580 */ void* FrontEndHeap;
  /* 0x0584 */ unsigned short FrontHeapLockCount;
  /* 0x0586 */ unsigned char FrontEndHeapType;
  /* 0x0587 */ unsigned char LastSegmentIndex;
} HEAP, *PHEAP; /* size: 0x0588 */

