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

typedef struct __WilFeatureTraits_Feature_PrintScreenYieldableHotkey
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1749;
    /* 0x0000 */ const char ___dummy1743;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1744;
    /* 0x0000 */ const char ___dummy1745;
    /* 0x0000 */ const char ___dummy1746;
    /* 0x0000 */ const char ___dummy1747;
    /* 0x0000 */ const char ___dummy1748;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_PrintScreenYieldableHotkey, *P_WilFeatureTraits_Feature_PrintScreenYieldableHotkey; /* size: 0x0001 */

