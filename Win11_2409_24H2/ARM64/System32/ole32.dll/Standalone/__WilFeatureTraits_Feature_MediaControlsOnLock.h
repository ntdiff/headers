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
    /* 0x0000 */ const char ___dummy1155;
    /* 0x0000 */ const char ___dummy1151;
    /* 0x0000 */ const char ___dummy1152;
    /* 0x0000 */ const char ___dummy1153;
    /* 0x0000 */ const char ___dummy1154;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_MediaControlsOnLock, *P_WilFeatureTraits_Feature_MediaControlsOnLock; /* size: 0x0001 */

