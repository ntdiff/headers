typedef struct _MMVAD_FLAGS2
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int FileOffset : 24; /* bit position: 0 */
    /* 0x0000 */ unsigned int SecNoChange : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned int OneSecured : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned int MultipleSecured : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned int Spare : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned int LongVad : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned int ExtendableFile : 1; /* bit position: 29 */
    /* 0x0000 */ unsigned int Inherit : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned int CopyOnWrite : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS2, *PMMVAD_FLAGS2; /* size: 0x0004 */

