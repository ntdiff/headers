enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_UserActivityOnDemandRetrieval
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy124;
    /* 0x0000 */ const char ___dummy120;
    /* 0x0000 */ const char ___dummy121;
    /* 0x0000 */ const char ___dummy122;
    /* 0x0000 */ const char ___dummy123;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_UserActivityOnDemandRetrieval, *P_WilFeatureTraits_Feature_UserActivityOnDemandRetrieval; /* size: 0x0001 */

