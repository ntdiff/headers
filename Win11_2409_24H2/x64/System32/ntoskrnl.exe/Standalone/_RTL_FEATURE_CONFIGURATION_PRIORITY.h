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

