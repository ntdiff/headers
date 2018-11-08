typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
} CMSI_RW_LOCK, *PCMSI_RW_LOCK; /* size: 0x0004 */

typedef struct _CMP_VOLUME_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY VolumeContextListEntry;
  /* 0x0008 */ struct _CMP_VOLUME_MANAGER* VolumeManager;
  /* 0x000c */ long RefCount;
  /* 0x0010 */ struct _GUID VolumeGuid;
  /* 0x0020 */ void* VolumeFileObject;
  /* 0x0024 */ struct _CMSI_RW_LOCK VolumeContextLock;
  /* 0x0028 */ unsigned char DeviceUsageNotificationSent;
  /* 0x0029 */ char __PADDING__[3];
} CMP_VOLUME_CONTEXT, *PCMP_VOLUME_CONTEXT; /* size: 0x002c */

