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

typedef struct __WilFeatureTraits_Feature_TaskbarIconLoadingReliability
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1307;
    /* 0x0000 */ const char ___dummy1301;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1302;
    /* 0x0000 */ const char ___dummy1303;
    /* 0x0000 */ const char ___dummy1304;
    /* 0x0000 */ const char ___dummy1305;
    /* 0x0000 */ const char ___dummy1306;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_TaskbarIconLoadingReliability, *P_WilFeatureTraits_Feature_TaskbarIconLoadingReliability; /* size: 0x0001 */

