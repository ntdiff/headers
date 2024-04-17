enum wil_FeatureVariantPayloadKind
{
  wil_FeatureVariantPayloadKind_None = 0,
  wil_FeatureVariantPayloadKind_Resident = 1,
  wil_FeatureVariantPayloadKind_External = 2,
};

struct wil_details_FeatureDescriptor
{
  /* 0x0000 */ union wil_details_FeatureStateCache* featureStateCache;
  /* 0x0008 */ unsigned int featureId;
  /* 0x000c */ unsigned char changeTime;
  /* 0x000d */ unsigned char isAlwaysDisabled;
  /* 0x000e */ unsigned char isAlwaysEnabled;
  /* 0x000f */ unsigned char isEnabledByDefault;
  /* 0x0010 */ const struct wil_details_FeatureDescriptor* const* requiresFeatures;
  /* 0x0018 */ unsigned char variant;
  /* 0x001c */ enum wil_FeatureVariantPayloadKind payloadKind;
  /* 0x0020 */ unsigned int payload;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

