struct wil_details_FeatureDescriptor
{
  /* 0x0000 */ union wil_details_FeatureStateCache* featureStateCache;
  /* 0x0008 */ unsigned int featureId;
  /* 0x000c */ unsigned char changeTime;
  /* 0x000d */ unsigned char isAlwaysDisabled;
  /* 0x000e */ unsigned char isAlwaysEnabled;
  /* 0x000f */ unsigned char isEnabledByDefault;
  /* 0x0010 */ const struct wil_details_FeatureDescriptor* const* requiresFeatures;
}; /* size: 0x0018 */

