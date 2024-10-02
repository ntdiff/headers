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

typedef struct __WilFeatureTraits_Feature_LockWidgetCanvas
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1245;
    /* 0x0000 */ const char ___dummy1237;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1238;
    /* 0x0000 */ const char ___dummy1239;
    /* 0x0000 */ const char ___dummy1240;
    /* 0x0000 */ const char ___dummy1241;
    /* 0x0000 */ const char ___dummy1242;
    /* 0x0000 */ const char ___dummy1243;
    /* 0x0000 */ const char ___dummy1244;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockWidgetCanvas, *P_WilFeatureTraits_Feature_LockWidgetCanvas; /* size: 0x0001 */

