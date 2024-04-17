typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef enum _SYSTEM_ACTIVITY_MODERATION_STATE
{
  SystemActivityModerationStateSystemManaged = 0,
  SystemActivityModerationStateUserManagedAllowThrottling = 1,
  SystemActivityModerationStateUserManagedDisableThrottling = 2,
  MaxSystemActivityModerationState = 3,
} SYSTEM_ACTIVITY_MODERATION_STATE, *PSYSTEM_ACTIVITY_MODERATION_STATE;

typedef enum _SYSTEM_ACTIVITY_MODERATION_APP_TYPE
{
  SystemActivityModerationAppTypeClassic = 0,
  SystemActivityModerationAppTypePackaged = 1,
  MaxSystemActivityModerationAppType = 2,
} SYSTEM_ACTIVITY_MODERATION_APP_TYPE, *PSYSTEM_ACTIVITY_MODERATION_APP_TYPE;

typedef struct _SYSTEM_ACTIVITY_MODERATION_INFO
{
  /* 0x0000 */ struct _UNICODE_STRING Identifier;
  /* 0x0010 */ enum _SYSTEM_ACTIVITY_MODERATION_STATE ModerationState;
  /* 0x0014 */ enum _SYSTEM_ACTIVITY_MODERATION_APP_TYPE AppType;
} SYSTEM_ACTIVITY_MODERATION_INFO, *PSYSTEM_ACTIVITY_MODERATION_INFO; /* size: 0x0018 */

