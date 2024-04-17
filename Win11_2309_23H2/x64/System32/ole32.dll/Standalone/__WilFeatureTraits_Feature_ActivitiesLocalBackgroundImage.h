enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ActivitiesLocalBackgroundImage
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy806;
    /* 0x0000 */ const char ___dummy800;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy801;
    /* 0x0000 */ const char ___dummy802;
    /* 0x0000 */ const char ___dummy803;
    /* 0x0000 */ const char ___dummy804;
    /* 0x0000 */ const char ___dummy805;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ActivitiesLocalBackgroundImage, *P_WilFeatureTraits_Feature_ActivitiesLocalBackgroundImage; /* size: 0x0001 */

