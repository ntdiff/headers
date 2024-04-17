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
  FirmwareTypeUefi = 2,
  FirmwareTypeMax = 3,
} FIRMWARE_TYPE, *PFIRMWARE_TYPE;

typedef struct _SYSTEM_BOOT_ENVIRONMENT_INFORMATION
{
  /* 0x0000 */ struct _GUID BootIdentifier;
  /* 0x0010 */ enum _FIRMWARE_TYPE FirmwareType;
  union
  {
    /* 0x0018 */ unsigned __int64 BootFlags;
    struct /* bitfield */
    {
      /* 0x0018 */ unsigned __int64 DbgMenuOsSelection : 1; /* bit position: 0 */
      /* 0x0018 */ unsigned __int64 DbgHiberBoot : 1; /* bit position: 1 */
      /* 0x0018 */ unsigned __int64 DbgSoftBoot : 1; /* bit position: 2 */
      /* 0x0018 */ unsigned __int64 DbgMeasuredLaunch : 1; /* bit position: 3 */
      /* 0x0018 */ unsigned __int64 DbgMeasuredLaunchCapable : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} SYSTEM_BOOT_ENVIRONMENT_INFORMATION, *PSYSTEM_BOOT_ENVIRONMENT_INFORMATION; /* size: 0x0020 */

