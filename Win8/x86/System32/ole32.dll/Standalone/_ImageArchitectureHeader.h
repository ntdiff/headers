typedef struct _ImageArchitectureHeader
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int AmaskValue : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int : 7; /* bit position: 1 */
    /* 0x0000 */ unsigned int AmaskShift : 8; /* bit position: 8 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long FirstEntryRVA;
} ImageArchitectureHeader, *PImageArchitectureHeader; /* size: 0x0008 */

