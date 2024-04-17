enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_TimelineCrossDevice
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy820;
    /* 0x0000 */ const char ___dummy814;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy815;
    /* 0x0000 */ const char ___dummy816;
    /* 0x0000 */ const char ___dummy817;
    /* 0x0000 */ const char ___dummy818;
    /* 0x0000 */ const char ___dummy819;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_TimelineCrossDevice, *P_WilFeatureTraits_Feature_TimelineCrossDevice; /* size: 0x0001 */

