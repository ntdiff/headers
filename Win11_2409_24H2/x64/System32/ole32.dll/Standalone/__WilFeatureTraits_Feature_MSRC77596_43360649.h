enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum wil::UsageReportingMode
{
  Default = 0,
  SuppressPotential = 1,
  SuppressImplicit = 2,
};

typedef struct __WilFeatureTraits_Feature_MSRC77596_43360649
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy849;
    /* 0x0000 */ const char ___dummy845;
    /* 0x0000 */ enum wil::UsageReportingMode usageReportingMode;
    /* 0x0000 */ const char ___dummy846;
    /* 0x0000 */ const char ___dummy847;
    /* 0x0000 */ const char ___dummy848;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_MSRC77596_43360649, *P_WilFeatureTraits_Feature_MSRC77596_43360649; /* size: 0x0001 */

