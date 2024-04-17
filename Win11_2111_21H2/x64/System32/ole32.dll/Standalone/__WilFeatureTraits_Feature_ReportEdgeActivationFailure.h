enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ReportEdgeActivationFailure
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy154;
    /* 0x0000 */ const char ___dummy142;
    /* 0x0000 */ const char ___dummy143;
    /* 0x0000 */ const char ___dummy144;
    /* 0x0000 */ const char ___dummy145;
    /* 0x0000 */ const char ___dummy146;
    /* 0x0000 */ const char ___dummy147;
    /* 0x0000 */ const char ___dummy148;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy149;
    /* 0x0000 */ const char ___dummy150;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy151;
    /* 0x0000 */ const char ___dummy152;
    /* 0x0000 */ const char ___dummy153;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ReportEdgeActivationFailure, *P_WilFeatureTraits_Feature_ReportEdgeActivationFailure; /* size: 0x0001 */

