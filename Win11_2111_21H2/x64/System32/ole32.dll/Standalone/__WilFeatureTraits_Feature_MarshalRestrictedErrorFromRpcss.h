enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_MarshalRestrictedErrorFromRpcss
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy54;
    /* 0x0000 */ const char ___dummy46;
    /* 0x0000 */ const char ___dummy47;
    /* 0x0000 */ const char ___dummy48;
    /* 0x0000 */ const char ___dummy49;
    /* 0x0000 */ const char ___dummy50;
    /* 0x0000 */ const char ___dummy51;
    /* 0x0000 */ const char ___dummy52;
    /* 0x0000 */ const char ___dummy53;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_MarshalRestrictedErrorFromRpcss, *P_WilFeatureTraits_Feature_MarshalRestrictedErrorFromRpcss; /* size: 0x0001 */

