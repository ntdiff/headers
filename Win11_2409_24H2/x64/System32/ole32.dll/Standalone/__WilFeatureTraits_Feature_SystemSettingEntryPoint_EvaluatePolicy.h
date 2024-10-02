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

typedef struct __WilFeatureTraits_Feature_SystemSettingEntryPoint_EvaluatePolicy
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1379;
    /* 0x0000 */ const char ___dummy1371;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1372;
    /* 0x0000 */ const char ___dummy1373;
    /* 0x0000 */ const char ___dummy1374;
    /* 0x0000 */ const char ___dummy1375;
    /* 0x0000 */ const char ___dummy1376;
    /* 0x0000 */ const char ___dummy1377;
    /* 0x0000 */ const char ___dummy1378;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_SystemSettingEntryPoint_EvaluatePolicy, *P_WilFeatureTraits_Feature_SystemSettingEntryPoint_EvaluatePolicy; /* size: 0x0001 */

