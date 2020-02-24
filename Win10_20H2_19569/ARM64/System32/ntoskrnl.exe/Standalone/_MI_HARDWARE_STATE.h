typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex;
  /* 0x0008 */ unsigned long Node;
  /* 0x000c */ long __PADDING__[1];
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0010 */

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
  /* 0x0020 */ struct _MI_SYSTEM_NODE_NONPAGED_POOL* SystemNodeNonPagedPool;
  /* 0x0028 */ struct _HAL_NODE_RANGE TemporaryNumaRanges[2];
  /* 0x0048 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0050 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0058 */ unsigned long SecondLevelCacheSize;
  /* 0x005c */ unsigned long FirstLevelCacheSize;
  /* 0x0060 */ unsigned long PhysicalAddressBits;
  /* 0x0064 */ unsigned long PfnDatabasePageBits;
  /* 0x0068 */ unsigned long LogicalProcessorsPerCore;
  /* 0x006c */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0070 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0078 */ unsigned long SecondaryColorMask;
  /* 0x007c */ unsigned long SecondaryColors;
  /* 0x0080 */ unsigned long FlushTbForAttributeChange;
  /* 0x0084 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0088 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x008c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0090 */ union _LARGE_INTEGER PerformanceCounterFrequency;
  /* 0x0100 */ unsigned long LargePageColors[3];
  /* 0x0110 */ unsigned __int64 FlushTbThreshold;
  /* 0x0118 */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x0158 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0160 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0180 */ unsigned __int64 HighestPossiblePhysicalPage;
  /* 0x0188 */ unsigned __int64 VsmKernelPageCount;
  /* 0x0190 */ unsigned char GlobalBitPolarity[2];
  /* 0x0192 */ char __PADDING__[110];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x0200 */

