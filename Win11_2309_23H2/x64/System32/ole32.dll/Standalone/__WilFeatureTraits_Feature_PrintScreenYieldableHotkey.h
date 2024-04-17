enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_PrintScreenYieldableHotkey
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy926;
    /* 0x0000 */ const char ___dummy922;
    /* 0x0000 */ const char ___dummy923;
    /* 0x0000 */ const char ___dummy924;
    /* 0x0000 */ const char ___dummy925;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_PrintScreenYieldableHotkey, *P_WilFeatureTraits_Feature_PrintScreenYieldableHotkey; /* size: 0x0001 */

