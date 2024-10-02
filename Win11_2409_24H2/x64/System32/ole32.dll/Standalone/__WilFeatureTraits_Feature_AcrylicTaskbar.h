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

typedef struct __WilFeatureTraits_Feature_AcrylicTaskbar
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1295;
    /* 0x0000 */ const char ___dummy1289;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy1290;
    /* 0x0000 */ const char ___dummy1291;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1292;
    /* 0x0000 */ const char ___dummy1293;
    /* 0x0000 */ const char ___dummy1294;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_AcrylicTaskbar, *P_WilFeatureTraits_Feature_AcrylicTaskbar; /* size: 0x0001 */

