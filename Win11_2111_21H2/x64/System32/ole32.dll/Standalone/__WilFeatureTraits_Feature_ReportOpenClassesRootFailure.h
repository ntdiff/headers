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
    /* 0x0000 */ const char ___dummy180;
    /* 0x0000 */ const char ___dummy168;
    /* 0x0000 */ const char ___dummy169;
    /* 0x0000 */ const char ___dummy170;
    /* 0x0000 */ const char ___dummy171;
    /* 0x0000 */ const char ___dummy172;
    /* 0x0000 */ const char ___dummy173;
    /* 0x0000 */ const char ___dummy174;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy175;
    /* 0x0000 */ const char ___dummy176;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy177;
    /* 0x0000 */ const char ___dummy178;
    /* 0x0000 */ const char ___dummy179;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ReportOpenClassesRootFailure, *P_WilFeatureTraits_Feature_ReportOpenClassesRootFailure; /* size: 0x0001 */

