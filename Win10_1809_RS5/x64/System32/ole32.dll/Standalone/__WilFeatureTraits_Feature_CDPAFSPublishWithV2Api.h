enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPAFSPublishWithV2Api
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy41;
    /* 0x0000 */ const char ___dummy37;
    /* 0x0000 */ const char ___dummy38;
    /* 0x0000 */ const char ___dummy39;
    /* 0x0000 */ const char ___dummy40;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPAFSPublishWithV2Api, *P_WilFeatureTraits_Feature_CDPAFSPublishWithV2Api; /* size: 0x0001 */

