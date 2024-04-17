typedef enum _STORAGE_DEVICE_POWER_CAP_UNITS
{
  StorageDevicePowerCapUnitsPercent = 0,
  StorageDevicePowerCapUnitsMilliwatts = 1,
} STORAGE_DEVICE_POWER_CAP_UNITS, *PSTORAGE_DEVICE_POWER_CAP_UNITS;

typedef struct _STORAGE_DEVICE_POWER_CAP
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _STORAGE_DEVICE_POWER_CAP_UNITS Units;
  /* 0x0010 */ unsigned __int64 MaxPower;
} STORAGE_DEVICE_POWER_CAP, *PSTORAGE_DEVICE_POWER_CAP; /* size: 0x0018 */

