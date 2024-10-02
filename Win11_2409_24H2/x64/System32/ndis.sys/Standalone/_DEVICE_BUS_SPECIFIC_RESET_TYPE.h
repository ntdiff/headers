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

