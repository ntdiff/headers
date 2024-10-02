typedef struct _MMVAD_FLAGS2
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Large : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long TrimBehind : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Inherit : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long NoValidationNeeded : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long PrivateDemandZero : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ImageMappingExtended : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Spare : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long LongFlags;
  }; /* size: 0x0004 */
} MMVAD_FLAGS2, *PMMVAD_FLAGS2; /* size: 0x0004 */

