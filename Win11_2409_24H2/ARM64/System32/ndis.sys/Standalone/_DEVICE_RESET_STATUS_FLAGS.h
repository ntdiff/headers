typedef union _DEVICE_RESET_STATUS_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 KeepStackReset : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 RecoveringFromBusError : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 Reserved : 62; /* bit position: 2 */
      }; /* bitfield */
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 AsUlonglong;
  }; /* size: 0x0008 */
} DEVICE_RESET_STATUS_FLAGS, *PDEVICE_RESET_STATUS_FLAGS; /* size: 0x0008 */

