typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _FIRMWARE_TYPE
{
  FirmwareTypeUnknown = 0,
  FirmwareTypeBios = 1,
  FirmwareTypeEfi = 2,
  FirmwareTypeMax = 3,
} FIRMWARE_TYPE, *PFIRMWARE_TYPE;

typedef struct _SYSTEM_BOOT_ENVIRONMENT_INFORMATION
{
  /* 0x0000 */ struct _GUID BootIdentifier;
  /* 0x0010 */ enum _FIRMWARE_TYPE FirmwareType;
} SYSTEM_BOOT_ENVIRONMENT_INFORMATION, *PSYSTEM_BOOT_ENVIRONMENT_INFORMATION; /* size: 0x0014 */

