enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_UploadUserActivity
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy825;
    /* 0x0000 */ const char ___dummy821;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy822;
    /* 0x0000 */ const char ___dummy823;
    /* 0x0000 */ const char ___dummy824;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_UploadUserActivity, *P_WilFeatureTraits_Feature_UploadUserActivity; /* size: 0x0001 */

