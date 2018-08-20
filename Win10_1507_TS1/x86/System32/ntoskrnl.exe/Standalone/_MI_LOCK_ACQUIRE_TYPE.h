typedef enum _MI_LOCK_ACQUIRE_TYPE
{
  MiAcquireExclusive = 0,
  MiAcquireExclusiveAutoExpand = 1,
  MiAcquireShared = 2,
  MiAcquireSharedAutoExpand = 3,
} MI_LOCK_ACQUIRE_TYPE, *PMI_LOCK_ACQUIRE_TYPE;

