typedef struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION
{
  /* 0x0000 */ struct _GROUP_AFFINITY* GroupAffinity;
  /* 0x0008 */ unsigned long NumberOfDomains;
  /* 0x000c */ unsigned long GlobalDomainIndex;
  /* 0x0010 */ unsigned short GroupAffinityCount;
  /* 0x0012 */ unsigned short ProcessorCount[3];
  /* 0x0018 */ unsigned short UsableProcessorCount[3];
  /* 0x001e */ char __PADDING__[2];
} MI_SYSTEM_NODE_AFFINITY_INFORMATION, *PMI_SYSTEM_NODE_AFFINITY_INFORMATION; /* size: 0x0020 */

typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex;
  /* 0x0008 */ unsigned long Node;
  /* 0x000c */ long __PADDING__[1];
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

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
  /* 0x0000 */ volatile unsigned long NumaHintIndex;
  /* 0x0004 */ unsigned long NumaLastRangeIndexInclusive;
  /* 0x0008 */ unsigned char MemoryNodeWithNoProcessorsFound;
  /* 0x0009 */ unsigned char AccessBitReplacementHonored;
  /* 0x000a */ unsigned char ChannelHintIndex;
  /* 0x000b */ unsigned char ChannelLastRangeIndexInclusive;
  /* 0x0010 */ struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;
  /* 0x0018 */ struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION AffinityInfo;
  /* 0x0038 */ struct _MI_SYSTEM_NODE_NONPAGED_POOL* SystemNodeNonPagedPool;
  /* 0x0040 */ struct _HAL_NODE_RANGE TemporaryNumaRanges[2];
  /* 0x0060 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0068 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0070 */ unsigned long SecondLevelCacheSize;
  /* 0x0074 */ unsigned long FirstLevelCacheSize;
  /* 0x0078 */ unsigned long PhysicalAddressBits;
  /* 0x007c */ unsigned long PfnDatabasePageBits;
  /* 0x0080 */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0081 */ unsigned char PageTableReuseRequiresFlush;
  /* 0x0088 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0090 */ unsigned long FlushTbForAttributeChange;
  /* 0x0094 */ unsigned long FlushCacheForAttributeChange;
  /* 0x0098 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x009c */ unsigned long CacheFlushPromoteThreshold;
  /* 0x00c0 */ unsigned __int64 InvalidPteMask;
  /* 0x0100 */ unsigned long PageColors[4];
  /* 0x0110 */ unsigned __int64 FlushTbThreshold;
  /* 0x0118 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0120 */ unsigned __int64 HighestPossiblePhysicalPage;
  /* 0x0128 */ unsigned __int64 VsmKernelPageCount;
  /* 0x0130 */ unsigned __int64 HugePageRemoveTracker[512];
  /* 0x1130 */ volatile unsigned __int64 HotAddSequenceNumber;
  /* 0x1138 */ unsigned __int64 HotRemoveSequenceNumber;
  /* 0x1140 */ struct _LIST_ENTRY HotAddsInFlight;
  /* 0x1150 */ unsigned long HotAddInFlightCount;
  /* 0x1154 */ unsigned long HotAddInFlightNumaCount;
  /* 0x1180 */ volatile long ParkedCoresLock;
  /* 0x1188 */ struct _KAFFINITY_EX ParkedCores;
  /* 0x1290 */ struct _WORK_QUEUE_ITEM ParkedCoresWorkItem;
  /* 0x12b0 */ struct _EX_PUSH_LOCK ShadowPageTablesLock;
  /* 0x12b8 */ volatile unsigned __int64 SpecialPurposeMemoryTypeId;
  /* 0x12c0 */ unsigned long SpecialPurposeMemoryQueryTypeExtraSpace;
  /* 0x12c4 */ unsigned char GlobalBitPolarity[2];
  /* 0x12c6 */ char __PADDING__[58];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x1300 */

