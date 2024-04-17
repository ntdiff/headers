enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPWifiDirectTransportUpgrader
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy119;
    /* 0x0000 */ const char ___dummy113;
    /* 0x0000 */ const char ___dummy114;
    /* 0x0000 */ const char ___dummy115;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy116;
    /* 0x0000 */ const char ___dummy117;
    /* 0x0000 */ const char ___dummy118;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPWifiDirectTransportUpgrader, *P_WilFeatureTraits_Feature_CDPWifiDirectTransportUpgrader; /* size: 0x0001 */

