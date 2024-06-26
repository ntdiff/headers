typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex;
  /* 0x0008 */ unsigned long Node;
  /* 0x000c */ long __PADDING__[1];
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0010 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0004 */ volatile unsigned long NumaHintIndex;
  /* 0x0008 */ unsigned long NumaLastRangeIndexInclusive;
  /* 0x000c */ unsigned char MemoryNodeWithNoProcessorsFound;
  /* 0x000d */ unsigned char NodeShift;
  /* 0x000e */ unsigned char ChannelShift;
  /* 0x000f */ unsigned char AccessBitReplacementHonored;
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
  /* 0x0068 */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0069 */ unsigned char PageTableReuseRequiresFlush;
  /* 0x0070 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0078 */ unsigned long SecondaryColorMask;
  /* 0x007c */ unsigned long SecondaryColors;
  /* 0x0080 */ unsigned long FlushTbForAttributeChange;
  /* 0x0084 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0088 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x008c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x00c0 */ unsigned __int64 InvalidPteMask;
  /* 0x0100 */ unsigned long LargePageColors[3];
  /* 0x0110 */ unsigned __int64 FlushTbThreshold;
  /* 0x0118 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0120 */ unsigned __int64 HighestPossiblePhysicalPage;
  /* 0x0128 */ unsigned __int64 VsmKernelPageCount;
  /* 0x0130 */ unsigned __int64 HugePageRemoveTracker[512];
  /* 0x1130 */ volatile unsigned __int64 HotAddSequenceNumber;
  /* 0x1140 */ volatile long ParkedCoresLock;
  /* 0x1148 */ struct _KAFFINITY_EX ParkedCores;
  /* 0x1250 */ struct _WORK_QUEUE_ITEM ParkedCoresWorkItem;
  /* 0x1270 */ volatile unsigned __int64 SpecialPurposeMemoryTypeId;
  /* 0x1278 */ unsigned long SpecialPurposeMemoryQueryTypeExtraSpace;
  /* 0x127c */ long __PADDING__[1];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x1280 */

