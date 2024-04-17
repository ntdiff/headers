enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_TimelineDeleteByGroup
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy832;
    /* 0x0000 */ const char ___dummy826;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy827;
    /* 0x0000 */ const char ___dummy828;
    /* 0x0000 */ const char ___dummy829;
    /* 0x0000 */ const char ___dummy830;
    /* 0x0000 */ const char ___dummy831;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_TimelineDeleteByGroup, *P_WilFeatureTraits_Feature_TimelineDeleteByGroup; /* size: 0x0001 */

