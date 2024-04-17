typedef enum _STORAGE_COMPONENT_HEALTH_STATUS
{
  HealthStatusUnknown = 0,
  HealthStatusNormal = 1,
  HealthStatusThrottled = 2,
  HealthStatusWarning = 3,
  HealthStatusDisabled = 4,
  HealthStatusFailed = 5,
} STORAGE_COMPONENT_HEALTH_STATUS, *PSTORAGE_COMPONENT_HEALTH_STATUS;

