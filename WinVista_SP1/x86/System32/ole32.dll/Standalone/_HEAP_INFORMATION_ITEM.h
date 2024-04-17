typedef struct _PROCESS_HEAP_INFORMATION
{
  /* 0x0000 */ unsigned long ReserveSize;
  /* 0x0004 */ unsigned long CommitSize;
  /* 0x0008 */ unsigned long NumberOfHeaps;
  /* 0x000c */ unsigned long FirstHeapInformationOffset;
} PROCESS_HEAP_INFORMATION, *PPROCESS_HEAP_INFORMATION; /* size: 0x0010 */

typedef struct _HEAP_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long Mode;
  /* 0x0008 */ unsigned long ReserveSize;
  /* 0x000c */ unsigned long CommitSize;
  /* 0x0010 */ unsigned long FirstRegionInformationOffset;
  /* 0x0014 */ unsigned long NextHeapInformationOffset;
} HEAP_INFORMATION, *PHEAP_INFORMATION; /* size: 0x0018 */

typedef struct _HEAP_REGION_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long ReserveSize;
  /* 0x0008 */ unsigned long CommitSize;
  /* 0x000c */ unsigned long FirstRangeInformationOffset;
  /* 0x0010 */ unsigned long NextRegionInformationOffset;
} HEAP_REGION_INFORMATION, *PHEAP_REGION_INFORMATION; /* size: 0x0014 */

typedef struct _HEAP_RANGE_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Type;
  /* 0x000c */ unsigned long Protection;
  /* 0x0010 */ unsigned long FirstBlockInformationOffset;
  /* 0x0014 */ unsigned long NextRangeInformationOffset;
} HEAP_RANGE_INFORMATION, *PHEAP_RANGE_INFORMATION; /* size: 0x0018 */

typedef struct _HEAP_BLOCK_INFORMATION
{
  /* 0x0000 */ unsigned long Address;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long DataSize;
  /* 0x000c */ unsigned long OverheadSize;
  /* 0x0010 */ unsigned long NextBlockInformationOffset;
} HEAP_BLOCK_INFORMATION, *PHEAP_BLOCK_INFORMATION; /* size: 0x0014 */

typedef struct _HEAP_PERFORMANCE_COUNTERS_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long HeapIndex;
  /* 0x000c */ unsigned long LastHeapIndex;
  /* 0x0010 */ unsigned long BaseAddress;
  /* 0x0014 */ unsigned long ReserveSize;
  /* 0x0018 */ unsigned long CommitSize;
  /* 0x001c */ unsigned long SegmentCount;
  /* 0x0020 */ unsigned long LargeUCRMemory;
  /* 0x0024 */ unsigned long UCRLength;
  /* 0x0028 */ unsigned long FreeSpace;
  /* 0x002c */ unsigned long FreeListLength;
  /* 0x0030 */ unsigned long Contention;
  /* 0x0034 */ unsigned long VirtualBlocks;
  /* 0x0038 */ unsigned long CommitRate;
  /* 0x003c */ unsigned long DecommitRate;
} HEAP_PERFORMANCE_COUNTERS_INFORMATION, *PHEAP_PERFORMANCE_COUNTERS_INFORMATION; /* size: 0x0040 */

typedef struct _HEAP_INFORMATION_ITEM
{
  /* 0x0000 */ unsigned long Level;
  /* 0x0004 */ unsigned long Size;
  union
  {
    /* 0x0008 */ struct _PROCESS_HEAP_INFORMATION ProcessHeapInformation;
    /* 0x0008 */ struct _HEAP_INFORMATION HeapInformation;
    /* 0x0008 */ struct _HEAP_REGION_INFORMATION HeapRegionInformation;
    /* 0x0008 */ struct _HEAP_RANGE_INFORMATION HeapRangeInformation;
    /* 0x0008 */ struct _HEAP_BLOCK_INFORMATION HeapBlockInformation;
    /* 0x0008 */ struct _HEAP_PERFORMANCE_COUNTERS_INFORMATION HeapPerfInformation;
    struct
    {
      /* 0x0008 */ unsigned long DynamicStart;
      /* 0x000c */ long __PADDING__[15];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} HEAP_INFORMATION_ITEM, *PHEAP_INFORMATION_ITEM; /* size: 0x0048 */

