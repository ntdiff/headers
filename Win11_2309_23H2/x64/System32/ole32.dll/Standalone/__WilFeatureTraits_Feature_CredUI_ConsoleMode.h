enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CredUI_ConsoleMode
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy373;
    /* 0x0000 */ const char ___dummy369;
    /* 0x0000 */ const char ___dummy370;
    /* 0x0000 */ const char ___dummy371;
    /* 0x0000 */ const char ___dummy372;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CredUI_ConsoleMode, *P_WilFeatureTraits_Feature_CredUI_ConsoleMode; /* size: 0x0001 */

