typedef enum _MEMORY_CACHING_TYPE
{
  MmNonCached = 0,
  MmCached = 1,
  MmWriteCombined = 2,
  MmHardwareCoherentCached = 3,
  MmNonCachedUnordered = 4,
  MmUSWCCached = 5,
  MmMaximumCacheType = 6,
  MmNotMapped = -1,
} MEMORY_CACHING_TYPE, *PMEMORY_CACHING_TYPE;

