typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _DEVICE_BUS_SPECIFIC_RESET_TYPE
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 FunctionLevelDeviceReset : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 PlatformLevelDeviceReset : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 SecondaryBusReset : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned __int64 PowerControllerReset : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned __int64 NoOpReset : 1; /* bit position: 4 */
        /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
      }; /* bitfield */
    } /* size: 0x0008 */ Pci;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 FunctionLevelDeviceReset : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 PlatformLevelDeviceReset : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 Reserved : 62; /* bit position: 2 */
      }; /* bitfield */
    } /* size: 0x0008 */ Acpi;
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} DEVICE_BUS_SPECIFIC_RESET_TYPE, *PDEVICE_BUS_SPECIFIC_RESET_TYPE; /* size: 0x0008 */

typedef struct _DEVICE_BUS_SPECIFIC_RESET_INFO
{
  /* 0x0000 */ struct _GUID BusTypeGuid;
  /* 0x0010 */ union _DEVICE_BUS_SPECIFIC_RESET_TYPE ResetTypeSupported;
} DEVICE_BUS_SPECIFIC_RESET_INFO, *PDEVICE_BUS_SPECIFIC_RESET_INFO; /* size: 0x0018 */

