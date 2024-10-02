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

typedef struct __WilFeatureTraits_Feature_Standalone_24_12_NonSec
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy246;
    /* 0x0000 */ const char ___dummy238;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy239;
    /* 0x0000 */ const char ___dummy240;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy241;
    /* 0x0000 */ const char ___dummy242;
    /* 0x0000 */ const char ___dummy243;
    /* 0x0000 */ const char ___dummy244;
    /* 0x0000 */ const char ___dummy245;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Standalone_24_12_NonSec, *P_WilFeatureTraits_Feature_Standalone_24_12_NonSec; /* size: 0x0001 */

