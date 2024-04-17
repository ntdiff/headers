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
    /* 0x0000 */ const char ___dummy48;
    /* 0x0000 */ const char ___dummy40;
    /* 0x0000 */ const char ___dummy41;
    /* 0x0000 */ const char ___dummy42;
    /* 0x0000 */ const char ___dummy43;
    /* 0x0000 */ const char ___dummy44;
    /* 0x0000 */ const char ___dummy45;
    /* 0x0000 */ const char ___dummy46;
    /* 0x0000 */ const char ___dummy47;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPWifiDirectTransportUpgrader, *P_WilFeatureTraits_Feature_CDPWifiDirectTransportUpgrader; /* size: 0x0001 */

