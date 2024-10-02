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

typedef struct __WilFeatureTraits_Feature_PeopleBar
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1462;
    /* 0x0000 */ const char ___dummy1456;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy1457;
    /* 0x0000 */ const char ___dummy1458;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1459;
    /* 0x0000 */ const char ___dummy1460;
    /* 0x0000 */ const char ___dummy1461;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_PeopleBar, *P_WilFeatureTraits_Feature_PeopleBar; /* size: 0x0001 */

