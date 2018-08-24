typedef enum _MI_DYNAMIC_MEMORY_LOCKTYPE
{
  AlreadyHeld = 0,
  AcquiredShared = 1,
  UseSpinLock = 2,
  UseSpinLockRaiseIrql = 3,
} MI_DYNAMIC_MEMORY_LOCKTYPE, *PMI_DYNAMIC_MEMORY_LOCKTYPE;

