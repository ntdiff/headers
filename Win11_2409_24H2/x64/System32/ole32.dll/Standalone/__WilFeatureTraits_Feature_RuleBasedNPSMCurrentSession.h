enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_RuleBasedNPSMCurrentSession
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1150;
    /* 0x0000 */ const char ___dummy1146;
    /* 0x0000 */ const char ___dummy1147;
    /* 0x0000 */ const char ___dummy1148;
    /* 0x0000 */ const char ___dummy1149;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_RuleBasedNPSMCurrentSession, *P_WilFeatureTraits_Feature_RuleBasedNPSMCurrentSession; /* size: 0x0001 */

