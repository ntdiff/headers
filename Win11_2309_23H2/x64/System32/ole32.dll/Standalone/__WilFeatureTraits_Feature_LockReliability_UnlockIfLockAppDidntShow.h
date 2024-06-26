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
    /* 0x0000 */ const char ___dummy417;
    /* 0x0000 */ const char ___dummy413;
    /* 0x0000 */ const char ___dummy414;
    /* 0x0000 */ const char ___dummy415;
    /* 0x0000 */ const char ___dummy416;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockReliability_UnlockIfLockAppDidntShow, *P_WilFeatureTraits_Feature_LockReliability_UnlockIfLockAppDidntShow; /* size: 0x0001 */

