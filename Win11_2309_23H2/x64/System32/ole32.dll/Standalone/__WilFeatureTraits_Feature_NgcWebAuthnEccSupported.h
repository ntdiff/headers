enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_NgcWebAuthnEccSupported
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy164;
    /* 0x0000 */ const char ___dummy160;
    /* 0x0000 */ const char ___dummy161;
    /* 0x0000 */ const char ___dummy162;
    /* 0x0000 */ const char ___dummy163;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_NgcWebAuthnEccSupported, *P_WilFeatureTraits_Feature_NgcWebAuthnEccSupported; /* size: 0x0001 */

