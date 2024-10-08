enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_SkipSpartanInAssociationEnumeration
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1268;
    /* 0x0000 */ const char ___dummy1264;
    /* 0x0000 */ const char ___dummy1265;
    /* 0x0000 */ const char ___dummy1266;
    /* 0x0000 */ const char ___dummy1267;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_SkipSpartanInAssociationEnumeration, *P_WilFeatureTraits_Feature_SkipSpartanInAssociationEnumeration; /* size: 0x0001 */

