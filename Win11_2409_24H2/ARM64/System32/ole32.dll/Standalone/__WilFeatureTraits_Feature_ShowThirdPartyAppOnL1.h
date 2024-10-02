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

typedef struct __WilFeatureTraits_Feature_ShowThirdPartyAppOnL1
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy680;
    /* 0x0000 */ const char ___dummy670;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy671;
    /* 0x0000 */ const char ___dummy672;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy673;
    /* 0x0000 */ const char ___dummy674;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy675;
    /* 0x0000 */ const char ___dummy676;
    /* 0x0000 */ const char ___dummy677;
    /* 0x0000 */ const char ___dummy678;
    /* 0x0000 */ const char ___dummy679;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ShowThirdPartyAppOnL1, *P_WilFeatureTraits_Feature_ShowThirdPartyAppOnL1; /* size: 0x0001 */

