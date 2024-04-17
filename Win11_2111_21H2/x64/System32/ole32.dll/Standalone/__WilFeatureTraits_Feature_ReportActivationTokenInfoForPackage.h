enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ReportActivationTokenInfoForPackage
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy167;
    /* 0x0000 */ const char ___dummy155;
    /* 0x0000 */ const char ___dummy156;
    /* 0x0000 */ const char ___dummy157;
    /* 0x0000 */ const char ___dummy158;
    /* 0x0000 */ const char ___dummy159;
    /* 0x0000 */ const char ___dummy160;
    /* 0x0000 */ const char ___dummy161;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy162;
    /* 0x0000 */ const char ___dummy163;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy164;
    /* 0x0000 */ const char ___dummy165;
    /* 0x0000 */ const char ___dummy166;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ReportActivationTokenInfoForPackage, *P_WilFeatureTraits_Feature_ReportActivationTokenInfoForPackage; /* size: 0x0001 */

