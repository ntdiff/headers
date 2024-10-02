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

typedef struct __WilFeatureTraits_Feature_CopilotNudges_OnSelectedEditableText
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1878;
    /* 0x0000 */ const char ___dummy1872;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1873;
    /* 0x0000 */ const char ___dummy1874;
    /* 0x0000 */ const char ___dummy1875;
    /* 0x0000 */ const char ___dummy1876;
    /* 0x0000 */ const char ___dummy1877;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CopilotNudges_OnSelectedEditableText, *P_WilFeatureTraits_Feature_CopilotNudges_OnSelectedEditableText; /* size: 0x0001 */

