enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ActivitiesInTaskView
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy799;
    /* 0x0000 */ const char ___dummy793;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy794;
    /* 0x0000 */ const char ___dummy795;
    /* 0x0000 */ const char ___dummy796;
    /* 0x0000 */ const char ___dummy797;
    /* 0x0000 */ const char ___dummy798;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ActivitiesInTaskView, *P_WilFeatureTraits_Feature_ActivitiesInTaskView; /* size: 0x0001 */

