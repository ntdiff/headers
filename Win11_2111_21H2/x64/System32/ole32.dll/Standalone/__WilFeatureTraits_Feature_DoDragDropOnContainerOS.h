enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_DoDragDropOnContainerOS
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy184;
    /* 0x0000 */ const char ___dummy176;
    /* 0x0000 */ const char ___dummy177;
    /* 0x0000 */ const char ___dummy178;
    /* 0x0000 */ const char ___dummy179;
    /* 0x0000 */ const char ___dummy180;
    /* 0x0000 */ const char ___dummy181;
    /* 0x0000 */ const char ___dummy182;
    /* 0x0000 */ const char ___dummy183;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_DoDragDropOnContainerOS, *P_WilFeatureTraits_Feature_DoDragDropOnContainerOS; /* size: 0x0001 */

