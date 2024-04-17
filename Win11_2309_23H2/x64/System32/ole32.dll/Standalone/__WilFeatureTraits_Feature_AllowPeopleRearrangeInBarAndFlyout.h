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

typedef struct __WilFeatureTraits_Feature_AllowPeopleRearrangeInBarAndFlyout
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy633;
    /* 0x0000 */ const char ___dummy625;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy626;
    /* 0x0000 */ const char ___dummy627;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy628;
    /* 0x0000 */ const char ___dummy629;
    /* 0x0000 */ const char ___dummy630;
    /* 0x0000 */ const char ___dummy631;
    /* 0x0000 */ const char ___dummy632;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_AllowPeopleRearrangeInBarAndFlyout, *P_WilFeatureTraits_Feature_AllowPeopleRearrangeInBarAndFlyout; /* size: 0x0001 */

