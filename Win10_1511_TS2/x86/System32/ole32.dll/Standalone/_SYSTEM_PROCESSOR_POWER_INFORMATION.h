typedef struct _SYSTEM_PROCESSOR_POWER_INFORMATION
{
  /* 0x0000 */ unsigned char CurrentFrequency;
  /* 0x0001 */ unsigned char ThermalLimitFrequency;
  /* 0x0002 */ unsigned char ConstantThrottleFrequency;
  /* 0x0003 */ unsigned char DegradedThrottleFrequency;
  /* 0x0004 */ unsigned char LastBusyFrequency;
  /* 0x0005 */ unsigned char LastC3Frequency;
  /* 0x0006 */ unsigned char LastAdjustedBusyFrequency;
  /* 0x0007 */ unsigned char ProcessorMinThrottle;
  /* 0x0008 */ unsigned char ProcessorMaxThrottle;
  /* 0x000c */ unsigned long NumberOfFrequencies;
  /* 0x0010 */ unsigned long PromotionCount;
  /* 0x0014 */ unsigned long DemotionCount;
  /* 0x0018 */ unsigned long ErrorCount;
  /* 0x001c */ unsigned long RetryCount;
  /* 0x0020 */ unsigned __int64 CurrentFrequencyTime;
  /* 0x0028 */ unsigned __int64 CurrentProcessorTime;
  /* 0x0030 */ unsigned __int64 CurrentProcessorIdleTime;
  /* 0x0038 */ unsigned __int64 LastProcessorTime;
  /* 0x0040 */ unsigned __int64 LastProcessorIdleTime;
  /* 0x0048 */ unsigned __int64 Energy;
} SYSTEM_PROCESSOR_POWER_INFORMATION, *PSYSTEM_PROCESSOR_POWER_INFORMATION; /* size: 0x0050 */

