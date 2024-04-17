enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ReportUnhealthyProcessFromRpcss
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy75;
    /* 0x0000 */ const char ___dummy69;
    /* 0x0000 */ const char ___dummy70;
    /* 0x0000 */ const char ___dummy71;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy72;
    /* 0x0000 */ const char ___dummy73;
    /* 0x0000 */ const char ___dummy74;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ReportUnhealthyProcessFromRpcss, *P_WilFeatureTraits_Feature_ReportUnhealthyProcessFromRpcss; /* size: 0x0001 */

