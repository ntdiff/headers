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

typedef struct __WilFeatureTraits_Feature_ShutdownDialogFocusFix
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy2126;
    /* 0x0000 */ const char ___dummy2120;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy2121;
    /* 0x0000 */ const char ___dummy2122;
    /* 0x0000 */ const char ___dummy2123;
    /* 0x0000 */ const char ___dummy2124;
    /* 0x0000 */ const char ___dummy2125;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ShutdownDialogFocusFix, *P_WilFeatureTraits_Feature_ShutdownDialogFocusFix; /* size: 0x0001 */

