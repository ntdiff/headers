enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_SettingsBugFixesSept23
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy722;
    /* 0x0000 */ const char ___dummy718;
    /* 0x0000 */ const char ___dummy719;
    /* 0x0000 */ const char ___dummy720;
    /* 0x0000 */ const char ___dummy721;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_SettingsBugFixesSept23, *P_WilFeatureTraits_Feature_SettingsBugFixesSept23; /* size: 0x0001 */

