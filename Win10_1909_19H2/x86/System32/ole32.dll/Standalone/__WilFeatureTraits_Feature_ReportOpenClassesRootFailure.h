enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ReportOpenClassesRootFailure
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy113;
    /* 0x0000 */ const char ___dummy105;
    /* 0x0000 */ const char ___dummy106;
    /* 0x0000 */ const char ___dummy107;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy108;
    /* 0x0000 */ const char ___dummy109;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy110;
    /* 0x0000 */ const char ___dummy111;
    /* 0x0000 */ const char ___dummy112;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ReportOpenClassesRootFailure, *P_WilFeatureTraits_Feature_ReportOpenClassesRootFailure; /* size: 0x0001 */

