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

typedef struct __WilFeatureTraits_Feature_Text_346
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1190;
    /* 0x0000 */ const char ___dummy1182;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1183;
    /* 0x0000 */ const char ___dummy1184;
    /* 0x0000 */ const char ___dummy1185;
    /* 0x0000 */ const char ___dummy1186;
    /* 0x0000 */ const char ___dummy1187;
    /* 0x0000 */ const char ___dummy1188;
    /* 0x0000 */ const char ___dummy1189;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Text_346, *P_WilFeatureTraits_Feature_Text_346; /* size: 0x0001 */

