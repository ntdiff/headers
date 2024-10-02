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

typedef struct __WilFeatureTraits_Feature_Servicing_RoundedImageSupport
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy2048;
    /* 0x0000 */ const char ___dummy2042;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy2043;
    /* 0x0000 */ const char ___dummy2044;
    /* 0x0000 */ const char ___dummy2045;
    /* 0x0000 */ const char ___dummy2046;
    /* 0x0000 */ const char ___dummy2047;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Servicing_RoundedImageSupport, *P_WilFeatureTraits_Feature_Servicing_RoundedImageSupport; /* size: 0x0001 */

