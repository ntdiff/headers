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
  /* 0x0010 */ const struct FEATURE_LOGGED_TRAITS* featureLoggedTraits;
  /* 0x0018 */ unsigned int featureId;
  /* 0x001c */ unsigned char changeTime;
  /* 0x001d */ unsigned char isAlwaysDisabled;
  /* 0x001e */ unsigned char isAlwaysEnabled;
  /* 0x001f */ unsigned char isEnabledByDefault;
  /* 0x0020 */ const struct wil_details_FeatureDescriptor* const* requiresFeatures;
  /* 0x0028 */ unsigned char variant;
  /* 0x002c */ enum wil_FeatureVariantPayloadKind payloadKind;
  /* 0x0030 */ unsigned int payload;
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

