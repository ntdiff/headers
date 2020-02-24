typedef struct _LOADER_FEATURE_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ void* FeatureConfigurationBuffer;
  /* 0x0004 */ unsigned long FeatureConfigurationBufferSize;
  /* 0x0008 */ void* UsageSubscriptionBuffer;
  /* 0x000c */ unsigned long UsageSubscriptionBufferSize;
  /* 0x0010 */ void* DelayedUsageReportBuffer;
  /* 0x0014 */ unsigned long DelayedUsageReportBufferSize;
} LOADER_FEATURE_CONFIGURATION_INFORMATION, *PLOADER_FEATURE_CONFIGURATION_INFORMATION; /* size: 0x0018 */

