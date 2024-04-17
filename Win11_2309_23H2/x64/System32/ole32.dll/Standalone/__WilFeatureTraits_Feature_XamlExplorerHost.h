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

typedef struct __WilFeatureTraits_Feature_XamlExplorerHost
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy668;
    /* 0x0000 */ const char ___dummy662;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy663;
    /* 0x0000 */ const char ___dummy664;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy665;
    /* 0x0000 */ const char ___dummy666;
    /* 0x0000 */ const char ___dummy667;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_XamlExplorerHost, *P_WilFeatureTraits_Feature_XamlExplorerHost; /* size: 0x0001 */

