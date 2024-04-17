enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_AADPinResetV2
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy190;
    /* 0x0000 */ const char ___dummy184;
    /* 0x0000 */ const char ___dummy185;
    /* 0x0000 */ const char ___dummy186;
    /* 0x0000 */ const char ___dummy187;
    /* 0x0000 */ const char ___dummy188;
    /* 0x0000 */ const char ___dummy189;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_AADPinResetV2, *P_WilFeatureTraits_Feature_AADPinResetV2; /* size: 0x0001 */

