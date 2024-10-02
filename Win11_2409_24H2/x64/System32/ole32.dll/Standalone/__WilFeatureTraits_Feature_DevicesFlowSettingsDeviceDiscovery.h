enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_DevicesFlowSettingsDeviceDiscovery
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1540;
    /* 0x0000 */ const char ___dummy1536;
    /* 0x0000 */ const char ___dummy1537;
    /* 0x0000 */ const char ___dummy1538;
    /* 0x0000 */ const char ___dummy1539;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_DevicesFlowSettingsDeviceDiscovery, *P_WilFeatureTraits_Feature_DevicesFlowSettingsDeviceDiscovery; /* size: 0x0001 */

