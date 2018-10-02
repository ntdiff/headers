typedef union _MCI_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short McaErrorCode;
      /* 0x0002 */ unsigned short ModelErrorCode;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long OtherInformation : 23; /* bit position: 0 */
        /* 0x0004 */ unsigned long ActionRequired : 1; /* bit position: 23 */
        /* 0x0004 */ unsigned long Signalling : 1; /* bit position: 24 */
        /* 0x0004 */ unsigned long ContextCorrupt : 1; /* bit position: 25 */
        /* 0x0004 */ unsigned long AddressValid : 1; /* bit position: 26 */
        /* 0x0004 */ unsigned long MiscValid : 1; /* bit position: 27 */
        /* 0x0004 */ unsigned long ErrorEnabled : 1; /* bit position: 28 */
        /* 0x0004 */ unsigned long UncorrectedError : 1; /* bit position: 29 */
        /* 0x0004 */ unsigned long StatusOverFlow : 1; /* bit position: 30 */
        /* 0x0004 */ unsigned long Valid : 1; /* bit position: 31 */
      }; /* bitfield */
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_STATUS, *PMCI_STATUS; /* size: 0x0008 */

