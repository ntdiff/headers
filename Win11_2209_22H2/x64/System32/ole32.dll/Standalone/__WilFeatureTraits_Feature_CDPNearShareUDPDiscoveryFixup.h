enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPNearShareUDPDiscoveryFixup
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy22;
    /* 0x0000 */ const char ___dummy18;
    /* 0x0000 */ const char ___dummy19;
    /* 0x0000 */ const char ___dummy20;
    /* 0x0000 */ const char ___dummy21;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPNearShareUDPDiscoveryFixup, *P_WilFeatureTraits_Feature_CDPNearShareUDPDiscoveryFixup; /* size: 0x0001 */

