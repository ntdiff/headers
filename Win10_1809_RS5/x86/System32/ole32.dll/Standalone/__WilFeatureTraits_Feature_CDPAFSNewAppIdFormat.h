enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPAFSNewAppIdFormat
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy71;
    /* 0x0000 */ const char ___dummy67;
    /* 0x0000 */ const char ___dummy68;
    /* 0x0000 */ const char ___dummy69;
    /* 0x0000 */ const char ___dummy70;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPAFSNewAppIdFormat, *P_WilFeatureTraits_Feature_CDPAFSNewAppIdFormat; /* size: 0x0001 */

