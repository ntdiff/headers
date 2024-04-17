enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_YourPhoneDesktopShortcut
{
  None = 0,
  CreateOnNextLogon = 1,
  Pin = 2,
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

typedef struct __WilFeatureTraits_Feature_YourPhoneDesktopShortcut
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy783;
    /* 0x0000 */ const char ___dummy775;
    /* 0x0000 */ enum Variant_YourPhoneDesktopShortcut defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy776;
    /* 0x0000 */ const char ___dummy777;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy778;
    /* 0x0000 */ const char ___dummy779;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy780;
    /* 0x0000 */ const char ___dummy781;
    /* 0x0000 */ const char ___dummy782;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_YourPhoneDesktopShortcut, *P_WilFeatureTraits_Feature_YourPhoneDesktopShortcut; /* size: 0x0001 */

