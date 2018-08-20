typedef enum _KSPIN_LOCK_QUEUE_NUMBER
{
  LockQueueDispatcherLock = 0,
  LockQueueExpansionLock = 1,
  LockQueuePfnLock = 2,
  LockQueueSystemSpaceLock = 3,
  LockQueueVacbLock = 4,
  LockQueueMasterLock = 5,
  LockQueueNonPagedPoolLock = 6,
  LockQueueIoCancelLock = 7,
  LockQueueWorkQueueLock = 8,
  LockQueueIoVpbLock = 9,
  LockQueueIoDatabaseLock = 10,
  LockQueueIoCompletionLock = 11,
  LockQueueNtfsStructLock = 12,
  LockQueueAfdWorkQueueLock = 13,
  LockQueueBcbLock = 14,
  LockQueueMmNonPagedPoolLock = 15,
  LockQueueUnusedSpare16 = 16,
  LockQueueTimerTableLock = 17,
  LockQueueMaximumLock = 33,
} KSPIN_LOCK_QUEUE_NUMBER, *PKSPIN_LOCK_QUEUE_NUMBER;

