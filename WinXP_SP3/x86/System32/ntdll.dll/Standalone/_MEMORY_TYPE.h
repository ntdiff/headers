typedef enum _MEMORY_TYPE
{
  MemoryExceptionBlock = 0,
  MemorySystemBlock = 1,
  MemoryFree = 2,
  MemoryBad = 3,
  MemoryLoadedProgram = 4,
  MemoryFirmwareTemporary = 5,
  MemoryFirmwarePermanent = 6,
  MemoryFreeContiguous = 7,
  MemorySpecialMemory = 8,
  MemoryMaximum = 9,
} MEMORY_TYPE, *PMEMORY_TYPE;

