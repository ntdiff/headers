typedef struct _PROCESS_HEAP_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ReserveSize;
  /* 0x0008 */ unsigned __int64 CommitSize;
  /* 0x0010 */ unsigned long NumberOfHeaps;
  /* 0x0018 */ unsigned __int64 FirstHeapInformationOffset;
} PROCESS_HEAP_INFORMATION, *PPROCESS_HEAP_INFORMATION; /* size: 0x0020 */

typedef struct _HEAP_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned long Mode;
  /* 0x0010 */ unsigned __int64 ReserveSize;
  /* 0x0018 */ unsigned __int64 CommitSize;
  /* 0x0020 */ unsigned __int64 FirstRegionInformationOffset;
  /* 0x0028 */ unsigned __int64 NextHeapInformationOffset;
} HEAP_INFORMATION, *PHEAP_INFORMATION; /* size: 0x0030 */

typedef struct _HEAP_REGION_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned __int64 ReserveSize;
  /* 0x0010 */ unsigned __int64 CommitSize;
  /* 0x0018 */ unsigned __int64 FirstRangeInformationOffset;
  /* 0x0020 */ unsigned __int64 NextRegionInformationOffset;
} HEAP_REGION_INFORMATION, *PHEAP_REGION_INFORMATION; /* size: 0x0028 */

typedef struct _HEAP_RANGE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ unsigned long Type;
  /* 0x0014 */ unsigned long Protection;
  /* 0x0018 */ unsigned __int64 FirstBlockInformationOffset;
  /* 0x0020 */ unsigned __int64 NextRangeInformationOffset;
} HEAP_RANGE_INFORMATION, *PHEAP_RANGE_INFORMATION; /* size: 0x0028 */

typedef struct _HEAP_BLOCK_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned long Flags;
  /* 0x0010 */ unsigned __int64 DataSize;
  /* 0x0018 */ unsigned __int64 OverheadSize;
  /* 0x0020 */ unsigned __int64 NextBlockInformationOffset;
} HEAP_BLOCK_INFORMATION, *PHEAP_BLOCK_INFORMATION; /* size: 0x0028 */

typedef struct _HEAP_PERFORMANCE_COUNTERS_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long HeapIndex;
  /* 0x000c */ unsigned long LastHeapIndex;
  /* 0x0010 */ unsigned __int64 BaseAddress;
  /* 0x0018 */ unsigned __int64 ReserveSize;
  /* 0x0020 */ unsigned __int64 CommitSize;
  /* 0x0028 */ unsigned long SegmentCount;
  /* 0x0030 */ unsigned __int64 LargeUCRMemory;
  /* 0x0038 */ unsigned long UCRLength;
  /* 0x0040 */ unsigned __int64 AllocatedSpace;
  /* 0x0048 */ unsigned __int64 FreeSpace;
  /* 0x0050 */ unsigned long FreeListLength;
  /* 0x0054 */ unsigned long Contention;
  /* 0x0058 */ unsigned long VirtualBlocks;
  /* 0x005c */ unsigned long CommitRate;
  /* 0x0060 */ unsigned long DecommitRate;
  /* 0x0064 */ long __PADDING__[1];
} HEAP_PERFORMANCE_COUNTERS_INFORMATION, *PHEAP_PERFORMANCE_COUNTERS_INFORMATION; /* size: 0x0068 */

typedef struct _HEAP_INFORMATION_ITEM
{
  /* 0x0000 */ unsigned long Level;
  /* 0x0008 */ unsigned __int64 Size;
  union
  {
    /* 0x0010 */ struct _PROCESS_HEAP_INFORMATION ProcessHeapInformation;
    /* 0x0010 */ struct _HEAP_INFORMATION HeapInformation;
    /* 0x0010 */ struct _HEAP_REGION_INFORMATION HeapRegionInformation;
    /* 0x0010 */ struct _HEAP_RANGE_INFORMATION HeapRangeInformation;
    /* 0x0010 */ struct _HEAP_BLOCK_INFORMATION HeapBlockInformation;
    /* 0x0010 */ struct _HEAP_PERFORMANCE_COUNTERS_INFORMATION HeapPerfInformation;
    struct
    {
      /* 0x0010 */ unsigned __int64 DynamicStart;
      /* 0x0018 */ long __PADDING__[24];
    }; /* size: 0x0068 */
  }; /* size: 0x0068 */
} HEAP_INFORMATION_ITEM, *PHEAP_INFORMATION_ITEM; /* size: 0x0078 */

