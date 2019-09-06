typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned long PageFrameIndex;
  /* 0x0004 */ unsigned long Node;
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _MI_PFN_CACHE_ATTRIBUTE
{
  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3,
} MI_PFN_CACHE_ATTRIBUTE, *PMI_PFN_CACHE_ATTRIBUTE;

typedef struct _MI_ZERO_COST_COUNTS
{
  /* 0x0000 */ unsigned __int64 NativeSum;
  /* 0x0008 */ unsigned __int64 CachedSum;
} MI_ZERO_COST_COUNTS, *PMI_ZERO_COST_COUNTS; /* size: 0x0010 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _EX_PUSH_LOCK
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
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0004 */ unsigned long NumaHintIndex;
  /* 0x0008 */ unsigned long NumaLastRangeIndexInclusive;
  /* 0x000c */ unsigned char NodeShift;
  /* 0x000d */ unsigned char ChannelShift;
  /* 0x0010 */ unsigned long ChannelHintIndex;
  /* 0x0014 */ unsigned long ChannelLastRangeIndexInclusive;
  /* 0x0018 */ struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;
  /* 0x001c */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0020 */ struct _HAL_NODE_RANGE TemporaryNumaRanges[2];
  /* 0x0030 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0034 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0038 */ unsigned long SecondLevelCacheSize;
  /* 0x003c */ unsigned long FirstLevelCacheSize;
  /* 0x0040 */ unsigned long PhysicalAddressBits;
  /* 0x0044 */ unsigned long LogicalProcessorsPerCore;
  /* 0x0048 */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x004c */ unsigned long TotalPagesAllowed;
  /* 0x0050 */ unsigned long SecondaryColorMask;
  /* 0x0054 */ unsigned long SecondaryColors;
  /* 0x0058 */ unsigned long FlushTbForAttributeChange;
  /* 0x005c */ unsigned long FlushCacheForAttributeChange;
  /* 0x0060 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x0064 */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0068 */ union _LARGE_INTEGER PerformanceCounterFrequency;
  /* 0x0080 */ unsigned __int64 InvalidPteMask;
  /* 0x00c0 */ unsigned long LargePageColors[2];
  /* 0x00c8 */ unsigned long FlushTbThreshold;
  /* 0x00cc */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x010c */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0110 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0130 */ unsigned long HighestPossiblePhysicalPage;
  /* 0x0134 */ unsigned long VsmKernelPageCount;
  /* 0x0138 */ struct _RTL_AVL_TREE EnclaveRegions;
  /* 0x013c */ void* EnclaveMetadataPage;
  /* 0x0140 */ struct _RTL_BITMAP* EnclaveMetadataBitMap;
  /* 0x0144 */ struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;
  /* 0x0148 */ volatile long EnclaveMetadataPageLock;
  /* 0x014c */ long __PADDING__[13];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x0180 */

