typedef union _RTL_ELEVATION_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ElevationEnabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long VirtualizationEnabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long InstallerDetectEnabled : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ReservedBits : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} RTL_ELEVATION_FLAGS, *PRTL_ELEVATION_FLAGS; /* size: 0x0004 */

