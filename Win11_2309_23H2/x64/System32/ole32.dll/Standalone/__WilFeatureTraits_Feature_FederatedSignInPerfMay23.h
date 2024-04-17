enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_FederatedSignInPerfMay23
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy387;
    /* 0x0000 */ const char ___dummy383;
    /* 0x0000 */ const char ___dummy384;
    /* 0x0000 */ const char ___dummy385;
    /* 0x0000 */ const char ___dummy386;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_FederatedSignInPerfMay23, *P_WilFeatureTraits_Feature_FederatedSignInPerfMay23; /* size: 0x0001 */

