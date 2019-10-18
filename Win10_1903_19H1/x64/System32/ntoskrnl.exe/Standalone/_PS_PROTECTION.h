typedef struct _PS_PROTECTION
{
  union
  {
    /* 0x0000 */ unsigned char Level;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Type : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned char Audit : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char Signer : 4; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} PS_PROTECTION, *PPS_PROTECTION; /* size: 0x0001 */

