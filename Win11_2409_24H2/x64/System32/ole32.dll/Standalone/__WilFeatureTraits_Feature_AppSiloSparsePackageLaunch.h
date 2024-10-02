enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum wil::FeatureChangeTime
{
  OnRead = 0,
  OnReload = 1,
  OnReboot = 3,
};

typedef struct __WilFeatureTraits_Feature_AppSiloSparsePackageLaunch
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy470;
    /* 0x0000 */ const char ___dummy464;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy465;
    /* 0x0000 */ const char ___dummy466;
    /* 0x0000 */ const char ___dummy467;
    /* 0x0000 */ const char ___dummy468;
    /* 0x0000 */ const char ___dummy469;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_AppSiloSparsePackageLaunch, *P_WilFeatureTraits_Feature_AppSiloSparsePackageLaunch; /* size: 0x0001 */

