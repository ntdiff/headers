enum wil_FeatureVariantPayloadKind
{
  wil_FeatureVariantPayloadKind_None = 0,
  wil_FeatureVariantPayloadKind_Resident = 1,
  wil_FeatureVariantPayloadKind_External = 2,
};

struct wil_details_FeatureDescriptor
{
  /* 0x0000 */ union wil_details_FeatureStateCache* featureStateCache;
  /* 0x0008 */ struct wil_details_FeatureReportingCache* featureReportingCache;
  /* 0x0010 */ unsigned int featureId;
  /* 0x0014 */ unsigned char changeTime;
  /* 0x0015 */ unsigned char isAlwaysDisabled;
  /* 0x0016 */ unsigned char isAlwaysEnabled;
  /* 0x0017 */ unsigned char isEnabledByDefault;
  /* 0x0018 */ const struct wil_details_FeatureDescriptor* const* requiresFeatures;
  /* 0x0020 */ unsigned char variant;
  /* 0x0024 */ enum wil_FeatureVariantPayloadKind payloadKind;
  /* 0x0028 */ unsigned int payload;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

