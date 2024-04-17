enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_AppReadinessBlockLogonForCriticalAppsOnlyPolicy
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy936;
    /* 0x0000 */ const char ___dummy932;
    /* 0x0000 */ const char ___dummy933;
    /* 0x0000 */ const char ___dummy934;
    /* 0x0000 */ const char ___dummy935;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_AppReadinessBlockLogonForCriticalAppsOnlyPolicy, *P_WilFeatureTraits_Feature_AppReadinessBlockLogonForCriticalAppsOnlyPolicy; /* size: 0x0001 */

