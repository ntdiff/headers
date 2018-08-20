typedef struct _MMVAD_FLAGS3
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long PreferredNode : 6; /* bit position: 0 */
    /* 0x0000 */ unsigned long Teb : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long Spare : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long SequentialAccess : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long LastSequentialTrim : 15; /* bit position: 9 */
    /* 0x0000 */ unsigned long Spare2 : 8; /* bit position: 24 */
  }; /* bitfield */
} MMVAD_FLAGS3, *PMMVAD_FLAGS3; /* size: 0x0004 */

