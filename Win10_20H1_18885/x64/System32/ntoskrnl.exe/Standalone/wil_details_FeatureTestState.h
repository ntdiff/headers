enum wil_details_FeatureTestStateKind
{
  wil_details_FeatureTestStateKind_EnabledState = 0,
  wil_details_FeatureTestStateKind_Variant = 1,
};

enum wil_FeatureEnabledState
{
  wil_FeatureEnabledState_Default = 0,
  wil_FeatureEnabledState_Disabled = 1,
  wil_FeatureEnabledState_Enabled = 2,
};

struct wil_details_FeatureTestState
{
  /* 0x0000 */ enum wil_details_FeatureTestStateKind kind;
  /* 0x0004 */ unsigned int featureId;
  /* 0x0008 */ enum wil_FeatureEnabledState state;
  /* 0x000c */ unsigned char variant;
  /* 0x0010 */ unsigned int payload;
  /* 0x0018 */ struct wil_details_FeatureTestState* next;
}; /* size: 0x0020 */

