enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_TimelineUpSell
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy813;
    /* 0x0000 */ const char ___dummy807;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy808;
    /* 0x0000 */ const char ___dummy809;
    /* 0x0000 */ const char ___dummy810;
    /* 0x0000 */ const char ___dummy811;
    /* 0x0000 */ const char ___dummy812;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_TimelineUpSell, *P_WilFeatureTraits_Feature_TimelineUpSell; /* size: 0x0001 */

