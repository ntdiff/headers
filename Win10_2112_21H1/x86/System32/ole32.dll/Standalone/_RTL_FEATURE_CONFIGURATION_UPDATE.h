typedef enum _RTL_FEATURE_CONFIGURATION_PRIORITY
{
  FeatureConfigurationPriorityImageDefault = 0,
  FeatureConfigurationPriorityService = 4,
  FeatureConfigurationPriorityUser = 8,
  FeatureConfigurationPriorityUserPolicy = 10,
  FeatureConfigurationPriorityTest = 12,
  FeatureConfigurationPriorityImageOverride = 15,
  FeatureConfigurationPriorityMax = 15,
} RTL_FEATURE_CONFIGURATION_PRIORITY, *PRTL_FEATURE_CONFIGURATION_PRIORITY;

typedef enum _RTL_FEATURE_ENABLED_STATE
{
  FeatureEnabledStateDefault = 0,
  FeatureEnabledStateDisabled = 1,
  FeatureEnabledStateEnabled = 2,
} RTL_FEATURE_ENABLED_STATE, *PRTL_FEATURE_ENABLED_STATE;

typedef enum _RTL_FEATURE_ENABLED_STATE_OPTIONS
{
  FeatureEnabledStateOptionsNone = 0,
  FeatureEnabledStateOptionsWexpConfig = 1,
} RTL_FEATURE_ENABLED_STATE_OPTIONS, *PRTL_FEATURE_ENABLED_STATE_OPTIONS;

typedef enum _RTL_FEATURE_VARIANT_PAYLOAD_KIND
{
  FeatureVariantPayloadKindNone = 0,
  FeatureVariantPayloadKindResident = 1,
  FeatureVariantPayloadKindExternal = 2,
} RTL_FEATURE_VARIANT_PAYLOAD_KIND, *PRTL_FEATURE_VARIANT_PAYLOAD_KIND;

typedef enum _RTL_FEATURE_CONFIGURATION_OPERATION
{
  FeatureConfigurationOperationNone = 0,
  FeatureConfigurationOperationFeatureState = 1,
  FeatureConfigurationOperationVariantState = 2,
  FeatureConfigurationOperationResetState = 4,
} RTL_FEATURE_CONFIGURATION_OPERATION, *PRTL_FEATURE_CONFIGURATION_OPERATION;

typedef struct _RTL_FEATURE_CONFIGURATION_UPDATE
{
  /* 0x0000 */ unsigned int FeatureId;
  /* 0x0004 */ enum _RTL_FEATURE_CONFIGURATION_PRIORITY Priority;
  /* 0x0008 */ enum _RTL_FEATURE_ENABLED_STATE EnabledState;
  /* 0x000c */ enum _RTL_FEATURE_ENABLED_STATE_OPTIONS EnabledStateOptions;
  /* 0x0010 */ unsigned char Variant;
  /* 0x0011 */ unsigned char Reserved[3];
  /* 0x0014 */ enum _RTL_FEATURE_VARIANT_PAYLOAD_KIND VariantPayloadKind;
  /* 0x0018 */ unsigned int VariantPayload;
  /* 0x001c */ enum _RTL_FEATURE_CONFIGURATION_OPERATION Operation;
} RTL_FEATURE_CONFIGURATION_UPDATE, *PRTL_FEATURE_CONFIGURATION_UPDATE; /* size: 0x0020 */

