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

typedef struct __WilFeatureTraits_Feature_Consent_Consumer_Win11_SPACE
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy531;
    /* 0x0000 */ const char ___dummy525;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy526;
    /* 0x0000 */ const char ___dummy527;
    /* 0x0000 */ const char ___dummy528;
    /* 0x0000 */ const char ___dummy529;
    /* 0x0000 */ const char ___dummy530;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Consent_Consumer_Win11_SPACE, *P_WilFeatureTraits_Feature_Consent_Consumer_Win11_SPACE; /* size: 0x0001 */

