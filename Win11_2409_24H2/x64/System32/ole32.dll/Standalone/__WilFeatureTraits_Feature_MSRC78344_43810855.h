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

typedef struct __WilFeatureTraits_Feature_MSRC78344_43810855
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy919;
    /* 0x0000 */ const char ___dummy915;
    /* 0x0000 */ enum wil::UsageReportingMode usageReportingMode;
    /* 0x0000 */ const char ___dummy916;
    /* 0x0000 */ const char ___dummy917;
    /* 0x0000 */ const char ___dummy918;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_MSRC78344_43810855, *P_WilFeatureTraits_Feature_MSRC78344_43810855; /* size: 0x0001 */

