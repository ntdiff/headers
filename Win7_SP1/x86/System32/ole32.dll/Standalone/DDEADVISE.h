struct DDEADVISE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short reserved : 14; /* bit position: 0 */
    /* 0x0000 */ unsigned short fDeferUpd : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned short fAckReq : 1; /* bit position: 15 */
  }; /* bitfield */
  /* 0x0002 */ short cfFormat;
}; /* size: 0x0004 */

