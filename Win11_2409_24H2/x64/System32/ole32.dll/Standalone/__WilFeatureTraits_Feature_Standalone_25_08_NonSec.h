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

typedef struct __WilFeatureTraits_Feature_Standalone_25_08_NonSec
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy318;
    /* 0x0000 */ const char ___dummy310;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy311;
    /* 0x0000 */ const char ___dummy312;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy313;
    /* 0x0000 */ const char ___dummy314;
    /* 0x0000 */ const char ___dummy315;
    /* 0x0000 */ const char ___dummy316;
    /* 0x0000 */ const char ___dummy317;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Standalone_25_08_NonSec, *P_WilFeatureTraits_Feature_Standalone_25_08_NonSec; /* size: 0x0001 */

