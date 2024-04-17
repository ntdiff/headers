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
    /* 0x0000 */ const char ___dummy991;
    /* 0x0000 */ const char ___dummy987;
    /* 0x0000 */ const char ___dummy988;
    /* 0x0000 */ const char ___dummy989;
    /* 0x0000 */ const char ___dummy990;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPWifiDirectTransportUpgrader, *P_WilFeatureTraits_Feature_CDPWifiDirectTransportUpgrader; /* size: 0x0001 */

