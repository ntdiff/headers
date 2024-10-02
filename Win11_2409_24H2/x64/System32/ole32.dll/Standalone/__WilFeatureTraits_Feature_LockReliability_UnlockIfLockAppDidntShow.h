enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_LockReliability_UnlockIfLockAppDidntShow
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1226;
    /* 0x0000 */ const char ___dummy1222;
    /* 0x0000 */ const char ___dummy1223;
    /* 0x0000 */ const char ___dummy1224;
    /* 0x0000 */ const char ___dummy1225;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockReliability_UnlockIfLockAppDidntShow, *P_WilFeatureTraits_Feature_LockReliability_UnlockIfLockAppDidntShow; /* size: 0x0001 */

