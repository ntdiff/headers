typedef enum _PARTITION_INFORMATION_CLASS
{
  SystemMemoryPartitionInformation = 0,
  SystemMemoryPartitionMoveMemory = 1,
  SystemMemoryPartitionAddPagefile = 2,
  SystemMemoryPartitionCombineMemory = 3,
  SystemMemoryPartitionInitialAddMemory = 4,
  SystemMemoryPartitionGetMemoryEvents = 5,
  SystemMemoryPartitionSetAttributes = 6,
  SystemMemoryPartitionNodeInformation = 7,
  SystemMemoryPartitionCreateLargePages = 8,
  SystemMemoryPartitionDedicatedMemoryInformation = 9,
  SystemMemoryPartitionOpenDedicatedMemory = 10,
  SystemMemoryPartitionMemoryChargeAttributes = 11,
  SystemMemoryPartitionClearAttributes = 12,
  SystemMemoryPartitionSetMemoryThresholds = 13,
  SystemMemoryPartitionMax = 14,
} PARTITION_INFORMATION_CLASS, *PPARTITION_INFORMATION_CLASS;

