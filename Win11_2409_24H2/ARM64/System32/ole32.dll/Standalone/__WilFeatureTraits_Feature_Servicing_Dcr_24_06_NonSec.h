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

typedef struct __WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy168;
    /* 0x0000 */ const char ___dummy162;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy163;
    /* 0x0000 */ const char ___dummy164;
    /* 0x0000 */ const char ___dummy165;
    /* 0x0000 */ const char ___dummy166;
    /* 0x0000 */ const char ___dummy167;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec, *P_WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec; /* size: 0x0001 */

