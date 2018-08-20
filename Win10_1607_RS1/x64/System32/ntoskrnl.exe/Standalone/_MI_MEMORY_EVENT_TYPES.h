typedef enum _MI_MEMORY_EVENT_TYPES
{
  LowAvailablePagesEvent = 0,
  HighAvailablePagesEvent = 1,
  LowPagedPoolEvent = 2,
  HighPagedPoolEvent = 3,
  LowNonPagedPoolEvent = 4,
  HighNonPagedPoolEvent = 5,
  LowCommitEvent = 6,
  HighCommitEvent = 7,
  MaximumCommitEvent = 8,
  BadMemoryDetectedEvent = 9,
  PhysicalMemoryChangeEvent = 10,
  TotalNumberOfMemoryEvents = 11,
} MI_MEMORY_EVENT_TYPES, *PMI_MEMORY_EVENT_TYPES;

