typedef enum _SYSTEM_ACTIVITY_MODERATION_STATE
{
  SystemActivityModerationStateSystemManaged = 0,
  SystemActivityModerationStateAlwaysThrottled = 1,
  SystemActivityModerationStateNeverThrottled = 2,
  MaxSystemActivityModerationState = 3,
} SYSTEM_ACTIVITY_MODERATION_STATE, *PSYSTEM_ACTIVITY_MODERATION_STATE;

