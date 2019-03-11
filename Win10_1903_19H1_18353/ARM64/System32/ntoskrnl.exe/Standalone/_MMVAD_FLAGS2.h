typedef struct _MMVAD_FLAGS2
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long FileOffset : 24; /* bit position: 0 */
    /* 0x0000 */ unsigned long Large : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long TrimBehind : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long Inherit : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long NoValidationNeeded : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned long PrivateDemandZero : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned long Spare : 3; /* bit position: 29 */
  }; /* bitfield */
} MMVAD_FLAGS2, *PMMVAD_FLAGS2; /* size: 0x0004 */

