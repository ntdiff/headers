typedef enum _FAST_RESOURCE_ACQUIRE_FLAGS
{
  FastResourceAcquireExclusive = 1,
  FastResourceAcquireShared = 2,
  FastResourceAcquireSharedStarveExclusive = 4,
  FastResourceAcquireWait = 8,
  FastResourceAcquireDisowned = 16,
} FAST_RESOURCE_ACQUIRE_FLAGS, *PFAST_RESOURCE_ACQUIRE_FLAGS;

