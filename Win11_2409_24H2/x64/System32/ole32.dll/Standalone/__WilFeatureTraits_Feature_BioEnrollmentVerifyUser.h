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

typedef struct __WilFeatureTraits_Feature_BioEnrollmentVerifyUser
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1735;
    /* 0x0000 */ const char ___dummy1727;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1728;
    /* 0x0000 */ const char ___dummy1729;
    /* 0x0000 */ const char ___dummy1730;
    /* 0x0000 */ const char ___dummy1731;
    /* 0x0000 */ const char ___dummy1732;
    /* 0x0000 */ const char ___dummy1733;
    /* 0x0000 */ const char ___dummy1734;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_BioEnrollmentVerifyUser, *P_WilFeatureTraits_Feature_BioEnrollmentVerifyUser; /* size: 0x0001 */

