enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_UXExperiment
{
  None = 0,
  FlavorA = 1,
  FlavorB = 2,
  FlavorC = 3,
  FlavorD = 4,
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

typedef struct __WilFeatureTraits_Feature_UXExperiment
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1145;
    /* 0x0000 */ const char ___dummy1137;
    /* 0x0000 */ enum Variant_UXExperiment defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy1138;
    /* 0x0000 */ const char ___dummy1139;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1140;
    /* 0x0000 */ const char ___dummy1141;
    /* 0x0000 */ const char ___dummy1142;
    /* 0x0000 */ const char ___dummy1143;
    /* 0x0000 */ const char ___dummy1144;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_UXExperiment, *P_WilFeatureTraits_Feature_UXExperiment; /* size: 0x0001 */

