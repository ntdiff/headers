enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_DesktopSwitcherDataModel
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy661;
    /* 0x0000 */ const char ___dummy657;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy658;
    /* 0x0000 */ const char ___dummy659;
    /* 0x0000 */ const char ___dummy660;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_DesktopSwitcherDataModel, *P_WilFeatureTraits_Feature_DesktopSwitcherDataModel; /* size: 0x0001 */

