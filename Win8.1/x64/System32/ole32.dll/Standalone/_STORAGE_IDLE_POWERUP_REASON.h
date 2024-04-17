typedef enum _STORAGE_POWERUP_REASON_TYPE
{
  StoragePowerupUnknown = 0,
  StoragePowerupIO = 1,
  StoragePowerupDeviceAttention = 2,
} STORAGE_POWERUP_REASON_TYPE, *PSTORAGE_POWERUP_REASON_TYPE;

typedef struct _STORAGE_IDLE_POWERUP_REASON
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _STORAGE_POWERUP_REASON_TYPE PowerupReason;
} STORAGE_IDLE_POWERUP_REASON, *PSTORAGE_IDLE_POWERUP_REASON; /* size: 0x000c */

