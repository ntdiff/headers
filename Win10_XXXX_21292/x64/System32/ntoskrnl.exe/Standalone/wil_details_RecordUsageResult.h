enum wil_details_ServiceReportingKind
{
  wil_details_ServiceReportingKind_UniqueUsage = 0,
  wil_details_ServiceReportingKind_UniqueOpportunity = 1,
  wil_details_ServiceReportingKind_DeviceUsage = 2,
  wil_details_ServiceReportingKind_DeviceOpportunity = 3,
  wil_details_ServiceReportingKind_PotentialUniqueUsage = 4,
  wil_details_ServiceReportingKind_PotentialUniqueOpportunity = 5,
  wil_details_ServiceReportingKind_PotentialDeviceUsage = 6,
  wil_details_ServiceReportingKind_PotentialDeviceOpportunity = 7,
  wil_details_ServiceReportingKind_EnabledTotalDuration = 8,
  wil_details_ServiceReportingKind_EnabledPausedDuration = 9,
  wil_details_ServiceReportingKind_DisabledTotalDuration = 10,
  wil_details_ServiceReportingKind_DisabledPausedDuration = 11,
  wil_details_ServiceReportingKind_CustomEnabledBase = 100,
  wil_details_ServiceReportingKind_CustomDisabledBase = 150,
  wil_details_ServiceReportingKind_Store = 254,
  wil_details_ServiceReportingKind_None = 255,
  wil_details_ServiceReportingKind_VariantDevicePotentialBase = 256,
  wil_details_ServiceReportingKind_VariantDeviceUsageBase = 320,
  wil_details_ServiceReportingKind_VariantUniquePotentialBase = 384,
  wil_details_ServiceReportingKind_VariantUniqueUsageBase = 448,
};

struct wil_details_RecordUsageResult
{
  /* 0x0000 */ int queueBackground;
  /* 0x0004 */ unsigned int countImmediate;
  /* 0x0008 */ enum wil_details_ServiceReportingKind kindImmediate;
  /* 0x000c */ unsigned int payloadId;
  /* 0x0010 */ int ignoredUse;
  /* 0x0014 */ int isVariantConfiguration;
}; /* size: 0x0018 */

