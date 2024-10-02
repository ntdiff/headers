typedef enum _SYSTEM_ACTIVITY_MODERATION_STATE
{
  SystemActivityModerationStateSystemManaged = 0,
  SystemActivityModerationStateUserManagedAllowThrottling = 1,
  SystemActivityModerationStateUserManagedDisableThrottling = 2,
  MaxSystemActivityModerationState = 3,
} SYSTEM_ACTIVITY_MODERATION_STATE, *PSYSTEM_ACTIVITY_MODERATION_STATE;

