typedef union _BUS_SPECIFIC_RESET_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 KeepStackReset : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Reserved : 63; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 AsUlonglong;
  }; /* size: 0x0008 */
} BUS_SPECIFIC_RESET_FLAGS, *PBUS_SPECIFIC_RESET_FLAGS; /* size: 0x0008 */

