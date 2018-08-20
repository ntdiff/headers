typedef struct _HEAP_ENTRY
{
  union
  {
    struct
    {
      /* 0x0000 */ void* PreviousBlockPrivateData;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned short Size;
          /* 0x000a */ unsigned char Flags;
          /* 0x000b */ unsigned char SmallTagIndex;
          /* 0x000c */ unsigned short PreviousSize;
          union
          {
            /* 0x000e */ unsigned char SegmentOffset;
            struct
            {
              /* 0x000e */ unsigned char LFHFlags;
              /* 0x000f */ unsigned char UnusedBytes;
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0008 */
        /* 0x0008 */ unsigned __int64 CompactHeader;
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ void* Reserved;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned short FunctionIndex;
          /* 0x000a */ unsigned short ContextValue;
        }; /* size: 0x0004 */
        struct
        {
          /* 0x0008 */ unsigned long InterceptorValue;
          /* 0x000c */ unsigned short UnusedBytesLength;
          /* 0x000e */ unsigned char EntryOffset;
          /* 0x000f */ unsigned char ExtendedBlockSignature;
        }; /* size: 0x0008 */
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ void* ReservedForAlignment;
      union
      {
        struct
        {
          /* 0x0008 */ unsigned long Code1;
          /* 0x000c */ unsigned short Code2;
          /* 0x000e */ unsigned char Code3;
          /* 0x000f */ unsigned char Code4;
        }; /* size: 0x0008 */
        /* 0x0008 */ unsigned __int64 AgregateCode;
      }; /* size: 0x0008 */
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} HEAP_ENTRY, *PHEAP_ENTRY; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_COUNTERS
{
  /* 0x0000 */ unsigned __int64 TotalMemoryReserved;
  /* 0x0008 */ unsigned __int64 TotalMemoryCommitted;
  /* 0x0010 */ unsigned __int64 TotalMemoryLargeUCR;
  /* 0x0018 */ unsigned __int64 TotalSizeInVirtualBlocks;
  /* 0x0020 */ unsigned long TotalSegments;
  /* 0x0024 */ unsigned long TotalUCRs;
  /* 0x0028 */ unsigned long CommittOps;
  /* 0x002c */ unsigned long DeCommitOps;
  /* 0x0030 */ unsigned long LockAcquires;
  /* 0x0034 */ unsigned long LockCollisions;
  /* 0x0038 */ unsigned long CommitRate;
  /* 0x003c */ unsigned long DecommittRate;
  /* 0x0040 */ unsigned long CommitFailures;
  /* 0x0044 */ unsigned long InBlockCommitFailures;
  /* 0x0048 */ unsigned long CompactHeapCalls;
  /* 0x004c */ unsigned long CompactedUCRs;
  /* 0x0050 */ unsigned long AllocAndFreeOps;
  /* 0x0054 */ unsigned long InBlockDeccommits;
  /* 0x0058 */ unsigned __int64 InBlockDeccomitSize;
  /* 0x0060 */ unsigned __int64 HighWatermarkSize;
  /* 0x0068 */ unsigned __int64 LastPolledSize;
} HEAP_COUNTERS, *PHEAP_COUNTERS; /* size: 0x0070 */

typedef struct _HEAP_TUNING_PARAMETERS
{
  /* 0x0000 */ unsigned long CommittThresholdShift;
  /* 0x0008 */ unsigned __int64 MaxPreCommittThreshold;
} HEAP_TUNING_PARAMETERS, *PHEAP_TUNING_PARAMETERS; /* size: 0x0010 */

typedef struct _HEAP
{
  /* 0x0000 */ struct _HEAP_ENTRY Entry;
  /* 0x0010 */ unsigned long SegmentSignature;
  /* 0x0014 */ unsigned long SegmentFlags;
  /* 0x0018 */ struct _LIST_ENTRY SegmentListEntry;
  /* 0x0028 */ struct _HEAP* Heap;
  /* 0x0030 */ void* BaseAddress;
  /* 0x0038 */ unsigned long NumberOfPages;
  /* 0x0040 */ struct _HEAP_ENTRY* FirstEntry;
  /* 0x0048 */ struct _HEAP_ENTRY* LastValidEntry;
  /* 0x0050 */ unsigned long NumberOfUnCommittedPages;
  /* 0x0054 */ unsigned long NumberOfUnCommittedRanges;
  /* 0x0058 */ unsigned short SegmentAllocatorBackTraceIndex;
  /* 0x005a */ unsigned short Reserved;
  /* 0x0060 */ struct _LIST_ENTRY UCRSegmentList;
  /* 0x0070 */ unsigned long Flags;
  /* 0x0074 */ unsigned long ForceFlags;
  /* 0x0078 */ unsigned long CompatibilityFlags;
  /* 0x007c */ unsigned long EncodeFlagMask;
  /* 0x0080 */ struct _HEAP_ENTRY Encoding;
  /* 0x0090 */ unsigned __int64 PointerKey;
  /* 0x0098 */ unsigned long Interceptor;
  /* 0x009c */ unsigned long VirtualMemoryThreshold;
  /* 0x00a0 */ unsigned long Signature;
  /* 0x00a8 */ unsigned __int64 SegmentReserve;
  /* 0x00b0 */ unsigned __int64 SegmentCommit;
  /* 0x00b8 */ unsigned __int64 DeCommitFreeBlockThreshold;
  /* 0x00c0 */ unsigned __int64 DeCommitTotalFreeThreshold;
  /* 0x00c8 */ unsigned __int64 TotalFreeSize;
  /* 0x00d0 */ unsigned __int64 MaximumAllocationSize;
  /* 0x00d8 */ unsigned short ProcessHeapsListIndex;
  /* 0x00da */ unsigned short HeaderValidateLength;
  /* 0x00e0 */ void* HeaderValidateCopy;
  /* 0x00e8 */ unsigned short NextAvailableTagIndex;
  /* 0x00ea */ unsigned short MaximumTagIndex;
  /* 0x00f0 */ struct _HEAP_TAG_ENTRY* TagEntries;
  /* 0x00f8 */ struct _LIST_ENTRY UCRList;
  /* 0x0108 */ unsigned __int64 AlignRound;
  /* 0x0110 */ unsigned __int64 AlignMask;
  /* 0x0118 */ struct _LIST_ENTRY VirtualAllocdBlocks;
  /* 0x0128 */ struct _LIST_ENTRY SegmentList;
  /* 0x0138 */ unsigned short AllocatorBackTraceIndex;
  /* 0x013c */ unsigned long NonDedicatedListLength;
  /* 0x0140 */ void* BlocksIndex;
  /* 0x0148 */ void* UCRIndex;
  /* 0x0150 */ struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;
  /* 0x0158 */ struct _LIST_ENTRY FreeLists;
  /* 0x0168 */ struct _HEAP_LOCK* LockVariable;
  /* 0x0170 */ void* CommitRoutine /* function */;
  /* 0x0178 */ void* FrontEndHeap;
  /* 0x0180 */ unsigned short FrontHeapLockCount;
  /* 0x0182 */ unsigned char FrontEndHeapType;
  /* 0x0188 */ struct _HEAP_COUNTERS Counters;
  /* 0x01f8 */ struct _HEAP_TUNING_PARAMETERS TuningParameters;
} HEAP, *PHEAP; /* size: 0x0208 */

