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

typedef struct __WilFeatureTraits_Feature_ID48897491
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy481;
    /* 0x0000 */ const char ___dummy471;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy472;
    /* 0x0000 */ const char ___dummy473;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy474;
    /* 0x0000 */ const char ___dummy475;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy476;
    /* 0x0000 */ const char ___dummy477;
    /* 0x0000 */ const char ___dummy478;
    /* 0x0000 */ const char ___dummy479;
    /* 0x0000 */ const char ___dummy480;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ID48897491, *P_WilFeatureTraits_Feature_ID48897491; /* size: 0x0001 */

