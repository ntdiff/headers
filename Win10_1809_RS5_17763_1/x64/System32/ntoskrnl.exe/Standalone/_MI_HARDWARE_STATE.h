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
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0004 */ unsigned long NumaLastRangeIndex;
  /* 0x0008 */ unsigned char NumaTableCaptured;
  /* 0x0009 */ unsigned char NodeShift;
  /* 0x000a */ unsigned char ChannelShift;
  /* 0x0010 */ wchar_t* NodeGraph;
  /* 0x0018 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0020 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0028 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0030 */ unsigned long SecondLevelCacheSize;
  /* 0x0034 */ unsigned long FirstLevelCacheSize;
  /* 0x0038 */ unsigned long PhysicalAddressBits;
  /* 0x003c */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0040 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0048 */ unsigned long SecondaryColorMask;
  /* 0x004c */ unsigned long SecondaryColors;
  /* 0x0050 */ unsigned long FlushTbForAttributeChange;
  /* 0x0054 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0058 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x005c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x0080 */ unsigned __int64 InvalidPteMask;
  /* 0x00c0 */ unsigned long LargePageColors[3];
  /* 0x00d0 */ unsigned __int64 FlushTbThreshold;
  /* 0x00d8 */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x0118 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0120 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0140 */ unsigned __int64 VsmKernelPageCount;
  /* 0x0148 */ struct _RTL_AVL_TREE EnclaveRegions;
  /* 0x0150 */ void* EnclaveMetadataPage;
  /* 0x0158 */ struct _RTL_BITMAP* EnclaveMetadataBitMap;
  /* 0x0160 */ struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;
  /* 0x0168 */ volatile long EnclaveMetadataPageLock;
  /* 0x016c */ long __PADDING__[5];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x0180 */

