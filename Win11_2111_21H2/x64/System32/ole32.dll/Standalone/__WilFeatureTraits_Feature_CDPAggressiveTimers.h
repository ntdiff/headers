enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPAggressiveTimers
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy21;
    /* 0x0000 */ const char ___dummy9;
    /* 0x0000 */ const char ___dummy10;
    /* 0x0000 */ const char ___dummy11;
    /* 0x0000 */ const char ___dummy12;
    /* 0x0000 */ const char ___dummy13;
    /* 0x0000 */ const char ___dummy14;
    /* 0x0000 */ const char ___dummy15;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy16;
    /* 0x0000 */ const char ___dummy17;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy18;
    /* 0x0000 */ const char ___dummy19;
    /* 0x0000 */ const char ___dummy20;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPAggressiveTimers, *P_WilFeatureTraits_Feature_CDPAggressiveTimers; /* size: 0x0001 */

