struct DDEDATA
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short unused : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned short fResponse : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned short fRelease : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned short reserved : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned short fAckReq : 1; /* bit position: 15 */
  }; /* bitfield */
  /* 0x0002 */ short cfFormat;
  /* 0x0004 */ unsigned char Value[1];
  /* 0x0005 */ char __PADDING__[1];
}; /* size: 0x0006 */

