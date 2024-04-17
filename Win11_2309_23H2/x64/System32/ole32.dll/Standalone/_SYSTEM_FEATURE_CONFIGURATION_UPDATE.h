typedef enum _SYSTEM_FEATURE_CONFIGURATION_UPDATE_TYPE
{
  SystemFeatureConfigurationUpdateTypeUpdate = 0,
  SystemFeatureConfigurationUpdateTypeOverwrite = 1,
  SystemFeatureConfigurationUpdateTypeCount = 2,
} SYSTEM_FEATURE_CONFIGURATION_UPDATE_TYPE, *PSYSTEM_FEATURE_CONFIGURATION_UPDATE_TYPE;

typedef enum _RTL_FEATURE_CONFIGURATION_TYPE
{
  RtlFeatureConfigurationBoot = 0,
  RtlFeatureConfigurationRuntime = 1,
  RtlFeatureConfigurationCount = 2,
} RTL_FEATURE_CONFIGURATION_TYPE, *PRTL_FEATURE_CONFIGURATION_TYPE;

typedef enum _RTL_FEATURE_CONFIGURATION_PRIORITY
{
  FeatureConfigurationPriorityImageDefault = 0,
  FeatureConfigurationPriorityEKB = 1,
  FeatureConfigurationPrioritySafeguard = 2,
  FeatureConfigurationPriorityPersistent = 2,
  FeatureConfigurationPriorityReserved3 = 3,
  FeatureConfigurationPriorityService = 4,
  FeatureConfigurationPriorityReserved5 = 5,
  FeatureConfigurationPriorityDynamic = 6,
  FeatureConfigurationPriorityReserved7 = 7,
  FeatureConfigurationPriorityUser = 8,
  FeatureConfigurationPrioritySecurity = 9,
  FeatureConfigurationPriorityUserPolicy = 10,
  FeatureConfigurationPriorityReserved11 = 11,
  FeatureConfigurationPriorityTest = 12,
  FeatureConfigurationPriorityReserved13 = 13,
  FeatureConfigurationPriorityReserved14 = 14,
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

typedef struct _SYSTEM_FEATURE_CONFIGURATION_UPDATE
{
  /* 0x0000 */ enum _SYSTEM_FEATURE_CONFIGURATION_UPDATE_TYPE UpdateType;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 PreviousChangeStamp;
      /* 0x0010 */ enum _RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType;
      /* 0x0014 */ unsigned long UpdateCount;
      /* 0x0018 */ struct _RTL_FEATURE_CONFIGURATION_UPDATE Updates[1];
    } /* size: 0x0030 */ Update;
    struct
    {
      struct
      {
        /* 0x0008 */ unsigned __int64 PreviousChangeStamp;
        /* 0x0010 */ enum _RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType;
        /* 0x0018 */ unsigned __int64 BufferSize;
        /* 0x0020 */ void* Buffer;
      } /* size: 0x0020 */ Overwrite;
      /* 0x0028 */ long __PADDING__[4];
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
} SYSTEM_FEATURE_CONFIGURATION_UPDATE, *PSYSTEM_FEATURE_CONFIGURATION_UPDATE; /* size: 0x0038 */

