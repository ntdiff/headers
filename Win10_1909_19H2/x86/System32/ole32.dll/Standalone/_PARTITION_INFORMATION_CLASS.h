typedef enum _PARTITION_INFORMATION_CLASS
{
  SystemMemoryPartitionInformation = 0,
  SystemMemoryPartitionMoveMemory = 1,
  SystemMemoryPartitionAddPagefile = 2,
  SystemMemoryPartitionCombineMemory = 3,
  SystemMemoryPartitionInitialAddMemory = 4,
  SystemMemoryPartitionGetMemoryEvents = 5,
  SystemMemoryPartitionMax = 6,
} PARTITION_INFORMATION_CLASS, *PPARTITION_INFORMATION_CLASS;

