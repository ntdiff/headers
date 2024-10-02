enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_XamlCredUI
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1168;
    /* 0x0000 */ const char ___dummy1164;
    /* 0x0000 */ const char ___dummy1165;
    /* 0x0000 */ const char ___dummy1166;
    /* 0x0000 */ const char ___dummy1167;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_XamlCredUI, *P_WilFeatureTraits_Feature_XamlCredUI; /* size: 0x0001 */

