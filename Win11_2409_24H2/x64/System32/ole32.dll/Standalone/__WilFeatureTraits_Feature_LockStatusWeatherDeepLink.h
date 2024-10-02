enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_LockStatusWeatherDeepLink
{
  None = 0,
  EnablePayload = 1,
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

typedef struct __WilFeatureTraits_Feature_LockStatusWeatherDeepLink
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1979;
    /* 0x0000 */ const char ___dummy1971;
    /* 0x0000 */ enum Variant_LockStatusWeatherDeepLink defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy1972;
    /* 0x0000 */ const char ___dummy1973;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1974;
    /* 0x0000 */ const char ___dummy1975;
    /* 0x0000 */ const char ___dummy1976;
    /* 0x0000 */ const char ___dummy1977;
    /* 0x0000 */ const char ___dummy1978;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockStatusWeatherDeepLink, *P_WilFeatureTraits_Feature_LockStatusWeatherDeepLink; /* size: 0x0001 */

