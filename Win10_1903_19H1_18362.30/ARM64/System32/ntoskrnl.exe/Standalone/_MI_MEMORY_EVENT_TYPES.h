typedef enum _MI_MEMORY_EVENT_TYPES
{
  LowPagedPoolEvent = 0,
  HighPagedPoolEvent = 1,
  LowNonPagedPoolEvent = 2,
  HighNonPagedPoolEvent = 3,
  LowAvailablePagesEvent = 4,
  HighAvailablePagesEvent = 5,
  LowCommitEvent = 6,
  HighCommitEvent = 7,
  MaximumCommitEvent = 8,
  BadMemoryDetectedEvent = 9,
  PhysicalMemoryChangeEvent = 10,
  TotalNumberOfMemoryEvents = 11,
} MI_MEMORY_EVENT_TYPES, *PMI_MEMORY_EVENT_TYPES;

