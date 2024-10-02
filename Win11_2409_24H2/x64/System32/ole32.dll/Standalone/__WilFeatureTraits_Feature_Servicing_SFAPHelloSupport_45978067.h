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

typedef struct __WilFeatureTraits_Feature_Servicing_SFAPHelloSupport_45978067
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy135;
    /* 0x0000 */ const char ___dummy129;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy130;
    /* 0x0000 */ const char ___dummy131;
    /* 0x0000 */ const char ___dummy132;
    /* 0x0000 */ const char ___dummy133;
    /* 0x0000 */ const char ___dummy134;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Servicing_SFAPHelloSupport_45978067, *P_WilFeatureTraits_Feature_Servicing_SFAPHelloSupport_45978067; /* size: 0x0001 */

