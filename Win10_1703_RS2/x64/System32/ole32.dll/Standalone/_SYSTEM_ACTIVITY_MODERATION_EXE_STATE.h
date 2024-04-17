typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef enum _SYSTEM_ACTIVITY_MODERATION_STATE
{
  SystemActivityModerationStateSystemManaged = 0,
  SystemActivityModerationStateAlwaysThrottled = 1,
  SystemActivityModerationStateNeverThrottled = 2,
  MaxSystemActivityModerationState = 3,
} SYSTEM_ACTIVITY_MODERATION_STATE, *PSYSTEM_ACTIVITY_MODERATION_STATE;

typedef struct _SYSTEM_ACTIVITY_MODERATION_EXE_STATE
{
  /* 0x0000 */ struct _UNICODE_STRING ExePathNt;
  /* 0x0010 */ enum _SYSTEM_ACTIVITY_MODERATION_STATE ModerationState;
  /* 0x0014 */ long __PADDING__[1];
} SYSTEM_ACTIVITY_MODERATION_EXE_STATE, *PSYSTEM_ACTIVITY_MODERATION_EXE_STATE; /* size: 0x0018 */

