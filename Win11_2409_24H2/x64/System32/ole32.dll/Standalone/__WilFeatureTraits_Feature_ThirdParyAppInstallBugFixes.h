enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum wil::FeatureChangeTime
{
  OnRead = 0,
  OnReload = 1,
  OnReboot = 3,
};

typedef struct __WilFeatureTraits_Feature_ThirdParyAppInstallBugFixes
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy701;
    /* 0x0000 */ const char ___dummy695;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy696;
    /* 0x0000 */ const char ___dummy697;
    /* 0x0000 */ const char ___dummy698;
    /* 0x0000 */ const char ___dummy699;
    /* 0x0000 */ const char ___dummy700;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ThirdParyAppInstallBugFixes, *P_WilFeatureTraits_Feature_ThirdParyAppInstallBugFixes; /* size: 0x0001 */

