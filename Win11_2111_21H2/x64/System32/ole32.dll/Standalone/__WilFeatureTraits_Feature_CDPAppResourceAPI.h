enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPAppResourceAPI
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy30;
    /* 0x0000 */ const char ___dummy22;
    /* 0x0000 */ const char ___dummy23;
    /* 0x0000 */ const char ___dummy24;
    /* 0x0000 */ const char ___dummy25;
    /* 0x0000 */ const char ___dummy26;
    /* 0x0000 */ const char ___dummy27;
    /* 0x0000 */ const char ___dummy28;
    /* 0x0000 */ const char ___dummy29;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPAppResourceAPI, *P_WilFeatureTraits_Feature_CDPAppResourceAPI; /* size: 0x0001 */

