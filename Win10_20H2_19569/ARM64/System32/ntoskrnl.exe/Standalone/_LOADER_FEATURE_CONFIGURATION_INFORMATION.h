typedef struct _LOADER_FEATURE_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ void* FeatureConfigurationBuffer;
  /* 0x0008 */ unsigned __int64 FeatureConfigurationBufferSize;
  /* 0x0010 */ void* UsageSubscriptionBuffer;
  /* 0x0018 */ unsigned __int64 UsageSubscriptionBufferSize;
  /* 0x0020 */ void* DelayedUsageReportBuffer;
  /* 0x0028 */ unsigned __int64 DelayedUsageReportBufferSize;
} LOADER_FEATURE_CONFIGURATION_INFORMATION, *PLOADER_FEATURE_CONFIGURATION_INFORMATION; /* size: 0x0030 */

