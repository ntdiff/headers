enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_AppDefaultsRecommendNewEdge
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1258;
    /* 0x0000 */ const char ___dummy1254;
    /* 0x0000 */ const char ___dummy1255;
    /* 0x0000 */ const char ___dummy1256;
    /* 0x0000 */ const char ___dummy1257;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_AppDefaultsRecommendNewEdge, *P_WilFeatureTraits_Feature_AppDefaultsRecommendNewEdge; /* size: 0x0001 */

