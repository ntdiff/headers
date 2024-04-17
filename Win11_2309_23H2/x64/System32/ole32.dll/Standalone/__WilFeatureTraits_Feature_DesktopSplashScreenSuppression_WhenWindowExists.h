enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy843;
    /* 0x0000 */ const char ___dummy839;
    /* 0x0000 */ const char ___dummy840;
    /* 0x0000 */ const char ___dummy841;
    /* 0x0000 */ const char ___dummy842;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists, *P_WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists; /* size: 0x0001 */

