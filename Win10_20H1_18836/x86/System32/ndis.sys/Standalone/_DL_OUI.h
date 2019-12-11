typedef union _DL_OUI
{
  union
  {
    /* 0x0000 */ unsigned char Byte[3];
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Group : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Local : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0003 */
} DL_OUI, *PDL_OUI; /* size: 0x0003 */

