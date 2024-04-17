enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_BIPAAPIs
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy139;
    /* 0x0000 */ const char ___dummy135;
    /* 0x0000 */ const char ___dummy136;
    /* 0x0000 */ const char ___dummy137;
    /* 0x0000 */ const char ___dummy138;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_BIPAAPIs, *P_WilFeatureTraits_Feature_BIPAAPIs; /* size: 0x0001 */

