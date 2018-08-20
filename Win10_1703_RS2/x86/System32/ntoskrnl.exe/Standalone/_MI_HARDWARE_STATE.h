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

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0004 */ unsigned long NumaLastRangeIndex;
  /* 0x0008 */ unsigned char NumaTableCaptured;
  /* 0x0009 */ unsigned char NodeShift;
  /* 0x000a */ unsigned char ChannelShift;
  /* 0x000c */ unsigned short* NodeGraph;
  /* 0x0010 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0014 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0018 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x001c */ unsigned long SecondLevelCacheSize;
  /* 0x0020 */ unsigned long FirstLevelCacheSize;
  /* 0x0024 */ unsigned long PhysicalAddressBits;
  /* 0x0028 */ unsigned long TotalPagesAllowed;
  /* 0x002c */ unsigned long SecondaryColorMask;
  /* 0x0030 */ unsigned long SecondaryColors;
  /* 0x0034 */ unsigned long FlushTbForAttributeChange;
  /* 0x0038 */ unsigned long FlushCacheForAttributeChange;
  /* 0x003c */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x0040 */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0044 */ unsigned long FlushTbThreshold;
  /* 0x0048 */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x0088 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0090 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x00b0 */ unsigned long HighestPossiblePhysicalPage;
  /* 0x00b4 */ struct _RTL_AVL_TREE EnclaveRegions;
  /* 0x00b8 */ unsigned long VsmKernelPageCount;
  /* 0x00bc */ long __PADDING__[1];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x00c0 */

