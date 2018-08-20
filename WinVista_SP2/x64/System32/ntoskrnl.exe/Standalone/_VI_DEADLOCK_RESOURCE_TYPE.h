typedef enum _VI_DEADLOCK_RESOURCE_TYPE
{
  VfDeadlockUnknown = 0,
  VfDeadlockMutex = 1,
  VfDeadlockMutexAbandoned = 2,
  VfDeadlockFastMutex = 3,
  VfDeadlockFastMutexUnsafe = 4,
  VfDeadlockSpinLock = 5,
  VfDeadlockTypeMaximum = 6,
} VI_DEADLOCK_RESOURCE_TYPE, *PVI_DEADLOCK_RESOURCE_TYPE;

