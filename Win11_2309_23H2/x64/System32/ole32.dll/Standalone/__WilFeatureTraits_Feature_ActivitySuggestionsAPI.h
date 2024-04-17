enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ActivitySuggestionsAPI
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy82;
    /* 0x0000 */ const char ___dummy78;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy79;
    /* 0x0000 */ const char ___dummy80;
    /* 0x0000 */ const char ___dummy81;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ActivitySuggestionsAPI, *P_WilFeatureTraits_Feature_ActivitySuggestionsAPI; /* size: 0x0001 */

