typedef struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION
{
  /* 0x0000 */ unsigned char OriginalBootStatus;
  /* 0x0001 */ unsigned char NewBootStatus;
  /* 0x0002 */ unsigned char ConfigurationLoaded;
  /* 0x0003 */ unsigned char Spare;
  union
  {
    union
    {
      /* 0x0004 */ unsigned long AllFlags;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long LkgSupported : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long FinalBootBeforeRecovery : 1; /* bit position: 1 */
        /* 0x0004 */ unsigned long ConfigurationComparisonAttempted : 1; /* bit position: 2 */
        /* 0x0004 */ unsigned long CurrentConfigurationLoadAttempted : 1; /* bit position: 3 */
        /* 0x0004 */ unsigned long LkgConfigurationLoadAttempted : 1; /* bit position: 4 */
        /* 0x0004 */ unsigned long UsageSubscriptionLoadAttempted : 1; /* bit position: 5 */
        /* 0x0004 */ unsigned long Spare : 26; /* bit position: 6 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0008 */ long ConfigurationComparisonStatus;
  /* 0x000c */ long CurrentConfigurationLoadStatus;
  /* 0x0010 */ long LkgConfigurationLoadStatus;
  /* 0x0014 */ long UsageSubscriptionLoadStatus;
} LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION, *PLOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION; /* size: 0x0018 */

typedef struct _LOADER_FEATURE_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ void* FeatureConfigurationBuffer;
  /* 0x0008 */ unsigned __int64 FeatureConfigurationBufferSize;
  /* 0x0010 */ void* UsageSubscriptionBuffer;
  /* 0x0018 */ unsigned __int64 UsageSubscriptionBufferSize;
  /* 0x0020 */ void* DelayedUsageReportBuffer;
  /* 0x0028 */ unsigned __int64 DelayedUsageReportBufferSize;
  /* 0x0030 */ struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION DiagnosticInformation;
} LOADER_FEATURE_CONFIGURATION_INFORMATION, *PLOADER_FEATURE_CONFIGURATION_INFORMATION; /* size: 0x0048 */

