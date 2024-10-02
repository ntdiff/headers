enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_CopilotNudges
{
  None = 0,
  Beacon = 1,
  Gleam = 2,
};

enum wil_VariantPayloadType
{
  wil_VariantPayloadType_None = 0,
  wil_VariantPayloadType_Fixed = 1,
};

enum wil::FeatureChangeTime
{
  OnRead = 0,
  OnReload = 1,
  OnReboot = 3,
};

typedef struct __WilFeatureTraits_Feature_CopilotNudges
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1843;
    /* 0x0000 */ const char ___dummy1835;
    /* 0x0000 */ enum Variant_CopilotNudges defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy1836;
    /* 0x0000 */ const char ___dummy1837;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1838;
    /* 0x0000 */ const char ___dummy1839;
    /* 0x0000 */ const char ___dummy1840;
    /* 0x0000 */ const char ___dummy1841;
    /* 0x0000 */ const char ___dummy1842;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CopilotNudges, *P_WilFeatureTraits_Feature_CopilotNudges; /* size: 0x0001 */

