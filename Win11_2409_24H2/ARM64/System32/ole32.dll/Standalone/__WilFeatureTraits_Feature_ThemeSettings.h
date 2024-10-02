enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ThemeSettings
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1578;
    /* 0x0000 */ const char ___dummy1574;
    /* 0x0000 */ const char ___dummy1575;
    /* 0x0000 */ const char ___dummy1576;
    /* 0x0000 */ const char ___dummy1577;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ThemeSettings, *P_WilFeatureTraits_Feature_ThemeSettings; /* size: 0x0001 */

