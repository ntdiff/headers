typedef struct _MI_ZERO_COST_COUNTS
{
  /* 0x0000 */ unsigned __int64 NativeSum;
  /* 0x0008 */ unsigned __int64 CachedSum;
} MI_ZERO_COST_COUNTS, *PMI_ZERO_COST_COUNTS; /* size: 0x0010 */

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0008 */ unsigned short* NodeGraph;
  /* 0x0010 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0018 */ unsigned long NumaLastRangeIndex;
  /* 0x0020 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0028 */ unsigned char NumaTableCaptured;
  /* 0x0029 */ unsigned char NodeShift;
  /* 0x0030 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0038 */ unsigned char ChannelShift;
  /* 0x003c */ unsigned long SecondLevelCacheSize;
  /* 0x0040 */ unsigned long FirstLevelCacheSize;
  /* 0x0044 */ unsigned long PhysicalAddressBits;
  /* 0x0048 */ unsigned char WriteCombiningPtes;
  /* 0x0049 */ unsigned char AllMainMemoryMustBeCached;
  /* 0x0050 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0058 */ unsigned long SecondaryColorMask;
  /* 0x005c */ unsigned long SecondaryColors;
  /* 0x0060 */ unsigned long FlushTbForAttributeChange;
  /* 0x0064 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0068 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x006c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0070 */ unsigned __int64 FlushTbThreshold;
  /* 0x0078 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0098 */ unsigned __int64 PrimaryPfns;
  /* 0x00a0 */ unsigned __int64 HighestPossiblePhysicalPage;
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x00a8 */

