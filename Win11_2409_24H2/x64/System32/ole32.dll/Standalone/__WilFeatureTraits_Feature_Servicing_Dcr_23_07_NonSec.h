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

typedef struct __WilFeatureTraits_Feature_Servicing_Dcr_23_07_NonSec
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy91;
    /* 0x0000 */ const char ___dummy85;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy86;
    /* 0x0000 */ const char ___dummy87;
    /* 0x0000 */ const char ___dummy88;
    /* 0x0000 */ const char ___dummy89;
    /* 0x0000 */ const char ___dummy90;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_Servicing_Dcr_23_07_NonSec, *P_WilFeatureTraits_Feature_Servicing_Dcr_23_07_NonSec; /* size: 0x0001 */

