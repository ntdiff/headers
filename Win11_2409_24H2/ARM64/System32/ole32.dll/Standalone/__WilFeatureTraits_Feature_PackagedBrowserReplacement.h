enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_PackagedBrowserReplacement
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1263;
    /* 0x0000 */ const char ___dummy1259;
    /* 0x0000 */ const char ___dummy1260;
    /* 0x0000 */ const char ___dummy1261;
    /* 0x0000 */ const char ___dummy1262;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_PackagedBrowserReplacement, *P_WilFeatureTraits_Feature_PackagedBrowserReplacement; /* size: 0x0001 */

