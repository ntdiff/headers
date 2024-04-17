enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_NgcInVsmKeyType
{
  None = 0,
  SoftwareKeys = 1,
  TpmKeys = 2,
};

enum wil_VariantPayloadType
{
  wil_VariantPayloadType_None = 0,
  wil_VariantPayloadType_Fixed = 1,
};

typedef struct __WilFeatureTraits_Feature_NgcInVsmKeyType
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy105;
    /* 0x0000 */ const char ___dummy99;
    /* 0x0000 */ enum Variant_NgcInVsmKeyType defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy100;
    /* 0x0000 */ const char ___dummy101;
    /* 0x0000 */ const char ___dummy102;
    /* 0x0000 */ const char ___dummy103;
    /* 0x0000 */ const char ___dummy104;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_NgcInVsmKeyType, *P_WilFeatureTraits_Feature_NgcInVsmKeyType; /* size: 0x0001 */

