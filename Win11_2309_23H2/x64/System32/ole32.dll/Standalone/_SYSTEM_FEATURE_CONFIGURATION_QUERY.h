typedef enum _RTL_FEATURE_CONFIGURATION_TYPE
{
  RtlFeatureConfigurationBoot = 0,
  RtlFeatureConfigurationRuntime = 1,
  RtlFeatureConfigurationCount = 2,
} RTL_FEATURE_CONFIGURATION_TYPE, *PRTL_FEATURE_CONFIGURATION_TYPE;

typedef struct _SYSTEM_FEATURE_CONFIGURATION_QUERY
{
  /* 0x0000 */ enum _RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType;
  /* 0x0004 */ unsigned int FeatureId;
} SYSTEM_FEATURE_CONFIGURATION_QUERY, *PSYSTEM_FEATURE_CONFIGURATION_QUERY; /* size: 0x0008 */

