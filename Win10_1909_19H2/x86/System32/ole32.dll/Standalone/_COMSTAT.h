typedef struct _COMSTAT
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long fCtsHold : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long fDsrHold : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long fRlsdHold : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long fXoffHold : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long fXoffSent : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long fEof : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long fTxim : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long fReserved : 25; /* bit position: 7 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long cbInQue;
  /* 0x0008 */ unsigned long cbOutQue;
} COMSTAT, *PCOMSTAT; /* size: 0x000c */

