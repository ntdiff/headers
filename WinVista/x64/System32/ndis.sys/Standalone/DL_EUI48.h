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

typedef union _DL_EI48
{
  /* 0x0000 */ unsigned char Byte[3];
} DL_EI48, *PDL_EI48; /* size: 0x0003 */

union DL_EUI48
{
  union
  {
    /* 0x0000 */ unsigned char Byte[6];
    struct
    {
      /* 0x0000 */ union _DL_OUI Oui;
      /* 0x0003 */ union _DL_EI48 Ei48;
    }; /* size: 0x0006 */
  }; /* size: 0x0006 */
}; /* size: 0x0006 */

