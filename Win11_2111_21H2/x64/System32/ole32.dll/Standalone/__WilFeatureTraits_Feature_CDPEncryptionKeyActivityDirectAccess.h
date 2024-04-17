enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPEncryptionKeyActivityDirectAccess
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy72;
    /* 0x0000 */ const char ___dummy60;
    /* 0x0000 */ const char ___dummy61;
    /* 0x0000 */ const char ___dummy62;
    /* 0x0000 */ const char ___dummy63;
    /* 0x0000 */ const char ___dummy64;
    /* 0x0000 */ const char ___dummy65;
    /* 0x0000 */ const char ___dummy66;
    /* 0x0000 */ enum wil::FeatureStage stageOverride;
    /* 0x0000 */ const char ___dummy67;
    /* 0x0000 */ const char ___dummy68;
    /* 0x0000 */ enum wil::FeatureStage stageChkOverride;
    /* 0x0000 */ const char ___dummy69;
    /* 0x0000 */ const char ___dummy70;
    /* 0x0000 */ const char ___dummy71;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPEncryptionKeyActivityDirectAccess, *P_WilFeatureTraits_Feature_CDPEncryptionKeyActivityDirectAccess; /* size: 0x0001 */

