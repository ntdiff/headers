enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum wil::FeatureChangeTime
{
  OnRead = 0,
  OnReload = 1,
  OnReboot = 3,
};

typedef struct __WilFeatureTraits_Feature_LockMultiAdaptiveCardStatus_MainPageXamlFixes
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy2062;
    /* 0x0000 */ const char ___dummy2056;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy2057;
    /* 0x0000 */ const char ___dummy2058;
    /* 0x0000 */ const char ___dummy2059;
    /* 0x0000 */ const char ___dummy2060;
    /* 0x0000 */ const char ___dummy2061;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockMultiAdaptiveCardStatus_MainPageXamlFixes, *P_WilFeatureTraits_Feature_LockMultiAdaptiveCardStatus_MainPageXamlFixes; /* size: 0x0001 */

