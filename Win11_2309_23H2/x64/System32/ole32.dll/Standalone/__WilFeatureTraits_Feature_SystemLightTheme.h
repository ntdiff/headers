enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_SystemLightTheme
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy869;
    /* 0x0000 */ const char ___dummy865;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy866;
    /* 0x0000 */ const char ___dummy867;
    /* 0x0000 */ const char ___dummy868;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_SystemLightTheme, *P_WilFeatureTraits_Feature_SystemLightTheme; /* size: 0x0001 */

