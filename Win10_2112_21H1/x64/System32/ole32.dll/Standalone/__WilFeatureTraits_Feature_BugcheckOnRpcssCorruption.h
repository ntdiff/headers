enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_BugcheckOnRpcssCorruption
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy86;
    /* 0x0000 */ const char ___dummy78;
    /* 0x0000 */ const char ___dummy79;
    /* 0x0000 */ const char ___dummy80;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy81;
    /* 0x0000 */ const char ___dummy82;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy83;
    /* 0x0000 */ const char ___dummy84;
    /* 0x0000 */ const char ___dummy85;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_BugcheckOnRpcssCorruption, *P_WilFeatureTraits_Feature_BugcheckOnRpcssCorruption; /* size: 0x0001 */

