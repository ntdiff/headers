typedef enum _PROCESS_INFORMATION_CLASS
{
  ProcessMemoryPriority = 0,
  ProcessMemoryExhaustionInfo = 1,
  ProcessAppMemoryInfo = 2,
  ProcessInPrivateInfo = 3,
  ProcessInformationClassMax = 4,
} PROCESS_INFORMATION_CLASS, *PPROCESS_INFORMATION_CLASS;

