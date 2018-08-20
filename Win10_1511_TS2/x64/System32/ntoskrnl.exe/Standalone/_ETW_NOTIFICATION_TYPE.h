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
  EtwNotificationTypeMax = 11,
} ETW_NOTIFICATION_TYPE, *PETW_NOTIFICATION_TYPE;

