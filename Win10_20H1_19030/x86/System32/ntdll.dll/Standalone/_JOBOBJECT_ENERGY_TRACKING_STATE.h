typedef union _JOBOBJECT_ENERGY_TRACKING_STATE
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      /* 0x0000 */ unsigned long UpdateMask;
      /* 0x0004 */ unsigned long DesiredState;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} JOBOBJECT_ENERGY_TRACKING_STATE, *PJOBOBJECT_ENERGY_TRACKING_STATE; /* size: 0x0008 */

