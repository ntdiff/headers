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

typedef struct __WilFeatureTraits_Feature_InlineCompose_Dispatcher_Watson_Fix
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1136;
    /* 0x0000 */ const char ___dummy1130;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1131;
    /* 0x0000 */ const char ___dummy1132;
    /* 0x0000 */ const char ___dummy1133;
    /* 0x0000 */ const char ___dummy1134;
    /* 0x0000 */ const char ___dummy1135;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_InlineCompose_Dispatcher_Watson_Fix, *P_WilFeatureTraits_Feature_InlineCompose_Dispatcher_Watson_Fix; /* size: 0x0001 */

