typedef enum _MEMORY_PARTITION_INFORMATION_CLASS
{
  SystemMemoryPartitionInformation = 0,
  SystemMemoryPartitionMoveMemory = 1,
  SystemMemoryPartitionAddPagefile = 2,
  SystemMemoryPartitionCombineMemory = 3,
  SystemMemoryPartitionInitialAddMemory = 4,
} MEMORY_PARTITION_INFORMATION_CLASS, *PMEMORY_PARTITION_INFORMATION_CLASS;

