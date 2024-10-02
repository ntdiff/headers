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

typedef struct __WilFeatureTraits_Feature_PhaseBSystemTrayReliabilityUpdates
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1422;
    /* 0x0000 */ const char ___dummy1416;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1417;
    /* 0x0000 */ const char ___dummy1418;
    /* 0x0000 */ const char ___dummy1419;
    /* 0x0000 */ const char ___dummy1420;
    /* 0x0000 */ const char ___dummy1421;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_PhaseBSystemTrayReliabilityUpdates, *P_WilFeatureTraits_Feature_PhaseBSystemTrayReliabilityUpdates; /* size: 0x0001 */

