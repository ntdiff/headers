enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPLogLevelVerbose
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy8;
    /* 0x0000 */ const char ___dummy0;
    /* 0x0000 */ const char ___dummy1;
    /* 0x0000 */ const char ___dummy2;
    /* 0x0000 */ const char ___dummy3;
    /* 0x0000 */ const char ___dummy4;
    /* 0x0000 */ const char ___dummy5;
    /* 0x0000 */ const char ___dummy6;
    /* 0x0000 */ const char ___dummy7;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPLogLevelVerbose, *P_WilFeatureTraits_Feature_CDPLogLevelVerbose; /* size: 0x0001 */

