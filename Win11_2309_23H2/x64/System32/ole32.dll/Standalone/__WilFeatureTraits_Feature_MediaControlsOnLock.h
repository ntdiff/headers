enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_MediaControlsOnLock
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy355;
    /* 0x0000 */ const char ___dummy351;
    /* 0x0000 */ const char ___dummy352;
    /* 0x0000 */ const char ___dummy353;
    /* 0x0000 */ const char ___dummy354;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_MediaControlsOnLock, *P_WilFeatureTraits_Feature_MediaControlsOnLock; /* size: 0x0001 */

