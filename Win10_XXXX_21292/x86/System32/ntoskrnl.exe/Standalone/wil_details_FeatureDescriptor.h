enum wil_FeatureVariantPayloadKind
{
  wil_FeatureVariantPayloadKind_None = 0,
  wil_FeatureVariantPayloadKind_Resident = 1,
  wil_FeatureVariantPayloadKind_External = 2,
};

struct wil_details_FeatureDescriptor
{
  /* 0x0000 */ union wil_details_FeatureStateCache* featureStateCache;
  /* 0x0004 */ unsigned int featureId;
  /* 0x0008 */ unsigned char changeTime;
  /* 0x0009 */ unsigned char isAlwaysDisabled;
  /* 0x000a */ unsigned char isAlwaysEnabled;
  /* 0x000b */ unsigned char isEnabledByDefault;
  /* 0x000c */ const struct wil_details_FeatureDescriptor* const* requiresFeatures;
  /* 0x0010 */ unsigned char variant;
  /* 0x0014 */ enum wil_FeatureVariantPayloadKind payloadKind;
  /* 0x0018 */ unsigned int payload;
}; /* size: 0x001c */

