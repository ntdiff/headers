enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ThemesInStore
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy696;
    /* 0x0000 */ const char ___dummy692;
    /* 0x0000 */ const char ___dummy693;
    /* 0x0000 */ const char ___dummy694;
    /* 0x0000 */ const char ___dummy695;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ThemesInStore, *P_WilFeatureTraits_Feature_ThemesInStore; /* size: 0x0001 */

