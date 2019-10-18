typedef enum _ETW_NOTIFICATION_TYPE
{
  EtwNotificationTypeNoReply = 1,
  EtwNotificationTypeLegacyEnable = 2,
  EtwNotificationTypeEnable = 3,
  EtwNotificationTypePrivateLogger = 4,
  EtwNotificationTypePerflib = 5,
  EtwNotificationTypeAudio = 6,
  EtwNotificationTypeSession = 7,
  EtwNotificationTypeReserved = 8,
  EtwNotificationTypeCredentialUI = 9,
  EtwNotificationTypeInProcSession = 10,
  EtwNotificationTypeFilteredPrivateLogger = 11,
  EtwNotificationTypeMax = 12,
} ETW_NOTIFICATION_TYPE, *PETW_NOTIFICATION_TYPE;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _ETWP_NOTIFICATION_HEADER
{
  /* 0x0000 */ enum _ETW_NOTIFICATION_TYPE NotificationType;
  /* 0x0004 */ unsigned long NotificationSize;
  /* 0x0008 */ long RefCount;
  /* 0x000c */ unsigned char ReplyRequested;
  union
  {
    /* 0x0010 */ unsigned long ReplyIndex;
    /* 0x0010 */ unsigned long Timeout;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0014 */ unsigned long ReplyCount;
    /* 0x0014 */ unsigned long NotifyeeCount;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0018 */ unsigned __int64 ReplyHandle;
    /* 0x0018 */ void* ReplyObject;
    /* 0x0018 */ unsigned long RegIndex;
  }; /* size: 0x0008 */
  /* 0x0020 */ unsigned long TargetPID;
  /* 0x0024 */ unsigned long SourcePID;
  /* 0x0028 */ struct _GUID DestinationGuid;
  /* 0x0038 */ struct _GUID SourceGuid;
} ETWP_NOTIFICATION_HEADER, *PETWP_NOTIFICATION_HEADER; /* size: 0x0048 */

