enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_FederatedSignInSharedCartSupport
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy392;
    /* 0x0000 */ const char ___dummy388;
    /* 0x0000 */ const char ___dummy389;
    /* 0x0000 */ const char ___dummy390;
    /* 0x0000 */ const char ___dummy391;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_FederatedSignInSharedCartSupport, *P_WilFeatureTraits_Feature_FederatedSignInSharedCartSupport; /* size: 0x0001 */

