typedef union _MCI_STATS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short McaCod;
      /* 0x0002 */ unsigned short MsCod;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long OtherInfo : 25; /* bit position: 0 */
        /* 0x0004 */ unsigned long Damage : 1; /* bit position: 25 */
        /* 0x0004 */ unsigned long AddressValid : 1; /* bit position: 26 */
        /* 0x0004 */ unsigned long MiscValid : 1; /* bit position: 27 */
        /* 0x0004 */ unsigned long Enabled : 1; /* bit position: 28 */
        /* 0x0004 */ unsigned long UnCorrected : 1; /* bit position: 29 */
        /* 0x0004 */ unsigned long OverFlow : 1; /* bit position: 30 */
        /* 0x0004 */ unsigned long Valid : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0008 */ MciStats;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_STATS, *PMCI_STATS; /* size: 0x0008 */

