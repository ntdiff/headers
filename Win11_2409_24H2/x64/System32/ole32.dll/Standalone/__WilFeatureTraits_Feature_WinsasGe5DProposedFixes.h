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

typedef struct __WilFeatureTraits_Feature_WinsasGe5DProposedFixes
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy2119;
    /* 0x0000 */ const char ___dummy2113;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy2114;
    /* 0x0000 */ const char ___dummy2115;
    /* 0x0000 */ const char ___dummy2116;
    /* 0x0000 */ const char ___dummy2117;
    /* 0x0000 */ const char ___dummy2118;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_WinsasGe5DProposedFixes, *P_WilFeatureTraits_Feature_WinsasGe5DProposedFixes; /* size: 0x0001 */

