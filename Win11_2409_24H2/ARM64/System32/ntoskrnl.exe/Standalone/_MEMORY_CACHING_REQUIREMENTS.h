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

typedef struct _MEMORY_CACHING_REQUIREMENTS
{
  /* 0x0000 */ unsigned __int64 BasePage;
  /* 0x0008 */ unsigned __int64 PageCount;
  /* 0x0010 */ enum _MEMORY_CACHING_TYPE MemoryCachingType;
  /* 0x0014 */ long __PADDING__[1];
} MEMORY_CACHING_REQUIREMENTS, *PMEMORY_CACHING_REQUIREMENTS; /* size: 0x0018 */

