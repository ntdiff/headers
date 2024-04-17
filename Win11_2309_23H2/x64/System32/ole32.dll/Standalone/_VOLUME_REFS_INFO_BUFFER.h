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

typedef struct _VOLUME_REFS_INFO_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER CacheSizeInBytes;
  /* 0x0008 */ union _LARGE_INTEGER AllocatedCacheInBytes;
  /* 0x0010 */ union _LARGE_INTEGER PopulatedCacheInBytes;
  /* 0x0018 */ union _LARGE_INTEGER InErrorCacheInBytes;
  /* 0x0020 */ union _LARGE_INTEGER MemoryUsedForCacheMetadata;
  /* 0x0028 */ unsigned long CacheLineSize;
  /* 0x002c */ long CacheTransactionsOutstanding;
  /* 0x0030 */ long CacheLinesFree;
  /* 0x0034 */ long CacheLinesInError;
  /* 0x0038 */ union _LARGE_INTEGER CacheHitsInBytes;
  /* 0x0040 */ union _LARGE_INTEGER CacheMissesInBytes;
  /* 0x0048 */ union _LARGE_INTEGER CachePopulationUpdatesInBytes;
  /* 0x0050 */ union _LARGE_INTEGER CacheWriteThroughUpdatesInBytes;
  /* 0x0058 */ union _LARGE_INTEGER CacheInvalidationsInBytes;
  /* 0x0060 */ union _LARGE_INTEGER CacheOverReadsInBytes;
  /* 0x0068 */ union _LARGE_INTEGER MetadataWrittenBytes;
  /* 0x0070 */ long CacheHitCounter;
  /* 0x0074 */ long CacheMissCounter;
  /* 0x0078 */ long CacheLineAllocationCounter;
  /* 0x007c */ long CacheInvalidationsCounter;
  /* 0x0080 */ long CachePopulationUpdatesCounter;
  /* 0x0084 */ long CacheWriteThroughUpdatesCounter;
  /* 0x0088 */ long MaxCacheTransactionsOutstanding;
  /* 0x0090 */ __int64 DataWritesReallocationCount;
  /* 0x0098 */ __int64 DataInPlaceWriteCount;
  /* 0x00a0 */ __int64 MetadataAllocationsFastTierCount;
  /* 0x00a8 */ __int64 MetadataAllocationsSlowTierCount;
  /* 0x00b0 */ __int64 DataAllocationsFastTierCount;
  /* 0x00b8 */ __int64 DataAllocationsSlowTierCount;
  /* 0x00c0 */ __int64 DestagesSlowTierToFastTier;
  /* 0x00c8 */ __int64 DestagesFastTierToSlowTier;
  /* 0x00d0 */ long SlowTierDataFillRatio;
  /* 0x00d4 */ long FastTierDataFillRatio;
  /* 0x00d8 */ long SlowTierMetadataFillRatio;
  /* 0x00dc */ long FastTierMetadataFillRatio;
  /* 0x00e0 */ __int64 SlowToFastDestageReadLatency;
  /* 0x00e8 */ long SlowToFastDestageReadLatencyBase;
  /* 0x00f0 */ __int64 SlowToFastDestageWriteLatency;
  /* 0x00f8 */ long SlowToFastDestageWriteLatencyBase;
  /* 0x0100 */ __int64 FastToSlowDestageReadLatency;
  /* 0x0108 */ long FastToSlowDestageReadLatencyBase;
  /* 0x0110 */ __int64 FastToSlowDestageWriteLatency;
  /* 0x0118 */ long FastToSlowDestageWriteLatencyBase;
  /* 0x0120 */ __int64 SlowTierContainerFillRatio;
  /* 0x0128 */ long SlowTierContainerFillRatioBase;
  /* 0x0130 */ __int64 FastTierContainerFillRatio;
  /* 0x0138 */ long FastTierContainerFillRatioBase;
  /* 0x013c */ long Unused1;
  /* 0x0140 */ long Unused2;
  /* 0x0144 */ long Unused3;
  /* 0x0148 */ long Unused4;
  /* 0x0150 */ __int64 TreeUpdateCount;
  /* 0x0158 */ __int64 CheckpointCount;
  /* 0x0160 */ __int64 LogWriteCount;
  /* 0x0168 */ long LogFillRatio;
  /* 0x016c */ long ReadCacheInvalidationsForOverwrite;
  /* 0x0170 */ long ReadCacheInvalidationsForReuse;
  /* 0x0174 */ long ReadCacheInvalidationsGeneral;
  /* 0x0178 */ long ReadCacheChecksOnMount;
  /* 0x017c */ long ReadCacheIssuesOnMount;
  /* 0x0180 */ __int64 TrimLatency;
  /* 0x0188 */ long TrimLatencyBase;
  /* 0x0190 */ __int64 DataCompactionCount;
  /* 0x0198 */ __int64 CompactionReadLatency;
  /* 0x01a0 */ long CompactionReadLatencyBase;
  /* 0x01a8 */ __int64 CompactionWriteLatency;
  /* 0x01b0 */ long CompactionWriteLatencyBase;
  /* 0x01b8 */ union _LARGE_INTEGER DataInPlaceWriteClusterCount;
  /* 0x01c0 */ long CompactionFailedDueToIneligibleContainer;
  /* 0x01c4 */ long CompactionFailedDueToMaxFragmentation;
  /* 0x01c8 */ __int64 CompactedContainerFillRatio;
  /* 0x01d0 */ long CompactedContainerFillRatioBase;
  /* 0x01d4 */ long ContainerMoveRetryCount;
  /* 0x01d8 */ long ContainerMoveFailedDueToIneligibleContainer;
  /* 0x01dc */ long CompactionFailureCount;
  /* 0x01e0 */ long ContainerMoveFailureCount;
  /* 0x01e8 */ union _LARGE_INTEGER NumberOfDirtyMetadataPages;
  /* 0x01f0 */ long NumberOfDirtyTableListEntries;
  /* 0x01f4 */ long NumberOfDeleteQueueEntries;
  /* 0x01f8 */ long MAAFilteredViewSize;
  /* 0x01fc */ long MAAFilteredViewInsertions;
  /* 0x0200 */ long MAAFilteredViewDeletions;
  /* 0x0204 */ long MAAFilteredViewCollisions;
  /* 0x0208 */ long MAAFilteredViewPurges;
  /* 0x0210 */ __int64 MAARegionsVisitedPerAllocationSum;
  /* 0x0218 */ long MAARegionsVisitedPerAllocationBase;
  /* 0x021c */ long MAAMaxRegionsVisitedPerAllocation;
  /* 0x0220 */ __int64 TreeUpdateLatencyExclusive;
  /* 0x0228 */ __int64 TreeUpdateLatencyTotal;
  /* 0x0230 */ long TreeUpdateLatencyBase;
  /* 0x0238 */ __int64 CheckpointLatencyTreeUpdateExclusive;
  /* 0x0240 */ __int64 CheckpointLatencyTreeUpdateTotal;
  /* 0x0248 */ long CheckpointLatencyTreeUpdateBase;
  /* 0x0250 */ __int64 CheckpointLatencyTotal;
  /* 0x0258 */ long CheckpointLatencyTotalBase;
  /* 0x025c */ long __PADDING__[1];
} VOLUME_REFS_INFO_BUFFER, *PVOLUME_REFS_INFO_BUFFER; /* size: 0x0260 */

