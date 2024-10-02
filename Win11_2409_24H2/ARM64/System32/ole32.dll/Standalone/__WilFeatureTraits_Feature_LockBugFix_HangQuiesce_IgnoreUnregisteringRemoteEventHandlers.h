enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_LockBugFix_HangQuiesce_IgnoreUnregisteringRemoteEventHandlers
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1231;
    /* 0x0000 */ const char ___dummy1227;
    /* 0x0000 */ const char ___dummy1228;
    /* 0x0000 */ const char ___dummy1229;
    /* 0x0000 */ const char ___dummy1230;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockBugFix_HangQuiesce_IgnoreUnregisteringRemoteEventHandlers, *P_WilFeatureTraits_Feature_LockBugFix_HangQuiesce_IgnoreUnregisteringRemoteEventHandlers; /* size: 0x0001 */

