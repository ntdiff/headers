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

typedef struct __WilFeatureTraits_Feature_LockStatusWeatherDeepLinkReplaceCalendar
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1986;
    /* 0x0000 */ const char ___dummy1980;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1981;
    /* 0x0000 */ const char ___dummy1982;
    /* 0x0000 */ const char ___dummy1983;
    /* 0x0000 */ const char ___dummy1984;
    /* 0x0000 */ const char ___dummy1985;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockStatusWeatherDeepLinkReplaceCalendar, *P_WilFeatureTraits_Feature_LockStatusWeatherDeepLinkReplaceCalendar; /* size: 0x0001 */

