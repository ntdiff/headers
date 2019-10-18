typedef struct _HEAP_UNPACKED_ENTRY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Size;
      /* 0x0002 */ unsigned char Flags;
      /* 0x0003 */ unsigned char SmallTagIndex;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long SubSegmentCode;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned short PreviousSize;
  union
  {
    /* 0x0006 */ unsigned char SegmentOffset;
    /* 0x0006 */ unsigned char LFHFlags;
  }; /* size: 0x0001 */
  /* 0x0007 */ unsigned char UnusedBytes;
} HEAP_UNPACKED_ENTRY, *PHEAP_UNPACKED_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_EXTENDED_ENTRY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short FunctionIndex;
      /* 0x0002 */ unsigned short ContextValue;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long InterceptorValue;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned short UnusedBytesLength;
  /* 0x0006 */ unsigned char EntryOffset;
  /* 0x0007 */ unsigned char ExtendedBlockSignature;
} HEAP_EXTENDED_ENTRY, *PHEAP_EXTENDED_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_ENTRY
{
  union
  {
    /* 0x0000 */ struct _HEAP_UNPACKED_ENTRY UnpackedEntry;
    struct
    {
      /* 0x0000 */ unsigned short Size;
      /* 0x0002 */ unsigned char Flags;
      /* 0x0003 */ unsigned char SmallTagIndex;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned long SubSegmentCode;
      /* 0x0004 */ unsigned short PreviousSize;
      union
      {
        /* 0x0006 */ unsigned char SegmentOffset;
        struct
        {
          /* 0x0006 */ unsigned char LFHFlags;
          /* 0x0007 */ unsigned char UnusedBytes;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0008 */
    /* 0x0000 */ struct _HEAP_EXTENDED_ENTRY ExtendedEntry;
    struct
    {
      /* 0x0000 */ unsigned short FunctionIndex;
      /* 0x0002 */ unsigned short ContextValue;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned long InterceptorValue;
      /* 0x0004 */ unsigned short UnusedBytesLength;
      /* 0x0006 */ unsigned char EntryOffset;
      /* 0x0007 */ unsigned char ExtendedBlockSignature;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long Code1;
      union
      {
        struct
        {
          /* 0x0004 */ unsigned short Code2;
          /* 0x0006 */ unsigned char Code3;
          /* 0x0007 */ unsigned char Code4;
        }; /* size: 0x0004 */
        /* 0x0004 */ unsigned long Code234;
      }; /* size: 0x0004 */
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 AgregateCode;
  }; /* size: 0x0008 */
} HEAP_ENTRY, *PHEAP_ENTRY; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_SEGMENT
{
  /* 0x0000 */ struct _HEAP_ENTRY Entry;
  /* 0x0008 */ unsigned long SegmentSignature;
  /* 0x000c */ unsigned long SegmentFlags;
  /* 0x0010 */ struct _LIST_ENTRY SegmentListEntry;
  /* 0x0018 */ struct _HEAP* Heap;
  /* 0x001c */ void* BaseAddress;
  /* 0x0020 */ unsigned long NumberOfPages;
  /* 0x0024 */ struct _HEAP_ENTRY* FirstEntry;
  /* 0x0028 */ struct _HEAP_ENTRY* LastValidEntry;
  /* 0x002c */ unsigned long NumberOfUnCommittedPages;
  /* 0x0030 */ unsigned long NumberOfUnCommittedRanges;
  /* 0x0034 */ unsigned short SegmentAllocatorBackTraceIndex;
  /* 0x0036 */ unsigned short Reserved;
  /* 0x0038 */ struct _LIST_ENTRY UCRSegmentList;
} HEAP_SEGMENT, *PHEAP_SEGMENT; /* size: 0x0040 */

typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0004 */

typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned long CommitLimitBytes;
  /* 0x0004 */ unsigned long CommitLimitFailureCode;
  /* 0x0008 */ unsigned long MaxAllocationSizeBytes;
  /* 0x000c */ unsigned long AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0010 */

typedef struct _HEAP_COUNTERS
{
  /* 0x0000 */ unsigned long TotalMemoryReserved;
  /* 0x0004 */ unsigned long TotalMemoryCommitted;
  /* 0x0008 */ unsigned long TotalMemoryLargeUCR;
  /* 0x000c */ unsigned long TotalSizeInVirtualBlocks;
  /* 0x0010 */ unsigned long TotalSegments;
  /* 0x0014 */ unsigned long TotalUCRs;
  /* 0x0018 */ unsigned long CommittOps;
  /* 0x001c */ unsigned long DeCommitOps;
  /* 0x0020 */ unsigned long LockAcquires;
  /* 0x0024 */ unsigned long LockCollisions;
  /* 0x0028 */ unsigned long CommitRate;
  /* 0x002c */ unsigned long DecommittRate;
  /* 0x0030 */ unsigned long CommitFailures;
  /* 0x0034 */ unsigned long InBlockCommitFailures;
  /* 0x0038 */ unsigned long PollIntervalCounter;
  /* 0x003c */ unsigned long DecommitsSinceLastCheck;
  /* 0x0040 */ unsigned long HeapPollInterval;
  /* 0x0044 */ unsigned long AllocAndFreeOps;
  /* 0x0048 */ unsigned long AllocationIndicesActive;
  /* 0x004c */ unsigned long InBlockDeccommits;
  /* 0x0050 */ unsigned long InBlockDeccomitSize;
  /* 0x0054 */ unsigned long HighWatermarkSize;
  /* 0x0058 */ unsigned long LastPolledSize;
} HEAP_COUNTERS, *PHEAP_COUNTERS; /* size: 0x005c */

typedef struct _HEAP_TUNING_PARAMETERS
{
  /* 0x0000 */ unsigned long CommittThresholdShift;
  /* 0x0004 */ unsigned long MaxPreCommittThreshold;
} HEAP_TUNING_PARAMETERS, *PHEAP_TUNING_PARAMETERS; /* size: 0x0008 */

typedef struct _HEAP
{
  union
  {
    /* 0x0000 */ struct _HEAP_SEGMENT Segment;
    struct
    {
      /* 0x0000 */ struct _HEAP_ENTRY Entry;
      /* 0x0008 */ unsigned long SegmentSignature;
      /* 0x000c */ unsigned long SegmentFlags;
      /* 0x0010 */ struct _LIST_ENTRY SegmentListEntry;
      /* 0x0018 */ struct _HEAP* Heap;
      /* 0x001c */ void* BaseAddress;
      /* 0x0020 */ unsigned long NumberOfPages;
      /* 0x0024 */ struct _HEAP_ENTRY* FirstEntry;
      /* 0x0028 */ struct _HEAP_ENTRY* LastValidEntry;
      /* 0x002c */ unsigned long NumberOfUnCommittedPages;
      /* 0x0030 */ unsigned long NumberOfUnCommittedRanges;
      /* 0x0034 */ unsigned short SegmentAllocatorBackTraceIndex;
      /* 0x0036 */ unsigned short Reserved;
      /* 0x0038 */ struct _LIST_ENTRY UCRSegmentList;
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
  /* 0x0040 */ unsigned long Flags;
  /* 0x0044 */ unsigned long ForceFlags;
  /* 0x0048 */ unsigned long CompatibilityFlags;
  /* 0x004c */ unsigned long EncodeFlagMask;
  /* 0x0050 */ struct _HEAP_ENTRY Encoding;
  /* 0x0058 */ unsigned long Interceptor;
  /* 0x005c */ unsigned long VirtualMemoryThreshold;
  /* 0x0060 */ unsigned long Signature;
  /* 0x0064 */ unsigned long SegmentReserve;
  /* 0x0068 */ unsigned long SegmentCommit;
  /* 0x006c */ unsigned long DeCommitFreeBlockThreshold;
  /* 0x0070 */ unsigned long DeCommitTotalFreeThreshold;
  /* 0x0074 */ unsigned long TotalFreeSize;
  /* 0x0078 */ unsigned long MaximumAllocationSize;
  /* 0x007c */ unsigned short ProcessHeapsListIndex;
  /* 0x007e */ unsigned short HeaderValidateLength;
  /* 0x0080 */ void* HeaderValidateCopy;
  /* 0x0084 */ unsigned short NextAvailableTagIndex;
  /* 0x0086 */ unsigned short MaximumTagIndex;
  /* 0x0088 */ struct _HEAP_TAG_ENTRY* TagEntries;
  /* 0x008c */ struct _LIST_ENTRY UCRList;
  /* 0x0094 */ unsigned long AlignRound;
  /* 0x0098 */ unsigned long AlignMask;
  /* 0x009c */ struct _LIST_ENTRY VirtualAllocdBlocks;
  /* 0x00a4 */ struct _LIST_ENTRY SegmentList;
  /* 0x00ac */ unsigned short AllocatorBackTraceIndex;
  /* 0x00b0 */ unsigned long NonDedicatedListLength;
  /* 0x00b4 */ void* BlocksIndex;
  /* 0x00b8 */ void* UCRIndex;
  /* 0x00bc */ struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;
  /* 0x00c0 */ struct _LIST_ENTRY FreeLists;
  /* 0x00c8 */ struct _HEAP_LOCK* LockVariable;
  /* 0x00cc */ void* CommitRoutine /* function */;
  /* 0x00d0 */ union _RTL_RUN_ONCE StackTraceInitVar;
  /* 0x00d4 */ struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
  /* 0x00e4 */ void* FrontEndHeap;
  /* 0x00e8 */ unsigned short FrontHeapLockCount;
  /* 0x00ea */ unsigned char FrontEndHeapType;
  /* 0x00eb */ unsigned char RequestedFrontEndHeapType;
  /* 0x00ec */ wchar_t* FrontEndHeapUsageData;
  /* 0x00f0 */ unsigned short FrontEndHeapMaximumIndex;
  /* 0x00f2 */ volatile unsigned char FrontEndHeapStatusBitmap[257];
  /* 0x01f4 */ struct _HEAP_COUNTERS Counters;
  /* 0x0250 */ struct _HEAP_TUNING_PARAMETERS TuningParameters;
} HEAP, *PHEAP; /* size: 0x0258 */

