typedef struct _LOADER_FEATURE_CONFIGURATION_INFORMATION2
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* DelayedFeatureUsageDataBuffer;
  /* 0x0010 */ unsigned __int64 DelayedFeatureUsageDataBufferSize;
  /* 0x0018 */ unsigned char ExperimentationClientPresent;
  /* 0x0019 */ char __PADDING__[7];
} LOADER_FEATURE_CONFIGURATION_INFORMATION2, *PLOADER_FEATURE_CONFIGURATION_INFORMATION2; /* size: 0x0020 */

