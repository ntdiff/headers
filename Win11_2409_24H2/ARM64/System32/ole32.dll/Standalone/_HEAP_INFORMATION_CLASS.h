typedef enum _HEAP_INFORMATION_CLASS
{
  HeapCompatibilityInformation = 0,
  HeapEnableTerminationOnCorruption = 1,
  HeapExtendedInformation = 2,
  HeapOptimizeResources = 3,
  HeapTaggingInformation = 4,
  HeapStackDatabase = 5,
  HeapMemoryLimit = 6,
  HeapTag = 7,
  HeapDetailedFailureInformation = -2147483647,
  HeapSetDebuggingInformation = -2147483646,
} HEAP_INFORMATION_CLASS, *PHEAP_INFORMATION_CLASS;

