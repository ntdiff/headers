enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_LSTTest
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1066;
    /* 0x0000 */ const char ___dummy1058;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy1059;
    /* 0x0000 */ const char ___dummy1060;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy1061;
    /* 0x0000 */ const char ___dummy1062;
    /* 0x0000 */ const char ___dummy1063;
    /* 0x0000 */ const char ___dummy1064;
    /* 0x0000 */ const char ___dummy1065;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LSTTest, *P_WilFeatureTraits_Feature_LSTTest; /* size: 0x0001 */

