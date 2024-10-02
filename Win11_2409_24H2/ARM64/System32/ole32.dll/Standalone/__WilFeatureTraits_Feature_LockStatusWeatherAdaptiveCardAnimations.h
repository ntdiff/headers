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

typedef struct __WilFeatureTraits_Feature_LockStatusWeatherAdaptiveCardAnimations
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy2019;
    /* 0x0000 */ const char ___dummy2013;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy2014;
    /* 0x0000 */ const char ___dummy2015;
    /* 0x0000 */ const char ___dummy2016;
    /* 0x0000 */ const char ___dummy2017;
    /* 0x0000 */ const char ___dummy2018;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockStatusWeatherAdaptiveCardAnimations, *P_WilFeatureTraits_Feature_LockStatusWeatherAdaptiveCardAnimations; /* size: 0x0001 */

