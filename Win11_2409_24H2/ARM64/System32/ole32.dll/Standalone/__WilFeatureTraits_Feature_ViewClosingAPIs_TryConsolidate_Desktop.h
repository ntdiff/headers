enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1613;
    /* 0x0000 */ const char ___dummy1611;
    /* 0x0000 */ const char ___dummy1612;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop, *P_WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop; /* size: 0x0001 */

