typedef enum _SYSTEM_MEMORY_LIST_COMMAND
{
  MemoryCaptureAccessedBits = 0,
  MemoryCaptureAndResetAccessedBits = 1,
  MemoryEmptyWorkingSets = 2,
  MemoryFlushModifiedList = 3,
  MemoryPurgeStandbyList = 4,
  MemoryPurgeLowPriorityStandbyList = 5,
  MemoryCommandMax = 6,
} SYSTEM_MEMORY_LIST_COMMAND, *PSYSTEM_MEMORY_LIST_COMMAND;

