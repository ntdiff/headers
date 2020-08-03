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

