typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CMSI_RW_LOCK
{
  /* 0x0000 */ void* Reserved;
} CMSI_RW_LOCK, *PCMSI_RW_LOCK; /* size: 0x0008 */

typedef enum _CMP_DEVICE_NOTIFICATION_STATE
{
  CmpDeviceUsageNotificationsNotSent = 0,
  CmpDeviceUsageNotificationsSent = 1,
  CmpDeviceUsageNotificationsPending = 2,
} CMP_DEVICE_NOTIFICATION_STATE, *PCMP_DEVICE_NOTIFICATION_STATE;

typedef struct _CMP_VOLUME_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY VolumeContextListEntry;
  /* 0x0010 */ struct _CMP_VOLUME_MANAGER* VolumeManager;
  /* 0x0018 */ __int64 RefCount;
  /* 0x0020 */ struct _GUID VolumeGuid;
  /* 0x0030 */ void* VolumeFileObject;
  /* 0x0038 */ struct _CMSI_RW_LOCK VolumeContextLock;
  /* 0x0040 */ enum _CMP_DEVICE_NOTIFICATION_STATE DeviceUsageNotificationState;
  /* 0x0044 */ long __PADDING__[1];
} CMP_VOLUME_CONTEXT, *PCMP_VOLUME_CONTEXT; /* size: 0x0048 */

