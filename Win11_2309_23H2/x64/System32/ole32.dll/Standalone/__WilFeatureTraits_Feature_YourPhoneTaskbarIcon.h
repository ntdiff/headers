enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_YourPhoneTaskbarIcon
{
  None = 0,
  CreateOnNextLogon = 1,
  Pin = 2,
  NoRegionRestriction = 3,
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

typedef struct __WilFeatureTraits_Feature_YourPhoneTaskbarIcon
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy792;
    /* 0x0000 */ const char ___dummy784;
    /* 0x0000 */ enum Variant_YourPhoneTaskbarIcon defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy785;
    /* 0x0000 */ const char ___dummy786;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy787;
    /* 0x0000 */ const char ___dummy788;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy789;
    /* 0x0000 */ const char ___dummy790;
    /* 0x0000 */ const char ___dummy791;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_YourPhoneTaskbarIcon, *P_WilFeatureTraits_Feature_YourPhoneTaskbarIcon; /* size: 0x0001 */

