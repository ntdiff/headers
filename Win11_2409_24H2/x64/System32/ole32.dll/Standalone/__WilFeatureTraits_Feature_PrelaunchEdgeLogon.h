enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_PrelaunchEdgeLogon
{
  None = 0,
  PrelaunchEdgeLogon = 1,
};

enum wil_VariantPayloadType
{
  wil_VariantPayloadType_None = 0,
  wil_VariantPayloadType_Fixed = 1,
};

typedef struct __WilFeatureTraits_Feature_PrelaunchEdgeLogon
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1667;
    /* 0x0000 */ const char ___dummy1661;
    /* 0x0000 */ enum Variant_PrelaunchEdgeLogon defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy1662;
    /* 0x0000 */ const char ___dummy1663;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy1664;
    /* 0x0000 */ const char ___dummy1665;
    /* 0x0000 */ const char ___dummy1666;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_PrelaunchEdgeLogon, *P_WilFeatureTraits_Feature_PrelaunchEdgeLogon; /* size: 0x0001 */

