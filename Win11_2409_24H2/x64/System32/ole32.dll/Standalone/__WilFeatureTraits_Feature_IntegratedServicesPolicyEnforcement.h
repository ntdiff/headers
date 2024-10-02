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

typedef struct __WilFeatureTraits_Feature_IntegratedServicesPolicyEnforcement
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1778;
    /* 0x0000 */ const char ___dummy1772;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1773;
    /* 0x0000 */ const char ___dummy1774;
    /* 0x0000 */ const char ___dummy1775;
    /* 0x0000 */ const char ___dummy1776;
    /* 0x0000 */ const char ___dummy1777;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_IntegratedServicesPolicyEnforcement, *P_WilFeatureTraits_Feature_IntegratedServicesPolicyEnforcement; /* size: 0x0001 */

