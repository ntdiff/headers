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

typedef struct __WilFeatureTraits_Feature_CopilotNudges_ShowMiniMenuOnCopy
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1864;
    /* 0x0000 */ const char ___dummy1858;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1859;
    /* 0x0000 */ const char ___dummy1860;
    /* 0x0000 */ const char ___dummy1861;
    /* 0x0000 */ const char ___dummy1862;
    /* 0x0000 */ const char ___dummy1863;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CopilotNudges_ShowMiniMenuOnCopy, *P_WilFeatureTraits_Feature_CopilotNudges_ShowMiniMenuOnCopy; /* size: 0x0001 */

