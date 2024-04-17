enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_May23_WinSEPerf_AADJoin_RestartAndSignInScenario
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy397;
    /* 0x0000 */ const char ___dummy393;
    /* 0x0000 */ const char ___dummy394;
    /* 0x0000 */ const char ___dummy395;
    /* 0x0000 */ const char ___dummy396;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_May23_WinSEPerf_AADJoin_RestartAndSignInScenario, *P_WilFeatureTraits_Feature_May23_WinSEPerf_AADJoin_RestartAndSignInScenario; /* size: 0x0001 */

