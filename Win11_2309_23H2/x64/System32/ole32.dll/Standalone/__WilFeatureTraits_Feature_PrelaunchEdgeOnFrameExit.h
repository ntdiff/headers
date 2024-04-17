enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum Variant_PrelaunchEdgeOnFrameExit
{
  None = 0,
  Disable_PrelaunchEdgeOnFrameExit = 1,
  Enable_PrelaunchEdgeOnFrameExit = 2,
};

enum wil_VariantPayloadType
{
  wil_VariantPayloadType_None = 0,
  wil_VariantPayloadType_Fixed = 1,
};

typedef struct __WilFeatureTraits_Feature_PrelaunchEdgeOnFrameExit
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy855;
    /* 0x0000 */ const char ___dummy851;
    /* 0x0000 */ enum Variant_PrelaunchEdgeOnFrameExit defaultVariant;
    /* 0x0000 */ enum wil_VariantPayloadType payloadType;
    /* 0x0000 */ const unsigned int defaultPayloadValue;
    /* 0x0000 */ const char ___dummy852;
    /* 0x0000 */ const char ___dummy853;
    /* 0x0000 */ const char ___dummy854;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_PrelaunchEdgeOnFrameExit, *P_WilFeatureTraits_Feature_PrelaunchEdgeOnFrameExit; /* size: 0x0001 */

