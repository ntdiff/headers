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

typedef struct __WilFeatureTraits_Feature_DragDropWithComponentUI
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy609;
    /* 0x0000 */ const char ___dummy603;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy604;
    /* 0x0000 */ const char ___dummy605;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy606;
    /* 0x0000 */ const char ___dummy607;
    /* 0x0000 */ const char ___dummy608;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_DragDropWithComponentUI, *P_WilFeatureTraits_Feature_DragDropWithComponentUI; /* size: 0x0001 */

