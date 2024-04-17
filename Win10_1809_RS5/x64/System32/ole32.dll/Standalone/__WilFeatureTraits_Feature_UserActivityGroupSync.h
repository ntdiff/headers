enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_UserActivityGroupSync
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy129;
    /* 0x0000 */ const char ___dummy125;
    /* 0x0000 */ const char ___dummy126;
    /* 0x0000 */ const char ___dummy127;
    /* 0x0000 */ const char ___dummy128;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_UserActivityGroupSync, *P_WilFeatureTraits_Feature_UserActivityGroupSync; /* size: 0x0001 */

