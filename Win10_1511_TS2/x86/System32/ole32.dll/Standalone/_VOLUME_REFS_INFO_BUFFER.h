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
  /* 0x008c */ long DataWritesReallocationCount;
  /* 0x0090 */ long DataInPlaceWriteCount;
  /* 0x0094 */ long MetadataAllocationsFastTierCount;
  /* 0x0098 */ long MetadataAllocationsSlowTierCount;
  /* 0x009c */ long DataAllocationsFastTierCount;
  /* 0x00a0 */ long DataAllocationsSlowTierCount;
  /* 0x00a4 */ long DestagesSlowTierToFastTier;
  /* 0x00a8 */ long DestagesFastTierToSlowTier;
  /* 0x00ac */ long SlowTierDataFillRatio;
  /* 0x00b0 */ long FastTierDataFillRatio;
  /* 0x00b4 */ long SlowTierMetadataFillRatio;
  /* 0x00b8 */ long FastTierMetadataFillRatio;
  /* 0x00bc */ long SlowToFastDestageReadLatency;
  /* 0x00c0 */ long SlowToFastDestageReadLatencyBase;
  /* 0x00c4 */ long SlowToFastDestageWriteLatency;
  /* 0x00c8 */ long SlowToFastDestageWriteLatencyBase;
  /* 0x00cc */ long FastToSlowDestageReadLatency;
  /* 0x00d0 */ long FastToSlowDestageReadLatencyBase;
  /* 0x00d4 */ long FastToSlowDestageWriteLatency;
  /* 0x00d8 */ long FastToSlowDestageWriteLatencyBase;
  /* 0x00dc */ long SlowTierContainerFillRatio;
  /* 0x00e0 */ long SlowTierContainerFillRatioBase;
  /* 0x00e4 */ long FastTierContainerFillRatio;
  /* 0x00e8 */ long FastTierContainerFillRatioBase;
  /* 0x00ec */ long SlowToFastTierReallocation;
  /* 0x00f0 */ long FastToSlowTierReallocation;
  /* 0x00f4 */ long TreeUpdateLatency;
  /* 0x00f8 */ long TreeUpdateLatencyBase;
  /* 0x00fc */ long CheckpointLatency;
  /* 0x0100 */ long CheckpointLatencyBase;
  /* 0x0104 */ long TreeUpdateCount;
  /* 0x0108 */ long CheckpointCount;
  /* 0x010c */ long LogWriteCount;
  /* 0x0110 */ long LogFillRatio;
  /* 0x0114 */ long ReadCacheInvalidationsForOverwrite;
  /* 0x0118 */ long ReadCacheInvalidationsForReuse;
  /* 0x011c */ long ReadCacheInvalidationsGeneral;
  /* 0x0120 */ long ReadCacheChecksOnMount;
  /* 0x0124 */ long ReadCacheIssuesOnMount;
  /* 0x0128 */ long TrimLatency;
  /* 0x012c */ long TrimLatencyBase;
} VOLUME_REFS_INFO_BUFFER, *PVOLUME_REFS_INFO_BUFFER; /* size: 0x0130 */

