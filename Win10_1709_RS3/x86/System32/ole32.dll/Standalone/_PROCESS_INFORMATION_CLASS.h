typedef enum _PROCESS_INFORMATION_CLASS
{
  ProcessMemoryPriority = 0,
  ProcessMemoryExhaustionInfo = 1,
  ProcessAppMemoryInfo = 2,
  ProcessInPrivateInfo = 3,
  ProcessPowerThrottling = 4,
  ProcessReservedValue1 = 5,
  ProcessTelemetryCoverageInfo = 6,
  ProcessProtectionLevelInfo = 7,
  ProcessInformationClassMax = 8,
} PROCESS_INFORMATION_CLASS, *PPROCESS_INFORMATION_CLASS;

