enum RTLWOW64_CROSSPROCESS_WORK_OPERATION
{
  CrossProcOperationMemoryAllocPreNotify = 0,
  CrossProcOperationMemoryAllocPostNotify = 1,
  CrossProcOperationMemoryFreePreNotify = 2,
  CrossProcOperationMemoryFreePostNotify = 3,
  CrossProcOperationMemoryProtectPreNotify = 4,
  CrossProcOperationMemoryProtectPostNotify = 5,
  CrossProcOperationInstructionCacheFlush = 6,
  CrossProcOperationInstructionCacheFlushHeavy = 7,
  CrossProcOperationMemoryDirtyNotify = 8,
};

