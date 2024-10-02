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

typedef struct __WilFeatureTraits_Feature_LockMultiAdaptiveCardStatus_2DWidgetsAppCompat
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy2055;
    /* 0x0000 */ const char ___dummy2049;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy2050;
    /* 0x0000 */ const char ___dummy2051;
    /* 0x0000 */ const char ___dummy2052;
    /* 0x0000 */ const char ___dummy2053;
    /* 0x0000 */ const char ___dummy2054;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockMultiAdaptiveCardStatus_2DWidgetsAppCompat, *P_WilFeatureTraits_Feature_LockMultiAdaptiveCardStatus_2DWidgetsAppCompat; /* size: 0x0001 */

