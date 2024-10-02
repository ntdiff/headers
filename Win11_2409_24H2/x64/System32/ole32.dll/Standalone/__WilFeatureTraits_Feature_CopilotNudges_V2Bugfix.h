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

typedef struct __WilFeatureTraits_Feature_CopilotNudges_V2Bugfix
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1871;
    /* 0x0000 */ const char ___dummy1865;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1866;
    /* 0x0000 */ const char ___dummy1867;
    /* 0x0000 */ const char ___dummy1868;
    /* 0x0000 */ const char ___dummy1869;
    /* 0x0000 */ const char ___dummy1870;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CopilotNudges_V2Bugfix, *P_WilFeatureTraits_Feature_CopilotNudges_V2Bugfix; /* size: 0x0001 */

