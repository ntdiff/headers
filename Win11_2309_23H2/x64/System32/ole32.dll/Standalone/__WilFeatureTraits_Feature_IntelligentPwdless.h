enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_IntelligentPwdless
{
  None = 0,
  AuditMode = 1,
};

enum wil_VariantPayloadType
{
  wil_VariantPayloadType_None = 0,
  wil_VariantPayloadType_Fixed = 1,
};

typedef struct __WilFeatureTraits_Feature_IntelligentPwdless
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy176;
    /* 0x0000 */ const char ___dummy170;
    /* 0x0000 */ enum Variant_IntelligentPwdless defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy171;
    /* 0x0000 */ const char ___dummy172;
    /* 0x0000 */ const char ___dummy173;
    /* 0x0000 */ const char ___dummy174;
    /* 0x0000 */ const char ___dummy175;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_IntelligentPwdless, *P_WilFeatureTraits_Feature_IntelligentPwdless; /* size: 0x0001 */

