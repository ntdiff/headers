enum wil_FeatureEnabledState
{
  wil_FeatureEnabledState_Default = 0,
  wil_FeatureEnabledState_Disabled = 1,
  wil_FeatureEnabledState_Enabled = 2,
};

enum wil_FeatureVariantPayloadKind
{
  wil_FeatureVariantPayloadKind_None = 0,
  wil_FeatureVariantPayloadKind_Resident = 1,
  wil_FeatureVariantPayloadKind_External = 2,
};

struct wil_FeatureState
{
  /* 0x0000 */ enum wil_FeatureEnabledState enabledState;
  /* 0x0004 */ unsigned char variant;
  /* 0x0008 */ enum wil_FeatureVariantPayloadKind payloadKind;
  /* 0x000c */ unsigned int payload;
  /* 0x0010 */ int hasNotification;
  /* 0x0014 */ int isVariantConfiguration;
}; /* size: 0x0018 */

