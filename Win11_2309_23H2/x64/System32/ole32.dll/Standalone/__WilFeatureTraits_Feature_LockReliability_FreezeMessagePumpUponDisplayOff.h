enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_LockReliability_FreezeMessagePumpUponDisplayOff
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy407;
    /* 0x0000 */ const char ___dummy403;
    /* 0x0000 */ const char ___dummy404;
    /* 0x0000 */ const char ___dummy405;
    /* 0x0000 */ const char ___dummy406;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockReliability_FreezeMessagePumpUponDisplayOff, *P_WilFeatureTraits_Feature_LockReliability_FreezeMessagePumpUponDisplayOff; /* size: 0x0001 */

